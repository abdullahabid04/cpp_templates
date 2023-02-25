#include<iostream>
using namespace std;
template<typename T>
T add(T a,T b)
{
	return a+b;
}
int main()
{
	int x,y;
	float i,j;
	cout<<"Enter num 1(int)"<<endl;
	cin>>x;
	cout<<"Enter num 2(int)"<<endl;
	cin>>y;
	cout<<"Enter num 1(float)"<<endl;
	cin>>i;
	cout<<"Enter num 2(float)"<<endl;
	cin>>j;
	cout<<add<int>(x,y)<<endl;
	cout<<add<float>(i,j)<<endl;
}
