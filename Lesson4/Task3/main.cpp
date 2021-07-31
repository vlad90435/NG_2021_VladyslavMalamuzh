#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    char str[100];

    cin.getline(str, 100);
    while(str[i] != 0)
    {
        if(str[i]<='z' && str[i]>='a')
        {
            str[i]+='A'-'a';
        }
        cout << str[i];
        i++;
    }
}
    // Another method to do this task
    /*for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]<='z' && str[i]>='a')
        {
            str[i]+='A'-'a';
        }
        cout << str[i];
    }
    */




