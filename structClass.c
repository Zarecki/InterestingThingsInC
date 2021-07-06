#include <stdio.h>
struct class
{
    int id;
    char c;
    void (*print)(int i, char c);
};
void my_print(int i, char c)
{
    printf("%d : %c\n", i, c);
}
int main()
{
    struct class myclass;
    myclass.id = 1;
    myclass.c = 'X';
    myclass.print = &my_print;
    myclass.print(myclass.id, myclass.c);
    struct class class2 = {2, 'Y', &my_print};
    class2.print(class2.id, class2.c);
    return 0;
}
