#include <stdio.h>
 
int esPrimo(int num) { if (num < 2) return 0;

 for (int i = 2; i * i <= num; i++)
  { if (num % i == 0) return 0; } return 1; }
 
int main() { int inicio, fin, contador = 0;
 
printf("Ingrese el valor inicial del intervalo: ");
scanf("%d", &inicio);
 
printf("Ingrese el valor final del intervalo: ");
scanf("%d", &fin);
 
printf("Números primos en el intervalo [%d, %d]:\n", inicio, fin);
 
for (int num = inicio; num <= fin; num++) {
    if (esPrimo(num)) {
        printf("%d ", num);
        contador++;
        if (contador % 10 == 0) printf("\n"); // Salto de línea cada 10 números
        if (contador >= 50) break; // Máximo 5 líneas (10 números por línea)
    }
}
printf("\n");
 
return 0;
 
}
 
