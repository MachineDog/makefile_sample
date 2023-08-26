#include <random>

#include "myrandom.h"

int RandomNum::GenInt(int end, int start)
{
    return rand();
}

int RandomNum::GenInt(int end)
{
    return RandomNum::GenInt(0, end);
}
