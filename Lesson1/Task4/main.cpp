#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int salary=0;
    string words=",no ti molodec";
    cout << "Skolko ti zarabativaesh $$$ ?:\n";
    cin >> salary;
    switch(salary){
    case 0 ... 999:
        cout <<"Rabotai bolshe!"<<words;
        break;
    case 1000 ... 999999:
        cout <<"Kruto"<<words;
        break;
    case 1000000 ... 1000000000:
        cout <<"Da ti millioner";
        break;
    }
}
