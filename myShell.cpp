// myShell.cpp : Simple Command Line Interpreter.
// Copyright (c) Shane Spangenberg 9/16/2019

#include <iostream>
#include <string>
#define MAX 100

using namespace std;


int main()
{
    cout<<"Welcome to my command line interpreter...\n";
    cout<<"Enter a command to begin.\n";
    cout<<"--------------------------------------------\n";

    char input[MAX];


   // while(1)
   // {
        fgets(input, MAX, stdin);
 
   // }

        
    return 0;
}
