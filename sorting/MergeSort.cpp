#include <stdio.h>

// merge---
void merge(int data[], int first, int middle, int last)
{
    int temp1 = middle - first + 1;
    int temp2 = last - middle;

    int left[temp1], right[temp2];

    for (int i = 0; i < temp1; i++)
    {
        left[i] = data[first + i];
    }

    for (int i = 0; i < temp2; i++)
    {
        right[i] = data[middle + 1 + i];
    }

    int i = 0, j = 0;
    int k = first;

    while (i < temp1 && j < temp2)
    {
        if (left[i] <= right[j])
        {
            data[k++] = left[i++];
        }
        else
        {
            data[k++] = right[j++];
        }
    }

    while (i < temp1)
    {
        data[k++] = left[i++];
    }

    while (j < temp2)
    {
        data[k++] = right[j++];
    }
}

void mergeSort(int data[], int first, int last)
{
    //
    if (first < last)
    {
        // membagi data menjadi 2
        int middle = first + (last - first) / 2;
        // rekursif
        mergeSort(data, first, middle);
        mergeSort(data, middle + 1, last);
        // proses merge
        merge(data, first, middle, last);
    }
}

void printdata(int data[], int start, int stop)
{
    for (int i = start; i < stop; i++)
    {
        printf("[ %d ] ", data[i]);
    }
    printf("\n");
}

int main()
{
    int data[] = {70, 1, 67, 20, 3};
    // size of data
    int length = sizeof(data) / sizeof(data[0]);
    printdata(data, 0, length);
    // call merge sort
    mergeSort(data, 0, length - 1);
    printdata(data, 0, length);

    return 0;
}