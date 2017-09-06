int sumar(int num1,int num2)
{
    int result;
    result=num1+num2;
    return result;

}
int restar (int num1,int num2)
{
    int result;
    result=num1-num2;
    return result;

}
int multip(int num1,int num2)
{
    int result;
    result=num1*num2;
    return result;
}
float divid(float num1,float num2)
{
    int result;
    result=num1/num2;
    return result;
}
float factorial(float num1)
{
    float result;
    if(num1==1)
    {
        return 1;
    }
    result=num1*factorial(num1-1);
    return result;

}
