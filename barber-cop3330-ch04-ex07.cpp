#include <bits/stdc++.h>
#include <iostream>

using namespace std;

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Quinn Barber
 */

 double convertToNum(string number)
 {
    if(number.length()==1){
        double ret = number[0];
        return ret;
    }

    if(number == "one"){
        return 1;
    }
    else if(number == "two"){
        return 2;
    }
    else if(number == "three"){
        return 3;
    }
    else if(number == "four"){
        return 4;
    }
    else if(number == "five"){
        return 5;
    }
    else if(number == "six"){
        return 6;
    }
    else if(number == "seven"){
        return 7;
    }
    else if(number == "eight"){
        return 8;
    }
    else if(number == "nine"){
        return 9;
    }
    else if(number == "zero"){
        return 0;
    }

    return -1;
 }

 int main(void)
 {
    string num1;
    string num2;
    string operation;
    cout << "Enter two single digit values (spelled out or in number form) followed by an operation:\n";
    cin >> num1;
    cin >> num2;
    cin >> operation;
    double numb1, numb2;
    numb1 = convertToNum(num1);
    numb2 = convertToNum(num2);
    if(operation == "+"){
        cout << "The sum of " << numb1 << " and " << numb2 << " is " << (numb1+numb2);
    }
    else if(operation == "-"){
        cout << "The difference of " << numb1 << " and " << numb2 << " is " << (numb1-numb2);
    }
    else if(operation == "*"){
        cout << "The product of " << numb1 << " and " << numb2 << " is " << (numb1*numb2);
    }
    else if(operation == "/"){
        cout << "The division of " << numb1 << " and " << numb2 << " is " << (numb1/numb2);
    }


 }
