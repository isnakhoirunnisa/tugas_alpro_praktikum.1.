#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
main (void){
	int nilai;
	cout<<"masukkan nilai : ";
	cin>>nilai;
	cout<<endl;
	if (nilai>50)
	{
		cout<<"Selamat, Anda lulus...";
	} else 
	{
		cout<<"Maaf, Anda gagal...";
	}
}
