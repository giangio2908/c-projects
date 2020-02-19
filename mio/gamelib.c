#include "gamelib.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

//prototipi

static void crea_cunicoli();

static void crea_cunicoli() {

  unsigned short int scelta;

  printf("\t\t\t\t\tʢ----------------------------------ᵹ\n"
         "\t\t\t\t\tØ                                  Ø\n"
         "\t\t\t\t\tØ       1) Inserisci Caverna...    Ø\n"
         "\t\t\t\t\tØ       2) Cancella Caverna...     Ø\n"
         "\t\t\t\t\tØ       3) Stampa Cunicoli...      Ø\n"
         "\t\t\t\t\tØ       4) Ritorno al menu\'...    Ø\n"
         "\t\t\t\t\tØ                                  Ø\n"
         "\t\t\t\t\tȽ----------------------------------ʖ\n");
 printf("\n\t\t\t\t\tScelta: ");

 //controllo sull'input
 while (scanf("%hu", &scelta) != 1 || scelta > 4 || scelta < 1){
         printf("\n\t\tIl valore inserito non e\' valido, riprovare: ");
       while (getchar() != '\n');
   }

   switch(scelta) {

     case 1:
     printf("Ins");
     break;

     case 2:
     printf("Canc");
     break;

     case 3:
     printf("Stamp");
     break;

     default:
     break;
   } while(scelta != 4);

}
