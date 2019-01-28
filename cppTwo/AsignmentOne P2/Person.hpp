//
//  Person.hpp
//  AsignmentOne P2
//
//  Created by J.S.Flynn on 20/04/2016.
//  Copyright © 2016 J.S.Flynn. All rights reserved.
//

//defines the Person class
#ifndef Person_hpp
#define Person_hpp

#include <string> // include the strung functions

using namespace std ; //sets the namespace to the standered namespace

//declares and defines the infrmation for class Person
class Person{
    
    //creats private variables for the class
    private :
    string name ; // creats a variable to store a name for an object
    string telNo ; // creats a variable for the tellephone number of an object
    int officeNo ; // creats a variable for the office number of the object
    
    //sets evything bellow to public
    public :
    
    //define setters and getters for all variables
    void setName(string n){
        name = n ;
    }
    
    string getName(){
        return name ;
    }
    
    void setTelNo(string t){
        telNo = t ;
    }
    
    string getTelNo(){
        return telNo ;
    }
    
    void setOfficeNo(int o){
        officeNo = o ;
    }
    
    int getOfficeNo(){
        return officeNo ;
    }
    
    
    void printDetails() ; //defines the function for printDetails to be defined in Person.cpp
};

//the line below is responsible for makiking sure a class is loaded only once
//to defend agaist redefinition of class 
#endif /* Person_hpp */

