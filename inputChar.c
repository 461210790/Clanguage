#include<stdio.h>
int main(int argc, char const *argv[])
{
    int charNumber=0;
    for(char c=0;(c=getchar())!='\n';)
    {
        printf("%c\t",c);
        charNumber++;
        if(charNumber==5)
        {
            printf("\n");
            charNumber=0;
        }
    }
    return 0;
}
