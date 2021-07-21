#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    short arr[10];
    short school = 0;
    bool school_search = 0;

    for (int school_fill = 0; school_fill < 10; school_fill++)
    {
        cout << "Школа № [" << school_fill + 1 << "]:" << endl;
        cin >> arr[school_fill];
    }
    cout << "Введите номер вашей школы <3 :" << endl;
    cin >> school;
    for (int school_find = 0; school_find < 10; school_find++)
    {
        if (arr[school_find] == school)
        {
            school_search = true;
        }
    }
    if (school_search == true)
    {
        cout << "Я знаю эту школу <3: " << endl;
    }
    else
    {
        cout << "Я не знаю эту школу :( " << endl;
    }
}

