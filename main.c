#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    int num, flag;
    flag=0;
    char yes;
    Pila pilita, aux, aux2, aux3,aux4;
    inicpila(&pilita);
    inicpila(&aux);
    inicpila(&aux2);
    inicpila(&aux3);
    inicpila(&aux4);

    printf("Bienvenido a la guia de pilas, elija uno de los ejercicios\n");
    scanf("%i", &num);
    switch(num)
    {
    case 1:

        do
        {
            leer(&pilita);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para no ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');
        printf("\n\nPILA DADA\n\n");
        mostrar(&pilita);
        apilar(&aux, desapilar(&pilita));
        apilar(&aux, desapilar(&pilita));
        apilar(&aux, desapilar(&pilita));
        apilar(&aux2, desapilar(&pilita));
        apilar(&aux2, desapilar(&pilita));
        printf("\n\nPILA AUX1\n\n");
        mostrar(&aux);
        printf("\n\nPILA AUX2\n\n");
        mostrar(&aux2);
        break;

    case 2:
        do
        {
            leer(&pilita);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para no ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');

        printf("\n\nPILA ORIGEN\n\n");
        mostrar(&pilita);
        while(!pilavacia(&pilita))
        {

            apilar(&aux, desapilar(&pilita));

        }

        printf("\n\nPILA DESTINO\n\n");
        mostrar(&aux);

        break;

    case 3:
        do
        {
            leer(&pilita);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para no ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');

        printf("\n\nPILA DADA\n\n");
        mostrar(&pilita);

        while(!pilavacia(&pilita))
        {
            if(tope(&pilita)==8)
            {
                apilar(&aux, desapilar(&pilita));
            }
            else
            {
                apilar(&aux2, desapilar(&pilita));
            }
        }
        printf("\n\nPILA DISTINTOS\n\n");
        mostrar(&aux2);

        break;

    case 4:
        do
        {
            leer(&pilita);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para no ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');

        printf("\n\nPILA ORIGEN\n\n");
        mostrar(&pilita);
        while(!pilavacia(&pilita))
        {
            apilar(&aux, desapilar(&pilita));
        }
        while(!pilavacia(&aux))
        {
            apilar(&aux2, desapilar(&aux));
        }

        printf("\n\nPILA DESTINO\n\n");
        mostrar(&aux2);
        break;

    case 5:
        do
        {
            leer(&pilita);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para no ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');

        printf("\n\nPILA DADA\n\n");
        mostrar(&pilita);
        while(!pilavacia(&pilita))
        {
            apilar(&aux, desapilar(&pilita));
        }
        while(!pilavacia(&aux))
        {
            apilar(&aux2, desapilar(&aux));
        }
        while(!pilavacia(&aux2))
        {
            apilar(&pilita, desapilar(&aux2));
        }

        printf("\n\nPILA DADA\n\n");
        mostrar(&pilita);
        break;

    case 6:
        do
        {
            leer(&pilita);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para no ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');

        printf("\n\nPILA DADA\n\n");
        mostrar(&pilita);
        apilar(&aux, desapilar(&pilita));
        while(!pilavacia(&pilita))
        {

            apilar(&aux2, desapilar(&pilita));

        }
        apilar(&pilita, desapilar(&aux));
        while(!pilavacia(&aux2))
        {
            apilar(&pilita, desapilar(&aux2));
        }
        printf("\n\nPILA DADA\n\n");
        mostrar(&pilita);

        break;

    case 7:
        do
        {
            leer(&pilita);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para no ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');
        printf("\n\nPILA DADA\n\n");
        mostrar(&pilita);


        while(!pilavacia(&pilita))
        {
            apilar(&aux, desapilar(&pilita));
        }
        apilar(&aux2, desapilar(&aux));
        while(!pilavacia(&aux))
        {
            apilar(&pilita, desapilar(&aux));
        }
        apilar(&pilita, desapilar(&aux2));
        printf("\n\nPILA DADA\n\n");
        mostrar(&pilita);
        break;

    case 8:
        do
        {
            leer(&pilita);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para no ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');

        while(!pilavacia(&pilita))
        {
            apilar(&aux, desapilar(&pilita));
            if(!pilavacia(&pilita))
            {
                apilar(&aux2,desapilar(&pilita));
            }
        }
        printf("\n\nJUGADOR 1\n\n");
        mostrar(&aux);
        printf("\n\nJUGADOR 2\n\n");
        mostrar(&aux2);

        break;

    case 9:
        do
        {
            leer(&pilita);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para pasar a la pila B ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');

        do
        {
            leer(&aux);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para TERMINAR ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');
        while(!pilavacia(&pilita) && !pilavacia(&aux))
        {

            apilar(&aux2, desapilar(&pilita));
            apilar(&aux2, desapilar(&aux));
        }
        if(pilavacia(&pilita) && pilavacia(&aux))
        {
            printf("\nLas pilas tienen la misma cantidad de elementos\n");
        }
        else
        {
            printf("\nLas pilas no  tienen la misma cantidad de elementos\n");
        }

        break;

    case 10:
        do
        {
            leer(&pilita);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para pasar a la pila B ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');

        do
        {
            leer(&aux);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para TERMINAR ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');
        while(!pilavacia(&pilita) && !pilavacia(&aux)&& tope(&pilita)==tope(&aux))
        {

            apilar(&aux2, desapilar(&pilita));
            apilar(&aux2, desapilar(&aux));
        }
        if(pilavacia(&pilita) && pilavacia(&aux))
        {
            printf("\nLas pilas  son iguales\n");
        }
        else
        {
            printf("\nLas pilas no son iguales\n");
        }

        break;

    case 11:
        printf("ELIJA EL TOPE DE MODELO\n");
        leer(&aux);

        printf("CARGUE LA PILA DADA\n");
        do
        {
            leer(&pilita);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para TERMINAR ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');

        while(!pilavacia(&pilita))
        {
            if(tope(&pilita)==tope(&aux))
            {
                apilar(&aux2, desapilar(&pilita));

            }
            else
            {
                apilar(&aux3, desapilar(&pilita));


            }
        }

        while(!pilavacia(&aux3))
        {

            apilar(&pilita, desapilar(&aux3));
        }
        printf("\n\nPILA DADA\n\n");
        mostrar(&pilita);


        break;
    case 12:
        printf("CARGUE LA PILA MODELO\n");
        do
        {
            leer(&aux);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para TERMINAR ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');
        printf("CARGUE LA PILA DADA\n");

        do
        {
            leer(&pilita);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para TERMINAR ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');


        while(!pilavacia(&aux))
        {

            while(!pilavacia(&pilita))
            {
                if(tope(&pilita)==tope(&aux))
                {
                    apilar(&aux2, desapilar(&pilita));

                }
                else
                {
                    apilar(&aux3, desapilar(&pilita));
                }
            }
            while(!pilavacia(&aux3))
            {
                apilar(&pilita, desapilar(&aux3));
            }
            apilar(&aux4, desapilar(&aux));
        }
        printf("\n\nPILA DADA\n\n");
        mostrar(&pilita);


        break;

    case 13:
        printf("CARGUE LA PILA LIMITE\n");
        leer(&aux);


        printf("CARGUE LA PILA DADA\n");
        do
        {
            leer(&pilita);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para TERMINAR ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');



        while(!pilavacia(&pilita))
        {
            if(tope(&pilita)>=tope(&aux))
            {
                apilar(&aux2, desapilar(&pilita));

            }
            else
            {
                apilar(&aux3, desapilar(&pilita));
            }
        }
        printf("\n\nPILA MAYORES O IGUALES\n\n");
        mostrar(&aux2);
        printf("\n\nPILA Menores\n\n");
        mostrar(&aux3);
        break;


    case 14:
        printf("CARGUE LA PILA DADA\n");

        do
        {
            leer(&pilita);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para TERMINAR ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');

        while(!pilavacia(&pilita))
        {
            apilar(&aux, desapilar(&pilita));
            if(!pilavacia(&pilita))
            {
                apilar(&aux,desapilar(&pilita));
            }
            else
            {
                apilar(&aux2, desapilar(&aux));
            }
        }
        if(pilavacia(&aux2))
        {
            printf("La pila es par");
            apilar(&aux3, desapilar(&aux));
        }
        else
        {
            printf("La pila es impar");

        }
        break;

    case 15:
        printf("while (!pilavacia(&Pila1))\n{ apilar (&Pila2, desapilar(&Descarte))\n}\n\n");
        printf("¿Cual es la condicion del siguiente ciclo?\n La condicion del ciclo es 'minetras pila1 no este vacia'.\n\n");
        printf("¿Cuando finaliza el ciclo?\n El ciclo terminare cuando pila 1 quede vacia, en este caso sera\nun bucle infinito ya que en ningun momento descartamos elementos de la pila1");
        break;

    case 16:
        printf("while (!pilavacia(&Pila1)) {\nif (tope(&Pila1) == 5) {\napilar (&Aux, desapilar(&Pila1));\napilar (&Result, desapilar(&Aux));\n}\n}");
        printf("¿Que realiza el siguiente codigo escrito en lenguaje C?\n\n El codigo dice que si pila1 no este vacia y si su tope es exactamente igual a 5\n va a desapilarlo en de pila1 y apilarlo en aux ,para luego desapilarlo del mismo aux y apilarlo en Result \n\n");

        break;


    case 17:
        printf("Para el ejercicio “Cargar por teclado una pila ORIGEN y pasar a la pila DISTINTO todos aquellos\n elementos que preceden al valor 5 (elementos entre el tope y el valor 5). No se asegura que exista algún valor 5”\n, se realizó el siguiente programa:\n ");
        printf("int main() { \nPila Origen, Distinto;\ninicpila(&Origen);\ninicpila(&Distinto);\nleer(&Origen);\nif (!pilaVacia(&Origen)){ \nwhile (tope(&Origen) != 5) {\napilar (&Distinto, desapilar(&Origen));\n} \n}\n}\n");
        printf("a. ¿Resuelve el problema planteado?\nNo\n");
        printf("b. ¿Cuáles son los errores que encuentra?\nLos problemas que encuentro son:\n1. el if y el while estan al mal puestos, deberia ser 'while(!pilaVacia(&Origen))' y viceversa\n2. el while guardara todos los numeros distintos de 5, independientemente de si precede o no el 5\n\n\n");
        printf("A CONTINUACION CORREGIREMOS EL CODIGO\n");
        do
        {
            leer(&pilita);
            printf("desea cotinuar?\nOprima s para si, cualquier tecla para TERMINAR ");
            fflush(stdin);
            scanf("%c", &yes);
        }
        while(yes=='s' || yes=='S');

        printf("\n\nPILA ORIGEN\n\n");
        mostrar(&pilita);


        while(!pilavacia(&pilita))
        {
            if(tope(&pilita)==5)
            {
                while(!pilavacia(&pilita))
                {
                    apilar(&aux2, desapilar(&pilita));
                }
            }
            else
            {

                apilar(&aux, desapilar(&pilita));
            }

        }
        printf("\n\nPILA DESTINO\n\n");
        mostrar(&aux);





        break;
    }
    return 0;
}

