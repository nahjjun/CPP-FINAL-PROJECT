#include "Character.h"
#include "BackGround.h"

void Character::moveUp() {
	int y1 = BackGround::y;
	if (ypos - 1 > y1) {
		oldypos = ypos;
		--ypos;
	}
}
void Character::moveDown() {
	int y2 = BackGround::y + BackGround::height;
	if (ypos + 1 < y2) {
		oldypos = ypos;
		++ypos;
	}
}
void Character::moveLeft() {
	int x1 = BackGround::x;
	if (xpos - 2 > x1) {
		oldxpos = xpos;
		--xpos;
	}
}
void Character::moveRight() {
	int x2 = BackGround::x + BackGround::width;
	if (xpos + 2 < x2) {
		oldxpos = xpos;
		++xpos;
	}
}


