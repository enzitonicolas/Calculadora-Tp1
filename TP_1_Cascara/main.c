#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int num1,num2,result;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        printf("Ingresa los dos numeros,luego elija una que operacion realizar...Si desea salir presione 9.\n");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingresa el primer numero:");
                scanf("%d",&num1);
                printf("El número ingresado es: %d\n",num1);
                break;
            case 2:
                printf("Ingrese el segundo numero:");
                scanf("%d",&num2);
                printf("El segundo número ingresado es: %d\n",num2);
                break;
            case 3:
                sumar(num1,num2);
                break;
            case 4:
               restar(num1,num2);
                break;
            case 5:
               divid(num1,num2);
                break;
            case 6:
               multip(num1,num2);
                break;
            case 7:
                factorial(num1);
                break;
            case 8:
                sumar(num1,num2);
                restar(num1,num2);
                divid(num1,num2);
                multip(num1,num2);
                factorial(num1);
                break;
            case 9:
                seguir = 'n';
                break;
        }


    
} return 0;
}
