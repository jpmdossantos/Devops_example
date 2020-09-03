/*
 * HelloSpeaker_test.cpp
 *
 *  Created on: 3 de set de 2020
 *      Author: jsantos
 */

#include "../src/HelloSpeaker.h"
#include "catch.hpp"
#include <string>

TEST_CASE( "A frase enviada para o HelloSpeaker é falada", "[speak]" ) {
	HelloSpeaker speaker;

	SECTION( "O speaker é criado vazio" ) {
		REQUIRE( speaker.greet() == "Henlo" );
	}

	SECTION( "A frase utilizada na criação do speaker é falada" ) {
		std::string test_phrase = "Hellotest";
		HelloSpeaker speaker_phrase{test_phrase};
		REQUIRE( speaker_phrase.greet() == test_phrase );
	}
}
