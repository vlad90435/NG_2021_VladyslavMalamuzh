#include <iostream>

using namespace std;

int main()
{
    int salary=0;
    cout << "Skolko ti zarabativaesh $$$:\n";
    cin >> salary;
    if ( salary < 1000 ) {
        cout << "Rabotai bolshe,no ti molodec!";
    }
    if ( salary > 999 ) {
        if ( salary > 999999 ) {
            cout << "Ti millioner!";
        }
        if ( salary < 1000000 ) {
            cout << "Kruto!";
        }
    }
}
