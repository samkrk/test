#include "hunter.h"
#include <iostream>
#include <string>

using namespace std;

int hunter::nextID = 1000;

hunter::hunter(){
    set_name("default");
    set_volume(0);
    set_kills(0);
    animalID = nextID;
    nextID++;
}

hunter::hunter(string n, int v){
    set_name(n);
    set_volume(v);
    set_kills(0);
    animalID = nextID;
    nextID++;
}  

string hunter::get_name(){
    cout << "Hunter: ";
    return name;
}

void hunter::set_kills(int k){
    kills = k;
}
int hunter::get_kills(){
    return kills;
}