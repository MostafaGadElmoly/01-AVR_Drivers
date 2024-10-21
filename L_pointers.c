#include <stdio.h>

int main(int argc, char const *argv[])
{
    int* pc, c, d;
    c = 5;
    d = -15;
    pc = &c;
    printf("pc  =%d", *pc);   // Output: 5
    pc = &d;
    printf("pc  =%d", *pc);   // Output: 5

}