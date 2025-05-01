#include <stdio.h>
 
int main() {
    
    int x_min, x_max;
    int y_min, y_max;     
    int delta;            
    int x, y;             
 
    printf("Introduce el valor mínimo de x: ");
    scanf("%d", &x_min);
 
    printf("Introduce el valor máximo de x: ");
    scanf("%d", &x_max);
 
    printf("Introduce el valor mínimo de y: ");
    scanf("%d", &y_min);
 
    printf("Introduce el valor máximo de y: ");
    scanf("%d", &y_max);
 
    printf("Introduce el valor del espaciado (delta): ");
    scanf("%d", &delta);
 
    if (delta <= 0) {
        printf("Error: el valor de delta debe ser mayor a cero.\n");
        return 1;
    }
 
    printf("\nCoordenadas generadas:\n");
    for (x = x_min; x <= x_max; x += delta) {
        for (y = y_min; y <= y_max; y += delta) {
            printf("(%d, %d)\n", x, y);
        }
    }
 
    return 0;
}
