#include <iostream>

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







































    //sortowanie b¹belkowe

/*
    for (int i = 0; i < 10-1; i++)
    {
        for (int j = 0; j < 10-1-i; j++)
        {
                if(tab[j] > tab[j+1])
                {
                    int zmienna = tab[j];
                    tab[j] = tab[j+1];
                    tab[j+1] = zmienna;
                }
        }
    }

    // sortowanie przez wstawianie

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

    //sortowanie przez wybór

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
*/
