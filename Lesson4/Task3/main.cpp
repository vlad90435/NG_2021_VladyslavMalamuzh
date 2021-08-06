#include <iostream>

using namespace std;

int main()
{
    
    char str[100];
    char small_letter = 0;
    
    cout << "Vvedite stroku,kotoruyu hotite preobrazovat v verhniy registr:" << endl;
    cin.getline(str, 100);


    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i]<='z' && str[i]>='a')
        {
            small_letter=str[i];
            cout << (char) (small_letter-=32);
        }
        else
        {
            cout << str[i];    
        }
       
    }
}