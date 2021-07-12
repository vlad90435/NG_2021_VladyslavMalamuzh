#include <iostream>

using namespace std;

int main()
{
    int star=0;
    cout << "Vvedite skolko hotite videt` zvezdochek" << endl;
    cin >> star;
    for(int i=0;star>i;i++){
        cout << "*";
    }
}
