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

        cout << endl << "Po  sortowaniu:" << endl;
        for (int i = 0 ; i < 10; i++) {
        cout << tab[i] << ", ";
        }
  return 0;
}
