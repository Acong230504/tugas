#include <iostream>

using namespace std;

int main()
{
        int a;
        int b;
        int c;
            
    cout<<"============================================"<<endl;
    cout<<" KALKULATOR SEDERHANA MENJUMLAHKAN BILANGAN"<<endl;
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
    cout<<" Masukan bilangan pertama = ";
    cin >> a;
    cout<<" Masukan bilangan ke dua  = ";
    cin >> b;
    cout<<"````````````````````````````````"<<endl;
    
    cout<<" 1. Untuk perkalian "<<endl;
    cout<<" 2. Untuk pembagian "<<endl;
    cout<<" 3. Untuk pertambahan "<<endl;
    cout<<" 4. Untuk pengurangan "<<endl;
    cout<<" 5. Untuk semua oprasi "<<endl;
    
    cout<<endl<<" Pilih oprasi bilangan = ";
    cin >> c;
    cout<<"```````````````````````````"<<endl;
    
    if(c==1){
        cout<<" Hasil perkalian adalah = "<<a*b<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }
    if(c==2){
        cout<<" Hasil pembagian adalah = "<<a/b<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }
    if(c==3){
        cout<<" Hasil pertambahan adalah = "<<a+b<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }
    if(c==4){
        cout<<" Hasil pengurangan adalah = "<<a-b<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }
    if(c==5){
        cout<<" 1. Hasil perkalian   = "<<a*b<<endl;
        cout<<" 2. Hasil pembagian   = "<<a/b<<endl;
        cout<<" 3. Hasil pertambahan = "<<a+b<<endl;
        cout<<" 4. Hasil pengurangan = "<<a-b<<endl;
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }

    return 0;
}
