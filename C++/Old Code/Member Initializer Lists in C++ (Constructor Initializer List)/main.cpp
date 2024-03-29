//#include <iostream>
//#define print(x) std::cout << x << std::endl
//
//class E
//{
//	int a;
//public:
//	E(): a(0) { print("E created"); }
//	E(int x) :a{x} { print("E created with a: " << a); }
//};

//class C
//{
//private:
//	E e; E e2;
//public:
//	C() : e(1) { e2 = E(2); }
//};
//
//int main()
//{
//	C c;
//}



//#include <iostream>
//#define print(x) std::cout << x << std::endl
//
//class E
//{
//	int a;
//public:
//	E(int x) :a{ x } { print("E created with a: " << a); }
//};
//
//class C
//{
//	E b, a;
//public:
//	C(int a, int b, int c, int d) : d(d), c(c), b(b), a(a) // Order here does not matter, order the members are declared in class matters
//	{ }
//private:
//	E c, d;
//};
//
//int main()
//{
//	C c(1, 2, 3, 4);
//}