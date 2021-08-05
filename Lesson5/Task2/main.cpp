#include <iostream>

using namespace std;

void ATM_output(int ATM[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << ATM[i] << " ";
    }

    cout << endl;
}

int checkCard(int card)
{
    cout << "Na kakuyu karto4ku polojit dengi? :" << endl;
    cin >> card;

    return card;
}

int amountMoney(int cash)
{
    cout << "Skolko?" << endl;
    cin >> cash;

    return cash;
}

int sumMoney(int cash,int amount)
{
    amount += cash;

    cout << endl;

    return amount;
}

void sumMoneyOutput(int amount)
{
    cout << "Summa:" << amount << endl;
}


int main()
{
    int ATM [10] = {0,0,0,0,0,0,0,0,0,0};
    int amount = 0;
    int cash = 0;
    int card = 0;

    cout << "Programma bankomat: " << endl;

    while (true)
    {
        ATM_output(ATM);
        card = checkCard(card);
        cash = amountMoney(cash);
        ATM[card - 1] += cash;
        amount = sumMoney(cash,amount);
        sumMoneyOutput(amount);
    }
}


