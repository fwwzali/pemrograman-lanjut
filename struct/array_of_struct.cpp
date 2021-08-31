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
    pc myComputer[3];

    //set data struct index 0
    strcpy(myComputer[0].processor, "Intel i7 Tiger Lake");
    myComputer[0].ram_capacity = 16;
    myComputer[0].hdd_capacity = 500;

    //set data struct index 1
    strcpy(myComputer[1].processor, "Intel i5 Sky Lake");
    myComputer[1].ram_capacity = 8;
    myComputer[1].hdd_capacity = 250;

    //set data struct index 2
    strcpy(myComputer[2].processor, "AMD Ryzen 5");
    myComputer[2].ram_capacity = 16;
    myComputer[2].hdd_capacity = 250;

    //accsess and print data
    printf("My Computer Spec\n================\n");
   

    for(int i=0; i < 3; i++)
    {
        printf("\nComputer %d\n-----------------\n",i+1); 
        printf("Processor\t= %s", myComputer[i].processor);
        printf("\nRAM\t\t= %d", myComputer[i].ram_capacity);
        printf("\nHDD\t\t= %d", myComputer[i].hdd_capacity);
    }

}

