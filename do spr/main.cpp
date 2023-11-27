#include <iostream>

using namespace std;

int main()
{

    string napis;
    cout << "Dodaj napis: " << endl;
    cin >> napis;
    cout << "Dlugosc twojego napisu: " << napis.size() << endl;
    char litera;
    int ile = 0;
    cout << "Jake litere chcesz sprawdzic?" << endl;
    cin >> litera;
    for (int i = 0; i < napis.size(); i++)
    {
        if (napis[i] == litera) ile++;
    }
    cout << "Twoja litera wystepuje " << ile << " razy" << endl;

        string t = ""; // tekst
    char z; // pojedynczy znak
    int ile = 0;

    cout << "Podaj wyraz: " << endl;
    cin >> t;
    cout << "Podaj literke ktora chcesz sprawdzic czy znajduje sie w twoim wyrazie: " << endl;
    cin >> z;
    string szyfr = "";
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == z)
            ile++;

    }
    cout << "Wyraz: " + t << endl;
    cout << "Litera " << z << " wystepuje: " << ile << " razy." << endl;
    for (int i = 0; i < t.size(); i += 2) {
        szyfr = szyfr + t[i + 1] + t[i];

    }
    cout << szyfr << endl;
    
    string napis;

    cout << "Podaj napis: ";
    cin >> napis;

    int dlugosc = napis.length();

    for (int i = 0; i < dlugosc / 2; i++) {
        char temp = napis[i];
        napis[i] = napis[dlugosc - i - 1];
        napis[dlugosc - i - 1] = temp;
    }

    cout << "Przestawiony napis: " << napis << endl;
    // isalpha(znak) czy jest liter�
    return 0;
}
