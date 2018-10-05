#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
main (void)
{
	double total_pembelian, potongan, jumlah_bayar;
	cout<<"Total_Pembelian Rp. : ";
	cin>>total_pembelian;
	if (total_pembelian >= 50000)
	    potongan = total_pembelian * 0.2;
	else 
		potongan = total_pembelian * 0.05;
		cout<<"Besarnya potongan Rp. "<<potongan<<endl;
		jumlah_bayar = total_pembelian - potongan;	
		cout<<"Jumlah yang harus dibayarkan Rp. : "<<jumlah_bayar<<endl;
		getch ();
		
		return 0;
	}
