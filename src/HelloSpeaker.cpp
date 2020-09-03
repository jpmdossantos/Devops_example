/*
 * HelloSpeaker.cpp
 *
 *  Created on: 3 de set de 2020
 *      Author: jsantos
 */

#include "HelloSpeaker.h"

HelloSpeaker::HelloSpeaker(std::string phrase = "Henlo") {
	this->phrase = phrase;
}

HelloSpeaker::HelloSpeaker() {
	this->phrase = "Henlo";
}

std::string HelloSpeaker::greet() {
	std::cout << this->phrase <<std::endl;
	return this->phrase;
}
