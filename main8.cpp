/*#include <iostream>

using namespace std;

int main()
{

	int Score = { 0 };
	cin >> Score;

	if (Score >= 90)
	{
		cout << "A" << endl;
	}
	else if (Score >= 80 && Score < 90)
	{
		cout << "B" << endl;
	}
	else if (Score >= 70 && Score < 80)
	{
		cout << "C" << endl;
	}
	else if (Score >= 60 && Score < 70)
	{
		cout << "D" << endl;
	}
	else if (Score >= 50 && Score < 60)
	{
		cout << "E" << endl;
	}
	else
	{
		cout << "F" << endl;
	}


	Score /= 10;

	switch (Score)
	{
	case 10:
	case 9:
		cout << "A" << endl;
		break;
	case 8:
		cout << "B" << endl;
		break;
	case 7:
		cout << "C" << endl;
		break;
	case 6:
		cout << "D" << endl;
		break;
	case 5:
		cout << "E" << endl;
		break;
	default:
		cout << "F" << endl;
		break;
	}

	//��� ������
	int a1 = 0;
	int b1 = 0;

	cout << "A is ? ";
	cin >> a1;
	cout << "B is ? ";
	cin >> b1;
	cout << "A-B>0?" << endl;
	bool TF = (a1 - b1 > 0);

	switch(a1 - b1 > 0)
	{
	case true:
		cout << "True" << endl;
		break;
	case false :
		cout << "False" << endl;
		break;
	default :
		cout << "False" << endl;
		break;
	}
	

	int num12 = { 0 };
	cout << "���� �ϳ��� �Է�? ";
	cin >> num12;

	switch (num12)
	{
	case 1 :
		cout << "Red" << endl;
		break;
	case 2:
		cout << "Blue" << endl;
		break;
	case 3:
		cout << "Black" << endl;
		break;
	case 4:
		cout << "White" << endl;
		break;
	default:
		cout << "����" << endl;
		break;
	}

	
int ju = { 0 };
cout << "�ֹι�ȣ �ڿ� 7�ڸ��� �Է� ";
cin >> ju;
ju /= 1000000;
switch (ju)
{
case 1:
__fallthrough;
case 3:
	cout << "����" << endl;
	break;
case 2:
__fallthrough;
case 4:
	cout << "����" << endl;
	break;
default:
	cout << "�ܰ���" << endl;
	break;
}
}*/