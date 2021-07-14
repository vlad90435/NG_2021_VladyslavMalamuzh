#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    cout << "Enter size: ";
    cin >> size;
    for (int new_line = 0; new_line <= size; new_line++)
    { 
        for (int star_output = 0; star_output < new_line; star_output++)
        { 
            cout << "*";
        }
        cout << endl; 
    }
    cout << endl;
    for (int star_output = size; star_output > 0; star_output--)
    {
        for (int new_line = 0; star_output > new_line; new_line++)
        {
            cout << "*";
        }
        cout << endl; 
    }
    cout << endl;
    for (int star_output = size; star_output > 0; star_output--)
    { 
        for (int space_output = 0; space_output < size - star_output; space_output++)
        { 
            cout << " "; 
        }
        for (int new_line = 0; star_output > new_line; new_line++)
        { 
            cout << "*";
        }
        cout << endl; 
    }
    for (int star_output = 0; star_output <= size; star_output++)
    { 
        for (int space_output = 0; space_output < size - star_output; space_output++)
        {
            cout << " ";
        }
        for (int new_line = 0; star_output > new_line; new_line++) 
            cout << "*";
        cout << endl;
    }
}

