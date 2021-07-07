#include <iostream>
using namespace std;

int main()
{
    int salary=0;
    cout << "Skolko ti zarabativaesh $$$ ?:\n";
    cin >> salary;
    if (salary>1000){
        if (salary<1000000){
            cout << "Kruto!";
        }
    }
    if (salary<1000){
        cout << "Rabotai boslhe!,no ti molodec";
    }
    if (salary>1000000){
        cout << "Da ti millioner!";
    }
}
