<<<<<<< HEAD
/*
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	{
		int a = 10;
		int b = 0;
		//b = a++;//11,10
		//b = ++a;//11,11
		//b = a--;//9,10
		b = --a;//9,9
		cout << "a = " << a << " b = " << b << endl;
	}
		//{	
		//	cout << "a = " << a << " b = " << b << endl;
		//}오류가 뜬다 괄호안에서 선언해서 위의 a,b는 나오면서 지워져 값이없다
	{
		int a = 10;
		int b = -5;
		bool c = false;
		c = (a > b) ? true : false;//> true
		c = (a == b) ? true : false;//= false
		c = (a > 0 && b > 0) ? true : false;//and false
		c = (a > 0 || b > 0) ? true : false;//or true
		c = (a < 0 && --b>0) ? true : false;//실행 논리, 앞의것이 참이 아니여서 뒤의 값을 볼필요가 없음으로 실행을 안한다 그렇게 되었을때 뒤의 b가 --b로인해 앞의 식이 참일때와 거짓일때 값이 다르게 나올수 있다
		c = !(a > 0) ? true : false;
		
		cout << "Reulst = " << c << " b = " << b << endl;
		cout << "Reulst = " << boolalpha << c << noboolalpha << " b = " << b << endl;
	}
	{
		int num = 10;
		cout << " 2진수 표기 : " << bitset<32>(num) << endl;
		cout << " 8진수 표기 : " << oct << num << endl;
		cout << "10진수 표기 : " << dec << num << endl;
		cout << "16진수 표기 : " << hex << num << dex << endl;

		cout << num << endl;
		num <<= 10;
		cout << bitset<32>(num) << endl;
		cout << num << endl;
		//비트연산1
		int x = 0x35;
		int y = 0xf0;
		cout << "x     = " << bitset<8>(x) << endl;
		cout << "y     = " << bitset<8>(y) << endl;
		cout << "x & y = " << bitset<8>(x & y) << endl;
		cout << "x | y = " << bitset<8>(x | y) << endl;
		cout << "x ^ y = " << bitset<8>(x ^ y) << endl;
		cout << "~x    = " << bitset<8>(~x) << endl;
		//비트연산2
		int x1 = x << 2;
		cout << "x1    = " << bitset<8>(x1) << endl;

		char cX = 0b10010100;
		cout << "cX    = " << bitset<8>(cX) << endl;
		cX >>= 2;
		cout << "cX    = " << bitset<8>(cX) << endl;
		char cY = 0b00010100;
		cout << "cX    = " << bitset<8>(cY) << endl;
		cY >>= 2;
		cout << "cX    = " << bitset<8>(cY) << endl;
		//비트 밀어낼때 왼쪽으로 밀때는 0만 출력하지만 오른쪽으로 밀때는 첫 비트를 복사한다
	}
	{
		//형변환
		
		int intVar = 7;
		double doubleVar = 1.5;
		float floatVar = 3.7f;

		intVar = doubleVar;
		floatVar = intVar;

		//자료형 우선 순위 - 실수 점점 크기와 정밀도가 커지는 우선순위를 가진다
		//char -> int -> long -> float -> double -> long double

		intVar = doubleVar + intVar * floatVar;
		//						 float
		//		doubleVar+(intVar*floatVar)
		//				double
		//intVar = (doubleVar + (intVar * floatVar))
		//          int
	}	
	{
		//static_cast		실행 중에 형 검사를 하지 않으며, 컴파일 할때 수식에 지정된 그대로 변환함
		//dynamic_cast		기초 클래스와 파생 클래스 간의 포인터 또는 참조 형 변환이 프로그램 실행 중에 일어나도록 지시함
		//reinterpret_cast	포인터를 다음 자료형의 포인터나 정수 자료형으로, 또는 그 역으로 변환함
		//const_cast		지정을 일시 해제함
		
		double d = 10.5;
		int a = static_cast<int>(d);
		cout << "d = " << d << " a = " << a << endl;
	}
}
=======
/*
#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	{
		int a = 10;
		int b = 0;
		//b = a++;//11,10
		//b = ++a;//11,11
		//b = a--;//9,10
		b = --a;//9,9
		cout << "a = " << a << " b = " << b << endl;
	}
		//{	
		//	cout << "a = " << a << " b = " << b << endl;
		//}오류가 뜬다 괄호안에서 선언해서 위의 a,b는 나오면서 지워져 값이없다
	{
		int a = 10;
		int b = -5;
		bool c = false;
		c = (a > b) ? true : false;//> true
		c = (a == b) ? true : false;//= false
		c = (a > 0 && b > 0) ? true : false;//and false
		c = (a > 0 || b > 0) ? true : false;//or true
		c = (a > 0 && --b>0) ? true : false;//실행 논리, 앞의것이 참이 아니여서 뒤의 값을 볼필요가 없음으로 실행을 안한다 그렇게 되었을때 뒤의 b가 --b로인해 앞의 식이 참일때와 거짓일때 값이 다르게 나올수 있다
		c = !(a >> 0) ? true : false;
		
		cout << "Reulst = " << c << " b = " << b << endl;
		cout << "Reulst = " << boolalpha << c << noboolalpha << " b = " << b << endl;
	}
	{
		int num = 10;
		cout << " 2진수 표기 : " << bitset<8>(num) << endl;
		cout << " 8진수 표기 : " << oct << num << endl;
		cout << "10진수 표기 : " << dec << num << endl;
		cout << "16진수 표기 : " << hex << num << endl;

		cout << num << endl;
		num <<= 10;
		cout << bitset<32>(num) << endl;
		cout << num << endl;

		int x = 0x35;
		int y = 0xf0;
		cout << "x     = " << bitset<8>(x) << endl;
		cout << "y     = " << bitset<8>(y) << endl;
		cout << "x & y = " << bitset<8>(x & y) << endl;
		cout << "x | y = " << bitset<8>(x | y) << endl;
		cout << "x ^ y = " << bitset<8>(x ^ y) << endl;
		cout << "~x    = " << bitset<8>(~x) << endl;

		int x1 = x << 2;
		cout << "x1    = " << bitset<8>(x1) << endl;

		char cX = 0b10010100;
		cout << "cX    = " << bitset<8>(cX) << endl;
		cX >>= 2;
		cout << "cX    = " << bitset<8>(cX) << endl;
		char cY = 0b00010100;
		cout << "cX    = " << bitset<8>(cY) << endl;
		cY >>= 2;
		cout << "cX    = " << bitset<8>(cY) << endl;
	}
	{
		//형변환
		
		int intVar = 7;
		double doubleVar = 1.5;
		float floatVar = 3.7f;

		intVar = doubleVar;
		floatVar = intVar;

		//자료형 우선 순위 - 실수 점점 크기와 정밀도가 커지는 우선순위를 가진다
		//char -> int -> long -> float -> double -> long double

		intVar = doubleVar + intVar * floatVar;
		//						 float
		//		doubleVar+(intVar*floatVar)
		//				double
		//intVar = (doubleVar + (intVar * floatVar))
		//          int
	}	
	{
		//static_cast		실행 중에 형 검사를 하지 않으며, 컴파일 할때 수식에 지정된 그대로 변환함
		//dynamic_cast		기초 클래스와 파생 클래스 간의 포인터 또는 참조 형 변환이 프로그램 실행 중에 일어나도록 지시함
		//reinterpret_cast	포인터를 다음 자료형의 포인터나 정수 자료형으로, 또는 그 역으로 변환함
		//const_cast		지정을 일시 해제함
		
		double d = 10.5;
		int a = static_cast<int>(d);
		cout << "d = " << d << " a = " << a << endl;
	}
}
>>>>>>> 453be7d9290bbb862ee4186fc44b9a2808302096
*/