#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

const int N = 20; // Liczebno�� zbioru.

// Program g��wny
//---------------

int main()
{
  int d[N],i,j,x;

  cout << " Sortowanie przez wstawianie\n"
          "-----------------------------\n"
          "   (C)2005  Jerzy Walaszek\n\n"
          "Przed sortowaniem:\n\n";

// Najpierw wype�niamy tablic� d[] liczbami pseudolosowymi
// a nast�pnie wy�wietlamy jej zawarto��

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

// Wy�wietlamy wynik sortowania

  cout << "Po sortowaniu:\n\n";
  for(i = 0; i < N; i++) cout << setw(4) << d[i];
  cout << endl;
  return 0;
}
