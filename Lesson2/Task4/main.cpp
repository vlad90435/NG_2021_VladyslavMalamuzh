#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    cout << "Enter size: ";
    cin >> size;
    for (int i = 0; i <= size; i++){ // the cycle started with 0
        for (int j = 0; j < i; j++){ // The cycle started with the stage when i=1
             cout << "*";
        }
        cout << endl; // condition is satisfied as long as i<=size
    }
    cout << endl;
    for (int i = size; i > 0; i--){
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl; // is always performed until i>0
    }
    cout << endl;
    for (int i = size; i > 0; i--){ // i=3 and runs until i is less than 0
        for (int j = 0; j < size - i; j++){ // j=0 and will be fulfilled from the moment when i=2
            cout << " "; // will output a blank starts after the first iteration of i
        }
        for (int k = 0; k < i; k++){ // is always performed until i is less than k
        cout << "*";
    }
        cout << endl; // is always true as long as i>0
    }
    cout << endl;
    for (int i = 0; i <= size; i++){ // the cycle started with 0
        for (int j = 0; j < size - i; j++){ 
            cout << " ";
            /* will print a blank, until j < size -1.
            on the first iteration of the cycle,the number of gaps will be maximum,then it will gradually decrease
            */
        }
        for (int k = 0; k < i; k++) // is always performed until i is less than k
        cout << "*";
        cout << endl;
    }
}

