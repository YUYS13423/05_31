/* #include <iostream>

using namespace std;

int main() {
	unsigned int x = 2999999999;//�������� ���� �Ҵ��� ���� ������ �Ѿ�� ���ƹ�����
	cout << "x = " << x << endl;

	int someInteger = 256;//256 ������
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;

	someInteger++;//257
	cout << someInteger << endl;
	someInteger*=2;//514
	cout << someInteger << endl;
	someShort=static_cast<short>(someInteger);//514
	someLong = someShort * 10000;//5140000
	someFloat=someLong+0.785f;//5140000.785//5140000�̴� ������ float�� 7�ڸ�ǥ�� �����ѵ� �Ǿպ��� 7�ڸ��� ���� 5140000�̴�
	someDouble=static_cast<double>(someFloat)/100000;//51.40000785//�׷��Ƿ� ���⵵ 51.4�� �տ��� �߷����´�
	
	cout << someShort << endl;
	cout << someLong << endl;
	cout << someFloat << endl;
	cout << someDouble << endl;

	int firstNum = 0;
	cout << "first Num :	"<< endl;
	cin >> firstNum;
	int secondNum = 0;
	cout << "second Num :	" << endl;
	cin >> secondNum;
	cout << firstNum + secondNum << endl;
	cout << firstNum - secondNum << endl;
	cout << firstNum * secondNum << endl;
	cout << firstNum / secondNum << endl;
	
	//���
	const int a = 0;
	constexpr int b = 0;
}*/