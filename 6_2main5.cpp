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
		//}������ ��� ��ȣ�ȿ��� �����ؼ� ���� a,b�� �����鼭 ������ ���̾���
	{
		int a = 10;
		int b = -5;
		bool c = false;
		c = (a > b) ? true : false;//> true
		c = (a == b) ? true : false;//= false
		c = (a > 0 && b > 0) ? true : false;//and false
		c = (a > 0 || b > 0) ? true : false;//or true
		c = (a < 0 && --b>0) ? true : false;//���� ��, ���ǰ��� ���� �ƴϿ��� ���� ���� ���ʿ䰡 �������� ������ ���Ѵ� �׷��� �Ǿ����� ���� b�� --b������ ���� ���� ���϶��� �����϶� ���� �ٸ��� ���ü� �ִ�
		c = !(a > 0) ? true : false;
		
		cout << "Reulst = " << c << " b = " << b << endl;
		cout << "Reulst = " << boolalpha << c << noboolalpha << " b = " << b << endl;
	}
	{
		int num = 10;
		cout << " 2���� ǥ�� : " << bitset<32>(num) << endl;
		cout << " 8���� ǥ�� : " << oct << num << endl;
		cout << "10���� ǥ�� : " << dec << num << endl;
		cout << "16���� ǥ�� : " << hex << num << dex << endl;

		cout << num << endl;
		num <<= 10;
		cout << bitset<32>(num) << endl;
		cout << num << endl;
		//��Ʈ����1
		int x = 0x35;
		int y = 0xf0;
		cout << "x     = " << bitset<8>(x) << endl;
		cout << "y     = " << bitset<8>(y) << endl;
		cout << "x & y = " << bitset<8>(x & y) << endl;
		cout << "x | y = " << bitset<8>(x | y) << endl;
		cout << "x ^ y = " << bitset<8>(x ^ y) << endl;
		cout << "~x    = " << bitset<8>(~x) << endl;
		//��Ʈ����2
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
		//��Ʈ �о�� �������� �ж��� 0�� ��������� ���������� �ж��� ù ��Ʈ�� �����Ѵ�
	}
	{
		//����ȯ
		
		int intVar = 7;
		double doubleVar = 1.5;
		float floatVar = 3.7f;

		intVar = doubleVar;
		floatVar = intVar;

		//�ڷ��� �켱 ���� - �Ǽ� ���� ũ��� ���е��� Ŀ���� �켱������ ������
		//char -> int -> long -> float -> double -> long double

		intVar = doubleVar + intVar * floatVar;
		//						 float
		//		doubleVar+(intVar*floatVar)
		//				double
		//intVar = (doubleVar + (intVar * floatVar))
		//          int
	}	
	{
		//static_cast		���� �߿� �� �˻縦 ���� ������, ������ �Ҷ� ���Ŀ� ������ �״�� ��ȯ��
		//dynamic_cast		���� Ŭ������ �Ļ� Ŭ���� ���� ������ �Ǵ� ���� �� ��ȯ�� ���α׷� ���� �߿� �Ͼ���� ������
		//reinterpret_cast	�����͸� ���� �ڷ����� �����ͳ� ���� �ڷ�������, �Ǵ� �� ������ ��ȯ��
		//const_cast		������ �Ͻ� ������
		
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
		//}������ ��� ��ȣ�ȿ��� �����ؼ� ���� a,b�� �����鼭 ������ ���̾���
	{
		int a = 10;
		int b = -5;
		bool c = false;
		c = (a > b) ? true : false;//> true
		c = (a == b) ? true : false;//= false
		c = (a > 0 && b > 0) ? true : false;//and false
		c = (a > 0 || b > 0) ? true : false;//or true
		c = (a > 0 && --b>0) ? true : false;//���� ��, ���ǰ��� ���� �ƴϿ��� ���� ���� ���ʿ䰡 �������� ������ ���Ѵ� �׷��� �Ǿ����� ���� b�� --b������ ���� ���� ���϶��� �����϶� ���� �ٸ��� ���ü� �ִ�
		c = !(a >> 0) ? true : false;
		
		cout << "Reulst = " << c << " b = " << b << endl;
		cout << "Reulst = " << boolalpha << c << noboolalpha << " b = " << b << endl;
	}
	{
		int num = 10;
		cout << " 2���� ǥ�� : " << bitset<8>(num) << endl;
		cout << " 8���� ǥ�� : " << oct << num << endl;
		cout << "10���� ǥ�� : " << dec << num << endl;
		cout << "16���� ǥ�� : " << hex << num << endl;

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
		//����ȯ
		
		int intVar = 7;
		double doubleVar = 1.5;
		float floatVar = 3.7f;

		intVar = doubleVar;
		floatVar = intVar;

		//�ڷ��� �켱 ���� - �Ǽ� ���� ũ��� ���е��� Ŀ���� �켱������ ������
		//char -> int -> long -> float -> double -> long double

		intVar = doubleVar + intVar * floatVar;
		//						 float
		//		doubleVar+(intVar*floatVar)
		//				double
		//intVar = (doubleVar + (intVar * floatVar))
		//          int
	}	
	{
		//static_cast		���� �߿� �� �˻縦 ���� ������, ������ �Ҷ� ���Ŀ� ������ �״�� ��ȯ��
		//dynamic_cast		���� Ŭ������ �Ļ� Ŭ���� ���� ������ �Ǵ� ���� �� ��ȯ�� ���α׷� ���� �߿� �Ͼ���� ������
		//reinterpret_cast	�����͸� ���� �ڷ����� �����ͳ� ���� �ڷ�������, �Ǵ� �� ������ ��ȯ��
		//const_cast		������ �Ͻ� ������
		
		double d = 10.5;
		int a = static_cast<int>(d);
		cout << "d = " << d << " a = " << a << endl;
	}
}
>>>>>>> 453be7d9290bbb862ee4186fc44b9a2808302096
*/