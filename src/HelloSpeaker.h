/*
 * HelloSpeaker.h
 *
 *  Created on: 3 de set de 2020
 *      Author: jsantos
 */

#ifndef SRC_HELLOSPEAKER_H_
#define SRC_HELLOSPEAKER_H_

#include <iostream>

class HelloSpeaker {
public:
	HelloSpeaker(std::string);
	HelloSpeaker();
	std::string greet();
private:
	std::string phrase;
};

#endif /* SRC_HELLOSPEAKER_H_ */
