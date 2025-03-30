#include <stdio.h> #include <math.h>
 
int main() { 

float inicio, fin, paso;
 
printf("Ingrese el valor inicial del intervalo: ");
scanf("%f", &inicio);
 
printf("Ingrese el valor final del intervalo: ");
scanf("%f", &fin);
 
printf("Ingrese el paso: ");
scanf("%f", &paso);
 
if (paso <= 0) {
    printf("El paso debe ser un número positivo.\n");
    return 1;
}
 
printf("%-10s %-10s %-10s %-10s %-10s %-10s\n", "x", "exp(x)", "log(x)", "sin(x)", "cos(x)", "sqrt(x)");
for (float x = inicio; x <= fin; x += paso) {
    if (x <= 0 && (isnan(log(x)) || isnan(sqrt(x)))) {
        printf("%-10.2f %-10.2f %-10s %-10.2f %-10.2f %-10s\n", x, exp(x), "NaN", sin(x), cos(x), "NaN");
    } else {
        printf("%-10.2f %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f\n", x, exp(x), log(x), sin(x), cos(x), sqrt(x));
    }
}
 
return 0;
 
}
