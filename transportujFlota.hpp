#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    if (towar == 0) { return 0; }

    Stocznia stocznia{};
    unsigned int liczba_zaglowcow = 0;
    unsigned int x = 0;

    while (x < towar)
    {
        Statek* s1 = stocznia();
        unsigned int y = s1->transportuj();
        x = x + y;
        if (dynamic_cast<Zaglowiec*>(s1))
        {
            ++liczba_zaglowcow;
        }
        delete s1;
    }
    return liczba_zaglowcow;
}
