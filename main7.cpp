<<<<<<< HEAD

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	/*
	//네모10x10
	for (int i = 0; i < 10; i++) 
	{
		if (i == 0 || i == 9) {
			cout << "* * * * * * * * * *" << endl;
		}
		else {
			cout << "*                 *" << endl;
		}
	}
	//더하기 16진수
	int a = 0;
	int b = 0;
	cout << "A is ? ";
	cin >> a;
	cout << "B is ? ";
	cin >> b;
	cout << "16진수(A + B) = "<< hex << uppercase<< a+b  << endl;
	//네모 원하는크기
	int num = 0;
	cout << "Num is ? ";
	cin >> num;
	for (int i= 0; i < num; i++)
	{
		if (i == 0 || i == num-1) {
			for (int j = 0; j < num ; j++) {
				cout << "* ";
			}
			cout<<"\n";
		}
		else {
			cout << "*";
				for (int j = 0; j < num - 2; j++) 
				{
				cout << "  ";
			} 
			cout<<" * " << endl;
		}
	}
	//출력 참거짓
	int a1 = 0;
	int b1 = 0;
	bool TF = false;
	cout << "A is ? ";
	cin >> a1;
	cout << "B is ? ";
	cin >> b1;
	cout << "A-B?" << endl;
	if (a1-b1 > 0) {
		TF = true;
	}
	else if (a1-b1 < 0) {
		TF = false;
	}
	else {
		TF = false;
	}
	cout << boolalpha << TF << endl;
	

	//대소비교후출력
	int a2 = 0;
	int b2 = 0;
	int c2 = 0;
	cout << "A is ? ";
	cin >> a2;
	cout << "B is ? ";
	cin >> b2;
	cout << "C is ? ";
	cin >> c2;
	cout << "A + B와 C의 대소비교" << endl;
	if (a2 + b2 > c2) {
		cout << a2 + b2 << endl;
	}
	else if (a2 + b2 < c2) {
		cout << c2 << endl;
	}
	else {
		cout << c2 << endl;
	}
	
	
	
	//진수 입력 값
	int a3 = 0b10101010;	//2진수
	int b3 = 0111;			//8진수
	int c3 = 0xff;			//16진수
	cout << a3 + b3 - c3 << endl;

	int a4, b4, c4 = { 0 };
	bool TF1 = false;
	cout << "A is ? ";
	cin >> a4;
	cout << "B is ? ";
	cin >> b4;
	cout << "C is ? ";
	cin >> c4;


	if (a4 > b4 && a4 < c4) {
		TF1 = true;
	}
	else {
		TF1 = false;
	}
	cout << boolalpha << TF1 << noboolalpha << endl;
	
	*/
	//x네모 원하는크기
	int num1 = 0;
	cout << "Num is ? ";
	cin >> num1;
	//짝수
	if (num1 % 2 == 0) {
		for (int i = 1; i <= num1; i++)
		{
			if (i == 1 || i == num1) {
				for (int j = 1; j <= num1; j++) {
					cout << "* ";
				}
				cout << "\n";
			}
			else if (i > 1 && i <= num1 / 2) {
				cout << "* ";
				for (int j = 1; j < i - 1; j++)
				{
					cout << "  ";
				}
				cout << "* ";
				for (int j = 0; j <= num1/2-i - 1; j++)
				{
					cout << "    ";
				}
				cout << "*";
				for (int j = 1; j < i - 1; j++)
				{
					cout << "  ";
				}
				cout << " *" << endl;
			}
			else if (i >= num1 / 2 && i < num1) {
				cout << "* ";
				for (int j = 1; j <num1-i ; j++)
				{
					cout << "  ";
				}
				cout << "* ";
				for (int j =  1; j <= i- num1/2-1; j++)
				{
					cout << "    ";
				}
				cout << "*";
				for (int j = 1; j < num1 - i ; j++)
				{
					cout << "  ";
				}
				cout << " *" << endl;
			}

		}
	}
	//홀수
	if (num1 % 2 == 1) {
		for (int i = 1; i <= num1+1; i++)
		{
			if (i == 1 || i == num1+1) {
				for (int j = 1; j <= num1; j++) {
					cout << "* ";
				}
				cout << "\n";
			}
			else if (i > 1 && i <= (num1-1) / 2 && i != (num1 - 1) / 2 + 1) {
				cout << "* ";
				for (int j = 1; j < i - 1; j++)
				{
					cout << "  ";
				}
				cout << "* ";
				for (int j = 0; j <= (num1 - 1) / 2 - i - 1; j++)
				{
					cout << "    ";
				}
				cout << "  *";
				for (int j = 1; j < i - 1; j++)
				{
					cout << "  ";
				}
				cout << " *" << endl;
			}
			else if (i > (num1 - 1) / 2 +1 && i <= (num1 + 1) && i!=(num1+1)/2+1) {
				cout << "* ";
				for (int j = 1; j <= (num1 + 1) - i-1; j++)
				{
					cout << "  ";
				}
				cout << "* ";
				for (int j = 1; j <= i- (num1-1)/2-3; j++)
				{
					cout << "    ";
				}
				cout << "  *";
				for (int j = 1; j <= (num1 + 1) - i-1; j++)
				{
					cout << "  ";
				}
				cout << " *" << endl;
			}
			else if (i == (num1 - 1) / 2 + 1) {
			cout << "* ";
				for (int j = 1; j < (num1-1)/2; j++) {
					cout << "  ";
				}
				cout << "*";
				for (int j = 1; j < (num1-1)/2; j++) {
					cout << "  ";
				}
				cout << " *\n";
			}


		}
	}
