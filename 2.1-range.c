/*
 * range.c
 * a program that prints the ranges of different data types
 * either by calling a constat from their specific header
 * or by computation
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<values.h>

int main(int argc, char* argv[]) {

    printf("The Maximum value for INT is %d\n", MAXINT);
    printf("The Maximum value for SHORT INT is %d\n", MAXSHORT);
    printf("The Maximum value for LONG INT is %ld\n", MAXLONG);
    printf("The Maximum value for DOUBLE is %lf\n", MAXDOUBLE);
    printf("The Maximum value for FLOAT is %f\n", MAXFLOAT);

    return 0;
}
