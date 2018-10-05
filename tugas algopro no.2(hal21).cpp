#include <stdio.h>
#include <conio.h>
#include <iostream>

	using namespace std;
	
int main ()
{
	//deklarasi variabel
	int masukjam,masukmenit,masukdetik ;
	int keluarjam,keluarmenit,keluardetik ;
	int selisihjam,selisihmenit,selisihdetik ;
	
	//input data jam masuk
	cout<<"waktu masuk "<<endl ;
	cout<<"jam :" ; cin>>masukjam ;
	cout<<"menit :" ; cin>>masukmenit ;
	cout<<"detik :" ; cin>>masukdetik ;
	
	//input data jam keluar
	cout<<"waktu keluar "<<endl ;
	cout<<"jam :" ; cin>>keluarjam ;
	cout<<"menit :" ; cin>>keluarmenit ;
	cout<<"detik :" ; cin>>keluardetik ;
	
	//menghitung selisih jam
	if ((keluarjam - masukjam)<0) {
		selisihjam = ( 24 + keluarjam ) - masukjam ;
    }
	 else {
		selisihjam = keluarjam - masukjam ;
	}
	
	//menghitung selisih menit
	if ((keluarmenit - masukmenit)<0) {
		selisihmenit = ( 60 + keluarmenit ) - masukmenit;
	}
	else {
		selisihmenit = keluarmenit - masukmenit ; 
	}

	//menghitung selisih detik
	if ((keluardetik - masukdetik)<0) {
		selisihdetik = ( 60 + keluardetik ) - masukdetik ;
	}
	else {
		selisihdetik = keluardetik - masukdetik ;
	}
	
    //menampilkan hasil
	cout<<"selisih waktu"<<endl;
	cout<<selisihjam<<" selisih jam "<<selisihmenit<<" selisih menit "<<selisihdetik<<" selisih detik "<<endl;
	getch ();
	return 0;	
}
