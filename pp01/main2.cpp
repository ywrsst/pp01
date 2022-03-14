#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	Player()//생성자
	{}
	~Player()//소멸자
	{}
};
int main()
{
	int* a = (int*)malloc(sizeof(int) * 2);
	free(a);
	int* b = new int[2];//메모리 주소 할당
	delete(b);//c++용어,메모리 주소 지우는 역활
	return 0;
}