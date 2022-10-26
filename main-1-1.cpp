#include "animal.h"
#include "hunter.h"
#include "vegie.h"

#include <iostream>
using namespace std;

int main(){
    hunter fox("jeff",50);
    cout << fox.get_name() << endl;
    cout << fox.get_ID() << endl;

    vegie panda("bob",200);
    cout << panda.get_name() << endl;
    cout << panda.get_ID() << endl;
    return 0;
}