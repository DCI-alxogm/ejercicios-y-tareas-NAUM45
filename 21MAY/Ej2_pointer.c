#include <stdio.h>
 
#include <stdlib.h>
 
int main(){
 
int num, i, *ptr;
 
printf("Introduce el valor de la variable num");
 scanf("%d ", &num);
 ptr= (int *) malloc (num * sizeof(int));
 printf("Size of local_int: %zu bytes\n", sizeof(int)); 
 printf("Size of local_int: %zu bytes\n", sizeof(ptr));
 printf("Introduce la secuencia de %d numeros",num);
 
 }
