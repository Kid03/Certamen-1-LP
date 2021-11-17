//
// Created by kid03 on 14-11-21.
//

#include "Graph.h"

void Graph::rmPlace(string id){
	try {
		Place * rm = searchPlace(id);
		if (rm!=nullptr){
			rNames.remove(id);
			(*rm).rmAllArcs();
			places.remove(rm);
			delete rm;
		}else {
			ErrorGraphException error(3);
			throw error;
		}
	}
	catch (ErrorGraphException e){
		std::cerr << e.errorDetector() << endl;
	}

}

void Graph::newPlace(string id){
	try {
		if (esRName(id) == false) {
			Place *place = new Place(id, 0);
			places.push_back(place);
			rNames.push_back(id);
		}else {
			ErrorGraphException error(3);
			throw error;
		}
	}
	catch (ErrorGraphException e){
		std::cerr << e.errorDetector() << endl;
	}
}

void Graph::newPlace(string id, int tokens){
	try {
		if (tokens<0) {
			ErrorGraphException error(1);
			throw error;
		}
		if (esRName(id) == false) {
			Place *place = new Place(id, tokens);
			places.push_back(place);
			rNames.push_back(id);
		}else {
			ErrorGraphException error(3);
			throw error;
		}
	}
	catch (ErrorGraphException e){
		std::cerr << e.errorDetector() << endl;
	}
}

void Graph::newTrans(string id) {
	try {
		if (esRName(id) == false) {
			Trans *tran = new Trans(id);
			trances.push_back(tran);
			rNames.push_back(id);
		} else {
			ErrorGraphException error (2);
			throw error;
		}
	}
	catch (ErrorGraphException e){
		std::cerr << e.errorDetector() << endl;
	}
}
void Graph::newArc(int peso,string head, string nock){
	try {
		Place *a = searchPlace(head);
		Trans *b = searchTrans(head);
		if(peso<0){
			ErrorGraphException error (4);
			throw error;
		}
		if (a != nullptr) {
			b = searchTrans(nock);
			if (b == nullptr) {
				ErrorGraphException error (4);
				throw error;
			}
			newArc(peso, a, b);
			return;
		} else if (b != nullptr) {
			a = searchPlace(nock);
			if (a == nullptr) {
				ErrorGraphException error (3);
				throw error;
			}
			newArc(peso, b, a);
			return;
		}
		ErrorGraphException error (5);
		throw error;
	}
	catch (ErrorGraphException e){
		std::cerr << e.errorDetector() << endl;
	}
}
//                         | head     /nock
void Graph::newArc(int peso, Place * a, Trans *b){
    Arc * newArc = new Arc (peso,a,b);
    (*b).insertArcNock(newArc);
    (*a).insertArcHead(newArc);
}
//                         | head     /nock
void Graph::newArc(int peso, Trans * b, Place * a){
    Arc * newArc = new Arc (peso,a,b);
    (*b).insertArcHead(newArc);
    (*a).insertArcNock(newArc);
}

Place* Graph::searchPlace(string id){
    for (auto i:places) {
        if((*i).getId().compare(id)==0) return i;
    }
    return nullptr;
}

Trans* Graph::searchTrans(string id){
    for (auto i:trances){
        if((*i).getId().compare(id)==0) return i;
    }
    return nullptr;
}

void Graph::setTokens(string id, int tokens){
	try {
		if(tokens<0){
			ErrorGraphException error(1);
			throw error;
		}
		Place *asignT = searchPlace(id);
		if (asignT== nullptr){
			ErrorGraphException error(3);
			throw error;
		}
		(*asignT).setTokens(tokens);
	}
	catch (ErrorGraphException e){
		std:cerr << e.errorDetector() << endl;
	}

}

void Graph::rmArc(string head,string nock){
	try {
		Place * a = searchPlace(head);
		Trans * b = searchTrans(head);
		Arc * rm;

		if (a!=nullptr){
			b = searchTrans (nock);
			if (b==nullptr) {
				ErrorGraphException error(4);
				throw error;
			}
			rm=(*a).findArcH(b);
			(*a).rmHead(rm);
			(*b).rmNock(rm);
			delete rm;
			return;
		} else if (b!=nullptr){
			a = searchPlace (nock);
			if (a==nullptr) {
				ErrorGraphException error(3);
				throw error;
			}
			rm=(*a).findArcN(b);
			(*a).rmNock(rm);
			(*b).rmHead(rm);
			delete rm;
			return;
		}
		ErrorGraphException error(5);
		throw error;
	}
    catch (ErrorGraphException e){
		std:cerr << e.errorDetector() << endl;
	}
}
void Graph::setPeso(int peso, string head, string nock){
	try {
		Place *a = searchPlace(head);
		Trans *b = searchTrans(head);
		Arc *sPeso;
		if(peso<0){
			ErrorGraphException error(1);
			throw error;
		}
		if (a != nullptr) {
			b = searchTrans(nock);
			if (b == nullptr) {
				ErrorGraphException error(4);
				throw error;
			}
			sPeso = (*a).findArcH(b);
			sPeso->setPeso(peso);
			return;
		} else if (b != nullptr) {
			a = searchPlace(nock);
			if (a == nullptr) {
				ErrorGraphException error(3);
				throw error;
			}
			sPeso = (*a).findArcH(b);
			sPeso->setPeso(peso);
			return;
		}
		ErrorGraphException error(5);
		throw error;
	}
	catch (ErrorGraphException e){
		std::cerr << e.errorDetector() << endl;
	}
}
void Graph::rmTrans(string id){
	try {
		Trans *rm = searchTrans(id);
		if (rm != nullptr) {
			rm->rmAllArcs();
			rNames.remove(id);
			delete rm;
		} else {
			ErrorGraphException error(4);
			throw error;
		}
	}
	catch (ErrorGraphException e){
		std::cerr << e.errorDetector() << endl;
	}
}

