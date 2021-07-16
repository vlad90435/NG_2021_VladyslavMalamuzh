#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    cout << "Enter size of Christmas tree: ";
    cin >> size;
    for (int star = 1; star <= size; star++)
    {
        for (int space_cout = 0; space_cout <= size-star; space_cout++)
        {
            cout << " ";
        }
        for (int star_cout = 0; star_cout < star*2-1; star_cout++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int last_star = 0; last_star <= size-1; last_star++)
    {
        cout << " ";
    }
    cout << "*";
}
