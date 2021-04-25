#include <stdio.h>

int i, j, temp, sum = 0;
int kolom1, baris1, kolom2, baris2;
int mtrx1[10][10], mtrx2[10][10], kali[10][10];

//Fungsi Clear Screen Cross-Platform
void clear(){
    #ifdef _WIN32
        //Windows
        std:system("cls");
    #else
        //POSIX (Unix), etc
        std:system ("clear");
    #endif
}

void header(){
clear();
    printf("\t\t\tTugas Praktikum Algoritma dan Pemrograman\n");
    printf("\t\t\t\t     Modul 3 : Array\n\n");
    printf("\t\t\tNama  : Muhammad Arrysatrya Yusuf Putranda\n");
    printf("\t\t\tNIM   : 2008561097\n");
    printf("\t\t\tKelas : E\n\n");

    printf("\t\t========================================================\n");
    printf("\t\t============ Program Perkalian Dua Matriks  ============\n");
    printf("\t\t========================================================\n\n");
}

//Fungsi Inputan Matriks
void input(){
    header();
    printf("Masukan Ordo Matriks : ");
    scanf("%d", &kolom1);
    baris1=kolom1;
    kolom2=kolom1;
    baris2=baris1;
    printf ("Silahkan masukan element matriks dengan ordo %d x %d\n\n", kolom1, baris1);

    printf("Masukan Element Matriks A :\n");
        for (i = 0 ; i < kolom1 ; i++ )
            for (j = 0 ; j < baris1 ; j++ )
                scanf("%d", &mtrx1[i][j]);

    printf("Masukan Element Matriks B :\n");
        for ( i = 0 ; i < kolom2 ; i++ )
            for ( j = 0 ; j < baris2 ; j++ )
                scanf("%d", &mtrx2[i][j]);
}

//Fungsi Proses dan print Hasil Perkalian dua Matriks
void hasil(){
    header();
    printf("Matriks A :\n");
        for (i = 0 ; i < kolom1 ; i++ ){
            for (j = 0 ; j < baris1 ; j++ ){
                printf("%d\t", mtrx1[i][j]);}
                printf("\n");}

    printf("\nMatriks B :\n");
        for ( i = 0 ; i < kolom2 ; i++ ){
            for ( j = 0 ; j < baris2 ; j++ ){
                printf("%d\t", mtrx2[i][j]);}
                printf("\n");}

    for ( i = 0 ; i < kolom1 ; i++ ) {
      for ( j = 0 ; j < baris2 ; j++ ){
        for ( temp = 0 ; temp < kolom2 ; temp++ ) {
          sum = sum + mtrx1[i][temp]*mtrx2[temp][j];
          }
        kali[i][j] = sum;
        sum = 0;
      }
    }
    printf("\nHasil dari Perkalian Matriks A dan Matriks B Adalah : \n");
    for ( i = 0 ; i < baris1 ; i++ ) {
      for ( j = 0 ; j < kolom2 ; j++ )
        printf("%d\t", kali[i][j]);
      printf("\n");
    }
}

//Fungsi Main
int main() {
    input();
    hasil();
  return 0;
}
