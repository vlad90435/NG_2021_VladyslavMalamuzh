#include "videocard.h"

videocard::videocard()
{
    m_frequency = 1;
    m_slot = 1;
}

void videocard::setFrequency(int frequency)
{
    if(frequency <=0)
    {
        cout << "Error. Frequency can`t be lower or equal 0" << endl;
        return;
    }
    m_frequency=frequency;
}
