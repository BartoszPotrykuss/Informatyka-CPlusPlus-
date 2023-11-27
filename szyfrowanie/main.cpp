#include <iostream>
#include <string>
using namespace std;

int main()
{
    //rzutowanie, aby otrzymaæ kod ASCII danego znaku
    cout << int ('a') << endl;
    cout << "Imie w kodzie ASCII: " << endl;
    string imie = "Bartek";
    for (int i = 0; i < imie.size(); i++)
    {
        cout << int(imie[i]) << endl;
    }

    //rzutowanie na typ char
    cout << char(97) << endl;
    cout << char(98) << endl;
    cout << char(122) << endl;

    //wyswietlenie kolejnych znakow odpowiadajacych kodom ASCII
    for (int i = 33; i < 38; i++)
    {
        cout << i << " " << (char)i << endl;
    }

    // zamiana liter z funkcja swap
    string napis = "szyfrowanie";
    for (int i = 0; i < napis.size(); i+=2)
    {
        swap(napis[i], napis[i+1]);
    }
    cout << napis << endl;

    // zamiana liter bez funkcji swap
    string s = "szyfrowanie";
    for (int i = 0; i < s.size(); i+=2)
    {
        char znak = s[i];
        s[i] = s[i+1];
        s[i+1] = znak;
    }
    cout << s << endl;
    return 0;
}
