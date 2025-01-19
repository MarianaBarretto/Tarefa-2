git init#include <stdio.h>
#include "pico/stdlib.h"

// Declaração de pinos de saídas dos LEDs
#define pin_g 11 // LED verde
#define pin_b 12 // LED azul
#define pin_r 13 // LED vermelho

// Definição do pino do buzzer
#define BUZZER_GPIO 21


// Função para inicializar o GPIO
void setup_gpio() {
    gpio_init(BUZZER_GPIO);          // Inicializa o GPIO do buzzer
    gpio_set_dir(BUZZER_GPIO, GPIO_OUT); // Configura o pino como saída
}


// Função para acionar o buzzer por 2 segundos
void activate_buzzer() {
    gpio_put(BUZZER_GPIO, 1); // Liga o buzzer
    sleep_ms(2000);           // Espera por 2 segundos
    gpio_put(BUZZER_GPIO, 0); // Desliga o buzzer
}


// Função para ligar todos os LEDs
void ligar_leds () {
    gpio_put(pin_g, true);
    gpio_put(pin_b, true);
    gpio_put(pin_r, true);
}

// Função para desligar todos os LEDs
void desligar_leds () {
    gpio_put(pin_g, false);
    gpio_put(pin_b, false);
    gpio_put(pin_r, false);
}

// Função para acender os Leds individuais

void acender_led_verde () {
    // Acender LED verde
    gpio_put(pin_g, 1);
}  

void acender_led_azul () {
    // Acender LED azul
    gpio_put(pin_b, 1);
}   

void acender_led_vermelho () {
    // Acender LED vermelho
    gpio_put(pin_r, 1);
}   

// Função para apagar os Leds individuais

void apagar_led_verde () {
    // Apagar LED verde
    gpio_put(pin_g, 0);
}  

void apagar_led_azul () {
    // Apagar LED azul
    gpio_put(pin_b, 0);
}   

void apagar_led_vermelho () {
    // Apagar LED vermelho
    gpio_put(pin_r, 0);
}   

int main() {
    stdio_init_all(); // Inicializa as interfaces de entrada e saída

    // Inicialização dos pinos para saída dos leds
    gpio_init(pin_g);
    gpio_set_dir(pin_g, GPIO_OUT);
    gpio_init(pin_b);
    gpio_set_dir(pin_b, GPIO_OUT);
    gpio_init(pin_r);
    gpio_set_dir(pin_r, GPIO_OUT);

    while (true) {
        /*Comentário a ser apagado:
        Utilizar as funções abaixo para ligar e desligar os LEDs.*/
        ligar_leds (); // Irá ligar todos os pinos (3), tomando a cor branca
        desligar_leds (); // Irá desligar todos os pinos (3), o LED apaga
        acender_led_verde (); // Irá acender o Led Verde
        acender_led_azul (); // Irá acender o Led Azul
        acender_led_vermelho (); // Irá acender o Led Vermelho
        apagar_led_verde (); // Irá apagar o Led Verde
        apagar_led_azul (); // Irá apagar o Led Azul
        apagar_led_vermelho (); // Irá apagar o Led Vermelho
  
        printf("Digite 'Buzzer' para ativar o buzzer por 2 segundos.\n");
        
        char command[10]; // Buffer para armazenar o comando
        scanf("%9s", command); // Lê o comando digitado no terminal
        
        if (strcmp(command, "Buzzer") == 0) {
            printf("Buzzer ativado.\n");
            activate_buzzer();
        } 
    
    }
    
}