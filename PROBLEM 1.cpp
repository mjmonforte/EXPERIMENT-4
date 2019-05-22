//
//  PROBLEM 1.cpp
//  EXPERIMENT 4
//
//  Created by Mj Monforte on 21/05/2019.
//  Copyright © 2019 Mj Monforte. All rights reserved.
//

#include<iostream>

using namespace std;

void menu()
{
    cout << "MENU:\n";
    cout << "     1. Add\n";
    cout << "     2. Subtract\n";
    cout << "     3. Multiply\n";
    cout << "     4. Divide\n";
    cout << "     5. Modulus\n";
}

int Add(int a, int b)
{
    return(a + b);
}
int Subtract(int a, int b)
{
    return(a - b);
}
int Multiply(int a, int b)
{
    return(a * b);
}
int Divide(int a, int b)
{
    return(a / b);
}
int Modulus(int a, int b)
{
    return(a % b);
}

int main()
{
    menu();
    int choice, a, b;
    char decision;
    
    do{
    cout << "\nEnter your choice: "; cin >> choice;
    cout << "Enter your two numbers: "; cin >> a >> b;
    
    switch(choice){
        case 1: cout << "Result: " << Add(a,b); break;
        case 2: cout << "Result: " << Subtract(a,b); break;
        case 3: cout << "Result: " << Multiply(a,b); break;
        case 4: cout << "Result: " << Divide(a,b); break;
        case 5: cout << "Result: " << Modulus(a,b); break;
        default: cout << "Invalid";}
        
        cout << "\n Press Y to continue: "; cin >> decision;
    }while(decision=='y'||decision=='Y');
    
    return 0;
}
