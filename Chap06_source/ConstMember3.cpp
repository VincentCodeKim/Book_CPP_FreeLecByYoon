/*
   ConstMember3.cpp
*/
#include <iostream>
using std::cout;
using std::endl;

class Count
{
	int cnt;
public :
	Count() : cnt(0){}
	int* GetPtr() const{
		return &cnt;  // Compile Error
	}

	void Increment(){
		cnt++;
	}

	void ShowData() const {
		ShowIntro();  // Compile Error
		cout<<cnt<<endl;		
	}
	void ShowIntro() {
		cout<<"현재 count의 값 : "<<endl;
	}
};

int main()
{
	Count count;
	count.Increment();
	count.ShowData();

	return 0;
}
