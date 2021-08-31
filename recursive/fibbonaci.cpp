#include <stdio.h>

//definisi fungsi fibbonaci dengan recursive

int fibbonaci(int number)
{
    if (number == 0 || number == 1)
    {
        return number;
    }
    else
    {
        return fibbonaci(number-1) + fibbonaci(number-2);
    }
    
}

int main()
{
    int fib_number = 9;
    printf("angka fibbonaci ke %d adalah %d", fib_number, fibbonaci(fib_number));
}