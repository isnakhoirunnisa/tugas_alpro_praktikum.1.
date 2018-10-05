#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main()
{
	//deklarasi variabel
	double TB, BBI;
	
	//masukkan data Tinggi Badan
    cout<<"masukkan Tinggi Badan Anda : ";
    cin>>TB;
    
    BBI = (TB - 100)-((TB-100) * 0.1);
    cout<<"BBI : "<<BBI<<endl;
    getch ();
    
    return 0;
}
         

