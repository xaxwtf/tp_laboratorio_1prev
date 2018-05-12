#include <stdio.h>
#include "funciones.h"
float pedirflotante(char mensaje[])
{
    float num;
    printf("%s", mensaje);
    scanf("%f",& num);
    return num;
}
float sumar(float numA,float numB)
{
    float resultado;
    resultado = numA + numB;
    return resultado;
}
float restar(float numA,float numB)
{
    float resultado;
    resultado=numA-numB;
    return resultado;
}
float dividir(float numA,float numB)
{
    float resultado;
    if(numB!=0)
    {
       resultado=numA/numB;
    }
    else
    {
        printf("ERROR,No se puede dividir por 0\n");
        resultado=0;
    }


    return resultado;
}
float multiplicar(float numA, float numB)
{
    float resultado;
    resultado=numA*numB;
    return resultado;
}


float multiplicar(float,float);
