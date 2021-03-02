#include <stdio.h>

/* Program poprawnie sie kompiluje w kompilatorze jezyka c. W kompilatorze jezyka c++ wyskakuje wiadomosc o bledzie, iz funkcja dodaj nie przyjmuje tyle argument*/
double Dodaj();


int main( )
{
  double  Skl1 = 2.0,  Skl2 = 2.0;
  double  Wynik = Dodaj(Skl1,Skl2);

  printf("  Wynik dodawania:  %f + %f = %f\n",Skl1,Skl2,Wynik);

  return 0;
}
