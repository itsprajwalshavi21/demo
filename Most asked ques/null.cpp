#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    A()
    {
        cout << "Inside private" << endl;
    }
    friend class A;
};

class B
{
protected:
    B()
    {
        cout << "Inside protected" << endl;
    }
    friend class B;
};

class C
{
public:
    C()
    {
        cout << "Inside public" << endl;
    }
};

friend class A
{

};

int main()
{
    A a;
    B b;
    C c;
    return 0;
}