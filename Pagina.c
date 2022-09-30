#include <stdio.h>
#include <math.h>

int exponenciacion();

int main()
{
    int a,b;
    printf("ingrese la base: ");
    scanf("%d",&a);
    printf("ingrese el exponente: ");
    scanf("%d",&b);
    printf("El resultado es: %d",exponenciacion(a,b));
    
    return 0;
}
int exponenciacion(int a,int b){
    int r;
    if (b==1){
        r=a;
    }
    else{
        r = a * exponenciacion(a,b-1);
    }
    return r;
}