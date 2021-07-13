#include <iostream>

using namespace std;

int main()
{
    int square_size=0;
    cout << "Enter square size :" << endl;
    cin >> square_size;
    for (int i=0; i < square_size; i++){
        for (int j=0; j < square_size; j++){
            cout << "*";
        }
        cout << endl;
    }
}
