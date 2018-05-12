#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numeroA=0;
    float numeroB=0;
    float suma;
    float resta;
    float divicion;
    float multiplicacion;
    int factor=1;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n",numeroA);
        printf("2- Ingresar 2do operando (B=%.2f)\n",numeroB);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                    numeroA=pedirflotante("\n Indique un Numero para A: ");
                    break;
            case 2:
                    numeroB=pedirflotante("\nIndique un Numero para B: ");
                    break;
            case 3:
                    suma=sumar(numeroA, numeroB);
                    printf("\nEl resultado de la suma es de: %.2f\n",suma);
                break;
            case 4:
                    resta=restar(numeroA,numeroB);
                    printf("El resltado de la Resta es de: %.2f\n",resta);
                break;
            case 5:
                    divicion=dividir(numeroA,numeroB);
                    if(divicion!=0)
                    {
                        printf("El resultado de la Divicion es de: %.2f\n",divicion);
                    }
                break;
            case 6:
                multiplicacion=multiplicar(numeroA,numeroB);
                printf("El resutlado de la Multiplicacion es de: %.2f",multiplicacion);
                break;
            case 7:
                if(numeroA==0)
                {
                    printf("el factorial de %.0f es: 1\n",numeroA);
                }
                else if(numeroA<0)
                {
                    printf("No existe el factorial de numeros negativos o de fracciones!!!\n");
                }
                else
                {
                for(int i=numeroA;i>=1;i--)
                    {
                        factor=multiplicar(factor,i);
                    }
                    printf("El factorial de %.0f es: %d\n",numeroA,factor);
                }
                break;
            case 8:
                    suma=sumar(numeroA, numeroB);
                    printf("\nEl resultado de la suma es de: %.2f\n",suma);
                    resta=restar(numeroA,numeroB);
                    printf("El resltado de la Resta es de: %.2f\n",resta);
                    if(numeroB!=0)
                    {
                        divicion=dividir(numeroA,numeroB);
                        printf("El resultado de la Divicion es de: %.2f\n",divicion);
                    }
                else
                    {
                        printf("Error, No se Puede divir por 0\n");
                    }
                multiplicacion=multiplicar(numeroA,numeroB);
                printf("El resutlado de la Multiplicacion es de: %.2f\n",multiplicacion);
                if(numeroA==0)
                {
                    printf("el factorial de %.0f es: 1\n",numeroA);
                }
                else if(numeroA<0)
                {
                    printf("No existe el factorial de numeros negativos o de fracciones!!!\n");
                }
                else
                {
                for(int i=numeroA;i>=1;i--)
                    {
                        factor=multiplicar(factor,i);
                    }
                    printf("El factorial de %.0f es: %d \n",numeroA,factor);
                }

                break;
            case 9:
                seguir = 'n';
                break;
        }
     }

    return 0;
}
