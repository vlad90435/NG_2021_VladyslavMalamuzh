#include <iostream>

using namespace std;

int main()
{
    int oreshki,shishki,sobrano,oreshkov_shiske;
    oreshki=shishki=sobrano=oreshkov_shiske=0;
    cout << "Skolko nuzhno oreshkov:\n";
    cin >> oreshki;
    cout << "Skolko oreshkov v shiske:\n";
    cin >> oreshkov_shiske;
    cout << "Skolko ona sobrala:";
    cin >> shishki;
    sobrano=oreshkov_shiske*shishki;
    if(sobrano<oreshki){
        cout << "Pechalnaya situatsiya";

        }
        else{
            cout <<"Ogo mayesh garno shishok";
        }
    }



