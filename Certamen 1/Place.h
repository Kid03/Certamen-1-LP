//
// Created by kid03 on 14-11-21.
//

#ifndef UNTITLED_PLACE_H
#define UNTITLED_PLACE_H


#include <string>
#include <list>
#include "Arc.h"

using namespace std;

// to = left, en
// from = right, desde

class Place {
private:
    string id;
    int tokens;

    list < Arc *> head;
    list < Arc *> nock;


public:
    Place(string id, int tokens);
    void insertArcHead(Arc *);
    void insertArcNock(Arc *);
    void rmAllArcs();
    void setTokens(int newToken);
    Arc * findArcH(Trans * nock);
    Arc * findArcN(Trans * head);
    void rmHead(Arc * rm);
    void rmNock(Arc * rm);
    string getId();
	list <Arc *> getArcsHead();
	list <Arc *> getArcsNock();
};


#endif //UNTITLED_PLACE_H
