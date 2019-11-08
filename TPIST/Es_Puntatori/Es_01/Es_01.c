/*
Author: Karni Singh Shekhawat
Es_01 "Vettore usando punatori e allocazione in memoria"
*/

#include<stdio.h>
#include<stdlib.h>

void main(){

  float *pointer; //Dichiarazione punatatore di tipo float
  int n;  // Number MAX
  float num;

  do{
      printf("Number Max? : \n"); //chiedo quanti numeri voglio inserire
      scanf("%d", &n);
  }while(n<0);

  pointer=(float*)malloc(n*sizeof(float));  //alloco lo spazio di memoria e indica l'indirizzo della prima cella dello spazio

  for(int k=0;k<n;k++){

      printf("Give a number : \n ");
      scanf("%f", &num);
      *(pointer+k)= num;  // Aggingo all'indirizzo il valore della k in modo da arrivare al l'indirizzo desiderato e poi inserisco
                          // il valore di num al interno della cella punatata dal nuovo indirizzo sbloccandolo con "*"
  }
  for(int j=0; j<n; j++){

      printf(" Il numero %d e': %.2f\n", j, *(pointer+j)); //stampo il valore contenuto nella cella punatata da "pointer+j" sbloccato dell'asterisco

  }

    free(pointer); //libero lo spazio occupato dal puntatore pointer
}
