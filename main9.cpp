/*#include <iostream>
#include <vector>

using namespace std;

//6��7��
int main()
{
	
	//p.77 �迭
	int myArray1[5] = { 0 };
	myArray1[0] = 1;
	myArray1[1] = 2;
	myArray1[2] = 3;
	myArray1[3] = 4;
	myArray1[4] = 5;
	//myArray[5] �� 0���� �����Ͽ� 5�� �����Ѵ�

	int myArray2[] = { 1,2,3,4 };
	int myArray3[]{ 1,2,3,4 };
	int myArray4[5]{ 1,2,3 };//������ 4��°�� 5��°�� 0���� �ʱ�ȭ

	int myArray5[2][4] = { 0 };
	//	/	0	1	2	3
	//	0	0	0	0	0
	//	1	0	0	0	0
	int myArray5[2][4] = { {1,2,3,4},{5,6,7,8} };
	//	/	0	1	2	3
	//	0	1	2	3	4
	//	1	5	6	7	8

	array<int, 3> arr = { 1,2,3 };
	int arraySize = arr.size();
	arr[0] = 1;

	auto [a1, a2, a3] = arr;
	//����ü �ڵ����� ����ȯ�� �ϴ°� �׷��� a1,a2,a3�� �ڵ������� int������ ��ȯ ����ü���� ���� ����


	vector<int> myVector = { 11,22 };
	myVector.push_back(33);//{ 11,22,33 }
	myVector.push_back(44);//{ 11,22,33,44 }

	{
		//myVector�� ��� ���� ���� ���� ����� ����
		vector<int> myVector = { 11,22,33 };

		int vectorSize = myVector.size();
		cout << "VectorSize = " << vectorSize << endl;
		int sum1 = 0;

		//3���� ��� ����2���� �� ���̾�
		//for (int i : myVector)
		//for (auto iter = myVector.begin();iter<myVector.end();iter++)
		for (int i = 0; i < myVector.size(); ++i)//�̷��� �ؾ� �޸� �� ������
		{
			sum1 += myVector[i];//��?0,1,2
		}

		cout << "sum = " << sum1 << endl;

		vector<int> myVector6 = { 11, 22,33 };
		int vectorSize6 = myVector6.size();
		cout << "VectorSize = " << vectorSize6 << endl;
		int sum2 = 0;

		//for (int k : myVector)
		for (auto iter = myVector6.begin(); iter < myVector6.end(); iter++)
		{
			sum2 += *iter; //iter? r������ ������ �ּҰ�, *�� �ּ� �ȿ� �ִ� ���� �б�
		}

		for (int k = 0; k < myVector6.size(); ++k)
		{
			sum2 += myVector6[k];
		}
		cout << "sum2 = " << sum2 << endl;





		//myArray�� ��� ���� 1�� ���غ��� (11,22,33)->(12,23,34)
		int myArray1[3] = { 11,22,33 };
		for (int i : myArray1)
		{
			i++;
		}

		for (int i : myArray1)
		{
			cout << "myArray1[" << i << "] = " << i << endl;
		}

		int myArray2[3] = { 11,22,33 };
		for (int& j : myArray2)
		{
			j++;
		}

		for (int j : myArray2)
		{
			cout << "myArray2[" << j << "] = " << j << endl;
		}
	}

	{
		vector<int> myVector = { 11,22,33 };

		int vectorSize = myVector.size();
		cout << "VectorSize = " << vectorSize << endl;
		int sum = 0;

		int i = 0;
		while (i < 3)
		{
			sum += myVector[i];
			i++;
		}

		sum = 0;
		i = 0;
		do {
			sum += myVector[i];
			i++;
		} while (i > 3);
	}

	{
		int selection = 0;

		do {
			system("cls");//�������� ���� ������ ����
			cout << "Whar do you like? :  \n";
			cout << "1)Red \n";
			cout << "2)Blue \n";
			cout << "3)Black \n";
			cout << "4)White \n";
			cin >> selection;

		} while (4 < selection || selection < 1);
		cout << "You like " << selection << endl;
	}
	
	{

		do {
		
			int a, b = { 0 };
			cout << "put number [A B] :  \n";
			cin >> a>>b;
			system("cls");//Ȱ��
			cout << "A + B = "<<a+b<<endl;
			cout << "Quit?(Y/N) : ";
			char q = ' ';
			cin >> q;
			if (q == 'Y')
			{
				break;
			}
		} while (1);
	}


}
*/