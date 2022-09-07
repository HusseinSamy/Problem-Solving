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

int main () {
    
}

