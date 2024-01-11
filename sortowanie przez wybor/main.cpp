
#include <cmath>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

using namespace std;

    int tab[10];

int main()
{
    for(int i = 0; i < 10; i++) {
        tab[i] = rand() % 100 + 1;
    }


    cout << "Przed sortowaniem: " << endl;
    for (int i = 0 ; i < 10; i++) {
        cout << tab[i] << ", ";
    }

            int minIndex;
    for(int i = 0; i < 10-1; i++) {
        minIndex = i;
        for(int j = i+1; j < 10; j++) {
            if (tab[j] < tab[minIndex]) {
                minIndex = j;
            }
        }
        int zmienna = tab[i];
        tab[i] = tab[minIndex];
        tab[minIndex] = zmienna;
    }

    cout << endl << "Po  sortowaniu:" << endl;
        for (int i = 0 ; i < 10; i++) {
        cout << tab[i] << ", ";
        }
  return 0;
}
