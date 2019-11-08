#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define DIM 50

typedef struct contact{
  char name[DIM];
  int number;
  struct contact*next; //Struttura Autoreferenzita
}Contact;


int main() {
  /* code */
    Contact giovanni;
    strcpy(giovanni.name, "giovanni");
    giovanni.number = 11;
    giovanni.next = NULL;  // Iniziamente next non contiene nulla

    Contact mamma;
    strcpy(mamma.name, "MAMMA");
    mamma.number = 12;
    mamma.next = &giovanni;  // Punta alla cella di giovanni

    Contact io;
    strcpy(io.name, "io");
    io.number = 13;
    io.next = &giovanni;   // Anche il contatto io si collega la contatto giovanni

    mamma.next = &io; // Il contatto io viene dopo il contatto  mamma 
    giovanni.next = &mamma;  // Il contatto mamma viene dopo il contatto  giovanni


    Contact* support = &mamma; // do A mamma il primo indirizzo che poi permette ddi scorrere il vettore di coontatti

    do{
      /* code */
      printf("name : %s \t  number : %d\n", support->name, support->number);
      support = support->next; // Scorre al prossimo contatto del next
    }while(support -> next != NULL)

  getch();
  fflush(stdin);
  return 0;
}
