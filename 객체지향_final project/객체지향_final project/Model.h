#pragma once
#include <iostream>
#include "Character.h"


using namespace std;

class Model {
private:
	Character *character;

public:
	Model() {
		character = new Character();
	}
	~Model() {
		delete character;
	}


	Character* getCharacter() {
		return character;
	}


};
