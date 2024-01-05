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
  int d[N],i,j;

  cout << " Sortowanie babelkowe\n"
          "     WERSJA NR 1\n"
          "----------------------\n"
          "(C)2005 Jerzy Walaszek\n\n"
          "Przed sortowaniem:\n\n";

// Najpierw wype�niamy tablic� d[] liczbami pseudolosowymi
// a nast�pnie wy�wietlamy jej zawarto��

  srand((unsigned)time(NULL));

  for(i = 0; i < N; i++) d[i] = rand() % 100;
  for(i = 0; i < N; i++) cout << setw(4) << d[i];
  cout << endl;

// Sortujemy

  for(j = 0; j < N - 1; j++)
    for(i = 0; i < N - 1; i++)
      if(d[i] > d[i + 1]) swap(d[i], d[i + 1]);

// Wy�wietlamy wynik sortowania

  cout << "Po sortowaniu:\n\n";
  for(i = 0; i < N; i++) cout << setw(4) << d[i];
  cout << endl;
  return 0;
}
