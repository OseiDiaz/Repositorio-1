#include <iostream>
int main()
{
    //PROGRAMA PARA LA FORMULA GENERAL
    float a, b, c, num, X1, X2, division, multi1, resultado1, resultado2, raiz, raiz2, multi2;
    a > 0;
    printf("Introdusca el valor de a: ");
    scanf_s("%f", &a);
    if (a < 0)
        printf("BotateAVL  ");
    printf("Introdusca el valor de b: ");
    scanf_s("%f", &b);
    printf("Introdusca el valor de c: ");
    scanf_s("%f", &c);
    multi1 = b * b;
    multi2 = 4 * a * c;
    num = multi1 - multi2;
    division = 2 * a;
    raiz = sqrt(num);
    X1 = -b + raiz;
    X2 = -b - raiz;
    resultado1 = X1 / division;
    resultado2 = X2 / division;
    printf("El resultado de x1 es: %f\n", resultado1);
    printf("El resultado de x2 es: %f\n", resultado2);
    if (num > 0)
        printf("hay dos soluciones reales y diferentes");
    if (num == 0)
        printf("hay una solucion real e igual");
    if (num < 0)
        printf("hay dos soluciones imaginarias");

    printf("Gracias por utilizar este programa");
}