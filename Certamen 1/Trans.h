//
// Created by kid03 on 14-11-21.
//

#ifndef UNTITLED_TRANS_H
#define UNTITLED_TRANS_H


#include <iostream>
#include <string>
#include <list>
class Arc;
#include "Arc.h"

using namespace std;


class Trans {
private:
    string id;

    list <Arc *> head;
    list <Arc *> nock;

public:
    Trans(string id);
    string getId();
    void insertArcHead(Arc * arc);
    void insertArcNock(Arc * arc);
    void rmNock(Arc * rm);
    void rmHead(Arc * rm);
    void rmAllArcs();
	list <Arc *> getArcsHead();
	list <Arc *> getArcsNock();
};


#endif //UNTITLED_TRANS_H
