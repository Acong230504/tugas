#include<iostream>
using namespace std;

int main() 
{
	
	cout<<"============================================"<<endl;
    cout<<"<><><><><><><><><><><><><><><><><><><><><><>"<<endl;
	cout<<"============================================"<<endl;
    cout<<" NAMA    : MUCHAMMAD DWI FIRDAUS_[acong]"<<endl;
    cout<<" JURUSAN : FAKULTAS ILMU KOMPUTER_[FASILKOM]"<<endl;
    cout<<" PRODI   : TEKNIK INFORMATIKA_[TI]"<<endl;
    cout<<" NIM     : 20230801086"<<endl;
    cout<<"============================================"<<endl;
    cout<<"<><><><><><><><><><><><><><><><><><><><><><>"<<endl;
    cout<<"============================================"<<endl;
    cout<<endl;
    
	char Pilihan;
	double Harga_Tiket,Total_Harga,Potongan;
	double jumlah;
	
	cout<<"PILIHAN TIKET"<<endl;
	cout<<"~~~~~~~~~~~~~"<<endl;
	cout<<"1. : EKONOMI   = (100 ribu/tiket)"<<endl;
	cout<<"2. : BISNIS    = (200 ribu/tiket)"<<endl;
	cout<<"3. : EKSEKUTIF = (300 ribu/tiket)"<<endl;
	
	cout<<endl<<"PILIH TIKET (1/2/3) = ";
	cin >> Pilihan;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	
	cout<<"Masukan jumlah tiket  = ";
	cin >> jumlah;
	
	switch (Pilihan){
	
		case '1':
			Harga_Tiket = 100000;
			break;
		case '2':
			Harga_Tiket = 200000;
			break;
		case '3':
			Harga_Tiket = 300000;
			break;
		default:
			cout<<"Pilihan Valid"<<endl;
		return 0;
	}
	
	Total_Harga = Harga_Tiket*jumlah;
	
	if(Total_Harga>500000){
		Potongan = Total_Harga * 0.1;
	}
	else if(Total_Harga>300000){
		Potongan = Total_Harga * 0.05;
	}
	else if(Total_Harga>200000){
		Potongan = Total_Harga * 0.02;
	}
	else{
		Potongan = 0;
	}
	
	Total_Harga -= Potongan;
	
	cout<<"Harga Tiket Sebelum Diskon = Rp." << Harga_Tiket <<endl;
	cout<<"Total Harga Setelah Diskon = Rp." << Total_Harga <<endl;
	
	return 0;
	
}
