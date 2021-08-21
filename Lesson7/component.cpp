#include "component.h"

Component::Component()
{
    m_price = 1;
    m_name = "NONAME";
    m_company = "NOCOMPANY";
}

void Component::setPrice(float price) {
    if(price <= 0)
    {
        cout << "Price can`t be lower or equal 0" << endl;
        return;
    }
    m_price = price;

}
