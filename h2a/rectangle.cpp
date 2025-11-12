#include "rectangle.h"

rectangle::rectangle() {}

double rectangle::getArea()
{
    return width * height;
}

double rectangle::getCircum()
{
    return 2*(width + height);
}

void rectangle::setWidth(double w)
{
    width = w;
}

void rectangle::setHeight(double h)
{
    height = h;
}
