#include "manager.h"

manager::manager()
{

}

float manager::priceAll()
{
   return cpu.getPrice() + m_videocard.getPrice() + m_motherboard.getPrice();
}


void manager::getInfo()
{
    cout << "[CPU INFO]: \n " << "\tNAME: " << cpu.getName() << "\n" << "\tCOMPANY: " << cpu.getCompany() << "\n"
         << "\tARCHITECT: " << cpu.getArchitect() << "\n" << "\tHERTZ: " << cpu.getHertz() << "\n"
         << "\tPRICE: " << cpu.getPrice() << "\n" << "\tSOCKET: " << cpu.getSocket() << "\n";

    cout << "[VIDEOCARD INFO]: \n" << "\tNAME: " << m_videocard.getName() << "\n" << "\tPRICE: " << m_videocard.getPrice() << "\n"
         << "\tFREQUENCY: " << m_videocard.getFrequency() << "\n" << "\tSLOT: " << m_videocard.getSlot() << "\n";
    
    cout << "[MOTHERBOARD INFO]: \n" << "\tNAME: " << m_motherboard.getName() << "\n" << "\tCOMPANY: " << m_motherboard.getCompany() << "\n"
         << "\tVIDEOSLOT: " << m_motherboard.getVideoSlot() << "\n" << "\tMEMORYSLOT: " << m_motherboard.getMemorySlot() << "\n"
         << "\tPRICE: " << m_motherboard.getPrice() << "\n" << "\tSOCKET: " << m_motherboard.getSocket() << "\n";

    cout << "Price for all: " << priceAll() << " UAH" << "\n";
}

