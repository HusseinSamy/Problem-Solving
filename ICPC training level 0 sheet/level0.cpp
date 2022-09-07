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

void area_of_a_circle(){
    float a, pi = 3.141592653;    
    cin >> a; 
    cout << fixed << setprecision(9) << (pi * pow(a, 2));
    
}

void digits_summation(){
    long long a,b;
    cin >> a >> b;
    cout << a % 10 + b%10;
}

void summation_from_1_to_N(){
    long long n;
    cin >> n;
    cout << (n*(n+1))/2;   
}

void two_numbers(){
    float a,b;
    cin >> a >> b; 
    cout << "floor " << a << " / " << b
    << " = " << floor(a/b) << endl;
    cout << "ceil " << a << " / " << b
    << " = " << ceil(a/b) << endl;
    cout << "round " << a << " / " << b
    << " = " << round(a/b) << endl;
}
int main () {
    
}

