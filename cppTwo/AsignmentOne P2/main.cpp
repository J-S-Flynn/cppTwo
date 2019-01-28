//
//  main.cpp
//  AsignmentOne P2
//
//  Created by J.S.Flynn on 20/04/2016.
//  Copyright © 2016 J.S.Flynn. All rights reserved.
//  Student id : 201037312
//

#include <iostream> // include standered input / output functions
#include <string> //include the string functions
#include "Person.hpp" //include Person class and functions

#define MAX 100 // defines a limit of 100 on the max amoutn of people in the system

Person per[MAX] ; //creats an array of objects of Type Person
int i = 0 ; // initalise i for navagating the array
int x = 0 ; // initalises x for navagateing the array


using namespace std ; // defines the namespace as the standered namespace

//personInfo is responcible for getting the details from the user for a Person object
void personInfo(){
    
    string inputName ; // creates a var for storing the Person name
    string inputTelNo ; // creates a var for storing the telephone number of a Person
    int inputOfficeNo ; // creats a varable for storing the offive number of a Person
    
    cout << "\n Plrease Input Name \n" ; //prints messgae to the output window to instruct user
    getline(cin, inputName) ; //takes in the iformation for the name of a Person
    
    cout << "\n Please Enter Telephone Number \n" ;//prints message to the output window to instruct user
    getline(cin, inputTelNo) ;//takes information for the telephone number of the Person
    
    cout << "\n Please Input Office Number \n" ;//prints message to the output window to advise the user
    cin >> inputOfficeNo ;//takes information for the office number of the Person
    
    per[i].setName(inputName) ; //sends the name input to the Person object at position i
    per[i].setTelNo(inputTelNo) ;//sends the telephone number input to the Person object at position i
    per[i].setOfficeNo(inputOfficeNo) ; //sends the office number input to the Person object at position i
    i++ ; // incraments to the next osition in the array
    
}

//removePerson is responcible for removing a Person object from the array
//this programme uses the name and office number of a person to find the correct Person
//and then removes that person
void removePerson(){
    
    string fName ; //creats a variable to store the name of the Person to be deleted
    int offNumber ;//creats a variable to store the office number of the Person to be deleted
    
    cout << "\n Please Enter The first name \n" ; //sends a message to the utput window to advise user
    cin >> fName ;//gets the user input for the fName
    
    cout << "\n please enter the office number \n" ;//sends message to the output window to sdvise user
    cin >> offNumber ;//gets the user input for offNumber
    
    //this loop is responcible for findint the information that is to be deleted
    for(int y = 0 ; y < i ; y++){
        
        //sends a call to the person object to retrive the name an office number of Person object at position y
        if(per[y].getName() == fName && per[y].getOfficeNo() == offNumber){
            x++ ;//increaments the poition of x in the array each iteration
            break ;// once the Person is found end the loop
        }
    }
    
    //once the Person is fount then we will shift the Person in the next element, over writing the Person
    for(int y = x ; y < i ; y++){
        per[y].setName(per[y+1].getName()) ;//sets the name of Person y to that of Person y+1
        per[y].setTelNo(per[y+1].getTelNo()) ;//sets the telNo of Person y to that of Person y+1
        per[y].setOfficeNo(per[y+1].getOfficeNo()) ;//sets the officeNo of Person y to that of Person y+1
    }
    i-- ; //decraments the toalle number of People in the array
}

//printList is responcible for printing the information on a person
void printList(){
    //for loop iterates thru the array
    for(int y = 0 ; y < i ; y++){
        per[y].printDetails() ;//makes a clall tot he print function of the Personobject for Person at position y
    }
}

//optionCheck is a simple function to check which option the user has chosen
void optionCheck(int inCheck){
    switch (inCheck){
        case 1 : personInfo() ; //makes a call to the personInfo function
            break ;
        case 2 : printList() ; //makes a call to the printList function
            break ;
        case 3 : removePerson() ; //makes a call to the removePerson function
            break ;
        case 4 : ; //efectivly ends the programe
            break ;
    }
}

//the main thread/
int main(int argc, const char * argv[]) {
    
    int opChoose ; // creates a variable to stor the users choise
    string junk ;//creats a variable to store any overspill on user input
    
    //continuesly loops untill the exit condiion
    do{
        system("clear") ;//clears the output window at the begining of each iteration( does not work in xcode)
        cout << "Please Choose an Option \n" ; //prits massage to the output window to advise user
        
        cout << "\n 1. Add Entry \n 2. List All  \n 3. Delete Entry  \n 4. Quit \n\n" ;// prints options to the output window
        
        cin >> opChoose ;//takes value for option
        getline(cin, junk) ;//takes any overspill of input by the user
        
        //this loop will only iterate if the user has entered an invalid option
        while(opChoose != 1 && opChoose != 2 && opChoose != 3 && opChoose != 4){
            cout << "\n please enter a valid option \n" ;//prints message t the output window to advise the user
            
            cin >> opChoose ;//takes the new value for option
            getline(cin, junk) ;//takes any overspill user input
        }
        
        optionCheck(opChoose) ;//sends the value of opChoose to the optionCheck function
        
    }while(opChoose != 4) ; //exit conditin for the loop
    
    return 0; //returns zero if the programme exicutes correctly 
}

