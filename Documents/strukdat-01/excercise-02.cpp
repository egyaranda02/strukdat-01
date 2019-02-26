/*
Nama	: Ahmad Egy Aranda
NPM		: 140810180043
Program	: Konversi Suhu
***********************************/

#include<iostream>;
using namespace std;

float suhu(float celcius) //fungsi konversi
{
return (celcius*9/5)+32;
}

int main()
{
	float celcius;
	cout<<"Masukkan Suhu (Celcius)	: ";cin>>celcius; //input suhu dalam celcius
	float farenheit=suhu(celcius);
	cout<<"Suhu dalam farenheit	: "<<farenheit; //output dalam farenheit
}
