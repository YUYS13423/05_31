<<<<<<< HEAD
/*
#include<iostream>;
#include"employeestruct.h"

using namespace std;

enum PieceType1 { 
	PieceTypeKing = 1, 
	PieceTypeQueen, 
	PieceTypeRook = 10, 
	PieceTypePawn 
};

enum class PieceType : unsigned long {
	King = 1,
	Queen,
	Rook = 10,
	Pawn
};

int main() {
	PieceType1 myPiece = PieceTypeRook;
	int a = myPiece;

	PieceType myPiece2 = PieceType::King;
	//int b =myPiece2; //Enum Class는 타입을 변경할 수 없다.
	
	//직원 레코드 생성 및 값 채우기
	Employee anEmployee;
	anEmployee.firstInitial = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	//직원 레코드에 저장된 값 출력하기
	cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary: $" << anEmployee.salary << endl;

	ABC E;
	E.i = 'E';
	E.j = 'I';
	E.k = 123;
	E.l = 321;
	cout << E.i<<"\n" << E.j << "\n" << E.k << "\n" << E.l << endl;
}
=======
/*
#include<iostream>;
#include"employeestruct.h"
using namespace std;

enum PieceType1 { 
	PieceTypeKing = 1, 
	PieceTypeQueen, 
	PieceTypeRook = 10, 
	PieceTypePawn 
};

enum class PieceType : unsigned long {
	King = 1,
	Queen,
	Rook = 10,
	Pawn
};

int main() {
	PieceType1 myPiece = PieceTypeRook;
	int a = myPiece;

	PieceType myPiece2 = PieceType::King;
	//int b =myPiece2; //Enum Class는 타입을 변경할 수 없다.
	
	//직원 레코드 생성 및 값 채우기
	Employee anEmployee;
	anEmployee.firstInitial = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	//직원 레코드에 저장된 값 출력하기
	cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary: $" << anEmployee.salary << endl;

	ABC E;
	E.i = 'E';
	E.j = 'I';
	E.k = 123;
	E.l = 321;
	cout << E.i<<"\n" << E.j << "\n" << E.k << "\n" << E.l << endl;
}
>>>>>>> 453be7d9290bbb862ee4186fc44b9a2808302096
*/