/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Anthony Morales
 *
 * Created on 5/31/2020 , 6:03 PM
 */


//System Level Libraries
#include <iostream>   //I/O Library
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
#include <ctime>
#include <fstream>
using namespace std;  //Libraries compiled under std

//User Level Libraries


//Global Constants - Science/Math Related

//Conversions, Higher Dimensions

//Function Prototypes
bool isRorS (char);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Random Number Seed Set Here
    srand(static_cast<unsigned int>(time(0)));
    //Variable Declarations
    int random = 1; 
    char option; 
    string playerN;
    int PlrPwns[4] = {0,0,0,0};
    char optRorS;
    //Variable Initialization

    
    //Mapping Process Inputs to Outputs
    
    
    //Display Outputs
     cout<<"TTTTT  RRRRR   OOOOO  U   U  BBBBB   L      EEEEE"<<endl;   //Trouble Written with letters
    cout<<"  T    R    R  O   O  U   U  B    B  L      E"<<endl;
    cout<<"  T    RRRRR   O   O  U   U  BBBBB   L      EEEEE"<<endl;
    cout<<"  T    R  R    O   O  U   U  B    B  L      E"<<endl;
    cout<<"  T    R    R  OOOOO  UUUUU  BBBBB   LLLLL  EEEEE"<<endl<<endl;  // End Trouble with letters
    cout<<"To start game type a and press enter \nTo exit type any key and press enter"<<endl;
    cin>>option;
switch(option){ //switch for start game or end program
    case 'a':    // If a is chosen game starts 
        cout<< "Game Started!"<<endl; 
        cout<<"Enter your name and press enter"<<endl;
        cin>>playerN; //Players Name input
    do{
         cout<<"Type r and press enter to roll die"<<endl;
    cout<<"Type s and press enter to see players' pieces locations"<<endl;
        cin>>optRorS;
    while( isRorS(optRorS) == false){
        cout<<"Invalid Input, try again"<<endl;
        cin>>optRorS;
    }
        isRorS(0);
   
        
        
        
        
        
        
        
        
        
        
        
        
        
        
   
    
    
    
    
    
    
    
    }while(random=1);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   break; 
default: //if a isnt chosen at start program will print message and end
    cout<<"Invalid Input"<<endl;
break;
 }
    //Clean Up

    
    //Exit stage right!
    return 0;
}
bool isRorS (char optRorS){ //input validation. RorS is r or s (caps doesnt matter)
    if(optRorS == 'r') // if input is 'r' set function (isRorS) to true
        return true;
    if(optRorS == 'R')// if input is 'R' set function (isRorS) to true
        return true;
    if(optRorS == 's')// if input is 's' set function (isRorS) to true
        return true;
    if(optRorS == 'S')// if input is 'S' set function (isRorS) to true
        return true;
    else{
        return false;//If letter besides r or s is input,funtion returns false
    }
    
}
bool isRorS (int x){ // Input validation Overflowing if user inputs a number
    return false;
}

