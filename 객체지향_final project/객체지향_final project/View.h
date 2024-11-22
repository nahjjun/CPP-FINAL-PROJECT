#pragma once
#include <vector>
#include "Parent Room.h"
#include <iostream>
using namespace std;

class View {
private:
	Model *model;
	vector<ParentRoom*> roomVector; // �߻� Ŭ������ �� ����� �ޱ� ���� ����


	const char exitChar = 'q'; // paintGamePage �Լ��� ���Ḧ ���� ���� Ű

public:
	View(Model *model) {
		this->model = model;
	}
	~View() {}


	// ------------ �׸��� �׸� �� �ִ� �⺻ static �Լ��� ---------------- //
	static void fillBox(int x1, int y1, int x2, int y2, char color);
	static void xyPutC(int x, int y, char ch);
	static void xyPutStr(int x, int y, const char str[]);

	

	// -------------- void paintGamePage() ------------------ //
	// ����ڰ� View���� ����� �� �ִ� �Լ�. ���ѹݺ������� ��ü���� ���� �������� ����Ѵ�.
	void paintGamePage();


private:
	// -------------- void paintBackGround() ------------------ //
	// ����� �׸��� �Լ�. clrscr() �Լ��� ���ο��� ����Ǿ��⿡, ȭ���� �׸� �� ���� ó���� ����Ǿ�� ��
	void paintBackGround();

	// -------------- void paintCharacter() ------------------ //
	// ĳ���͸� �׸��� �Լ�.
	void paintCharacter();


};
