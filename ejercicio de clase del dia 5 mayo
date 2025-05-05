#include <stdio.h>
 
int main() {
    FILE *entrada, *salida;
    int n;
    float li, ls;
    
    entrada = fopen("a.txt", "r");
    if (entrada == NULL) {
        printf("No se pudo abrir a.txt\n");
        return 1;
    }
 
    fscanf(entrada, "%d %f %f", &n, &li, &ls);
    fclose(entrada);
 
    salida = fopen("parabola.txt", "w");
    if (salida == NULL) {
        printf("No se pudo crear parabola.txt\n");
        return 1;
    }
 
    float paso = (ls - li) / (n - 1);
 
    for (int i = 0; i < n; i++) {
        float x = li + i * paso;
        float y = x * x + 1;
        fprintf(salida, "x = %.2f, y = %.2f\n", x, y);
    }
 
    fclose(salida);
 
    return 0;
}
