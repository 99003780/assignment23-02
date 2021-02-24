#include "bitmask.h"

int resetBitnumb(int m, int o) 
{
return (m & (~(1 << (o - 1)))); 
}