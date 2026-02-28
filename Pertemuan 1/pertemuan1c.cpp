#include <stdio.h> //header standar utk c
#include <conio.h>

// di c g bs terima tipe variabel string, char with length does well thou
// getche 1 karakter gsh enter
// getch g tmpl di layar tersimpan di memori (buat input sandi)
// puts terima str dan lgsg new line pas siap
// gets utk masukkan data str ampe enter

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

    getchar(); //buat klo ngebug dont mind it

    printf("Masukkan KOM : ");
    gets(kom);

    printf("Masukkan IP : ");
    scanf("%f", &ip);

    printf("Nama : ");
    puts(nama);
    // puts itu putstring untuk string dalam bntk array char

    printf("NIM : %d",nim);
    
    printf("\nKOM : ");
    puts(kom);

    // scanf("%s",kom);
    printf("IP : %.2f\n", ip);

    printf("Preses any button to continue...");
    getch();
    
}
