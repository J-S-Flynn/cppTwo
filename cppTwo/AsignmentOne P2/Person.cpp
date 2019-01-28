//
//  Person.cpp
//  AsignmentOne P2
//
//  Created by J.S.Flynn on 20/04/2016.
//  Copyright © 2016 J.S.Flynn. All rights reserved.
//

#include "Person.hpp" //include the header file for Person
#include <iostream> //include the standered input / output functions

using namespace std ; //ses the namespace to the standered namespace

//defines the printDetails method declared in the Person Class
void Person::printDetails(){
    
    cout << "\n ***** details ***** \n" ; // prints the message to seperate a set of details
    cout << getName() << "\n" ; //gets the name from the Person from the Person object
    cout << getTelNo() << "\n" ;//gets the telNo for the Person from the Person object
    cout << getOfficeNo() << "\n\n" ; //gets the office number fo the person from the Person object
    
} ;

