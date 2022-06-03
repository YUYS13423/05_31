/* #include <iostream>

using namespace std;

int main() {
	unsigned int x = 2999999999;//지정해준 변수 할당의 값의 범위를 넘어가면 돌아버린다
	cout << "x = " << x << endl;

	int someInteger = 256;//256 문제값
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
	someFloat=someLong+0.785f;//5140000.785//5140000이다 이유는 float가 7자리표현 가능한데 맨앞부터 7자리를 새면 5140000이다
	someDouble=static_cast<double>(someFloat)/100000;//51.40000785//그러므로 여기도 51.4로 앞에서 잘려서온다
	
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
	
	//상수
	const int a = 0;
	constexpr int b = 0;
}*/