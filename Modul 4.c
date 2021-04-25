#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool check(char *s) {
int i,j;
i=0;
j=strlen(s)-1;

while (i<j)
{
    //mengecek kalimat dengan mengabaikan spasi
    while(i<j && isalnum(s[i])==0)
        i++;
    while(i<j && isalnum(s[j])==0)
        j--;

    //mengecek satu persatu huruf terdepan dan terbelakang
    if(toupper(s[i])!=toupper(s[j]))
        return false;
    else
    {
        i++;
        j--;
    }
}
return true;
 }

int main() {
    char s[200];
    printf("\t\t\t\tPraktikum Algoritma dan Pemrograman Modul 4\n\n");
    printf("\t\t\tNama  : Muhammad Arrysatrya Yusuf Putranda\n");
    printf("\t\t\tNIM   : 2008561097\n");
    printf("\t\t\tKelas : E\n\n");

    printf("\t\t\t==============================================\n");
    printf("\t\t\t============ Program Palindrom  ============\n");
    printf("\t\t\t==============================================\n\n");

    printf("Masukan Kata Atau Kalimat: ");
    gets(s);

   int sama=check(s);
   if (sama == 1)
    printf ("Kata atau kalimat '%s' Merupakan Palindrom\n", s);
   else
    printf("Kata atau kalimat %s Bukan Merupakan Palindrom\n", s);

return 0;
}
