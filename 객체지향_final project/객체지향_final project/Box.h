#pragma once
// �׸��� �ս��� �׸��� ���� Box Ŭ����
// �ش� Ŭ������ x,y ��ǥ, width, height�� �����͸� ��� �ֵ�.
class Box {
private:
	int x, y; // �ڽ��� ���� ��� �������� ��ǥ
	int width, height;

public:
	Box(int _x, int _y, int _width, int _height)
		:x(_x), y(_y), width(_width), height(_height)
	{}
	Box() {
		Box(0, 0, 0, 0);
	}
	~Box() {}

	// ----- getter / setter ----- //
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	int getWidth() {
		return width;
	}
	int getHeight() {
		return height;
	}
	void setX(int x) {
		this->x = x;
	}
	void setY(int y) {
		this->y = y;
	}
	void setWidth(int width) {
		this->width = width;
	}
	void setHeight(int height) {
		this->height = height;
	}


	// ---- �ڽ��� �׸��� �Լ� ---- //
	void paintBox(char color);
};