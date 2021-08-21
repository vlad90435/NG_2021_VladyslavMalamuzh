#include "cpu.h"

CPU::CPU()
{
    m_hertz = 1;
    m_socket = "NOSOCKET";
    m_architect = "NOARCHITECT";
}

void CPU::setHertz(float hertz) {
    if(hertz <= 0)
    {
        cout << "Wow CPU hertz can`t be lower or equal 0" << endl;
        return;
    }
    m_hertz = hertz;
}

void CPU::showInfo()
{
    cout << "[CPU INFO]: " << endl;
    cout << "\tNAME: " << getName() << endl;
    cout << "\tPrice: " << getPrice() << endl;
    cout << "\tHertz: " << getHertz() << endl;
    cout << "\tSocket: " << getSocket() << endl;
    cout << "\tCompany: " << getCompany() << endl;

}
