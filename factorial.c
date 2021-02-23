#include <stdio.h> 
int fact(int num)
{ 
    int r = 1, i; 
    for (i = 1; i <= num; i++) 
    {
        r =r* i; 
    }
    return r; 
}
int main() 
{
    int num, factorial;
    printf("Number = \n");
    scanf("%d", &num);
    factorial=fact(num);
    printf("factorial of %d=%d\n", num, factorial);
    return 0;
}

