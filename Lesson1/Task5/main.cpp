#include <iostream>

using namespace std;

int main() {
    int first_number = 0;
    int second_number = 0;
    int action = 0;
    cout << "Vvedite pervoe chislo:\n";
    cin >> first_number;
    cout << "Vvedite vtoroe chislo:\n";
    cin >> second_number;
    cout << "Vvedite deistvie 1-4 :\n1 deistvie: summa chisel\n2 deistvie: raznitsa chisel \n3 deistvie umnojenie chisel \n4 destvie delenie chisel:"<<endl;
    cin >> action;
    cout << "Resultat: ";
    switch (action) {
        case 1:
            cout << first_number + second_number;
            break;
        case 2:
            cout  << first_number - second_number;
            break;
        case 3:
            cout << first_number * second_number;
            break;
        case 4:
            cout  << first_number / second_number;
            break;
        default:
            cout << "Vy vveli nepravilnoe deistvie!";
            break;
    }
    return 0;
}
