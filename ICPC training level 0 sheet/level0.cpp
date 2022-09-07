#include <bits/stdc++.h>
#include <string> 
#include <iostream>

using namespace std;
    
void simple_calculator() {
    long long first_number; 
    long long second_number; 
    cin >> first_number >> second_number;
    
    cout << first_number << " + " << second_number << " = "
    << first_number + second_number << endl
    << first_number << " * " << second_number << " = " 
    << first_number * second_number << endl
    << first_number << " - " << second_number << " = "
    << first_number - second_number;
}


void say_hello_in_cpp(){
    string name; 
    cin >> name; 
    cout << "Hello, "<< name;
}

void basic_data_types(){
    int a; 
    long long b; 
    char c; 
    float d; 
    double e; 
    
    cin >> a >> b >> c >> d >> e; 
    cout << a << endl
    << b << endl
    << c << endl
    << d << endl 
    << e; 
}

void difference() {
    long long a; 
    long long b; 
    long long c; 
    long long d; 
    
    cin >> a >> b >> c >> d; 
    cout << "Difference = " << (a*b) - (c*d); 
}

int main () {
    
}

