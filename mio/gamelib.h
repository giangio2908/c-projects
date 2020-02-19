#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

//scorciatoie
#define clr system("clear");
#define RESET srand(time(NULL));
#define CASO(x) rand()% #x

enum Quantita_melassa {
    nessuna,
    poca,
    molta
  };

enum Tipo_imprevisto {
  nessun_imprevisto,
  crollo,
  baco
 };

enum Tipo_caverna {
  normale = 1,
  speciale,
  accidentata,
  uscita
 };

 enum Tipo_serbatoio {
   vuoto,
   un_turno,
   due_turni,
   tre_turni,
   quattro_turni
 };

enum Tipo_raccolta {
  senzatetto,
  poverissimo,
  pezzente,
  povero,
  meno_povero,
  medio,
  borghese,
  medio_borghese,
  dottore,
  ricco,
  geff_bezzos
};

struct Scavatrice {
  struct Caverna* posizione;
  short int serbatoio;
  short int raccolta;
};

typedef struct Scavatrice scava;

struct Caverna {

  enum Quantita_melassa melassa;
  enum Tipo_caverna caverna;
  enum Tipo_imprevisto imprevisto;

  struct Caverna *avanti;
  struct Caverna *sinistra;
  struct Caverna *destra;

};

typedef struct Caverna caverna;
