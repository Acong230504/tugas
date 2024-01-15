#include<iostream>
using namespace std;

int main()
{
    cout<<"================"<<endl;
    cout<<" GAME SEDERHANA "<<endl;
    cout<<"================"<<endl;
    
    int HP_Anda      = 500;
    int Demage_Anda  = 100;    
    int HP_Musuh     = 500;
    int Demage_Musuh = 50;
    
    int Pilihan;
    int Karakter;

    
    string Nama;
    string Pilih;
    string Akibat;
    
    cout<<"Masukan Nama Pemain : ";
    cin >> Nama;
    cout<<endl;
    
    cout<<"SELAMAT DATANG : "<<Nama<<endl;
    cout<<"Klik (Y) Untuk Memulai Game : ";
    cin >> Pilih;
    cout<<endl;
    
    cout<<"================"<<endl;
    cout<<"PILIHAN KARAKTER"<<endl;
    cout<<"~~~~~~~~~~~~~~~~"<<endl;
    cout<<"1.Pemanah"<<endl;
    cout<<"2.Penembak"<<endl;
    cout<<"================"<<endl;
    cout<<"Pilih Karakter : ";
    cin >> Karakter;
    cout<<endl;
    
    switch (Karakter)
    {
        case 1:
            cout<<"Anda Memilih : Pemanah"<<endl;
            break;
        case 2:
            cout<<"Anda Memilih : Penembak"<<endl;
            break;
    }
    cout<<"HP Anda      : "<<HP_Anda<<endl;
    cout<<"Demage Anda  : "<<Demage_Anda<<endl;
    cout<<endl;
    
    cout<<"HP Musuh     : "<<HP_Musuh<<endl;
    cout<<"Demage Musuh : "<<Demage_Musuh<<endl;
    cout<<endl;
    
    while (true)
    {
        cout<<endl;
        if (HP_Anda<=0)
        {
            cout<<"KAMU DIKALAHKAN OLEH MUSUH :("<<endl;
            break;
        }
        else if (HP_Musuh<=0)
        {
            cout<<"KAMU BERHASIL MENGALAHKAN MUSUH"<<endl;
            break;
        cout<<endl;
        }
    
        
        cout<<"============"<<endl;
        cout<<"1.SERANG !!!"<<endl;
        cout<<"============"<<endl;
        
        cout<<endl;
        cout<<"Klik (1) Untuk Menyerang : ";
        cin >> Pilihan;

        
        if(Pilihan==1)
        {
            Akibat="MUSUH TERKENA SERANGANMU";
            HP_Anda-=Demage_Musuh;
            HP_Musuh-=Demage_Anda;
        }
        
        cout<<"Sisa HP Anda: "<< HP_Anda<<endl;
        cout<<"Sisa HP Musuh: "<< HP_Musuh<<endl;
    }   
	cout<<endl; 
    cout<<"GAME SELESAi TERIMA KASIH :)";
    
    return 0;
}
