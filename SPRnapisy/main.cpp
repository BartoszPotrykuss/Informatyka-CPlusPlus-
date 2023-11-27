//Bartosz Potrykus
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string napis = "Przygotowanie to klucz do sukcesu";
    cout << "Dlugosc napisu: " << napis.size() << " liter" << endl;
    for (int i = 0; i < 14; i++)
    {
        cout << napis[i] << endl;
    }
    char litera;
    int ile = 0;
    cout << "Podaj litere" << endl;
    cin >> litera;
    for (int i = 0; i < napis.size(); i++)
    {
        if (napis[i] == litera) ile++;
    }
    cout << "Litera " << litera << " wystepuje w zdaniu " << ile << " razy" << endl;
    return 0;
}
