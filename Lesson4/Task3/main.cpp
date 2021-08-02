#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    char str[100];

    cin.getline(str, 100);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]<='z' && str[i]>='a')
        {
            str[i] -= 32;
        }
        cout << str[i];
    }
}

