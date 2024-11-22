#pragma once
#include <vector>

#define NORTH 0
#define SOUTH 1
#define WEST 2
#define EAST 3

using namespace std;

class Model;

// �� ����� �θ� Ŭ����
class ParentRoom {
protected:
	Model *model;
	vector<int> entranceVector; // �� �濡 �ִ� �Ա����� ���� �迭


public:
	ParentRoom(Model* model):model(model) {
	}
	// ���� �Ҹ��� ����ؾ� �޸� ���� ������ ������
	virtual ~ParentRoom() {
	}

	// ���� ��ĥ�ϴ� �Լ�. Model�� ����� �迭�� ���� ������ �� �Լ���ǥ �� ���� ����� ���̴�.
	// ����, �ڽ� Ŭ�����鿡�� �ݵ�� override ǥ���� ���־�� �Ѵ�. �׷��� ParentRoom���� �ش� ��ü���� ���� �� ������ �޼ҵ尡 ����ȴ�.
	virtual void paintRoom() = 0;

protected:
	// �Ա��� entranceVector�� �߰��ϴ� �Լ�. ������ ���ڷ� �ָ�, �ش� ������ vector�� �ִ��� �˻��ϰ� �߰��Ѵ�.
	virtual void addEntrance(int direction);

	// paintRoom ���ο��� for������ ����� "�� ���� �Ա��� �׸��� �Լ�". �溰�� entranceVector�� ����Ǿ��ִ� ������ �Ա��� �׸���.
	virtual void paintEntrance(int direction);

};

