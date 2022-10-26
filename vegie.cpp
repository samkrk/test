#include "vegie.h"
#include <iostream>
#include <string>

using namespace std;

int vegie::nextID = 100;

vegie::vegie(){
    set_name("safe");
    set_volume(0);
    set_favourite_food("grass");
    animalID = nextID;
    nextID++;
}

vegie::vegie(string n,int v){
    set_name(n);
    set_volume(v);
    set_favourite_food("grass");
    animalID = nextID;
    nextID++;
}      

string vegie::get_favourite_food(){
    return favourite_food;
}
void vegie::set_favourite_food(string f){
    favourite_food = f;
}

string vegie::get_name(){
    cout << "Safe: ";
    return name;
}
