#include <iostream>
#include <ostream>
#include <string>
#define print(x) std::cout << x << std::endl

//struct Vector2
//{
//	float x, y;
//};
//
//int main()
//{
//	int a = 2;
//	int b = a; // b is the copy of a
//	b = 3;
//
//	Vector2 vec1 = { 1.0f, 2.0f };
//	Vector2 vec2 = vec1; // vec2 is the copy of vec1
//	vec2.x = 5.0f;
//
//	print(vec1.x);
//	print(vec2.x);
//}



// Shallow copy

//class String
//{
//private:
//	char* buffer;
//	unsigned int size;
//public:
//	friend std::ostream& operator<<(std::ostream& stream, const String& str);
//
//	String(const char* string)
//	{
//		size = strlen(string);
//		buffer = new char[size + 1];
//		memcpy(buffer, string, size);
//		buffer[size] = 0;
//	}
//	~String()
//	{
//		delete[] buffer;
//	}
//};
//
//std::ostream& operator<<(std::ostream&stream, const String& str)
//{
//	stream << str.buffer;
//	return stream;
//}
//
//int main()
//{
//	String str1("Hari");
//	//String str2 = str1; // will Crash
//	print(str1);
//}


// Deep Copy

//class String
//{
//private:
//	char* buffer;
//	unsigned int size;
//public:
//	friend std::ostream& operator<<(std::ostream& stream, const String& str);
//
//	String(const char* string)
//	{
//		size = strlen(string);
//		buffer = new char[size + 1];
//		memcpy(buffer, string, size);
//		buffer[size] = 0;
//	}
//	~String()
//	{
//		delete[] buffer;
//	}
//
//	// The default copy constructor
//	/*String(const String& otherStr) 
//	{ memcpy(this, &otherStr, sizeof(String)); } */
//
//	String(const String& otherStr)
//		: size(otherStr.size)
//	{
//		buffer = new char[size + 1];
//		memcpy(buffer, otherStr.buffer, size);
//		buffer[otherStr.size] = 0;
//		print("Copied String");
//	}
//};
//
//std::ostream& operator<<(std::ostream& stream, const String& str)
//{
//	stream << str.buffer;
//	return stream;
//}
//
//void badPrintStr(String str) { print(str); }
//
//void okOkPrintStr(const String& str)
//{
//	String str2 = str;
//	print(str2);
//}
//
//void BestPrintStr(const String& str) { print(str); }
//
//int main()
//{
//	String str1("Hari");
//	String str2 = str1;
//	print(str1);
//	print(str2);
//	badPrintStr(str2);
//	okOkPrintStr(str2);
//	BestPrintStr(str2);
//}