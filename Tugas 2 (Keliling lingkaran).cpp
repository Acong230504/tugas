#include<iostream>
using namespace std;

void Luas_Segitiga(){
    int a;
    int b;
    float total;

    cout << "Luas Segitiga" << endl;
    cout << "Rumus = 1/2 x a x t" << endl;
    cout << "input alas   = ";
    cin >> a;
    cout << "input tinggi = ";
    cin >> b;
    total = 0.5 * a * b;
    cout << "Hasilnya     = " << total << endl;
}

void Luas_Persegi(){
    int a;
    float total;

    cout << "Luas Persegi" << endl;
    cout << "Rumus = Sisi X Sisi" << endl;
    cout << "input Panjang Sisi = ";
    cin >> a;
    total = a * a;
    cout << "Hasilnya           = " << total << endl;
}

void Luas_Lingkaran(){
    int a;
    float phi = 3.14, total;

    cout << "Luas Lingkaran" << endl;
    cout << "Rumus = phi x r^2" << endl;
    cout << "input Panjang jari jari = ";
    cin >> a;
    total = phi * (a * a);
    cout << "Hasilnya                = " << total << endl;
}

void Luas_Persegi_Panjang(){
    int a, b;
    float total;

    cout << "Luas Persegi Panjang" << endl;
    cout << "Rumus = P x L" << endl;
    cout << "input Panjang P = ";
    cin >> a;
    cout << "input Lebar L = ";
    cin >> b;
    total = a * b;
    cout << "Hasilnya        = " << total << endl;
}

void Menu ()
    int pilihan;

    cout << "MENU" << endl;
    cout << "(0) Keluar" << endl;
    cout << "(1) Luas Segitiga" << endl;
    cout << "(2) Luas Persegi" << endl;
    cout << "(3) Luas Lingkaran" << endl;
    cout << "(4) Luas Persegi Panjang" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;

    switch (pilihan){
        case 0:
            cout << "Terima Kasih :)" << endl;
            break;
        case 1:
            Luas_Segitiga();
            break;
        case 2:
            Luas_Persegi();
            break;
        case 3:
            Luas_Lingkaran();
            break;
        case 4:
            Luas_Persegi_Panjang();
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
    }
}

int main()
{
    char ulang;
    do {
        Menu();
        cout << "Mau Mengulangi? (y/t) = ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
