#ifndef MY_DATA2_H_INCLUDED
#define MY_DATA2_H_INCLUDED

#include <iostream>
using namespace std;

/**
    CLASS      : IF 40 INT
    NAME       : RANDY KUSTIWA KOESMA
    STUDENT ID : 1301162472
**/

struct mytype2 {
    /**
     TODO:  create a new Data type with specification:
            - an integer variable acted as an ID
            - two other variables
    */
    //=================================================
    // YOUR CODE STARTS HERE
    int id_lec;
    string name_lec;
    string clas_lec;

    // YOUR CODE ENDS HERE
    //=================================================
};

mytype2 create_data(mytype2 x);
void view_data(mytype2 d);
void edit_data(mytype2 &d);

#endif // MY_DATA2_H_INCLUDED
