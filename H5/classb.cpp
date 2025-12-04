#include "classb.h"
#include <string>

std::string ClassB::getInfo() const
{
    return info;
}

void ClassB::setInfo(const std::string &newInfo)
{
    info = newInfo;
}

ClassB::ClassB() {}
