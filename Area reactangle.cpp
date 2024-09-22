#include<iostream>
using namespace std;
class rectangle
{
	int lenth,bredth;
	public:
		rectangle(int l,int b)
		{
			lenth=l;
			bredth=b;
		}
		int area()
		{
			return lenth*bredth;
		}
};
int main()
{
	rectangle r(4,5);
	rectangle r1(5,8);
	
	cout<<"\nThe area of 1st rectangle ="<<r.area();
	cout<<"\nThe area of 2nd rectangle ="<<r1.area();
	
	
	return 0;
}
