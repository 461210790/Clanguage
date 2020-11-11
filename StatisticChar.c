#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int uppercaseCount = 0, lowercase = 0, digit = 0, otherChars = 0;
    for (char c; (c = getchar())!='\n';)
    {
        if (c >= 'a' && c <= 'z') lowercase++;
        else if (c >= 'A' && c <= 'Z')uppercaseCount++;
        else if (c >= '0' && c <= '9')digit++;
        else otherChars++;
    }
    printf("uppercaseCount have %d \n", uppercaseCount);
    printf("小写 have %d \n", lowercase);
    printf("digit have %d \n", digit);
    printf("otherChars have %d \n", otherChars);
    system("pause");
    return 0;
}
