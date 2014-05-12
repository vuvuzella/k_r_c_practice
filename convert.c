#include<stdlib.h>
#include<stdio.h>

int main(int argc, char* argv[]) {
    int c = -100;
    char i;
    printf("%d\n", c);
    i = c;
    printf("after assigning to a char type variable: i=%d\n", i);
    i = '2';
    c = i;
    printf("after assigning to an int type variable: c=%d\n", c);

    return 0;
}
