#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	Player()//������
	{}
	~Player()//�Ҹ���
	{}
};
int main()
{
	int* a = (int*)malloc(sizeof(int) * 2);
	free(a);
	int* b = new int[2];//�޸� �ּ� �Ҵ�
	delete(b);//c++���,�޸� �ּ� ����� ��Ȱ
	return 0;
}