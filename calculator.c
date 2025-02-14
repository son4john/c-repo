#include<stdio.h>
#include"matrix.h"
#include"area.c"

// Not Tested

int main(){
    int a = 0;
    int b = 5;
    int c = 3;
    int d = 2;    
    int anwser;

    struct mat3 ypr;
    ypr.x = 1;
    ypr.y = 2;
    ypr.z = 3;

    anwser = addition(b,c);
    printf("Add: %d\n", anwser);

    printf("mat3 z component: %d\n ", ypr.z);

    anwser = square(b,c);
    printf("area of square: %d\n", anwser);

    anwser = octagon(b);
    printf("area of square: %d\n", anwser);
}

int addition(int num1, int num2){
    return num1 + num2;
}

int subtraction(int num1, int num2){
    return num1 - num2;
}

// Divison expection zero

// Matrix additon
// Matrix subtraction
// Matrix multiplication

// binary conversion
// Hex COnversion