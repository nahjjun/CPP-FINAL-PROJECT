#include "Parent Room.h"
#include "Consola.h"
#include "BackGround.h"
#include "Box.h"


void ParentRoom::addEntrance(int direction) {
	// iterator를 사용하여 해당 배열에 입구가 이미 있는지 확인한다.
	vector<int>::iterator iter = find(entranceVector.begin(), entranceVector.end(), direction);
	if (iter == entranceVector.end()) { // 해당 배열에 입구가 없으면 입구 추가
		entranceVector.push_back(direction);
	}
}
void ParentRoom::paintEntrance(int direction) {
	_setcursortype(_NOCURSOR);

	// 흰색 배경(사용자가 움직일 공간) 좌표갑 가져옴
	int x = 0;
	int y = 0;
	int width = 0; // 입구의 폭
	int height = 0; // 입구의 높이

	// 방향에 맞추어, 정해진 양식대로 입구를 출력
	switch (direction) {
	case NORTH:
		width = 10;
		height = 1;
		x = BackGround::x + 15;
		y = BackGround::y - height;
		break;
	case SOUTH:
		width = 10;
		height = 1;
		x += BackGround::x + 15;
		y += BackGround::y + BackGround::height;
		break;
	case WEST:
		width = 1;
		height = 10;
		x = BackGround::x - width;
		y = BackGround::y + 15;
		break;
	case EAST:
		width = 1;
		height = 10;
		x = BackGround::x + BackGround::width;
		y = BackGround::y + 15;
		break;
	}
	Box box(x, y, width, height);
	box.paintBox(WHITE);
}