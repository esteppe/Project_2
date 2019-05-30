/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 21st, 2019, 10:10 AM
 * Purpose:  fundamentals of the card game War
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string FileNm2="WarRules.dat";
    ofstream RleFile;    
    RleFile.open(FileNm2.c_str());        
    
    //Initialize or input i.e. set variable values
    cout<<"Hello players and welcome to WAR!"<<endl;
    cout<<"Here are the rules: "<<endl;
    cout<<"1. 2 player will randomly receive 26 cards."<<endl;
    cout<<"2. The Player who has all 52 cards, or who has the most if players decide to stop is declared the"<<endl;
    cout<<" Winner."<<endl;
    cout<<"3. If both players draw the card with the same number, they are at WAR.\n";
    cout<<"Each player draws a 2 cards face down and the 3rd face up"<<endl;
    cout<<"4. Whoever draws the card that out-ranks the other takes the cards that have been drawn"<<endl;
    cout<<"The cards are ranked as followed from highest to lowest:"<<endl;
    cout<<"A > K > Q > J > 10 > 9 > 8 > 7 > 6 > 5 > 4 > 3 > 2"<<endl<<endl;
    cout<<"NOW DRAW!"<<endl;

    RleFile.close();
    //Exit stage right or left!
    return 0;
}