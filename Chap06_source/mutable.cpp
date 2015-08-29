/*
   mutable.cpp
*/
#include<iostream>
using std::cout;
using std::endl;

class AAA
{
private:
	mutable int val1;
	int val2;

public:
	void SetData(int a, int b) const 
	{
		val1=a;  // val1�� mutable�̹Ƿ� OK!
		val2=b;  // Error!
	}
};

int main(void)
{
	AAA a1;
	a1.SetData(10, 20);
	return 0;
}