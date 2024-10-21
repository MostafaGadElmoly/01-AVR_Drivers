#include <stdio.h>

void swip(int *num_1, int *num_2);

int main(int argc, char const *argv[])
{
    
    return 0;
}


void swip(int *num_1, int *num_2){
     int x = &num_1;
     int y = &num_2;
     y = &num_1;
     x = &num_2;
     printf("Num: %i, num2: %i",&x, &y)
}