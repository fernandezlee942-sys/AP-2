#include <stdio.h> //header standar utk c
#include <conio.h>

// di c g bs terima tipe variabel string, char with length does well thou

int main()
{
    char nama[50];
    int nim;
    char kom[2],jeniskelamin;
    float ip;

    printf("Hello World !!\n");
    // printf untuk fungsi output standar c
    printf("Masukkan nama : ");
    gets(nama);
    // gets = getstring

    printf("Masukkan NIM : ");
    scanf("%d", &nim);

    getchar();

    printf("Masukkan KOM : ");
    gets(kom);

    printf("Masukkan IP : ");
    scanf("%f", &ip);

    printf("Nama : ");
    puts(nama);
    // puts itu putstring untuk string dalam bntk array char

    printf("NIM : %d",nim);
    
    printf("KOM : ");
    puts(kom);
    // getchar();

    printf("IP : &f\n",ip);

    printf("Preses any button to continue...");
    getch();







    // float a,b,t,c,d,luas,keliling;
    // char e;
    // printf("tesinput huruf");
    // scanf("%s", &e);

    // printf("Masukkan alas bawah (a) : ");
    // scanf("%f", &a);

    // printf("Masukkan alas bawah (b) : ");
    // scanf("%f", &b);
    
    // printf("Masukkan sisi kanan (c) : ");
    // scanf("%f", &c);

    // printf("Masukkan sisi kiri (d) : ");
    // scanf("%f", &d);

    // printf("Masukkan alas bawah (t) : ");
    // scanf("%f", &t);

    // luas=a+b*t/2;
    // keliling=(a+b+c+d);
    // printf("Luas Trapesium : %.1f",luas);
    // printf("\nKeliling Trapesium : %.1f",keliling);
    
}
