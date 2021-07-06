#include <iostream>

using namespace std;

int main() {
    int first_number = 0;
    int second_number = 0;
    int result = 0;
    int action = 0;
    cout << "Vvedite pervoe chislo:\n";
    cin >> first_number;
    cout << "Vvedite vtoroe chislo:\n";
    cin >> second_number;
    cout << "Vvedite deistvie:\n";
    cin >> action;
    if (action > 4) 
	{
        cout << "Vvedite chislo ot 1 do 4\n";
        cin >> action;
    }
    switch (action) {
    case 1:
        result = first_number + second_number;
        cout << "Resultat:" << result;
        break;
    case 2:
        result = first_number - second_number;
        cout << "Resultat:" << result;
        break;
    case 3:
        result = first_number * second_number;
        cout << "Resultat:" << result;
        break;
    case 4:
        result = first_number / second_number;
        cout << "Resultat:" << result;
        break;
    }
}