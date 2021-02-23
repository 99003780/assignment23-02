#include <stdio.h>
#include <string.h>
void mystrcat(char *input1,char *input2)
{
    strcat(input1,input2);
}

int main() 
{
    char input1[100],input2[210];
    printf("string1: ");
    scanf("%s", input1);
    printf("string2: ");
    scanf("%s", input2);
    mystrcat(input1,input2);
    printf("\nconcat string is = %s", input1);
   return 0;
}