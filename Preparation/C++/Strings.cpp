#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string a , b;
    getline(cin, a);
    getline(cin, b);
    cout << a.size() << " " << b.size() << endl << a + b << endl;
    char one = a[0];
    char two = b[0];
    a[0] = two;
    b[0] = one;
    cout << a << " " << b;
     
    return 0;
}
