/*#include <iostream>

using namespace std;

namespace myNS1 { int n = 10; } //이름선언에 이름에 묶이는 n을 생성할 수 있다
namespace myNS2 { int n = 20; } //여러가지 n을 생성하면서 겹치지 않게 정의 할 수 있다
int n = 30;

int main(int argc, char* argv[]) //int argc 자리에 갯수를 설정하고 char argv 자리에 값 생성 사실상 a+1의 크기를 가짐(char데이터포함하기때문)
{
	int n = 40;	
	//n을 불러오는 여러가지 방법
	std::cout << myNS1::n << std::endl;
	std::cout << myNS2::n << std::endl;
	std::cout << ::n << std::endl;
	std::cout << n << std::endl;

	//생략?부분 p.58
	cout << "Hellow World" << endl;
	//강제 형변환
	float myFloat = 3.14f;

	int i1 = (int)myFloat;//비추천
	int i2 = int(myFloat);//제일 별루 비추천
	int i3 = static_cast<int>(myFloat);//정확한 형변환 방법

	cout << i1 << "\n" << i2 << "\n" << i3 << endl;

	double d1 = 1200;
	double d2 = 1200.0;
	double d3 = 12e2;//12*(10^2)
	double d4 = 1.2e+3;//1.2*(10^3)
	int d5 = 12e2;//12*(10^2)
	double d6 = 1.2e-3;//1.2*(10^-3)

	cout << d1 << "\n" << d2 << "\n" << d3<< "\n" << d4 << "\n" << d5 << "\n" << d6 << endl;
	
}*/



	
	