#include<stdio.h>
#include<string.h>

void mystr(char *input)
{
    int i,count;
    for(i=0; input[i]!='\0'; i++)
    {
        count++;
    }
    return count;
}
