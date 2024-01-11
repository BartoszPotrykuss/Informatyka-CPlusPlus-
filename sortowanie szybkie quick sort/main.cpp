#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

    int tab[10];

void Sortuj_szybko(int lewy, int prawy) {
    int i, j, piwot;

    i = (lewy + prawy) / 2;
    piwot = tab[i];
    tab[i] = tab[prawy];
    for (j = i = lewy; i < prawy; i++) {
        if(tab[i] < piwot) {
            int zmienna = tab[i];
            tab[i] = tab[j];
            tab[j] = zmienna;
            j++;
        }
        tab[prawy] = tab[j];
        tab[j] = piwot;
        if(lewy < j - 1) Sortuj_szybko(lewy, j - 1);
        if (j + 1 < prawy)
            Sortuj_szybko(j + 1, prawy);
    }
}

int main()
{
    for(int i = 0; i < 10; i++) {
        tab[i] = rand() % 100 + 1;
    }


    cout << "Przed sortowaniem: " << endl;
    for (int i = 0 ; i < 10; i++) {
        cout << tab[i] << ", ";
    }

    Sortuj_szybko(0, 10 - 1);

    cout << endl << "Po  sortowaniu:" << endl;
    for (int i = 0 ; i < 10; i++) {
        cout << tab[i] << ", ";
        }
  return 0;
}
