#include <stdio.h>
#include <string.h>
#include "funciones.h"

int obtenerEspacioLibre(EPersona lista[])
{
    int i;
    int index=-1;
    for(i=0;i<20;i++)
    {
        if(lista[i].estado==0)
        {
            return i;
        }
    }
    return index;
}
int buscarPorDni(EPersona lista[], int dni)
{
    int i;
    int  index=-1;
    for(i=0;i<20;i++)
    {
        if(lista[i].dni==dni)
        {
            return i;
        }
    }
    return index;
}
int ingrNum(char mensaje[],char num[])
{
    char aux[265];
    int resl;
    printf(mensaje);
    fflush(stdin);
    scanf("%s",aux);
    resl=soloNumeros(aux);
    if(resl==1)
    {
        strcpy(num,aux);
    }
    return resl;

}
int solCadena(char mensaje[],char dato[])
{
    char aux[264];
    int  resl;
    printf(mensaje);
    fflush(stdin);
    gets(aux);
    resl=soloLetras(aux);
    if(resl==1)
    {
        strcpy(dato,aux);
    }
   return resl;
}
void inizArray(EPersona vector[],int tam,int valor)
{
    int i;
    for(i=0; i<tam; i++)
    {
        vector[i].estado=valor;
    }
}
void ordenarAZ(EPersona vec[],int tam)
{
    int i;
    int j;
    char aux[265];
    int auxDNI;
    int auxEdad;
    for(i=0;i<tam;i++)
    {
        for(j=i+1;j<tam;j++)
        {
            if(strcpy(vec[i].nombre,vec[j].nombre)>0 && vec[i].estado==vec[j].estado)
            {
                strcpy(aux,vec[i].nombre);
                strcpy(vec[i].nombre,vec[j].nombre);
                strcpy(vec[j].nombre,aux);
                auxEdad=vec[i].edad;
                vec[i].edad=vec[j].edad;
                vec[j].edad=auxEdad;
                auxDNI=vec[i].dni;
                vec[i].dni=vec[j].dni;
                vec[j].dni=auxDNI;
            }
        }
    }
}
int soloLetras(char vec[])
{
    int i=0;
    while(vec[i]!='\0')
    {
        if((vec[i]!=' ')&&(vec[i]<'a'||vec[i]>'z')&&(vec[i]<'A'||vec[i]>'Z'))
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int soloNumeros(char vec[])
{
    int i=0;
    while(vec[i]!='\0')
    {
        if(vec[i]<'0'||vec[i]>'9')
        {
            return 0;
        }
        i++;
    }
    return 1;
}

