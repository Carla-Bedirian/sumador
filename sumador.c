#include<stdio.h>
#define p printf
#define s scanf

int main(void){
    int num1, num2,suma, resta, div, mult;
    p("Numero 1: ");
    s("%d", &num1);
    p("numero 2: ");
    s("%d", &num2);
  
    suma = num1 + num2;
    resta = num1 - num2;
    div = num1 / num2;
    mult = num1 * num2;
    
    p("Suma: %d, resta %d, division %d, multiplicacion %d ", suma, resta, div, mult); 
    return 0;
}