/*crea  una  lista e la  stampa*/
#include  <stdio.h>
#include  <stdlib.h>

struct  El{
  int  valore;
  struct  El* next;
};

void stampaListaRicorsiva(struct El* l){
        printf("%d\n", l->valore);
        l=l->next;  //Aggiorno l'indirizzo passando il prossimo indirizzo
        stampaListaRicorsiva(l); //Autoreferenziata in modo che scorra fino a quando la if non diventa falsa
}


int LungIterativa(struct El* l){
    int cont = 0;
    while (l!=NULL){
            l=l->next;
            cont++;
    }
    return cont;
}

int LungRicorsiva(struct El* l){
    int cont = 0;
    if(l!=NULL){
        l=l->next;
        cont =  LungRicorsiva(l)  ; //Richaimo la funzione fino al falso della condizione if e conto la lunghezza
    }
    return cont;
}



void stampaListaIterativa(struct El* l) {
  while (l!=NULL){
    printf("%d - %p \n",l->valore, l->next);
    l=l->next; /* il puntatore corrente è assegnato al puntatore all'elemento successivo */
  }
}

int  main(){
    int n;
    struct  El* lista; // puntatore al primo elemento della lista
    struct  El* l;
    lista=NULL; /*  iniziallizza il puntatore NULL */
    int sceltaLung, scelta, lung = 0;

    do{
        printf("Inserisci  un  naturale o  -1 per  terminare\n");
        scanf("%d",&n);
        if (n>=0)
        {
            if (lista==NULL) /*  Verifico se il puntatore lista assume valre NULL  */
            {
                /*  in questo caso alloco in memoria per una struttura  */
                lista = (struct  El*)  malloc(sizeof(struct  El));
                l = lista;
            }
            else /*  se il puntatore lista è diverso da NULL */
            {
                /* alloco al puntatore l della elemento corrente un puntatore che punta all'elemento successivo */
                l->next = (struct  El*)  malloc(sizeof(struct  El));
                l = l->next;
            }
            l->valore = n; /*  assegno n al campo valore dell'elemento corrente  */
            l->next = NULL; /*  assegno al campo next dell'elemento corrente il valore NULL  */
        }
    } while (n>=0);

    l=lista;  /* assegno alla variabile di appoggio l il puntatore al primo elemento della lista */
    printf("Scegliere tra Iterativa e Ricosiva (1-2) : \n");
    scanf("%d", &scelta);
    printf("numeri  inseriti: ");
    if(scelta == 1){
      stampaListaIterativa(lista);
    }else{
      stampaListaRicorsiva(lista);
    }

    printf("Scegliere metodo per sapere la lunghezza [Iterativa - Ricorsiva](1-2) : \n");
    scanf("%d", &sceltaLung);
    if(sceltaLung == 1){
      lung = LungIterativa(lista);
      printf("La lunghezza e'  :  %d \n", lung);
    }else{
      lung = LungRicorsiva(lista);
      printf("La lunghezza e'  :  %d \n", lung);
    }

    printf("\n");
    free(lista);
    return  0;

    }
