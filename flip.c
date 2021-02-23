#include <stdio.h> 
int flip(int *am, int *pm)
{
    int temp = *am;
    *am = *pm;
    *pm = temp;
}

int main()
{
    int l,m;
    printf("l=");
    scanf("%d", &l);
    printf("m=");
    scanf("%d", &m);
    flip (&l, &m);
    printf("\n after action: l=%d, m=%d", l,m);
    return 0;
}