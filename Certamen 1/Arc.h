//
// Created by kid03 on 14-11-21.
//

#ifndef UNTITLED_ARC_H
#define UNTITLED_ARC_H


#include <iostream>
#include <string>
#include <list>
class Place;
class Trans;
#include "Trans.h"
#include "Place.h"

using namespace std;

class Arc {
private:
    int peso;
    Place * a;
    Trans * b;
public:
    Arc (int peso, Place * place, Trans * trans);
    Place * getPlace();
    Trans * getTrans();
    void setPeso (int peso);
};


#endif //UNTITLED_ARC_H
