//
// Created by kid03 on 14-11-21.
//

#include "Trans.h"

void Trans::insertArcHead(Arc * arc){
    head.push_back(arc);
}

void Trans::insertArcNock(Arc * arc){
    nock.push_back(arc);
}

void Trans::rmNock(Arc * rm){
    nock.remove(rm);
}

void Trans::rmHead(Arc * rm){
    head.remove(rm);
}

void Trans::rmAllArcs(){
	list <Arc *> copy;
	copy=head;
    for (auto i:copy){
        (*i).getTrans()->rmNock(i);
        head.remove(i);
        delete i;
    }
	copy=nock;
    for (auto i:copy){
        (*i).getTrans()->rmHead(i);
        head.remove(i);
        delete i;
    }
}

Trans::Trans(string id) {
    this->id=id;
}

string Trans::getId(){
    return id;
}

list <Arc *> Trans::getArcsHead(){
	return head;
}

list <Arc *> Trans::getArcsNock(){
	return nock;
}