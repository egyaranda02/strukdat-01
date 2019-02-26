/* 
Nama	: Ahmad Egy Aranda
NPM		: 140810180043
Program : Swap X Y
**************************/

#include<iostream>
using namespace std;

void swap(int& x, int& y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}

int main()
{
	int x=5;
	int y=3;
	cout<<"X="<<x<<endl;
	cout<<"Y="<<y<<endl;
	swap(x,y);
	cout<<"Setelah Swap"<<endl;
	cout<<"X="<<x<<endl;
	cout<<"Y="<<y<<endl;
}
