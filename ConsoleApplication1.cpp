#include <limits.h>
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    float a, b, c, result1, result2; 
    printf("Введите значение A: "); scanf_s("%f", &a);
    printf("Введите значение B: "); scanf_s("%f", &b);
    printf("Введите значение C: "); scanf_s("%f", &c);
    if ( (a * b) != 0 )
    {
        result1 = a * (c - b) / (a * b) + c;
        printf("Значение выражения, содержащего операции различного уровня приоритетности: %f\n", result1);
    }
    else
    {
        printf("Ошибка! Делить на ноль нельзя\n");
    }
    result2 = c / (int)b;
    printf("Значение выражения при преобразовании типов: %f\n", result2);
    return 0;
}
