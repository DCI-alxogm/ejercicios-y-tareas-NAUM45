#include <stdio.h>
 
// Función sin argumentos de entrada/salida
void imprimir_bienvenida() {
  printf("¡Bienvenido al programa de ejemplos de funciones!\n");
}
 
// Función con argumentos de entrada, pero sin argumentos de salida
void imprimir_cubo(int numero) {
  int cubo = numero * numero * numero;
  printf("El cubo de %d es %d\n", numero, cubo);
}
 
// Función con argumentos de salida, pero sin argumentos de entrada
void generar_arreglo_pares(int arreglo[], int tamaño) {
  for (int i = 0; i < tamaño; i++) {
    arreglo[i] = (i + 1) * 2; // Genera números pares
  }
}
 
// Función con argumentos de entrada y salida (cambia un arreglo)
void dividir_arreglo_por_dos(int arreglo[], int tamaño) {
  for (int i = 0; i < tamaño; i++) {
    arreglo[i] /= 2; // Divide cada elemento por 2
  }
}
 
int main() {
  // Llamada a la función sin argumentos de entrada/salida
  imprimir_bienvenida();
 
  // Llamada a la función con argumentos de entrada, pero sin argumentos de salida
  imprimir_cubo(3);
 
  // Llamada a la función con argumentos de salida, pero sin argumentos de entrada
  int arreglo_pares[5];
  generar_arreglo_pares(arreglo_pares, 5);
  printf("Arreglo con números pares: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", arreglo_pares[i]);
  }
  printf("\n");
 
  // Llamada a la función con argumentos de entrada y salida
  dividir_arreglo_por_dos(arreglo_pares, 5);
  printf("Arreglo dividido por 2: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", arreglo_pares[i]);
  }
  printf("\n");
 
  return 0;
}
 
