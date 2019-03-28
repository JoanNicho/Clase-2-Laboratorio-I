#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int esUnNumero(char *cadena)
{
    printf("\npalabra por parametro %s",cadena);
    int indice=0;
    int retorno=0;
    while(cadena[indice]!='\0')
    {
        if(cadena[indice]<'\0'|| cadena[indice]>'9')
        {
            break;
        }else
        {
            indice++;
        }
    }
    if(cadena[indice]=='\0')
    {
        retorno=1;
    }
    return retorno;
}
int main()
{
    char letra;
    char palabra[20];
    int numero;
    int es;

    scanf("%s",&palabra);
    fflush(stdin);
    printf("\npalabra ingresada %s",palabra);
    es=esUnNumero(palabra);
    if(es==1)
    {
        printf("\nes correcto");
    }else{
        printf("\nno lo es");
    }

   /* int indice=0;
    while(indice<20)
    {
       if(palabra[indice]=='\0')
       {

           printf("\nel barra cero esta en %d",indice);
       }
       printf("\nletra %c",palabra[indice]);
       indice ++;
    }

    int miDato=333;
    cambiarValor(miDato);
    printf("Mi dato es:%d",miDato);
    cambiarValorReferencia(&miDato);
    printf("\nMi dato es:%d",miDato);
    int edad;
    int retorno;
    do{
       printf("ingrese una edad");
        retorno=scanf("%d",&edad);
        fflush(stdin);
    }while(retorno==0);

    printf("\n La respuesta es : %d", retorno);
    printf("\n La edad es %d", edad);
    int dato;
    dato=dividir(6);
    printf("\n El dato es : %d", dato);
    dato=dividir(0);
    printf("\n El dato es : %d", dato);
*/




return 0;

}

