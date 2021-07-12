#include <iostream>

using namespace std;

int main()
{
    int square_size=0;
    cout << "Enter square size :" << endl;
    cin >> square_size;
    for(int i=0;square_size>i;i++){
        for(int j=0;square_size>j;j++){
        cout << "*";
        }
    cout << "\n";
    }
}
