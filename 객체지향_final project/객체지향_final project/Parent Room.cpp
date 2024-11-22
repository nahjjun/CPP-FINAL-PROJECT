#include "Parent Room.h"
#include "Consola.h"
#include "BackGround.h"
#include "Box.h"


void ParentRoom::addEntrance(int direction) {
	// iterator�� ����Ͽ� �ش� �迭�� �Ա��� �̹� �ִ��� Ȯ���Ѵ�.
	vector<int>::iterator iter = find(entranceVector.begin(), entranceVector.end(), direction);
	if (iter == entranceVector.end()) { // �ش� �迭�� �Ա��� ������ �Ա� �߰�
		entranceVector.push_back(direction);
	}
}
void ParentRoom::paintEntrance(int direction) {
	_setcursortype(_NOCURSOR);

	// ��� ���(����ڰ� ������ ����) ��ǥ�� ������
	int x = 0;
	int y = 0;
	int width = 0; // �Ա��� ��
	int height = 0; // �Ա��� ����

	// ���⿡ ���߾�, ������ ��Ĵ�� �Ա��� ���
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