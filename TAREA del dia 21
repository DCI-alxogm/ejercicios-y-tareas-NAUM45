#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int numeros[6];
    int *pEst = numeros;
    int totalEst = 0;
 
    printf("== SUMA USANDO ARREGLO ESTÁTICO Y PUNTERO ==\n");
 
    for (int i = 0; i < 6; i++) {
        printf("Ingrese el valor #%d: ", i + 1);
        scanf("%d", (pEst + i));
    }
 
    for (int i = 0; i < 6; i++) {
        totalEst += *(pEst + i);
    }
 
    printf("Suma total (estático): %d\n\n", totalEst);
 
    // Parte dinámica
    int *pDin = (int *)malloc(6 * sizeof(int));
    int totalDin = 0;
 
    if (pDin == NULL) {
        printf("Error al reservar memoria dinámica.\n");
        return 1;
    }
 
    printf("== SUMA USANDO MEMORIA DINÁMICA Y PUNTERO ==\n");
 
    for (int i = 0; i < 6; i++) {
        printf("Ingrese el valor #%d: ", i + 1);
        scanf("%d", (pDin + i));
    }
 
    for (int i = 0; i < 6; i++) {
        totalDin += *(pDin + i);
    }
 
    printf("Suma total (dinámica): %d\n", totalDin);
 
    free(pDin);
    return 0;
}
 
