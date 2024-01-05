#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

const int N = 20; // Liczebnoœæ zbioru.

// Program g³ówny
//---------------

int main()
{
  int d[N],i,j,x;

  cout << " Sortowanie przez wstawianie\n"
          "-----------------------------\n"
          "   (C)2005  Jerzy Walaszek\n\n"
          "Przed sortowaniem:\n\n";

// Najpierw wype³niamy tablicê d[] liczbami pseudolosowymi
// a nastêpnie wyœwietlamy jej zawartoœæ

  srand((unsigned)time(NULL));

  for(i = 0; i < N; i++) d[i] = rand() % 100;
  for(i = 0; i < N; i++) cout << setw(4) << d[i];
  cout << endl;

// Sortujemy

  for(j = N - 2; j >= 0; j--)
  {
    x = d[j];
    i = j + 1;
    while((i < N) && (x > d[i]))
    {
      d[i - 1] = d[i];
      i++;
    }
    d[i - 1] = x;
  }

// Wyœwietlamy wynik sortowania

  cout << "Po sortowaniu:\n\n";
  for(i = 0; i < N; i++) cout << setw(4) << d[i];
  cout << endl;
  return 0;
}
