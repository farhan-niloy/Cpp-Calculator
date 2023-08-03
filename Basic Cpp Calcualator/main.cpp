//
//  main.cpp
//  Basic Cpp Calcualator
//
//  Created by Farhan Niloy on 3/8/23.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //variables
    
    string s;
    double x, y;
    
    //user inputs
    cout << "Enter First Number: ";
    cin >> x;
    
    cout << "Enter Second Number: ";
    cin>>y;
    
    cout << "Enter Opreration (+, _, *, /): ";
    cin >> s;
    
    
    //checking entered operation
   
    cout <<"The calculation would be: ";
    if (s=="+") {
        cout << x+y;
    } else if (s=="-") {
        cout << x-y;
    } else if (s=="*") {
        cout<< x*y;
    } else if (s=="/"){
        cout<< x/y;
    };
    
    cout<<endl;
    
    
    
    

    return 0;
}
