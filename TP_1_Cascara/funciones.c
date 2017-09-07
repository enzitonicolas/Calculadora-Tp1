#define false 0
#define true 1
//Suma
int sumar(int num1,int num2)
{
    int result;
    result=num1+num2;
    return result;

}
//Resta
int restar (int num1,int num2)
{
    int result;
    result=num1-num2;
    return result;

}
//Multiplicacion
int multip(int num1,int num2)
{
    int result;
    result=num1*num2;
    return result;
}
//Division
float divid(float num1,float num2)
{
    float result;
    result=num1/num2;
    return result;
}
//Factorial
float factorial(float num1)
{
    float result;
    if(num1==1)
    {
        return 1;
    }
    result=num1*factorial(num1-1);
    printf("El factorial es: %.0f\n", result);
    return result;

}
//Verificar
int verificacion(int num1,int num2)
{
    if(num1 == 0 || num2 == 0)
        return false;
    else
        return true;
}
//Verificar Suma
void calcusumar(int num1,int num2)
{
    if (verificacion(num1,num2))
    {
        int result = sumar(num1,num2);
        printf("La suma entre (A+B) es igual a:%d\n",result);
    }
    else
    {
        printf("Ingresa el segundo numero nuevamente\n");
    }
}
//Verificar resta
void calcurestar(int num1,int num2)
{
    if (verificacion(num1,num2))
    {
        int result = restar(num1,num2);
        printf("La resta entre (A-B) es igual a:%d\n",result);
    }
    else
    {
        printf("Ingresa el segundo numero nuevamente\n");
    }
}
//Verificar Division
void calcudivid(int num1,int num2)
{
    if (verificacion(num1,num2))
    {
        float result = divid(num1,num2);
        printf("La division entre (A/B) es igual a: %.2f\n",result);
    }
    else
    {
        printf("Ingresa el segundo numero nuevamente\n");
    }
    if(num2==0)
    {
        printf("No se puede dividir por cero\n");
    }
}
//Verificar multiplicacion
void calcumultip(int num1,int num2)
{
    if (verificacion(num1,num2))
    {
        int result = multip(num1,num2);
        printf("La multiplicacion entre (A*B) es igual a:%d\n",result);
    }
    else
    {
        printf("Ingresa el segundo numero nuevamente\n");
    }
}
