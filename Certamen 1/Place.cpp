//
// Created by kid03 on 14-11-21.
//

#include "Place.h"

// to = left, en
// from = right, desde


Arc * Place::findArcH(Trans * nock){
    for (auto i:head){
        if ((*i).getTrans()==nock){
            return i;
        }
    }
	return nullptr;
}
Arc * Place::findArcN(Trans * head){
    for (auto i:nock){
        if ((*i).getTrans()==head){
            return i;
        }
    }
	return nullptr;
}
void Place::rmHead(Arc * rm){
    head.remove(rm);
}
void Place::rmNock(Arc * rm){
    nock.remove(rm);
}

void Place::rmAllArcs(){
	list <Arc *> copy;
	copy = head;
    for (auto i:copy){
		std::cout << (*i).getTrans()->getId() << endl;
        (*i).getTrans()->rmNock(i);
        head.remove(i);
        delete i;
    }
	copy=nock;
    for (auto i:copy){
        (*i).getTrans()->rmHead(i);
        nock.remove(i);
        delete i;
    }
}

Place::Place (string id, int tokens){
    this->id=id;
    this->tokens=tokens;
}

void Place::insertArcHead(Arc * head){
    this->head.push_back(head);
}

void Place::insertArcNock(Arc * nock){
    this->nock.push_back(nock);
}

string Place::getId(){
    return id;
}
// Solo acepta numero mayores a 0
void Place::setTokens(int newToken){
    this->tokens=newToken;
}

list <Arc *> Place::getArcsHead(){
	return head;
}
list <Arc *> Place::getArcsNock(){
	return nock;
}