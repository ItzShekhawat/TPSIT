/*
Author : Karni Singh Shekhawat
Es_04 : "show a pointer to an array which contents are pointer to structure."
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define DIM 50

typedef struct employ{
    char* empname;
    int empid;
}Employ;

void main(){
    Employ** vett; //creo un vettore di puntatori alla struttura Emp  ???
    int n;    //numero impiegati
    char name[DIM]; //Nome Employ

    printf("How many Employs are there ?\n");
    scanf("%d", &n);

    Employ imp[dim]; //Vettorie della struttura
    vet = (Employ**)malloc(n*sizeof(Employ*)); //Do al vettore il primo indirizzo dello spazio trovato dalla Malloc  e l'indirizzo viene passato per tipo Employ

    for(int k=0; k<n; k++){

        printf("Name of the Employ n° %d : ", k);
        gets(name);

        (imp+k)->empname = (char*) malloc(strlen(riga)*sizeof(char));    //ritaglio uno spazio in memoria grande quanto il nome dell'impiegato e lo assegno a empname
        strcpy((imp+i)->empname,riga);  //copio il nome dell'impiegato nella struttura Emp
        (imp+k)->empid = 1000 + i;  //assegno all'impiegato un ID
        *(vett+k)=(imp+i);  //assegno alla cella del mio vettore di puntatori il puntatore della struttura
    }
    for(i=0;i<dim;i++){ //ripeto il ciclo per il numero di impiegati
        printf("\n empid= %d \t empname= %s", (*(*(vett+i))).empid, (*(*(vett+i))).empname);    //stampo l'id e il nome dell'impiegato
    }

    free(vet); //libera spazio trovato dalla malloc assegnato a vettore
    fflush(stdin);
    printf("\ncliccare un tasto per proseguire"); //aspetto un input da tastiera per proseguire
    fflush(stdin);
    getch();
}
