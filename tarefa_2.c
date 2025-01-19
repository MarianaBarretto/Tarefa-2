#include <stdio.h>
#include "pico/stdlib.h"

// Declaração de pinos de saídas dos LEDs
#define pin_g 11 // LED verde
#define pin_b 12 // LED azul
#define pin_r 13 // LED vermelho

// Função para ligar todos os LEDs
void ligar_todos () {
  gpio_put(pin_g, true);
  gpio_put(pin_b, true);
  gpio_put(pin_r, true);
}

// Função para desligar todos os LEDs
void desligar_todos () {
  gpio_put(pin_g, false);
  gpio_put(pin_b, false);
  gpio_put(pin_r, false);
}

int main() {
    stdio_init_all(); // Inicializa as interfaces de entrada e saída

}