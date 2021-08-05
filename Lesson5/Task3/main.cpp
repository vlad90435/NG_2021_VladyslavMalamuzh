#include <iostream>

using namespace std;

void inputData(char symbols[])
{
    cout << "Vvedite stroku:" << endl;
    cin.getline(symbols, 100);
}
int countWords(char symbols[])
{
    int words = 0;
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
    return words;
}
void outputData(char symbols[])
{
    cout << "Kolichestvo slov:" << countWords(symbols) << endl;
}

int main()
{
    char symbols[100];

    inputData(symbols);
    countWords(symbols);
    outputData(symbols);

}
