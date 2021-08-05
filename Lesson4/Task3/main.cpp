#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    char str[100];

    cout << "Vvedite stroku,kotoruyu hotite preobrazovat v verhniy registr:" << endl;
    cin.getline(str, 100);


    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]<='z' && str[i]>='a')
        {
            cout << (char) (str[i]-32);
        }
        if(!(str[i+1] >= 'A' && str[i+1] <= 'Z') && !(str[i+1] >= 'a' && str[i+1] <= 'z'))
        {
            cout << ' ';
        }
    }
}
