#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    private:
    int age;
    int standard;
    string name;
    string surname;
    
    public:
    void get_age(){
        cout << age;
    }    
    void set_age(int a){
        age = a;
    }    
    
    void get_firstname(){
        cout << name;
    }    
    void set_firstname(string a){
        name = a;
    }    
    
    void get_lastname(){
        cout << surname;
    }    
    void set_lastname(string a){
        surname = a;
    }    
    
    void get_standard(){
        cout << standard;
    }    
    void set_standard(int a){
        standard = a;
    }        
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    Student s1;
    int age, standard;
    string name, surname;
    
    cin >> age >> name >> surname >> standard;
    
    s1.set_firstname(name);
    s1.set_lastname(surname);
    s1.set_age(age);
    s1.set_standard(standard);
    s1.get_age();
    cout << endl;
    s1.get_lastname();
    cout << ", ";
    s1.get_firstname();
    cout << endl;
    s1.get_standard();
    cout << endl << endl;
    s1.get_age();
    cout << ",";
    s1.get_firstname();
    cout << ",";
    s1.get_lastname(); 
    cout <<",";
    s1.get_standard();
    
    return 0;
}
