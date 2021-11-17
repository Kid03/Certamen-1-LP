//
// Created by kid03 on 15-11-21.
//

#include "ErrorGraphException.h"

/*
 * Error 1 - Negative Tokens
 * Error 2 - Id en uso
 * Error 3 - No Valid Place Id
 * Error 4 - No valid Trans Id
 * Error 5 - No valid Ids
 * Error Default - Error en ejecucion
 *
 */

ErrorGraphException::ErrorGraphException(int flag) {
	this->flag=flag;
}

string ErrorGraphException::errorNoValidPlaceId() {
	return "Error, uno o mas los identificadores de places no son validos";
}

string ErrorGraphException::errorOnExecution() {
	return "Error no especificado";
}

string ErrorGraphException::errorIdAlreadyUsed() {
	return "Id ya a sido utilizado, por favor intente con otro";
}

string ErrorGraphException::errorNegativeTokens() {
	return "Error, los tokens deben ser mayores o iguales a 0";
}

string ErrorGraphException::errorNoValidTransId() {
	return "Error, uno o mas los identificadores de Transiciones no son validos";
}

string ErrorGraphException::errorNoValidIDs() {
	return "Error, todos los identificadores no son validos";
}

string ErrorGraphException::errorDetector() {
	switch (flag) {
		case 1:
			return errorNegativeTokens();
		case 2:
			return errorIdAlreadyUsed();
		case 3:
			return errorNoValidPlaceId();
		case 4:
			return errorNoValidTransId();
		case 5:
			return errorNoValidIDs();
		default:
			return errorOnExecution();
	}
}

/*
 * string ErrorGraphException::newTransError() {
	return errorIdAlreadyUsed();
}

string ErrorGraphException::rmArcError() {
	switch (flag) {
		case 1:
			return errorNegativeTokens();
		case 2:
			return errorIdAlreadyUsed();
		case 3:
			return errorNoValidPlaceId();
		case 4:
			return errorNoValidTransId();
		case 5:
			return errorNoValidIDs();
		default:
			return errorOnExecution();
	}
}

string ErrorGraphException::setTokensError() {
	switch (flag) {
		case 1:
			return errorNegativeTokens();
		case 2:
			return errorIdAlreadyUsed();
		default:
			return errorOnExecution();
	}
}

string ErrorGraphException::setPesoError() {
	return errorNoValidPlaceId();
}

string ErrorGraphException::rmTransError() {
	return errorNoValidPlaceId();
}

string ErrorGraphException::mazeSolverError() {
	return errorNoValidPlaceId();
}

string ErrorGraphException::rmPlaceError() {
	return errorNoValidPlaceId();
}

string ErrorGraphException::newPlaceError() {
	switch (flag) {
		case 1:
			return errorNegativeTokens();
		case 3:
			return errorIdAlreadyUsed();
		default:
			return errorOnExecution();
	}

}
 */