bool Graph::mazeSolver(string a, string b){
	try {
		Place *A = searchPlace(a);
		Place *B = searchPlace(b);
		Trans *C;
		bool flag = true;
		if ((B != nullptr) && (A != nullptr)) {
			// Lista de los places y transiciones exploradas
			std::list<Place *> pExp;
			std::list<Trans *> tExp;
			// Lista de los places y transiciones Descubiertas por ser exploradas
			std::list<Place *> pDis;
			std::list<Trans *> tDis;
			pDis.push_back(A);
			while ((pDis.empty() && tDis.empty()) == false) { //revisar esta condicion
				while (pDis.empty() == false) {
					A = pDis.back();
					pDis.pop_back();
					pExp.push_back(A);
					for (auto i: (*A).getArcsHead()) {
						for (auto j: tExp) {
							if (j == (*i).getTrans()) {
								flag = false;
							}
						}
						if (flag) {
							tDis.push_back((*i).getTrans());
						}
						flag = true;
					}
					for (auto i: (*A).getArcsNock()) {
						for (auto j: tExp) {
							if (j == (*i).getTrans()) {
								flag = false;
							}
						}
						if (flag) {
							tDis.push_back((*i).getTrans());
						}
						flag = true;
					}
				}
				tDis.unique();
				while (tDis.empty() == false) {
					C = tDis.back();
					tDis.pop_back();
					tExp.push_back(C);
					for (auto i: (*C).getArcsHead()) {
						for (auto j: pExp) {
							if (j == (*i).getPlace()) {
								flag = false;
							}
							if ((*i).getPlace() == B)return true;
						}
						if (flag) {
							pDis.push_back((*i).getPlace());
						}
						flag = true;
					}
					for (auto i: (*C).getArcsNock()) {
						for (auto j: pExp) {
							if (j == (*i).getPlace()) {
								flag = false;
							}
							if ((*i).getPlace() == B)return true;
						}
						if (flag) {
							pDis.push_back((*i).getPlace());
						}
						flag = true;
					}
				}
				pDis.unique();
			}
			return false;
		}else {
			ErrorGraphException error(3);
			throw error;
		}
	}
	catch (ErrorGraphException e){
		std::cerr << e.errorDetector() << endl;
	}
}

void Graph::readwrite (){
    //Nombre de los Places
    string p1 ("P1");
    string p2 ("P2");
    string p3 ("P3");
    string p4 ("P4");
    //Nombre de las transiciones
    string t1 ("T1");
    string t2 ("T2");
    string t3 ("T3");
    string t4 ("T4");
    //Declaracion de Places
    newPlace(p1,5);
    newPlace(p2);
    newPlace(p3,5);
    newPlace(p4);
    //Declaracion de Transiciones
    newTrans(t1);
    newTrans(t2);
    newTrans(t3);
    newTrans(t4);
    //Declaracion de arcos
    newArc(1,t1,p1);
    newArc(1,t2,p1);
    newArc(1,p4,t2);
    newArc(1,t4,p4);
    newArc(1,p1,t4);
    newArc(5,p3,t4);
    newArc(5,t2,p3);
    newArc(1,t1,p3);
    newArc(1,p2,t1);
    newArc(1,t3,p2);
    newArc(1,p1,t3);
    newArc(1,p3,t3);
	std::cout << "I'm here" << std::endl;
}

void Graph::mutualExclusion(){
    //Nombre de los Places
    string p1 ("P1");
    string p2 ("P2");
    string p3 ("P3");
    string p4 ("P4");
    //Nombre de las transiciones
    string t1 ("T1");
    string t2 ("T2");
    string t3 ("T3");
    string t4 ("T4");
    string t5 ("T5");
    //Declaracion de Places
    newPlace(p1,1);
    newPlace(p2);
    newPlace(p3);
    newPlace(p4);
    //Declaracion de Transiciones
    newTrans(t1);
    newTrans(t2);
    newTrans(t3);
    newTrans(t4);
    newTrans(t5);
    //Declaracion de los arcos
    newArc(1,t1,p1);
    newArc(1,t2,p1);
    newArc(1,p2,t1);
    newArc(1,t3,p2);
    newArc(1,t4,p3);
    newArc(1,p4,t3);
    newArc(1,p4,t4);
    newArc(1,t5,p4);
    newArc(1,p1,t5);
}

bool Graph::esRName (string id){
    for (auto i: rNames){
        if(i.compare(id)==0) return true;
    }
    return false;
}

void Graph::addRName (string id){
    rNames.push_back(id);
}
void Graph::removeRName (string id){
    rNames.remove(id);
}