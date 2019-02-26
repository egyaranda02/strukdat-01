/* 
Nama	: Ahmad Egy Aranda
NPM		: 140810180043
Program	: Fizz Buzz
********************************/
#include<iostream>;
using namespace std;

void fizzbuzz(int& x);

int main()
{
	int x;
	cout<<"Masukkan Angka	: "; cin>>x; //input interger batas
	fizzbuzz(x);
}

void fizzbuzz(int& x)
{
	for(int i=1;i<=x;i++)
	{
		if(i%3!=0&&i%5!=0)
		{
			cout<<i<<endl;
		}
		else if(i%3==0&&i%5==0)
		{
			cout<<"Fizz Buzz"<<endl;
		}
		else if(i%3==0&&i%5!=0)
		{
			cout<<"Fizz"<<endl;
		}
		else if(i%3!=0&&i%5==0)
		{
			cout<<"Buzz"<<endl;
		}
	}
}
