#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"
#include "funcion.c"

int main()
{
    char seguir='s';
    int opcion=0;
    int numA, numB, resultado=0;
    long long resultadoFactorial;

    while(seguir=='s')
    {

        printf("1- Ingresar el primer numero \n");
        printf("2- Ingresar el segundo numero \n");
        printf("3- Calcular la suma \n");
        printf("4- Calcular la resta \n");
        printf("5- Calcular la division \n");
        printf("6- Calcular la multiplicacion \n");
        printf("7- Calcular el factorial \n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        printf("Ingresar los dos numeros, luego elegir una operacion. Si desea salir, presionar el numero 9.\n");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingresar el primer numero: ");
                scanf("%d",&numA);
                printf("El primer numero ingresado es: %d \n",numA);
                break;
            case 2:
                printf("Ingresar el segundo numero: ");
                scanf("%d",&numB);
                printf("El segundo numero ingresado es: %d \n",numB);
                break;
            case 3:
                calcularSuma(numA, numB);
                break;
            case 4:
                calcularResta(numA, numB);
                break;
            case 5:
                calcularDivision(numA, numB);
                break;

            case 6:
                calcularMultiplicacion(numA, numB);
                break;
            case 7:
                calcularFactorial(numA);
                break;
            case 8:
                    calcularSuma(numA, numB);

                    calcularResta(numA, numB);

                    calcularDivision(numA, numB);

                    calcularMultiplicacion(numA, numB);

                    calcularFactorial(numA);
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }
    return 0;
}

void calcularSuma(int numA, int numB){
    if(verificacion(numA, numB)){
        int resultado=suma(numA, numB);
        printf("el resultado de la suma es: %d \n",resultado);
    }else{
        printf("carga los datos");
    }
}

void calcularDivision(int numA, int numB){
    if(verificarDivision(numA, numB)){
        float resultado = division(numA, numB);
        printf("el resultado de la division es: %.2f \n",resultado);
    }else{
        printf("el segundo numero no puede ser cero");
    }
}

void calcularResta(int numA, int numB){
    if(verificacion(numA, numB)){
       int resultado=resta(numA, numB);
       printf("el resultado de la resta es: %d \n",resultado);
    }else{
        printf("carga los datos");
}
}
void calcularMultiplicacion(int numA, int numB){
    if(verificacion(numA, numB)){
       int resultado=multiplicacion(numA, numB);
       printf("el resultado de la multiplicacion es: %d \n",resultado);
    }else{
        printf("carga los datos");
}
}
void calcularFactorial(int numA, int numB){
    if(verificacion(numA,numB)){
       long long resultadoFactorial = factorial(numA);
       printf("el resultado del factorial es: %lld \n", resultadoFactorial);
    }else{
        printf("carga los datos");
}
}
