#include "animal.h"
using namespace std;
#include <string>

animal::animal(string n,int v){
    name = n;
    volume = v;
}

animal::animal(){
    name = "unkown";
    volume = 0;
}


void animal::set_name(string n){
    name = n;
}
int animal::get_ID(){
    return animalID;
}

int animal::get_volume(){
    return volume;
}
void animal::set_volume(int v){
    volume = v;
}