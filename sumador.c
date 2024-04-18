#include<stdio.h>
#define p printf
#define s scanf

int main(void){
    int num1, num2, num3,suma;
    p("Numero: ");
    s("%d", &num1);
    p("mas: ");
    s("%d", &num2);
    p("mas: ");
    s("%d", &num3);

    suma = num1 + num2 + num3;

    p("resultado: %d", suma);
    return 0;
}