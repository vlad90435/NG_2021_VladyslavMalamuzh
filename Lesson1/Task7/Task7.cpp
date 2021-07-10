#include <iostream>

using namespace std;

int main()
{
    int storage=8000;
    int buy=0;
    cout << "Programa po upgraidu serverogo nakopitelya:" << endl;
    cout << "0. Nichego ne hochu pokupat" << endl;
    cout << "1. HDD Western Digital 4 TB" << endl;
    cout << "2. HDD Toshiba 2 TB" << endl;
    cout << "3. HDD Seagate 6 TB" << endl;
    cout << "Vyberite shachala kakoy HDD vy hotite kupit 0-3" << endl;
    cin >> buy;
    switch(buy){
        case 0:
            cout << "Vy vybrali nichego ne pokupat" << endl;
            break;
        case 1:
            storage+=4000;
            cout << "Vy vibrali:HDD Western Digital 4 TB" << endl;
            break;
        case 2:
            storage+=2000;
            cout << "Vy vibrali:HDD Toshiba 2 TB" << endl;
            break;
        case 3:
            storage+=6000;
            cout << "Vy vibrali:HDD Seagate 6 TB" << endl;
            break;
        default:
            cout << "Vy velli nepravilnoe deistvie!" << endl;
            break;
            return 0;
    }
    cout << "0. Nichego ne hochu pokupat" << endl;
    cout << "1. SSD Kingston 256 GB" << endl;
    cout << "2. SSD nvme Samsung 1 TB" << endl;
    cout << "3. SSD Intel 64 GB" << endl;
    cout << "Vvedite kakoy ssd vi hotite kupit:0-3" << endl;
    cin >> buy;
    switch(buy){
        case 0:
            cout << "Vy vybrali ne pokupat ssd" << endl;
            break;
        case 1:
            storage+=256;
            cout << "Vy vibrali:SSD Kingston 256 GB" << endl;
            break;
        case 2:
            storage+=1000;
            cout << "Vy vibrali:SSD nvme Samsung 1 TB" << endl;
            break;
        case 3:
            storage+=64;
            cout << "Vy vibrali:SSD Intel 64 GB" << endl;
            break;
        default:
            cout << "Vy velli nepravilnoe deistvie!" << endl;
            break;
            return 0;
    }
    cout << "Vasha pamyat=" << storage << "GB";
}
