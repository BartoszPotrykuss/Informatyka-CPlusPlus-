#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "biologia";
    string s2 = "molekularna";
    string s3 = s1 + s2;
    cout << s1 + " " + s2 << endl;

    // wyznaczanie d³ugoœci napisu
    cout << s3.size() << endl;
    cout << s3.length() << endl;

    // size pokazuje ile jest elementów w dowolnym kontenerze, a length zwraca liczbê znaków tylko do stringów

    // wyœwietlanie konkretnej litery ze zbioru

    cout << s1[5] << endl;

    // wyœwietlenie elementów tablicy litera po literze, pionowo


    for (int i = 0; i < s1.size(); i++)
    {
        cout << s1[i] << endl;
    }

    return 0;
}
