#include <stdio.h>

//definisi fungsi perkalian non-rekursif
int multiplication(int number1, int number2)
{
    int result = 0;

    for (int i = number1; i > 0; i--)
    {
        result = result + number2;
    }
    
    return result;
}

//definisi fungsi perkalian dengan rekursif
int multiplication_recursive(int number1, int number2)
{
    if (number1 == 1)
    {
        return number2;
    }
    else
    {
        return number2 + multiplication_recursive(number1-1, number2);
    }
    
    
}

int main()
{
    int a = 3, b = 6;
    printf("perkalian dari %d dan %d adalah %d\n", a, b, multiplication(a,b));
     printf("perkalian dari %d dan %d adalah %d (call from recursive function)\n", a, b, multiplication_recursive(a,b));
}