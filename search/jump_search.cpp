#include <stdio.h>
#include <math.h>

void jumpSearch(int data[], int length, int query)
{
    //set langkah utk jump
    int jump = sqrt(length);
    int jumper = jump;

    //mencari block data yang dicari
    int prev = 0;
    int counter = 0;
    while (data[jumper] <= query && jumper < length)
    {
        //proses set ke jump berikutnya
        prev = jumper;
        jumper += jump;

        if (jumper >= length + 1)
        {
            printf("Data not found!");
        }
        counter++;
    }

    int flag_linear_search = 0;
    for (int i = prev; i <= jumper; i++)
    {
        if (data[i] == query)
        {
            flag_linear_search = 1;
            printf("data %d ditemukan pada elemen ke-%d", query, i);
        }
    }

    if (counter == 0 || flag_linear_search == 0)
    {
        printf("Data not found!");
    }
}

int main()
{
    //data sudah harus terurut
    int data[] = {3, 6, 7, 9, 10, 60, 77, 200, 205, 300, 600, 601, 700, 702, 780, 781};
    //mennghitung jumlah array
    int length = sizeof(data) / sizeof(data[0]);
    //set data yang dicari
    int query = 900;

    //panggil fungsi jump search
    jumpSearch(data, length, query);

    return 0;
}