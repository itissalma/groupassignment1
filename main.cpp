//
//  main.cpp
//  assignment1
//
//  Created by Salma Aly on 2/3/21.
//

#include <iostream>
#include "myclass.hpp"
using namespace std;

int main() {
    cout<<"Hello Class!"<<endl<< "I'm trying something new so bare with me\n";
    cout<<"I am excited to learn more about GitHub and how to use it\n";
    string decision;
    cout<<"Are you too excited?\n";
    cin>>decision;
    if (decision=="yes"||decision=="Yes"||decision=="y"||decision=="Y")
        cout<<"Cool!\n Happy to have you on board\n";
    else if(decision=="no"||decision=="No"||decision=="N"||decision=="n")
        cout<<"That's alright, maybe after a few lectures you'll like it\n";
    else
        cout<<"Lmao, whatchu say?\n";
    
    samplefunc();
    sampleclass ayooo;
    ayooo.func();
    cout<<"Salma out\n";
    return 0;
}
