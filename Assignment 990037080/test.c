#include "mystring.h"
#include "myutils.h"
#include "bitmask.h"

int main() 
{ 
    int m = 5, o = 1;

    printf("\n%d",factor(3));
    printf("\n%d",isPalindromenum(1313));
    Primenumb(5);
    mini(10,20,30); 


    printf("\n%d",flipnum(23));
    printf("%d with %d-th bit Set: %d\n", m, o, setBitn(m, o)); 
    printf("%d with %d-th bit Cleared: %d\n", m, o, resetBitnumb(m, o));
    printf("\n string length\t%d", strlength("hellow")); 
    strcomp("hellow", "hi");
    strcopy("hi","hellow"); 
    printf("\n%s", strconcat("hi","hellow")); 
    return 0; 
}