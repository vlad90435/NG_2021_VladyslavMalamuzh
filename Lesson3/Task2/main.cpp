#include <iostream>

using namespace std;

int main()
{
   int ATM [10] = {0,0,0,0,0,0,0,0,0,0};
   int choice = 0;
   int card = 0;
   int amount = 0;
   int cash = 0;

   cout << "Programma bankomat. Najmite '1',chtobi prodoljit` :" << endl;
   cin >> choice;
   while (choice == 1)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << ATM[i] << " ";
        }
        cout << endl;
        cout << "Na kakuyu karto4ku polojit dengi? :" << endl;
        cin >> card;
        cout << "Skolko?" << endl;
        cin >> cash;
        ATM[card - 1] += cash;
        amount += cash;
        cout << endl;
        cout << "Summa:" << amount << endl;
   }
}
