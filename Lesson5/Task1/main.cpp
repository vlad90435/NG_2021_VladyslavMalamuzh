#include <iostream>

using namespace std;

int inputFunc()
{
    int size = 0;
    int star = 1;
    cout << "Enter size of Christmas tree: ";
    cin >> size;

    return size;
}

void drawSpace(int size,int star)
{
    for (int space_cout = 0; space_cout <= size-star; space_cout++)
    {
        cout << " ";
    }
}

void drawStar(int size,int star)
{
   for (int star_cout = 0; star_cout < star*2-1; star_cout++)
    {
        cout << "*";
    }
}

void stumpOfTree(int size)
{
    for (int last_star = 0; last_star <= size-1; last_star++)
    {
        cout << " ";
    }
    cout << "*";
}

void drawTree(int size)
{
    for (int star = 1; star <= size; star++)
    {
        drawSpace(size,star);
        drawStar(size,star);
        cout << endl;
    }
    stumpOfTree(size);
}


int main()
{
    drawTree(inputFunc());

}
