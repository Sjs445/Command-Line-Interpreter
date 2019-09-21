// myShell.cpp : Simple Command Line Interpreter.
// Copyright (c) Shane Spangenberg 9/16/2019

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <thread>
#define MAX 1024

using namespace std;

void runShell();
void parseInput(char input[MAX]);
bool strCompare(char*);
void createChildThread(char * arg[]);

int main()
{
    cout<<"Welcome to myShell\n";
    cout<<"Enter a command to begin.\n";
    cout<<"--------------------------------------------\n";
    runShell();


   // while(1)
   // {
        
 
   // }

   cout<<"Thanks for using myShell!"<<endl;        
    return 0;
}

void runShell()
{
    char input[MAX];
    fgets(input, MAX, stdin);
    parseInput(input);
}

void parseInput(char input[MAX])
{
    char * args;
    char * argArray[4];
    int i=0;

    args=strtok(input, " \n");
    
    if(strCompare(args))
    {
        cout<<"Creating child thread.\n";  
        while(args!=NULL)
        {
            argArray[i++]=args;
            args=strtok(NULL, " ");
        }
        
        thread th1(createChildThread, argArray);
        th1.join();
    }
   
}

void createChildThread(char * arg[])
{
    char cmd[100]="";

    for(int i=0; i<4; i++)
    {
        strcat(cmd, arg[i]);
        strcat(cmd, " ");
    }
    system(cmd);
}

bool strCompare(char * args)
{
    if(strcmp(args, "ping")==0)
    {
        return true;
    }
    else if(strcmp(args, "ls")==0)
    {
        return true;
    }
    else if(strcmp(args, "help")==0)
    {
        return true;
    }
    else if(strcmp(args, "vol")==0)
    {
        return true;
    }
    else if(strcmp(args, "pwd")==0)
    {
        return true;
    }
    else if(strcmp(args, "tasklist")==0)
    {
        return true;
    }
    else if(strcmp(args, "notepad")==0)
    {
        return true;
    }
    else if(strcmp(args, "echo")==0)
    {
        return true;
    }
    else if(strcmp(args, "color")==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}