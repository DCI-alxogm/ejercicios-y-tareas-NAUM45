/* segundo programa del dia 17 de febrero: jerarquia de operaciones flotantes*/

#include <stdio.h>

int main() {
        int a,b,c,d;
        int e1,e2,e3,e4;
        a=4;
        b=-5;
        c=-2;
        d=8;
        e1=(a+b)*c/d;
        e2=((a+b)*c)/d;
        e3=(a+b)*(c+d);
        e4=a+b*c/d;
        printf("e=(a+b)*c/d=%d\n",e1);
        printf("e=((a+b)*c)/d=%d\n",e2);
        printf("e=(a+b)*(c+d)=%d\n",e3);
        printf("e=a+b*c/d=%d\n",e4);
}
        
        
        
