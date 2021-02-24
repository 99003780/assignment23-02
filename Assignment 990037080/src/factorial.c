#include "myutils.h"
int factor(unsigned int n) 
{ 
    int fact = 1, i; 
    for (i =2; i <= n; i++) 
        fact *= i; 
    return fact; 
}