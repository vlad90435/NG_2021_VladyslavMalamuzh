#ifndef CPU_H
#define CPU_H
#include <component.h>

class CPU : public Component
{
public:
    CPU();

    void setHertz(float hertz);
    float getHertz() {return m_hertz;}

    void setSocket(string socket) {m_socket = socket;}
    string getSocket() {return m_socket;}

    void setArchitect(string architect) {m_architect = architect;}
    string getArchitect() {return m_architect;}

    void showInfo();

private:
    float m_hertz;
    string m_socket;
    string m_architect;

};

#endif // CPU_H
