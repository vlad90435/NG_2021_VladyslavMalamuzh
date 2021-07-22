#include <iostream>

using namespace std;

int main()
{
    int arr[20];
    int index = 0;
    int line = 0;

    cout << "Vvedite 20 chisel: " << endl;
    cout << "Dlya vihoda vvedite '0'" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << "[" << i+1 << "]:" << endl;
        cin >> arr[i];
        if (arr[i] == 0)
        {
            break;
        }
        if (index < arr[i])
        {
            index = arr[i];
        }
        line++;
    }
    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < (index - arr[i])/2; j++)
        {
            cout << " ";
        }
        for(int k = 0; k < arr[i]; k++)
        {
            cout << "*";
        }
    cout << endl;
    }
}

