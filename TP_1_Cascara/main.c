#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    system("COLOR 9C");
    char seguir='s';
    int opcion=0;
    int num1,num2,result;
    float resultFactorial;
    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        printf("Elija la opcion (1) y luego la (2) para ingresar los operandos.\n");
        printf("Luego elija que operacion del (3 al 8) desea realizar.\nSi desea salir presione 9.\n");
        scanf("%d",&opcion);
        system("cls");
        switch(opcion)
        {
            case 1:
                printf("Ingresa operando A:");
                scanf("%d",&num1);
                printf("El operando ingresado es: %d\n",num1);
                break;
            case 2:
                printf("Ingrese operando B:");
                scanf("%d",&num2);
                printf("El operando ingresado es: %d\n",num2);
                printf("Ya con los operandos elegidos...\nQue operacion del 1 al 3 desea realizar?\nSi quiere corregir algun operando presione la tecla que le corresponde.\n");
                break;
            case 3:
                calcusumar(num1,num2);
                break;
            case 4:
               calcurestar(num1,num2);
                break;
            case 5:
               calcudivid(num1,num2);
                break;
            case 6:
               calcumultip(num1,num2);
                break;
            case 7:
                factorial(num1);
                break;
            case 8:
                calcusumar(num1,num2);
                calcurestar(num1,num2);
                calcudivid(num1,num2);
                calcumultip(num1,num2);
                factorial(num1);
                break;
            case 9:
                seguir = 'n';
                break;
        }



} return 0;
}
