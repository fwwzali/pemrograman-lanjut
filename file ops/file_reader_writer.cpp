#include <stdio.h>

int main()
{
    //#1
    // siapkan variable pembantu
    char read[100];
    // tipe data untuk FILE
    FILE *pfile;
    char input[100];

    //#2
    // proses membuka file dengan mode tertentu
    pfile = fopen("data.txt", "a");

    if (pfile)
    {
        //#3
        // proses menulis ke file
        printf("masukkan text disini : ");
        // scanf("%100[^\n]", &input);
        // printf("\nhasil : %s", input);
        fgets(input, sizeof(input), stdin);
        fputs(input, pfile);

        //#4
        // menutup file
        fclose(pfile);
    }
    else
    {
        printf("ERROR!");
    }

    // MEMBACA FILE
    //#2
    // Membuka file dengan mode read
    pfile = fopen("data.txt", "r");

    if (pfile)
    {
        // proses membaca ke file
        printf("\n\nisi dari text sebagai berikut : ");

        // while akan berhenti sampai EOF
        // End-Of-File
        while (fgets(read, sizeof(read), pfile))
        {
            printf("%s", read);
        }

        // proses close file
        fclose(pfile);
    }
    else
    {
        printf("ERROR!");
    }

    return 0;
}