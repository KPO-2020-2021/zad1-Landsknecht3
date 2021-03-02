#include <stdio.h>

/* Program poprawnie sie kompiluje i dziala dla kompilowania w jezyku c, jednakze przy kompilowaniu w jezyku c++ pojawia sie problem z odczytaniem/zdefiniowaniem */
/* zmiennych */
extern const double PI;
extern const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
