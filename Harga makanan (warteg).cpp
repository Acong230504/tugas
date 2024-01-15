#include <iostream>

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
    
        int Uang_Bulanan = 20000;
        int NG = 15000;
        int MG = 13000;
        int NP = 12000;
        int B  = 10000;
        int TM = 4000;
        int C  = 5000;
        int J  = 7000;
        
                
    string Kode_Makanan,Kode_Minuman;
    string Makanan,Minuman;
    
        int total = 0;
        
    cout<<endl<<"KODE MAKANAN"<<endl;
    cout<<"~~~~~~~~~~~~"<<endl;
    cout<<"NG:Nasi Goreng_15000"<<endl;
    cout<<"MG:Mie Goreng__13000"<<endl;
    cout<<"NP:Nasi Padang_12000"<<endl;
    cout<<"B :Baso________10000"<<endl;
    
    cout<<endl<<"KODE MINUMAN"<<endl;
    cout<<"~~~~~~~~~~~~"<<endl;
    cout<<"TM:Teh Manis_4000"<<endl;
    cout<<"C :Capucino__5000"<<endl;
    cout<<"J :Juice_____7000"<<endl;
    
    cout<<endl<<"Masukan Kode Makanan = ";
    cin >> Kode_Makanan;
    cout<<"Masukan Kode_Minuman = ";
    cin >> Kode_Minuman;
    
    if(Kode_Makanan=="NG"){
        Makanan = "Nasi Goreng";
        total += NG;
    }
    if(Kode_Makanan=="MG"){
        Makanan = "Mie Goreng";
        total += MG;
    }
    if(Kode_Makanan=="NP"){
        Makanan = "Nasi Padang";
        total += NP;
    }
    if(Kode_Makanan=="B"){
        Makanan = "Baso";
        total += B;
    }
    
    if(Kode_Minuman=="TM"){
        Minuman = "Teh Manis";
        total += TM;
    }
    if(Kode_Minuman=="C"){
        Minuman = "Capucino";
        total += C;
    }
    if(Kode_Minuman=="J"){
        Minuman = "Juice";
        total += J;
    }
    if(total>Uang_Bulanan){
        cout<<"Maaf uang anda tidak cukup"<<endl;
    }
    
    else{
        cout<<endl<<"anda pesan Makanan:"<<Makanan<<endl;
        cout<<"anda pesan Minuman:"<<Minuman<<endl;
        cout<<endl<<"total pesanan RP."<<total<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }
    
    

    return 0;
}

