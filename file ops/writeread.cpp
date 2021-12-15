#include <stdio.h>

int main()
{
    // deklarasi variable
    char buffer[100];
    char buffer_read[100];
    FILE *myfile;

    // buka file dengan mode
    myfile = fopen("note.txt", "a+");

    // input data dari keyboard
    printf("tulis isi file disini...\n");
    fgets(buffer, sizeof(buffer), stdin);

    // proses menulis ke file
    fputs(buffer, myfile);

    // proses membaca kembali file
    // reload cursor pointer ke awal file kembali
    rewind(myfile);

    // baca isi file
    printf("\n\nisi file saat ini:\n");
    while (fgets(buffer_read, sizeof(buffer_read), myfile))
        printf("%s", buffer_read);

    return 0;
}