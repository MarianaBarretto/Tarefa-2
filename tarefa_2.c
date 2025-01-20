#include <stdio.h>
#include <string.h>
#include "pico/stdlib.h"

#define GPIO_VERDE 11
#define GPIO_AZUL 12
#define GPIO_VERMELHO 13
#define GPIO_BUZZER 21

// Função para configurar os GPIOs
void setup() {
    stdio_init_all(); // Inicializa o USB 
    sleep_ms(2000); // Aguarda 2 segundos para estabilizar a conexão USB
    
    gpio_init(GPIO_VERDE);
    gpio_init(GPIO_AZUL);
    gpio_init(GPIO_VERMELHO);
    gpio_init(GPIO_BUZZER);
    
    gpio_set_dir(GPIO_VERDE, GPIO_OUT);
    gpio_set_dir(GPIO_AZUL, GPIO_OUT);
    gpio_set_dir(GPIO_VERMELHO, GPIO_OUT);
    gpio_set_dir(GPIO_BUZZER, GPIO_OUT);
}

// Função para gerar pulsos no buzzer e produzir um som alto
void play_buzzer(int duration_ms) {
    int tempo = duration_ms;
    while (tempo > 0) {
        gpio_put(GPIO_BUZZER, 1);  // Liga o buzzer
        sleep_ms(1);              // Mantém ligado por 1ms
        gpio_put(GPIO_BUZZER, 0);  // Desliga o buzzer
        sleep_ms(1);              // Aguarda 1ms antes de repetir
        tempo -= 2;               // Total de 2ms por ciclo
    }
}

// Função para controlar LEDs e o buzzer baseado nos comandos
void control_leds(const char *command) {
    if (strcmp(command, "VERDE") == 0) {
        gpio_put(GPIO_VERDE, 1);
        gpio_put(GPIO_AZUL, 0);
        gpio_put(GPIO_VERMELHO, 0);
        printf("LED VERDE ligado.\n");
    } else if (strcmp(command, "AZUL") == 0) {
        gpio_put(GPIO_VERDE, 0);
        gpio_put(GPIO_AZUL, 1);
        gpio_put(GPIO_VERMELHO, 0);
        printf("LED AZUL ligado.\n");
    } else if (strcmp(command, "VERMELHO") == 0) {
        gpio_put(GPIO_VERDE, 0);
        gpio_put(GPIO_AZUL, 0);
        gpio_put(GPIO_VERMELHO, 1);
        printf("LED VERMELHO ligado.\n");
    } else if (strcmp(command, "BRANCO") == 0) {
        gpio_put(GPIO_VERDE, 1);
        gpio_put(GPIO_AZUL, 1);
        gpio_put(GPIO_VERMELHO, 1);
        printf("Todos os LEDs ligados (BRANCO).\n");
    } else if (strcmp(command, "DESLIGAR") == 0) {
        gpio_put(GPIO_VERDE, 0);
        gpio_put(GPIO_AZUL, 0);
        gpio_put(GPIO_VERMELHO, 0);
        printf("Todos os LEDs desligados.\n");
    } else if (strcmp(command, "BUZZER") == 0) {
        printf("Buzzer ativado por 2 segundos.\n");
        play_buzzer(2000);  // Toca o buzzer por 2000ms
    } else {
        printf("Comando desconhecido: %s\n", command);
        printf("Comandos disponíveis: VERDE, AZUL, VERMELHO, BRANCO, DESLIGAR, BUZZER.\n");
    }
}

int main() {
    setup();

    char command[20] = "";
    int index = 0;
    bool usb_message_shown = false;

    while (true) {
        if (stdio_usb_connected()) {
            if (!usb_message_shown) {
                printf("Dispositivo inicializado.\n");
                printf("Comandos disponíveis: VERDE, AZUL, VERMELHO, BRANCO, DESLIGAR, BUZZER.\n");
                printf("Digite um comando:\n");
                usb_message_shown = true;
            }

            int c = getchar_timeout_us(10000);
            if (c != PICO_ERROR_TIMEOUT) {
                putchar(c); // Mostra o caractere no terminal
                if (c == '\r' || c == '\n') { // Verifica Enter
                    if (index > 0) {
                        command[index] = '\0';
                        printf("\nComando recebido: %s\n", command);
                        control_leds(command);
                        index = 0;
                        memset(command, 0, sizeof(command));
                    }
                } else if (index < sizeof(command) - 1) {
                    command[index++] = (char)c;
                }
            }
        } else {
            usb_message_shown = false;
            sleep_ms(1000);
        }
    }

    return 0;
}