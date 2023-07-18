#include <iostream>
#include <stdio.h>

using namespace std;

/*
Format Specifiers:
%d  = Int
%ld = Long
%c  = Char
%f  = Float
%lf = Double
%s  = String
%p  = Pointer
%x  = Hexadecimal
%o  = Octal
%u  = Unsigned
%e  = Exponential
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int a;
    long b;
    char c;
    float d;
    double e;
    
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    
    printf("%d \n%ld \n%c \n%.3f \n%.9lf", a, b, c, d, e);
    
    return 0;
}