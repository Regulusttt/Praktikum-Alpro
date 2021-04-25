#include<stdio.h>

int x,y,curr;
int sum;

int main(){
    printf("\t\t\t\tPraktikum Algoritma dan Pemrograman Modul 2\n\n");
    printf("\t\t\tNama  : Muhammad Arrysatrya Yusuf Putranda\n");
    printf("\t\t\tNIM   : 2008561097\n");
    printf("\t\t\tKelas : E\n\n");

    printf("\t\t\t==============================================\n");
    printf("\t\t\t============ Program Palindrom  ============\n");
    printf("\t\t\t==============================================\n\n");

    printf("Masukan Bilangan : ");
    scanf("%d",&x);
    curr=x; //Menyimpan nilai x ke variabel curr untuk dibandingkan nilainya setelah dibalik

    //Membalikan nilai bilangan yang dimasukan user
    while(x>0){
        y=x%10;
        sum=(sum*10)+y;
        x=x/10;
    }
    
    //Membandingkan nilai inputan user dan nilai setelah dibalik
    if(curr==sum)
        printf("Bilangan %d merupakan bilangan Palindrom\n", curr);
    else
        printf("Bilangan %d bukan merupakan bilangan Palindrom\n", curr);
return 0;
}
