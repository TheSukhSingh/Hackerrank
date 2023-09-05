#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a;
    vector<int> arr;
    
    cin >> a;
    for(int i = 0; i < a; i++){
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < arr.size(); i++){
        cout << arr.at(i) << " ";
    }
    
    
    
    
     
    return 0;
}
