#include <iostream>

using namespace std;

int main()
{
    char str[100];

    cout << "Vvedite stroku,kotoruyu hotite preobrazovat v verhniy registr:" << endl;
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]<='z' && str[i]>='a')
        {
            cout << (char) (str[i]-=32);
        }
        else
        {
            cout << str[i];
        }
    }
}
