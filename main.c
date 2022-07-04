#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a = 60; //0011 1100
    unsigned int b = 13; //0000 1101
    int result = 0;

    result = a & b; //0000 1100 = 12
    result = a | b; //0011 1101 = 61
    result = ~a; //1100 0011 = -61
    result = a ^ b; //0011 0001 = 49
    result = a << 2; //0011 1100 -> 1111 0000 = 240
    result = a >> 2; //0011 1100 -> 0000 1111 = 15

    printf("%d\n", result);
    return 0;
}
