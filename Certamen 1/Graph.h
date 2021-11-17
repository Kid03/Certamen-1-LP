//
// Created by kid03 on 14-11-21.
//

#ifndef UNTITLED_GRAPH_H
#define UNTITLED_GRAPH_H

#include <iostream>
#include <string>
#include <list>
#include "Place.h"
#include "Trans.h"
#include "ErrorGraphException.h"

class Graph {
private:
    std::list <Place *> places;
    std::list <Trans *> trances;
    std::list <string> rNames; //nombres reservados
    void newArc(int peso, Place * a, Trans * b);
    void newArc(int peso, Trans * b, Place * a);
    Place* searchPlace(string id);
    Trans* searchTrans(string id);
    bool esRName (string id);
    void addRName (string id);
    void removeRName (string id);
public:
    void newPlace(string id);
    void newPlace(string id, int tokens);
    void newArc(int peso,string head, string nock);
    void newTrans(string id);
    void rmPlace(string id);
    void rmArc(string head,string nock);
    void rmTrans(string id);
    void setTokens(string id, int token);
    void setPeso(int peso,string head, string nock);
    bool mazeSolver(string a, string b);
    void readwrite ();
    void mutualExclusion();
};


#endif //UNTITLED_GRAPH_H
