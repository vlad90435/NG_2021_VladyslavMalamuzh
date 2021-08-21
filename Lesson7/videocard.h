#ifndef VIDEOCARD_H
#define VIDEOCARD_H
#include <component.h>

class videocard : public Component
{
public:
    videocard();

    void setFrequency(int frequency);
    int getFrequency() {return m_frequency;}

    void setSlot(string slot) {m_slot = slot;}
    string getSlot() {return m_slot;}

private:
    int m_frequency;
    string m_slot;

};

#endif // VIDEOCARD_H
