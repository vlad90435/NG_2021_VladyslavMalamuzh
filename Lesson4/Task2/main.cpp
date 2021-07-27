#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int max = 0;
    string line;
    string biggest_word;

    getline(cin, line); //We get the whole string
    stringstream str(line); //Getting the object from the string
    while (str >> biggest_word) // Will loop as long as the input data are valid
    {
        if (biggest_word.size() > max) //Our condition: as long as the word size > max
        {
            max = biggest_word.size();
            line = biggest_word;
        }
    }
    cout << line << endl;
}
