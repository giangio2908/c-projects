#include <stdio.h>

int main() {
  unsigned int n, m, q, r, n1, m1, r1;

  printf("\n\nWelcome to Euclidian algorithm.");
  printf("\nChoose two positive numbers and take results\n");
  printf("\nGood work!!!\n");


  printf("\nPut 1° value:\n1°--> ");
  scanf("%u", &n);

  printf("Put 2° value:\n2°--> ");
  scanf("%u", &m);

// per darmi la scritta finale **
  r = 1;
  n1 = n;
  m1 = m;

  if(m > n) {
    n = m1; //se l'utente è stronzo e non capisce inverte
    m = n1; // la n con la m se m è maggiore di n
  }

  if(n%m == 0){
    q = 1;
    printf("%u = %u x %u + %u \n", n, m, q, r);
    printf("GCD of (%u,%u) is equal to: %u\n", n1, m1, m1);

    }
      else {
  while (r != 0) {


    r1 = r; //per la stampa dell'ultimo resto **
    q = n / m;  // per il quoziente
    r = n % m; // per il resto

    printf("%u = %u x %u + %u \n", n, m, q, r); //tiene traccia dei calcoli

    n = m;  //per i passaggi successivi
    m = r;

    }

  printf("GCD (%u,%u) is equal to: %u\n", n1, m1, r1); //**

  }
}
