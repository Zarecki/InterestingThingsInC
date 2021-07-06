#include <stdio.h>

static signed Div10(signed n)
{
    n = (n >> 1) + (n >> 2);
    n += n < 0 ? 9 : 2;
    n = n + (n >> 4);
    n = n + (n >> 8);
    n = n + (n >> 16);
    n = n >> 3;
    return n;
};

int main() {
  printf("Div10(12345678) = %d\n", Div10(12345678)); 
};