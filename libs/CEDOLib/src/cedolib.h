#ifndef CEDOLIB_H
#define CEDOLIB_H

#include "CEDOLib_global.h"

class CEDOLIB_EXPORT CEDOLib
{
public:
    explicit CEDOLib();
    virtual ~CEDOLib();
    double addition(double a, double b) const;
    double substraction(double a, double b) const;
    double multiplication(double a, double b) const;
    double division(double a, double b) const;
};

#endif // CEDOLIB_H
