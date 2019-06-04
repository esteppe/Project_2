/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 11th, 2019, 12:36 PM
 * Purpose:  Creation of Template to be used for all
 *           future projects
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    
    //Declare Variables
    char numbers,face,suit;
    string fileNm="WarSet.dat";
    ofstream crdFile;
    
    //Initialize or input i.e. set variable values
    crdFile.open(fileNm);
    
    //Map inputs -> outputs
    
    //TOTAL of 52 Number Cards
    //number cards
    for(char card=0;card<36;card++){
        switch(card%9){
            case 0: numbers='2';break;
            case 1: numbers='3';break;
            case 2: numbers='4';break;
            case 3: numbers='5';break;
            case 4: numbers='6';break;
            case 5: numbers='7';break;
            case 6: numbers='8';break;
            case 7: numbers='9';break;
            case 8: numbers='T';break;//T=10
            default:numbers='?';
        }
        if(card<9)     suit='S';//Spades
        else if(card<18)suit='C';//Clubs
        else if(card<27)suit='D';//Diamonds
        else            suit='H';//Hearts
        cout<<numbers<<suit<<" ";
        if(card%9==8) cout<<endl;
        crdFile<<numbers<<suit<<endl;
    }
    
    //Regular action Cards
    for(char card=0;card<16;card++){
        switch(card%4){
            case 0: face='J';break;//J = Jack
            case 1: face='Q';break;//Q = Queen
            case 2: face='K';break;//K = King
            case 3: face='A';break;//A = Ace
            default:face='?';
        }
        if(card<4)      suit='S';//Spades
        else if(card<8) suit='C';//Clubs
        else if(card<12)suit='D';//Diamonds
        else            suit='H';//Hearts
        cout<<face<<suit<<" ";
        if(card%4==3) cout<<endl;
        crdFile<<face<<suit<<endl;
    }
   
    crdFile.close();
    
    //Display the outputs
    
    
    //Exit stage right or left!
    return 0;
}