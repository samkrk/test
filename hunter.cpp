#include "hunter.h"
#include <iostream>
#include <string>

using namespace std;

int hunter::nextID = 1000;

hunter::hunter(){
    set_name("Fox");
    set_volume(70);
    animalID = nextID;
    nextID++;
}

hunter::hunter(string n, int v){
    set_name(n);
    set_volume(v);
    animalID = nextID;
    nextID++;
}  

string hunter::get_name(){
    return name;
}

void hunter::set_kills(int k){
    kills = k;
}
int hunter::get_kills(){
    return kills;
}