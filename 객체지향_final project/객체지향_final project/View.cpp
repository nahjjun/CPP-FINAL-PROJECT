#include "View.h"
#include "Controller.h"
#include <conio.h>
#include "Consola.h"
#include "BackGround.h"


// --------------- static 메소드 --------------- //
void View::fillBox(int x1, int y1, int x2, int y2, char color) {
	textbackground(color);
	for (int y = y1; y <= y2; ++y)
		for (int x = x1; x <= x2; ++x)
			xyPutC(x, y, ' ');
}

void View::xyPutC(int x, int y, char ch) {
	gotoxy(x, y);
	cout << ch;
}

void View::xyPutStr(int x, int y, const char str[]) {
	gotoxy(x, y);
	cout << str;
}



// --------------- 일반 메소드 --------------- //
void View::paintGamePage() {
	paintBackGround();
	paintCharacter();

}


void View::paintBackGround() {
	int scr_x1 = BackGround::x;
	int scr_x2 = BackGround::x + BackGround::width;
	int scr_y1 = BackGround::y;
	int scr_y2 = BackGround::y + BackGround::height;

	clrscr();
	_setcursortype(_NOCURSOR);
	fillBox(scr_x1-1, scr_y1, scr_x2+1, scr_y2, BLACK);
	fillBox(scr_x1, scr_y1, scr_x2, scr_y2, WHITE);
}


void View::paintCharacter() {
	Character *character = model->getCharacter();

	int key;

	textcolor(BLACK); // 캐릭터 색상
	textbackground(WHITE);
	while ((key = Controller::getKey()) != 'q') {
		switch (key) {
		case UPKEY:		character->moveUp(); break;
		case DOWNKEY:	character->moveDown(); break;
		case LEFTKEY:	character->moveLeft(); break;
		case RIGHTKEY:	character->moveRight(); break;
		}

		if (character->getOldXPos() != character->getXPos() || character->getOldYPos() != character->getYPos()) {
			View::xyPutStr(character->getOldXPos(), character->getOldYPos(), "  "); // 잔상 처리
			View::xyPutStr(character->getXPos(), character->getYPos(), "ㅁ");
		}
	}
}

