#include <iostream>

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

    int key, j;
    for (int i = 1; i < 10; i++) {
        key = tab[i];
        j = i - 1;

        while(j >= 0 && tab[j] > key) {
            tab[j + 1] = tab[j];
            j--;
        }
        tab[j + 1] = key;
    }

    cout << endl << "Po  sortowaniu:" << endl;
        for (int i = 0 ; i < 10; i++) {
        cout << tab[i] << ", ";
        }
  return 0;
}
