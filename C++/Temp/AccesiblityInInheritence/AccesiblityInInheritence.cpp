#include <iostream>
#define print(x) std::cout << x << std::endl

class C1
{
    public:
    int a = 1;
    protected:
    int b = 5;
    private:
    int c = 10;
};

class C2 : public C1 { };
class C3 : public C2
{
    /* a,b or c is accesible as public */
    void UseA() {print(a);}
    void UseB() {print(b);}
};

class C4 : protected C1 { };
class C5 : public C4
{
    /* a,b or c is accesible as protected */
    void useA() { print(a); }
    void useB() { print(b); }
};

class C6 : private C1 { };
class C7 : public C6
{ /* Neither of a,b or c is accesible*/ };

int main()
{
    C3 c1;
    c1.a;
    // c1.b;

    C5 c2;
    // c2.a;
    // c2.b;

    C6 c3;
    // c3.a;
    // c3.b;
}