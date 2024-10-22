#include "tugas1head.h"

void temperature (double suhu)
{
    double r,f,k;
    r = suhu * 0.8;
    f = suhu * 1.8 + 32;
    k = suhu + 273.15;
    std::cout << r << " R " << endl ;
    std:: cout << f << " F " << endl ;
    std:: cout << k << " K." ;
}
