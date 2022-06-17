//Nama    : Asep Saeful Rohman
//NIM     : A11.2021.13705
//Kelas   : 4216

#include <iostream>

using namespace std;

//int n,a,b, hasil, hasil2;
int n,a,b;
int penjumlahan(int a, int b);
int pengurangan(int a, int b);
int perkalian(int a,int b);
int faktorial(int n);
int fibonanci(int a);
int pilih;
char ulang;

int main()
{

p:  cout << " ===================================================== " << endl;
    cout << " ||                 PROGRAM SEDERHANA               || " << endl;
    cout << " ||                ASEP SAEFUL ROHMAN               || " << endl;
    cout << " ||                   REKURSIF C++                  || " << endl;
    cout << " ===================================================== " << endl;
//    cout << " ================  REKURSIF C++ ================ " << endl;
    cout << " || Silahkan Pilih Menu Di Bawah Ini                || " << endl;
    cout << " || 1. Penjumlahan                                  || " << endl;
    cout << " || 2. Pengurangan                                  || " << endl;
    cout << " || 3. Perkalian                                    || " << endl;
    cout << " || 4. Faktorial                                    || " << endl;
    cout << " || 5. Fibonanci                                    || " << endl;
    cout << " ===================================================== " << endl;
    cout << " Pilihan Anda : ";
    cin >> pilih;
    cout << " ===================================================== " << endl;

    switch(pilih){
        case 1 :
            cout << " ----------------------------------------------------- " << endl;
            cout << " ||                   Penjumlahan                   || " << endl;
            cout << " ----------------------------------------------------- " << endl;
            cout << " Masukkan Angka Pertama = ";
            cin >> a;
            cout << " Masukkan Angka Kedua   = ";
            cin >> b;
            cout << " Hasil Dari Penjumlahan Antara " << a << " Dan " << b << " Adalah " << penjumlahan(a, b) << endl;
            break;
        case 2 :
            cout << " ----------------------------------------------------- " << endl;
            cout << " ||                   Pengurangan                   || " << endl;
            cout << " ----------------------------------------------------- " << endl;
            cout << " Masukkan Angka Pertama = ";
            cin >> a;
            cout << " Masukkan Angka Kedua   = ";
            cin >> b;
            cout << " Hasil Dari Pengurangan Antara " << a << " Dan " << b << " Adalah " << pengurangan(a,b) << endl;
            break;
        case 3 :
            cout << " ----------------------------------------------------- " << endl;
            cout << " ||                   Perkalian                     || " << endl;
            cout << " ----------------------------------------------------- " << endl;
            cout << " Masukkan Angka Pertama = ";
            cin >> a;
            cout << " Masukkan Angka Kedua   = ";
            cin >> b;
            cout << " Hasil Dari Perkalian Antara " << a << " Dan " << b << " Adalah " << perkalian(a,b) << endl;
            break;
        case 4 :
            cout << " ----------------------------------------------------- " << endl;
            cout << " ||                    Faktorial                    || " << endl;
            cout << " ----------------------------------------------------- " << endl;
            cout << " Masukkan Nilai Faktorial = ";
            cin >> n;
            cout << " Hasil Faktorial Dari Angka " << n << " Adalah " << faktorial(n) << endl;
            break;
        case 5 :
            cout << " ----------------------------------------------------- " << endl;
            cout << " ||                    Fibonanci                    || " << endl;
            cout << " ----------------------------------------------------- " << endl;
            cout << " Masukkan Angka  = ";
            cin >> a;
            cout << " Hasil Dari Fibonanci Angka " << a << " Adalah " << fibonanci(a) << endl;
            break;

        default :
            system("cls");
            cout << " Pilihan Anda Tidak Ada Dalam Menu. \n Silahkan Input Ulang \n" << endl;
            goto p;
            break;
    }
    cout << endl;
    cout << " ===================================================== " << endl;
    cout << " Apakah Anda Ingin Menginput Ulang ? [Y/T] ? ";
    cin >> ulang;
    if(ulang == 'Y' || ulang == 'y'){
        system("cls");
        goto p;
    } else {
        exit(0);
    }

    return 0;
}

int penjumlahan(int a, int b)
{
    if (a == 0 )
    {
        return b;
    } else {
        return penjumlahan(a-1, b) + 1;
    }
}

int pengurangan(int a, int b)
{
    if (b == 0 )
    {
        return a;
    } else {
        return pengurangan(a, b - 1) - 1;
    }
}

int faktorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * faktorial(n - 1);
    }
}

int fibonanci(int a)
{
    if (a == 0)
    {
        return 1;
    } else if(a == 1) {
        return 1;
    } else {
        return fibonanci(a - 1) + fibonanci(a - 2);
    }
}

int perkalian(int a,int b)
{
    if (b == 1)
    {
        return a;
    }
    else
    {
        return a + perkalian(a, b - 1);
    }
}

//int kali(int a,int b)
//{
//    if (a==1)
//    {
//        return b;
//    }
//    else
//    {
//        return kali(a+1,b)-b;
//    }
//}

