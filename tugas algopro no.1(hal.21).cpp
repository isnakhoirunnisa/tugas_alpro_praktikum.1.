#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	//deklarasi variabel
	double meter, yard, kaki, inchi;

	//masukkan data
	    cout<<"Konversi dari meter ke yard, kaki, dan inchi"<<endl;
	    cout<<"input meter : ";
	    cin>>meter;
	    
	//Menghitung konversi
	     //konversi meter ke yard
	         yard = meter / 0.9144;
	    //konversi meter ke kaki
	         kaki = meter / 0.3048;
	    //konversi meter ke inchi;
	         inchi = meter / 0.0254;
	         
	//menampilkan hasil
	    cout<<meter<<" meter = "<<yard<<" yard "<<endl;
	    cout<<meter<<" meter = "<<kaki<<" kaki "<<endl;
	    cout<<meter<<" meter = "<<inchi<<" inchi "<<endl;
	    
	    return 0;
	    
}
