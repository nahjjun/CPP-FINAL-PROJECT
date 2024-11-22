#pragma once
#include <vector>
#include "Parent Room.h"
#include <iostream>
using namespace std;

class View {
private:
	Model *model;
	vector<ParentRoom*> roomVector; // 추상 클래스로 각 방들을 받기 위한 벡터


	const char exitChar = 'q'; // paintGamePage 함수의 종료를 위한 종료 키

public:
	View(Model *model) {
		this->model = model;
	}
	~View() {}


	// ------------ 그림을 그릴 수 있는 기본 static 함수들 ---------------- //
	static void fillBox(int x1, int y1, int x2, int y2, char color);
	static void xyPutC(int x, int y, char ch);
	static void xyPutStr(int x, int y, const char str[]);

	

	// -------------- void paintGamePage() ------------------ //
	// 사용자가 View에서 사용할 수 있는 함수. 무한반복문으로 전체적인 게임 페이지를 출력한다.
	void paintGamePage();


private:
	// -------------- void paintBackGround() ------------------ //
	// 배경을 그리는 함수. clrscr() 함수가 내부에서 실행되었기에, 화면을 그릴 때 가장 처음에 실행되어야 함
	void paintBackGround();

	// -------------- void paintCharacter() ------------------ //
	// 캐릭터를 그리는 함수.
	void paintCharacter();


};
