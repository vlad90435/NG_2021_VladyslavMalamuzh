#ifndef MANAGER_H
#define MANAGER_H
#include <cpu.h>
#include <motherboard.h>
#include <videocard.h>

class manager
{
public:
    manager();

    void addCPU(CPU newcpu) { cpu = newcpu; }
    CPU getCPU() { return cpu; }

    void addVideocard(videocard newvideocard) {m_videocard = newvideocard; }
    videocard getVideocard() { return m_videocard;}

    void addMotherBoard(motherboard newmotherboard) { m_motherboard = newmotherboard; }
    motherboard getMaterPlata() { return m_motherboard;}

    float priceAll();

    void getInfo();


private:
    CPU cpu;
    videocard m_videocard;
    motherboard m_motherboard;

};

#endif // MANAGER_H
