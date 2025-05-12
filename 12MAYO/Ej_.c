include <stdio.h>
 
int main(){
 
ring
 
char fname[100]; 
FILE *fp;
int i,j=0;
int num_max=10;
for(i=0;i<num_max;i++){
//Creación del nombre del archivo a crear escribir en el 
sprintf(fname, "salida_t%d%d.txt",j,i); //como printf pero guarda el st
la variable, en lugar de imprimirlo..
printf("%s\n", fname);
fp=fopen(fname, "w"); //se abre el archivo para escritura
fprintf(fp, "//abrí y cerre archivo");//se cierra el archivo de escritur
 fclose(fp); 
 }
 }
 
--INSERT--
