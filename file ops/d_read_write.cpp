#include <stdio.h>

int main()
{
    //#1
    // menentukan variable
    char buffer_write[100];
    char buffer_read[100];
    // var file
    FILE *pfile;

    //#2
    // membuka file
    pfile = fopen("kelasA.txt", "a");

    if (pfile)
    {
        //#3
        // proses menulis ke file
        printf("masukkan list nama kelas A PemLan :\n");
        // ada dua cara, bisa scanf(); atau fgets();
        // scanf("%100[^\n]", &buffer_write);
        fgets(buffer_write, sizeof(buffer_write), stdin);
        // menulis ke file
        fputs(buffer_write, pfile);

        //#4
        // close file
        fclose(pfile);
    }
    else
    {
        printf("ERROR!!!");
    }

    ///////////////////
    //////////////////
    /// baca file ////
    //////////////////

    // membuka file
    pfile = fopen("kelasA.txt", "r");

    if (pfile)
    {
        printf("\n\nisi file:\n");
        while (fgets(buffer_read, sizeof(buffer_read), pfile))
            printf("%s", buffer_read);
    }
    else
    {
        printf("ERROR!!! gagal membaca file");
    }

    return 0;
}