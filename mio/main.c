#include "gamelib.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>


//prototipi
void crea_cunicoli();
void termina_gioco();

int main() {

  srand(time(NULL));
  unsigned short int scelta; //serve per identificare la scelta fatta dall'utente

  do {
    clr;

    printf("\t\t\t\t\tʢ----------------------------------ᵹ\n"
           "\t\t\t\t\tØ                                  Ø\n"
           "\t\t\t\t\tØ       1) Crea cunicoli...        Ø\n"
           "\t\t\t\t\tØ       2) Gioca...                Ø\n"
           "\t\t\t\t\tØ       3) Termina...              Ø\n"
           "\t\t\t\t\tØ                                  Ø\n"
           "\t\t\t\t\tȽ----------------------------------ʖ\n");
   printf("\n\t\t\t\t\tScelta: ");


    //controllo sull'input
    while (scanf("%hu", &scelta) != 1 || scelta > 3 || scelta < 1){
            printf("\n\t\tIl valore inserito non e\' valido, riprovare: ");
          while (getchar() != '\n');
      }

    switch(scelta) {
      case 1:
        crea_cunicoli();
        break;

      case 2:
        printf("bohboh\n");
        break;

        case 3:
        printf("Termina");
        break;

      default:
        break;
    }

  }while(scelta != 3);
}
