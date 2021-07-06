#include <stdio.h>
#include <stdlib.h>
int bitsSet(int num)
{
    int count = 0;
    while (num > 0)
    {
        if (num & 1)
        {
            count++;
        }
        num = num >> 1;
    }
    return count;
}
/* this implementation of itoa is taken from 
** http://www.strudel.org.uk/itoa/
*/
char *itoa(int val, int base)
{
    static char buf[32] = {0};
    int i = 30;
    for (; val && i; --i, val /= base)
    {
        buf[i] = "0123456789abcdef"[val % base];
    }
    return &buf[i + 1];
}
int main()
{
    int i;
    char buffer[33];
    for (i = 0; i < 32; i++)
    {
        char *buffer = itoa(i, 2);
        printf("%d\t(%s)\t has %d bits set\n", i, buffer, bitsSet(i));
    }
}