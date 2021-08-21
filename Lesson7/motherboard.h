#ifndef MOTHERBOARD_H
#define MOTHERBOARD_H
#include <component.h>

class motherboard : public Component
{
public:
    motherboard();

    void setSocket(string socket) {m_socket = socket;}
    string getSocket() {return m_socket;}

    void setVideoSlot(string videoslot) {m_videoslot = videoslot;}
    string getVideoSlot() {return m_videoslot;}

    void setMemorySlot(string memoryslot) {m_memoryslot = memoryslot;}
    string getMemorySlot() {return m_memoryslot;}

private:
     string m_socket;
     string m_videoslot;
     string m_memoryslot;


};

#endif // MOTHERBOARD_H
