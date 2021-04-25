#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nama[50], alamat[50], nim [12], kelas, tempat [12], hp[14], bulan[]; //Deklarasi variabel yang digunakan pada program
int tanggal, tahun, umur;
int bulanKeInt;

//Fungsi Untung Mengubah Bulan String menjadi Integral
int bulanKeAngka(char* bulan) {
    if (!strcmp(bulan,"Januari")) {
        return 1;
    } else if (!strcmp(bulan,"Februari")) {
        return 2;
    }else if (!strcmp(bulan,"Maret")) {
        return 3;
    }else if (!strcmp(bulan,"April")) {
        return 4;
    }else if (!strcmp(bulan,"Mei")) {
        return 5;
    }else if (!strcmp(bulan,"Juni")) {
        return 6;
    }else if (!strcmp(bulan,"Juli")) {
        return 7;
    }else if (!strcmp(bulan,"Agustus")) {
        return 8;
    }else if (!strcmp(bulan,"September")) {
        return 9;
    }else if (!strcmp(bulan,"Oktober")) {
        return 10;
    }else if (!strcmp(bulan,"November")) {
        return 11;
    }else if (!strcmp(bulan,"Desember"))   {
        return 12;
    }
}

int main(){

//User memasukan data diri
printf ("Nama : ");
gets (nama);
printf ("Nim : ");
scanf ("%s", nim);
printf ("Kelas : ");
    fflush(stdin); //Flush code agar buffer tidak overflow
kelas=getchar();
printf ("Alamat : ");
    fflush(stdin);
gets (alamat);
printf ("Nomor HP : ");
scanf ("%s", hp);
printf ("Tanggal lahir : ");
scanf ("%d %s %d", &tanggal, &bulan, &tahun);

//Menghitung Umur
bulanKeAngka(bulan); //Memanggil Fungsi String to Integral
bulanKeInt=bulanKeAngka(bulan); //Memasukan Variabel bulan ke bentuk Integral

//Mengurangi jumlah tahun jika tanggal atau bulan telah terlewati
if (tanggal > 16){
    umur = 2021-tahun-1;
} else umur = 2021-tahun;
if (bulanKeInt > 2){
    umur = 2021-tahun-1;
} else umur = 2021-tahun;

//Output data diri user yang telah diisi sebelumnya
printf("\n\n\t\t----------DATA DIRI ANDA ADALAH----------");
printf ("\n\n");
printf ("Nama : ");
    puts (&nama);
printf ("Nim : ");
    puts (&nim);
printf ("Kelas : ");
    puts (&kelas);
printf ("Alamat : ");
    puts (&alamat);
printf ("Nomor Hp : ");
    puts (&hp);
printf ("Tanggal lahir : %d %s %d\n", tanggal, &bulan, tahun);
printf ("Umur : %d tahun", umur);
printf ("\n\n");
return 0;
}
