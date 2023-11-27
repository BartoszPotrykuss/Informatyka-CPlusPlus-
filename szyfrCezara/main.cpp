#include <iostream>

using namespace std;

int main()
{

    int klucz = 3 % 26;
    int alfabet = 26;
    string tekst = "INFORMATYKA JEST SUPER";

for (int i = 0; i < tekst.length(); i++) {
    if (tekst[i] != ' ')  { //czy jest liter¹
        if (tekst[i] + klucz > 'Z') { //czy nie wykracza po za alfabet
            tekst[i] = tekst[i] + klucz - alfabet; //odejmij alfabet
        } else {
            tekst[i] = tekst[i] + klucz; // przesuwanie litery o 3 miejsce w alfabecie
        }
    }
}

cout << tekst << endl;

        int klucz_szyfrujacy = 15 % 26;
    int alfabet1 = 26;
    string tekst1 = "PROGRAMOWANIE";

for (int i = 0; i < tekst1.length(); i++) {
    if (tekst1[i] != ' ')  { //czy jest liter¹
        if (tekst1[i] + klucz_szyfrujacy > 'Z') { //czy nie wykracza po za alfabet
            tekst1[i] = tekst1[i] + klucz_szyfrujacy - alfabet1; //odejmij alfabet
        } else {
            tekst1[i] = tekst1[i] + klucz_szyfrujacy; // przesuwanie litery o 15 miejsc w alfabecie
        }
    }
}

cout << tekst1 << endl;

for (int i = 0; i < tekst1.length(); i++) {
    if (tekst1[i] != ' ')  { //czy jest liter¹
        if (tekst1[i] - klucz_szyfrujacy < 'A') { //czy nie wykracza po za alfabet
            tekst1[i] = tekst1[i] - klucz_szyfrujacy + alfabet1; //odejmij alfabet
        } else {
            tekst1[i] = tekst1[i] - klucz_szyfrujacy; // przesuwanie litery o 15 miejsc w alfabecie
        }
    }
}
cout << tekst1;
    return 0;
}
