#pragma once
#include <vector>

#define NORTH 0
#define SOUTH 1
#define WEST 2
#define EAST 3

using namespace std;

class Model;

// 각 방들의 부모 클래스
class ParentRoom {
protected:
	Model *model;
	vector<int> entranceVector; // 각 방에 있는 입구들을 담은 배열


public:
	ParentRoom(Model* model):model(model) {
	}
	// 가상 소멸자 사용해야 메모리 누수 방지가 가능함
	virtual ~ParentRoom() {
	}

	// 방을 색칠하는 함수. Model이 방들의 배열을 갖고 있으면 이 함수로표 각 방을 출력할 것이다.
	// 따라서, 자식 클래스들에게 반드시 override 표현을 해주어야 한다. 그래야 ParentRoom으로 해당 객체들을 받을 때 각자의 메소드가 실행된다.
	virtual void paintRoom() = 0;

protected:
	// 입구를 entranceVector에 추가하는 함수. 방향을 인자로 주면, 해당 방향이 vector에 있는지 검사하고 추가한다.
	virtual void addEntrance(int direction);

	// paintRoom 내부에서 for문으로 사용할 "각 방의 입구를 그리는 함수". 방별로 entranceVector에 저장되어있는 값으로 입구를 그린다.
	virtual void paintEntrance(int direction);

};

