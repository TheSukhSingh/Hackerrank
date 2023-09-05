#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> num;
    int a;
    cin>> a;
    for(int i = 0; i < a; i++){
        int temp;
        cin >> temp;
        num.push_back(temp);
    }
    
    int b;
    cin >> b;
    b--;
    num.erase(num.begin() + b);
    
    cin >> a;
    cin >> b;
    
    num.erase(num.begin() + a - 1, num.begin() + b - 1);
    
    cout << num.size() << endl;
    for(int i = 0; i < num.size(); i++){
        cout << num[i] << " ";
    }
    
    
    
    return 0;
}
