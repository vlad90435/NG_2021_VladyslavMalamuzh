#include <iostream>

using namespace std;

bool counStartOfWords(char symbols[],int i,bool firstCondition)
{
    firstCondition = (!(symbols[i+1] >= 'A' && symbols[i+1] <= 'Z') && !(symbols[i+1] >= 'a' && symbols[i+1] <= 'z'));
    return firstCondition;
}

bool countSymbolsOfWords(char symbols[],int i,bool secondCondition)
{
    secondCondition = ((symbols[i] >= 'A' && symbols[i] <= 'Z') || (symbols[i] >= 'a' && symbols[i] <= 'z'));
    return secondCondition;
}

int countWords(bool firstCondition,bool secondCondition,int words)
{
    if(firstCondition && secondCondition)
    {
        words++;
    }
    return words;
}

int main()
{
    char symbols[100];
    int words = 0;
    bool firstCondition;
    bool secondCondition;

    cout << "Vvedite stroku:" << endl;
    cin.getline(symbols, 100);

    for (int i = 0; symbols[i] != 0; i++)
    {
        firstCondition = countSymbolsOfWords(symbols,i,firstCondition);
        secondCondition = counStartOfWords(symbols,i,secondCondition);
        words = countWords(firstCondition,secondCondition,words);
    }
    cout << words;
}
