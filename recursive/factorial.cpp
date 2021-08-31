#include <stdio.h>

//definisi fungsi faktorial non-rekursif
int factorial_non_recursive(int number)
{
    int factorial = 1;

    for (int i = 1 ; i <= number; i++)
    {
        factorial = factorial * i;
    }

    return factorial;
    
}

//definisi fungsi faktorial dengan fungsi rekursif
int factorial_recursive(int number)
{
    if (number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial_recursive(number-1);
    }
    
    
}



int main()
{
    //panggil fungsi factorial non rekursif
    int nmbr = 5;
    printf("faktorial dari %d adalah %d\n", nmbr, factorial_non_recursive(nmbr));
    printf("faktorial dari %d adalah %d (call from recursive function)\n", nmbr, factorial_recursive(nmbr));
}