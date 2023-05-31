/*Program ini ini ditujukan untuk edukasi dan latihan
 * Author: Aldebaran Sabian Fatihah
 * Nama file: main.c
 * output: main
 * */
#include <stdio.h>
#include <stdlib.h>
//inisialisai fungsi matematika
int Tambah(int Bilangan1, int Bilangan2);
int Kurangi(int Bilangan1, int Bilangan2);
int Kali(int Bilangan1, int Bilangan2);
int Bagi(int Bilangan1, int Bilangan2);
//inisialisai fungsi system
void Tambahan();
void Kurangan();
void Bagian();
void Kalian();
//fungsi main atau fungsi utama
int main(int argc, char *argv[])
{
    int Pilihan;
    printf("==================================== \n");
    printf("Program Kalkulator Sederhana \n");
    printf("==================================== \n");
    printf("1.Tambah \n");
    printf("2.Kurang \n");
    printf("3.Kali \n");
    printf("4.Bagi \n");
    printf("==================================== \n");
    printf("Pilih 1-5: "); scanf("%i",&Pilihan);
    
    switch(Pilihan){
        case 1:
            Tambahan();
            break;
        case 2:
            Kurangan();
            break;
        case 3:
            Kalian();
            break;
        case 4:
            Bagian();
            break;
    }
    
    return 0;
}
//Fungsi Matematika
int Tambah(int Bilangan1, int Bilangan2){
    int Hasil;
    Hasil = Bilangan1 + Bilangan2;
    return Hasil;
}
int Kurang(int Bilangan1, int Bilangan2){
    int Hasil;
    Hasil = Bilangan1 - Bilangan2;
    return Hasil;
}
int Kali(int Bilangan1, int Bilangan2){
    int Hasil;
    Hasil = Bilangan1 * Bilangan2;
    return Hasil;
}
int Bagi(int Bilangan1, int Bilangan2){
    int Hasil;
    Hasil = Bilangan1 / Bilangan2;
    return Hasil;
}
//Fungsi System
void Tambahan(){
    system("clear");
    printf("============================== \n");
    printf("Tambah-tambahan \n");
    printf("============================== \n");
    int Masukan1,Masukan2;
    printf("Bilangan Pertama: "); scanf("%i",&Masukan1);
    printf("Bilangan Kedua: "); scanf("%i",&Masukan2);
    int Hasil1 = Tambah(Masukan1,Masukan2);
    printf("Hasil: %i \n",Hasil1);
}
void Kurangan(){
    system("clear");
    printf("============================== \n");
    printf("Kurang-kurangan \n");
    printf("============================== \n");
    int Masukan1,Masukan2;
    printf("Bilangan Pertama: "); scanf("%i",&Masukan1);
    printf("Bilangan Kedua: "); scanf("%i",&Masukan2);
    int Hasil2 = Kurang(Masukan1,Masukan2);
    printf("Hasil: %i \n",Hasil2);
}
void Bagian(){
    system("clear");
    printf("============================== \n");
    printf("Bagi-Bagian \n");
    printf("============================== \n");
    int Masukan1,Masukan2;
    printf("Bilangan Pertama: "); scanf("%i",&Masukan1);
    printf("Bilangan Kedua: "); scanf("%i",&Masukan2);
    int Hasil3 = Bagi(Masukan1,Masukan2);
    printf("Hasil: %i \n",Hasil3);
}
void Kalian(){
    system("clear");
    printf("============================== \n");
    printf("Kali-kalian \n");
    printf("============================== \n");
    int Masukan1,Masukan2;
    printf("Bilangan Pertama: "); scanf("%i",&Masukan1);
    printf("Bilangan Kedua: "); scanf("%i",&Masukan2);
    int Hasil4 = Kali(Masukan1,Masukan2);
    printf("Hasil: %i \n",Hasil4);
}
