/*#include <iostream>
#include <vector>

using namespace std;

//6월7일
int main()
{
	
	//p.77 배열
	int myArray1[5] = { 0 };
	myArray1[0] = 1;
	myArray1[1] = 2;
	myArray1[2] = 3;
	myArray1[3] = 4;
	myArray1[4] = 5;
	//myArray[5] 는 0부터 시작하여 5개 생성한다

	int myArray2[] = { 1,2,3,4 };
	int myArray3[]{ 1,2,3,4 };
	int myArray4[5]{ 1,2,3 };//나머지 4번째와 5번째는 0으로 초기화

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
	//구조체 자동으로 형변환을 하는것 그래서 a1,a2,a3가 자동적으로 int형으로 변환 구조체에도 쓸수 있음


	vector<int> myVector = { 11,22 };
	myVector.push_back(33);//{ 11,22,33 }
	myVector.push_back(44);//{ 11,22,33,44 }

	{
		//myVector에 모든 값을 더한 값을 출력해 보자
		vector<int> myVector = { 11,22,33 };

		int vectorSize = myVector.size();
		cout << "VectorSize = " << vectorSize << endl;
		int sum1 = 0;

		//3가지 방법 위의2개가 더 많이씀
		//for (int i : myVector)
		//for (auto iter = myVector.begin();iter<myVector.end();iter++)
		for (int i = 0; i < myVector.size(); ++i)//이렇게 해야 메모리 덜 차지함
		{
			sum1 += myVector[i];//ㅑ?0,1,2
		}

		cout << "sum = " << sum1 << endl;

		vector<int> myVector6 = { 11, 22,33 };
		int vectorSize6 = myVector6.size();
		cout << "VectorSize = " << vectorSize6 << endl;
		int sum2 = 0;

		//for (int k : myVector)
		for (auto iter = myVector6.begin(); iter < myVector6.end(); iter++)
		{
			sum2 += *iter; //iter? r각각의 원소의 주소값, *는 주소 안에 있는 값을 읽기
		}

		for (int k = 0; k < myVector6.size(); ++k)
		{
			sum2 += myVector6[k];
		}
		cout << "sum2 = " << sum2 << endl;





		//myArray에 모든 값에 1씩 더해보자 (11,22,33)->(12,23,34)
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
			system("cls");//지워지는 느낌 범위는 몰러
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
			system("cls");//활용
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