/*
   ConstOverloading.cpp
*/
#include <iostream>
using std::cout;
using std::endl;

class AAA
{
	int num;
public :
	AAA(int _num) : num(_num) {}

	void ShowData(){
		cout<<"void ShowData() ȣ��"<<endl;
		cout<<num<<endl;
	}
	void ShowData() const {
		cout<<"void ShowData() const ȣ��"<<endl;
		cout<<num<<endl;
	}
};

int main()
{
	const AAA aaa1(20);
	AAA aaa2(70);

    aaa1.ShowData();
	aaa2.ShowData();
	return 0;
}
