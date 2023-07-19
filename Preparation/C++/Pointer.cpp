#include <cmath>
#include <cstdio>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void minmax(int *a, int *b){
    cout << *a + *b << endl;
    
    if(*a > *b){
        cout << *a - *b;
    }else {
        cout << *b - *a;
    }
}

int main() {
  
    int a, b;
    
    cin >> a >> b;
    
    minmax(&a, &b);
    
    
    return 0;
}
