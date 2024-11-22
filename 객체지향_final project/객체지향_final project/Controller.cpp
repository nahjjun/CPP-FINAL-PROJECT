#include "Controller.h"
#include <conio.h>
#include "consola.h"
void Controller::startGame() {
	view->paintGamePage();

}

int Controller::getKey() {
	int key = _getch();

	if (key == 0xe0)
		return (0xe000 | _getch());
	else
		return key;
}