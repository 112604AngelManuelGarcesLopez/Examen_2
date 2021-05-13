#include <stdio.h>
int main () 
{
      /* Garces Lopez Angel Manuel
    12 May 21
    Ex4.c
    */

   float peso, altura, nombre, IMC;
   printf ("\n\n Programa 7");
   printf ("\n\n calcular el indice de masa corporal");
   printf ("\n\n Dame el peso");
   printf("\n\n Garces Lopez Angel Manuel");
   scanf ("%f",&peso);
   printf ("\n\n Dame la altura");
   scanf ("%f",&altura);
   IMC=peso/(altura*altura);
   printf ("\n\n La masa muscular es %f",IMC);
   
   return 0;
}