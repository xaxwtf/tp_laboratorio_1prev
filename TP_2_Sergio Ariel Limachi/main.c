#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define TAM 20


int main()
{
    char seguir='s';
    int opcion=0;
    int subOpc=4;
    EPersona users[TAM];
    int limitador;
    char auxNom[50];
    char auxDNI[50];
    char auxEdad[50];
    int datoBusq;
    int i;
    int resBusq;
    inizArray(users,TAM,0);

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                resBusq=obtenerEspacioLibre(users);
                if(resBusq==-1)
                {
                    printf("\n Ah alcanzado el Limite de Personas a Registrar!!\n");
                }
                else
                {
                        if(!solCadena(" \nIndique Su Nombre: ",auxNom))
                        {
                            printf("\n El Nombre solo puede estar compuesto por Letras\n");
                            break;
                        }
                        if(!ingrNum("\n Indique la edad: ",auxEdad))
                           {
                               printf("\n La edad Solo puede contener numeros\n" );
                               break;
                           }
                        if(!ingrNum("\n Indique El Numero de DNI: ",auxDNI))
                        {
                            printf("\n La El DNI Solo puede contener numeros\n" );
                            break;
                        }
                        strcpy(users[resBusq].nombre,auxNom);
                        users[resBusq].edad=atoi(auxEdad);
                        users[resBusq].dni=atoi(auxDNI);
                        users[resBusq].estado=1;
                }
                break;
            case 2:
                printf("\n Indique el DNI de la Persona a Dar de Baja: ");
                scanf("%d",&datoBusq);
                resBusq=buscarPorDni(users,datoBusq);
                do{
                    printf("Usuario Encontrado: \n Nombre: %s \n DNI: %d",users[resBusq].nombre,users[resBusq].dni);
                    printf("\n Esta Seguro que Desea dar de baja al Usuario? \n 1-SI \n 2-NO \n");
                    scanf("%d",&subOpc);
                    switch(subOpc)
                    {
                        case 1:
                            strcpy(users[resBusq].nombre," ");
                            users[resBusq].dni=0;
                            users[resBusq].estado=0;
                            users[resBusq].edad=0;
                            subOpc=3;
                            break;
                        case 2:
                            subOpc=3;
                            break;
                    }

                }while(subOpc!=3);

                break;
            case 3:

                printf("   NOMBRE      DNI     EDAD \n");
                for(i=0;i<TAM;i++)
                {
                    if(users[i].estado!=0)
                    {
                        printf("%d %s    %d    %d \n",i,users[i].nombre, users[i].dni,users[i].edad);
                    }
                }
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
