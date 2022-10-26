#ifndef HUNTER_H
#define HUNTER_H
#include "animal.h"
#include <string>


class hunter : public animal{
private:
    int kills ;               // how many kills have been recorded, initialised to 0
    static int nextID ;
public:
    hunter(string n, int v);  // create a hunter with name n and body volume v
    hunter();
    string get_name(); // override
    void set_kills(int k);
    int get_kills();

};

#endif