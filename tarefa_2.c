#include <stdio.h>
#include "pico/stdlib.h"

// Declaração de pinos de saídas dos LEDs
#define pin_g 11 // LED verde
#define pin_b 12 // LED azul
#define pin_r 13 // LED vermelho

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
    }
    
}