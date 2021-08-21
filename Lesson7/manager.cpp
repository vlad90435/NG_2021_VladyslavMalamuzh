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
    cout << "[CPU INFO]: " << endl << "\tNAME: " << cpu.getName() << endl << "\tCOMPANY: " << cpu.getCompany() << endl
         << "\tARCHITECT: " << cpu.getArchitect() << endl << "\tHERTZ: " << cpu.getHertz() << endl
         <<"\tPRICE: "<< cpu.getPrice()<< endl << "\tSOCKET: " << cpu.getSocket() << endl;
    cout << "[VIDEOCARD INFO]: " << endl << "\tNAME: " << m_videocard.getName() << endl << "\tPRICE: " << m_videocard.getPrice() << endl
         << "\tFREQUENCY: " << m_videocard.getFrequency() << endl << "\tSLOT: " << m_videocard.getSlot() << endl;
    cout << "[MOTHERBOARD INFO]: " << endl << "\tNAME: " << m_motherboard.getName() << endl <<"\tCOMPANY: " << m_motherboard.getCompany() << endl
         << "\tVIDEOSLOT: " << m_motherboard.getVideoSlot() << endl << "\tMEMORYSLOT: " << m_motherboard.getMemorySlot() << endl
         << "\tPRICE: "<< m_motherboard.getPrice() << endl << "\tSOCKET: " << m_motherboard.getSocket() << endl;
    cout << "Price for all: " << priceAll() << " UAH" << endl;
}

