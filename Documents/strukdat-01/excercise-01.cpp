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
	fizzbuzz(x); //panggilan fungsi
}

void fizzbuzz(int& x) //void looping fizzbuzz
{
	for(int i=1;i<=x;i++)
	{
		if(i%3!=0&&i%5!=0) //kondisi fizzbuzz
		{
			cout<<i<<endl;
		}
		else if(i%3==0&&i%5==0) //kondisi normal
		{
			cout<<"Fizz Buzz"<<endl;
		}
		else if(i%3==0&&i%5!=0) //kondisi fizz
		{
			cout<<"Fizz"<<endl;
		}
		else if(i%3!=0&&i%5==0) //kondisi buzz
		{
			cout<<"Buzz"<<endl;
		}
	}
}
