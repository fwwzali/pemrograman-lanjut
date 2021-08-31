#include <stdio.h>
#include <string.h>
//definisi struct
struct computer
{
    //processor
    char processor[30];
    int ram_capacity;
    int hdd_capacity;
};
//typedef untuk pembuatan alias untuk struct
typedef struct computer pc;

int main(){
    //definisi variabel dengan struct
    pc myComputer;

    //set data struct
    strcpy(myComputer.processor, "Intel i7 Tiger Lake");
    myComputer.ram_capacity = 16;
    myComputer.hdd_capacity = 500;

    //accsess and print data
    printf("My Computer Spec\n-----------------\n");
    printf("Processor\t= %s", myComputer.processor);
    printf("\nRAM\t\t= %d", myComputer.ram_capacity);
    printf("\nHDD\t\t= %d", myComputer.hdd_capacity);

}

