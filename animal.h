#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

#include <iostream>
using namespace std;

class animal{
protected:
    string name ;              // the animal's name
    int animalID ;             // the animal's unique ID
    int volume ;               // the volume of the animal's body
public:
    animal(string n, int v) ;
    animal();  
    virtual string get_name() = 0; // pure virtual 
    void set_name(string n);
    int get_ID();
    int get_volume();
    void set_volume(int v);
    virtual ~animal() {};

};

#endif