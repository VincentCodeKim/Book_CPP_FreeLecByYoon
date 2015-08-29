/*
   Default1.cpp
*/
#include<iostream>
using std::cout;
using std::endl;

class Point 
{
	int x, y;
public:
	Point(int _x=0, int _y=0)
	{
		x=_x, y=_y;
	}
	void ShowData()
	{
		cout<<x<<' '<<y<<endl;
	}
};

int main()
{
	Point p1(10, 20);   //10�� 20�� ���ڷ� �޴� ������ ȣ��
	p1.ShowData();

	Point p2;   //void ������ ȣ��.
	p2.ShowData(); 
	return 0;
}