#include <stdio.h>
 
int main() {
float TC[20], TK[20];
float Tci = -3.5, Tf = 27.5;
int n = 20;
float delta = (Tf - Tci) / n;
 
    for (int i = 0; i < n; i++)
     {
        TC[i] = Tci + i * delta;
        TK[i] = TC[i] + 273.15;
    }
 
   
    printf("i\tTC[i]\t\tTK[i]\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%.2f\t\t%.2f\n", i, TC[i], TK[i]);
    }
 
    return 0;
}
 
