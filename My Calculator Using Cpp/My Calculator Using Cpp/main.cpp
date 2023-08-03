//
//  main.cpp
//  My Calculator Using Cpp
//
//  Created by Farhan Niloy on 3/8/23.
//

#include <iostream>
#include <cmath>

using namespace std;

double calculator_function (double x, double y, char c);

int main(int argc, const char * argv[]) {
    double void1{}, void2{}, voidOp{};
    
    cout<<"Welcome To Farhan's Calculator Dedicated To Omi Farhan, Rajuk  Hsc Batch 2024, (a frog emoji)" <<endl;
    cout<<"\nEnter First Number: " ;
    cin>>void1;
    cout<<"Enter Second Number: " ;
    cin>>void2;
     
    cout<<"Enter Operation ( + - * / ^ Q = quit (❤): " ;
    cin>>voidOp;
    
    cout<<"Result: " <<calculator_function(void1, void2, voidOp);
    
    while (voidOp!= 'Q' ||'q') {
        cout<<"Welcome To Farhan's Calculator Dedicated To Omi Farhan, Rajuk  Hsc Batch 2024, (a frog emoji)" <<endl;
        cout<<"\nEnter First Number: " ;
        cin>>void1;
        cout<<"Enter Second Number: " ;
        cin>>void2;
         
        cout<<"Enter Operation ( + - * / ^ Q = quit (❤): " ;
        cin>>voidOp;
        
        cout<<"Result: " <<calculator_function(void1, void2, voidOp);
        
        
    };

};

double calculator_function (double x, double y, char c){
    
    double result {};
    
    if (c=='+') {
        cout<<x+y;
    } else if (c=='-'){
        cout<<x-y;
    } else if (c=='*'){
        cout<<x*y;
    } else if (c=='/'){
        cout<<x/y;
    } else if (c=='^'){
        cout<<pow(x, y);
    } else if (c=='O') {
        cout<<"I love Antara Mubassira Omi so much. I don't know why, She is so facinating to me. I love everything about her. I feel her. It's transcendent. Email me if you notice: farhansarkerniloy@gmail.com";
    }
    
    return result;
};
