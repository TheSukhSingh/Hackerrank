#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    int sum;
    
    while(cin >> num){
        sum += num;
    }
    
    cout << sum;
    return 0;
}
