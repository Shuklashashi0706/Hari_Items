#include <iostream>
#include <ostream>
#define print(x) std::cout << x << std::endl

struct vector2
{
	int x, y;
	vector2 operator+(const vector2& other)
	{
		vector2 result;
		result.x = this->x + other.x;
		result.y = this->y + other.y;
		return result;
	}
	void printVec()
	{
		print(this->x << " " << this->y);
	}
};

std::ostream& operator<<(std::ostream& stream, const vector2& vec2)
{
	stream << vec2.x << " " << vec2.y;
	return stream;
}

int main()
{
	vector2 v1{1,2};
	vector2 v2{3,4};
	vector2 result = v1 + v2;
	result.printVec();
	print(result);
}