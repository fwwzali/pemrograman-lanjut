#include <stdio.h>

void print_data(int i, int j, int *ptr, int **pptr)
{
    printf("-----------------------------------------------------------------\n");
    printf("|                           DATA TABLE                          |\n");
    printf("----------------------------------------------------------------\n");
    printf("|Name\t\t|Type\t\t\t\t|Value\t\t|\n");
    printf("----------------------------------------------------------------\n");
    printf("|%s\t\t|integer\t\t\t|%d\t\t|\n", "i", i);
    printf("|%s\t\t|integer\t\t\t|%d\t\t|\n", "j", j);
    printf("|%s\t\t|pointer int\t\t\t|%d\t\t|\n", "ptr", *ptr);
    printf("|%s \t\t|pointer of pointer\t\t|%d\t\t|\n", "pptr", **pptr);
    printf("----------------------------------------------------------------\n\n\n");

}

int main()
{
    //percobaan pointer
    int i = 5, j = 10;
    int *ptr = &i;
    int **pptr = &ptr;
    print_data(i,j,ptr, pptr);

    //percobaan pointer
    ptr = &j;
    print_data(i,j,ptr, pptr);

    //percobaan pointer
    **pptr = 9;
    print_data(i,j,ptr, pptr);
}