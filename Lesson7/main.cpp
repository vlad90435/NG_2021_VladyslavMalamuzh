#include <manager.h>

using namespace std;



int main()
{
    CPU AMD;
    AMD.setName("Ryzen 5");
    AMD.setCompany("AMD");
    AMD.setArchitect("x86");
    AMD.setHertz(3200);
    AMD.setSocket("1156");
    AMD.setPrice(1500);

    videocard video;
    video.setName("GTX 1050TI");
    video.setCompany("NVIDIA");
    video.setFrequency(4000);
    video.setPrice(4000);
    video.setSlot("PCI");

    motherboard mother;
    mother.setName("A320M");
    mother.setCompany("Asus");
    mother.setMemorySlot("DDR4");
    mother.setVideoSlot("PCI-E");
    mother.setSocket("AMD A320");
    mother.setPrice(1500);

    manager manag;
    manag.addCPU(AMD);
    manag.addMotherBoard(mother);
    manag.addVideocard(video);
    manag.getInfo();
    manag.priceAll();



}