=======

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	/*
	//네모10x10
	for (int i = 0; i < 10; i++) 
	{
		if (i == 0 || i == 9) {
			cout << "* * * * * * * * * *" << endl;
		}
		else {
			cout << "*                 *" << endl;
		}
	}
	//더하기 16진수
	int a = 0;
	int b = 0;
	cout << "A is ? ";
	cin >> a;
	cout << "B is ? ";
	cin >> b;
	cout << "16진수(A + B) = "<< hex << uppercase<< a+b  << endl;
	//네모 원하는크기
	int num = 0;
	cout << "Num is ? ";
	cin >> num;
	for (int i= 0; i < num; i++)
	{
		if (i == 0 || i == num-1) {
			for (int j = 0; j < num ; j++) {
				cout << "* ";
			}
			cout<<"\n";
		}
		else {
			cout << "*";
				for (int j = 0; j < num - 2; j++) 
				{
				cout << "  ";
			} 
			cout<<" * " << endl;
		}
	}
	//출력 참거짓
	int a1 = 0;
	int b1 = 0;
	bool TF = false;
	cout << "A is ? ";
	cin >> a1;
	cout << "B is ? ";
	cin >> b1;
	cout << "A-B?" << endl;
	if (a1-b1 > 0) {
		TF = true;
	}
	else if (a1-b1 < 0) {
		TF = false;
	}
	else {
		TF = false;
	}
	cout << boolalpha << TF << endl;
	

	//대소비교후출력
	int a2 = 0;
	int b2 = 0;
	int c2 = 0;
	cout << "A is ? ";
	cin >> a2;
	cout << "B is ? ";
	cin >> b2;
	cout << "C is ? ";
	cin >> c2;
	cout << "A + B와 C의 대소비교" << endl;
	if (a2 + b2 > c2) {
		cout << a2 + b2 << endl;
	}
	else if (a2 + b2 < c2) {
		cout << c2 << endl;
	}
	else {
		cout << c2 << endl;
	}
	
	
	

	int a3 = 0b10101010;
	int b3 = 0111;
	int c3 = 0xff;
	cout << a3 + b3 - c3 << endl;

	int a4, b4, c4 = { 0 };
	bool TF1 = false;
	cout << "A is ? ";
	cin >> a4;
	cout << "B is ? ";
	cin >> b4;
	cout << "C is ? ";
	cin >> c4;


	if (a4 > b4 && a4 < c4) {
		TF1 = true;
	}
	else {
		TF1 = false;
	}
	cout << boolalpha << TF1 << noboolalpha << endl;
	
	*/
	//x네모 원하는크기
	int num1 = 0;
	cout << "Num is ? ";
	cin >> num1;
	//짝수
	if (num1 % 2 == 0) {
		for (int i = 1; i <= num1; i++)
		{
			if (i == 1 || i == num1) {
				for (int j = 1; j <= num1; j++) {
					cout << "* ";
				}
				cout << "\n";
			}
			else if (i > 1 && i <= num1 / 2) {
				cout << "* ";
				for (int j = 1; j < i - 1; j++)
				{
					cout << "  ";
				}
				cout << "* ";
				for (int j = 0; j <= num1/2-i - 1; j++)
				{
					cout << "    ";
				}
				cout << "*";
				for (int j = 1; j < i - 1; j++)
				{
					cout << "  ";
				}
				cout << " *" << endl;
			}
			else if (i >= num1 / 2 && i < num1) {
				cout << "* ";
				for (int j = 1; j <num1-i ; j++)
				{
					cout << "  ";
				}
				cout << "* ";
				for (int j =  1; j <= i- num1/2-1; j++)
				{
					cout << "    ";
				}
				cout << "*";
				for (int j = 1; j < num1 - i ; j++)
				{
					cout << "  ";
				}
				cout << " *" << endl;
			}

		}
	}
	//홀수
	if (num1 % 2 == 1) {
		for (int i = 1; i <= num1+1; i++)
		{
			if (i == 1 || i == num1+1) {
				for (int j = 1; j <= num1; j++) {
					cout << "* ";
				}
				cout << "\n";
			}
			else if (i > 1 && i <= (num1-1) / 2 && i != (num1 - 1) / 2 + 1) {
				cout << "* ";
				for (int j = 1; j < i - 1; j++)
				{
					cout << "  ";
				}
				cout << "* ";
				for (int j = 0; j <= (num1 - 1) / 2 - i - 1; j++)
				{
					cout << "    ";
				}
				cout << "  *";
				for (int j = 1; j < i - 1; j++)
				{
					cout << "  ";
				}
				cout << " *" << endl;
			}
			else if (i > (num1 - 1) / 2 +1 && i <= (num1 + 1) && i!=(num1+1)/2+1) {
				cout << "* ";
				for (int j = 1; j <= (num1 + 1) - i-1; j++)
				{
					cout << "  ";
				}
				cout << "* ";
				for (int j = 1; j <= i- (num1-1)/2-3; j++)
				{
					cout << "    ";
				}
				cout << "  *";
				for (int j = 1; j <= (num1 + 1) - i-1; j++)
				{
					cout << "  ";
				}
				cout << " *" << endl;
			}
			else if (i == (num1 - 1) / 2 + 1) {
			cout << "* ";
				for (int j = 1; j < (num1-1)/2; j++) {
					cout << "  ";
				}
				cout << "*";
				for (int j = 1; j < (num1-1)/2; j++) {
					cout << "  ";
				}
				cout << " *\n";
			}


		}
	}
>>>>>>> 453be7d9290bbb862ee4186fc44b9a2808302096
}