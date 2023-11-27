#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int drukujMenu(){
    cout << "\nWitaj w programie szyfrujacym i deszyfrujacym wykorzystujacym szyfr Vigenerea\n";
    cout << "Menu:\n";
    cout << "1. Szyfruj\n";
    cout << "2. Deszyfruj\n";
    cout << "0. Wyjscie\n";
    int wybor = 0;
    cin >> wybor;
    return wybor;
}

int modulo26(int a){
    int wynik = a % 26;
    return wynik < 0 ? wynik + 26 : wynik;
}

string generujKlucz(string slowoKlucz, int dlugoscWiadomosci){
    int iterator = 0;
    while(slowoKlucz.length() < dlugoscWiadomosci){
        slowoKlucz += slowoKlucz[iterator];
        iterator++;
    }
    return slowoKlucz;
}



void szyfruj(){
    cout << "Wybrales opcje szyfrowania.\n";

    string konsument;
    getline(cin, konsument);

    cout << "Podaj wiadomosc do zaszyfrowania:\n";
    string wiadomosc;
    getline(cin, wiadomosc);

    transform(wiadomosc.begin(), wiadomosc.end(), wiadomosc.begin(), ::toupper);
    wiadomosc.erase(remove(wiadomosc.begin(), wiadomosc.end(), ' '), wiadomosc.end());

    cout << "Podaj klucz:\n";
    string slowoKlucz;
    cin >> slowoKlucz;
    transform(slowoKlucz.begin(), slowoKlucz.end(), slowoKlucz.begin(), ::toupper);

    cout << "Wskaz miejsce do zapisu pliku z szyfrogramem.\n";
    string sciezkaPlikSzyfrogram;
    cin >> sciezkaPlikSzyfrogram;

    string klucz = generujKlucz(slowoKlucz, wiadomosc.length());

    string szyfrogram;
    for (int i = 0; i < wiadomosc.length(); i++){
        int indeksLiteryWiadomosci = wiadomosc[i] - 65;
        int indeksLiteryKlucza = klucz[i] - 65;
        int indeksLiterySzyfrogramu = (indeksLiteryWiadomosci + indeksLiteryKlucza) % 26;
        char kodAsciiLiterySzyfrogramu = (char) (indeksLiterySzyfrogramu + 65);
        szyfrogram += kodAsciiLiterySzyfrogramu;
    }

    fstream plik_zapis;
    plik_zapis.open(sciezkaPlikSzyfrogram, fstream::out);
    if(plik_zapis.good() == true)
    {
        plik_zapis << szyfrogram;
        plik_zapis.close();
    }
}

void deszyfruj(){
    cout << "Wybrales opcje deszyfrowania.\n";
    cout << "Wskaz miejsce zapisu pliku z szyfrogramem.\n";
    string sciezkaPlikSzyfrogram;
    cin >> sciezkaPlikSzyfrogram;

    cout << "Podaj klucz:\n";
    string slowoKlucz;
    cin >> slowoKlucz;
    transform(slowoKlucz.begin(), slowoKlucz.end(), slowoKlucz.begin(), ::toupper);


    string szyfrogram;
    fstream plik_odczyt;
    plik_odczyt.open(sciezkaPlikSzyfrogram, fstream::in);
    if(plik_odczyt.good() == true)
    {
        getline(plik_odczyt, szyfrogram);
        plik_odczyt.close();
    }

    string klucz = generujKlucz(slowoKlucz, szyfrogram.length());

    string wiadomosc;
    for (int i = 0; i < szyfrogram.length(); i++){
        int indeksLiterySzyfrogramu = szyfrogram[i] - 65;
        int indeksLiteryKlucza = klucz[i] - 65;
        int indeksLiteryWiadomosci = modulo26(indeksLiterySzyfrogramu - indeksLiteryKlucza);
        char kodAsciiLiteryWiadomosci = (char) (indeksLiteryWiadomosci + 65);
        wiadomosc += kodAsciiLiteryWiadomosci;
    }

    cout << "\nWiadomosc: " << wiadomosc;
}


int main()
{

    while(true){
        int wyborUzytkownika = drukujMenu();
        switch(wyborUzytkownika){
            case 1:
                szyfruj();
                break;
            case 2:
                deszyfruj();
                break;
            case 0:
                return 0;
            default:
                cout << "Bledny wybor.\n";
        }
    }
   return 0;
}
