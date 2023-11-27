#include <iostream>

using namespace std;

int main()
{
    char tab[] = {'e', 'j', 'd', 'o'};
    cout << sizeof(tab) << endl;
    cout << tab[sizeof(tab)-1] << endl;
    return 0;
}
