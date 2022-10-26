#ifndef VEGIE_H
#define VEGIE_H

#include "animal.h"
#include <string>


class vegie : public animal{
private:
    string favourite_food ;     // the vegie's favourite food, initialise to "grass"
    static int nextID ;
public:

    vegie(string n,int v);      // create a vegie with name n and body volume v
    vegie();
    string get_favourite_food();
    void set_favourite_food(string f);
    string get_name(); 

};

#endif