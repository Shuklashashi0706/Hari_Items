#include <iostream>
#define print(x) std::cout << x << std::endl

int main()
{
	// INCREMENT DECREMENT OP
	// --, ++
	//int num = 10;
	//print(num++);
	//print(num);
	//print(++num); // same for -- 

	// ARITHMETIC OP
	// +,-,*,/,%
	//print(2 % 4); // 4 * 0 + 2 = 2 , therefore 2

	// COMPARISION OP
	// <, >, <=, >=, ==, !=,
	// &&, ||

	// BITWISE OP
	// &, |, ^, !, <<, >>, ~
	//unsigned char OneByteNum = -1;
	//print((int)OneByteNum);
	//OneByteNum = 1 & 1; print((int)OneByteNum); // and 1&1=1, 1&0=0, 0&1=0, 0&0=0
	//OneByteNum = 0 | 1; print((int)OneByteNum); // or 0|0=0, 1|0=1, 0|1=1, 1|1=1
	//OneByteNum = 1 ^ 1; print((int)OneByteNum); // xor 0^0=0, 1^0=1, 0^1=1, 1^1=0
	//OneByteNum = !1; print((int)OneByteNum); // not !0=1, !1=0
	//OneByteNum = 4;
	//OneByteNum = OneByteNum >> 2; print((int)OneByteNum);
	//OneByteNum = OneByteNum << 2; print((int)OneByteNum);
	//OneByteNum = ~4; print((int)OneByteNum); // ~00000100 = 11111011 = 251

	// ASSIGNMENT OP
	// +=, -=, *=, /=, %=
	//int num = 10;
	//num += 2;
	//print(num);
	//num -= 2;
	//print(num);
	//num *= 2;
	//print(num);
	//num /= 2;
	//print(num);
	//num %= 2;
	//print(num);
	//num = 10;
	//num %= 20;
	//print(num);

	// TERNARY OP
	std::cout << std::boolalpha;
	true ? print(true) : print(false); // Can nest ternary op
}