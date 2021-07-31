#include <iostream>

using namespace std;

int main()
{
   char symbols[100];
   int words = 0;
   int i = 0;


   cout << "Vvedite stroku:" << endl;
   cin.getline(symbols, 100);

   for (int i = 0; symbols[i] != 0; i++)
    {
        if((symbols[i] >= 'A' && symbols[i] <= 'Z') || (symbols[i] >= 'a' && symbols[i] <= 'z'))
        {
            if(!(symbols[i+1] >= 'A' && symbols[i+1] <= 'Z') && !(symbols[i+1] >= 'a' && symbols[i+1] <= 'z'))
            {
                words++;
            }
        }
    }
    cout << words;
}
