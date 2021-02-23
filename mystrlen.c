#include<stdio.h>

int length(char *input)
{
    int i,count;
    for(i=0; input[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char input[100]
    int count = 0, i;
    printf("enter string:");
    scanf("%s",input);
    count = length(input);
    printf("\n length =%d", count);
    return 0;
}