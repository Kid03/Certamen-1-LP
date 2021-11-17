//
// Created by kid03 on 14-11-21.
//

#include "Arc.h"

Arc::Arc (int peso, Place * place, Trans * trans){
    this->peso=peso;
    a=place;
    b=trans;
}
Place * Arc::getPlace(){
    return a;
}
Trans * Arc::getTrans(){
    return b;
}
void Arc::setPeso (int peso){
    this->peso=peso;
}