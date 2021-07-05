#include <iostream>

using namespace std;

int main()
{
     int first_number,second_number,result,diya;
    first_number=second_number=result=0;
    cout << "Vvedite pervoe chislo:\n";
    cin >> first_number;
    cout << "Vvedite vtoroe chislo:\n";
    cin >> second_number;
    cout << "Vvedite deistvie:\n";
    cin >> diya;
    if (diya >4){
        cout <<"Vvedite chislo ot 1 do 4\n";
        cin >> diya;
    }
    switch (diya){
    case 1:
        result=first_number+second_number;
        cout << "Resultat:" << result;
        break;
    case 2:
        result=first_number-second_number;
        cout << "Resultat:" << result;
        break;
        case 3:
        result=first_number*second_number;
        cout << "Resultat:" << result;
        break;
        case 4:
        result=first_number/second_number;
        cout << "Resultat:" << result;
        break;
    }


}
