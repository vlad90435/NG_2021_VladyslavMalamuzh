#include <iostream>

using namespace std;

int main()
{
    int arr [5];
    int index = 0;
    cout << "Vvedite 5 chisel: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "[" << i + 1 << "]:" << endl;
        cin >> arr[i];
        if (index < arr[i])
        {
            index = arr[i];
        }
    }
    for (int k = 0; k < index; k++)
    {
        for (int i = 0; i < 5; i++)
        {
            if(arr[i] > k)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
