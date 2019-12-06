#include <stdio.h>

int main() {
  unsigned int n, m, q, r, n1, m1, r1;

  printf("\n\nWelcome to Euclidian algorithm.");
  printf("\nChoose two positive numbers and take results\n");
  printf("\nGood work!!!\n");
//-----------------------------------
  printf("\nPut 1° value:\n1°--> ");
  scanf("%u", &n);

  printf("Put 2° value:\n2°--> ");
  scanf("%u", &m);

// save result for the last printf **
  r = 1;
  n1 = n;
  m1 = m;
//-----------------------------------
  if(m > n) {
    n = m1; // if m is bigger than n
    m = n1; // swap the values 
  }
//-----------------------------------
  if(n%m == 0){
    q = 1;
    printf("%u = %u x %u + %u \n", n, m, q, r);
    printf("GCD of (%u,%u) is equal to: %u\n", n1, m1, m1);

    }
      else {
  while (r != 0) {


    r1 = r; //save result for the last printf **
    q = n / m;  // for the quozient
    r = n % m; // for the remainder

    printf("\n%u = %u x %u + %u \n", n, m, q, r); //track of calculation

    n = m;  //for the following steps
    m = r;
//----------------------------------
    }

  printf("GCD (%u,%u) is equal to: %u\n", n1, m1, r1); //**

  }
}
