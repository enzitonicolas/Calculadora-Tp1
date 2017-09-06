#include <stdbool.h>

int suma(int numA, int numB)
{
    int resultado;
    resultado=numA+numB;
    return resultado;
}

int resta(int numA, int numB)
{
    int resultado;
    resultado=numA-numB;
    return resultado;
}

float division(float numA, float numB)
{
    float resultado = numA/numB;
    return resultado;
}

int multiplicacion(int numA, int numB)
{
    int resultado;
    resultado=numA*numB;
    return resultado;
}

long long factorial(long long numA)
{
    long long resultadoFactorial;
    if(numA==1)
        return 1;
    resultadoFactorial=numA*factorial(numA-1);
    return resultadoFactorial;
}

bool verificacion(int numA, int numB){
    if(numA == 0 || numB == 0)
        return false;
    else
        return true;
}
bool verificarDivision(int numA, int numB){
    if(numB == 0)
        return false;
    else
        return true;
}
