#include <iostream>

using namespace std;

int main() {
    int pos = 0;
    int i = 0;
    int counter = 0;
    char line [100];
    int max = 0;

    cout << "Vvedite stroku: " << endl;
    cin.getline(line, 100);

    while (line[i] != 0)
    {
        i++;
        if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
        {
            counter++;
            if (counter > max)
            {
                max = counter;
                pos = i-max+1;
            }
        }
        else counter = 0;
    }
    max += pos;
    for (int j = pos; j < max; j++)
    {
        cout << line[j];
    }
}
