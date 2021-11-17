//
// Created by kid03 on 15-11-21.
//

#ifndef UNTITLED_ERRORGRAPHEXCEPTION_H
#define UNTITLED_ERRORGRAPHEXCEPTION_H

#include <iostream>
#include <exception>

using namespace std;

class ErrorGraphException : public std::exception{
private:
	int flag;
	string errorIdAlreadyUsed();
	string errorNoValidPlaceId();
	string errorNoValidTransId();
	string errorOnExecution();
	string errorNegativeTokens();
	string errorNoValidIDs();
public:
	ErrorGraphException (int flag);
	string errorDetector();
	/*
	string rmPlaceError();
	string newPlaceError();
	string newTransError();
	string rmArcError();
	string setTokensError();
	string setPesoError();
	string rmTransError();
	string mazeSolverError();
	 */

};


#endif //UNTITLED_ERRORGRAPHEXCEPTION_H
