/*
Author: Karni Singh Shekhawat
Es_03 "Scorrere stringa con punatatore e printare la lunghezza"
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void main(){
    char string[50];
    bool end = true;
    int cont = -1; //contatore
    printf("Insert the string : \n");
    gets(string);
    //printf("%s\n", string );

    for(int i=0;end==true;i++){  //fino a quando end non diventi false
        if(*(string+i)=='\0'){
            end=false; // permette di uscire dal ciclo
          }
        cont++;
    }
    printf("The string is long  %d : ", cont);

}
