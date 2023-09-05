#include <stdio.h>
#include <iostream>

using namespace std;

void update(int *a,int *b) {
    // Complete this function    
    cout << *a + *b << endl;
    if(*a > *b){
        cout << *a - *b << endl;
    } else {
        cout << *b - *a << endl;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
