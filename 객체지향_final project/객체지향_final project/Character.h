#pragma once

class Character {
private:
	int xpos, ypos;
	int oldxpos, oldypos;

public:
	Character() {
		xpos = 19;
		ypos = 9;
		oldxpos = xpos;
		oldypos = ypos;
	}
	~Character() {

	}

	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();


	// ---- getter/setter ---- //
	// 방을 이동할 때 새롭게 좌표를 지정해줄 때 사용하는 함수
	void setNewCoordinate(int x, int y) {
		xpos = x;
		ypos = y;
		oldxpos = x;
		oldypos = y;
	}

	int getXPos() {
		return xpos;
	}
	int getYPos() {
		return ypos;
	}
	int getOldXPos() {
		return oldxpos;
	}
	int getOldYPos() {
		return oldypos;
	}
};