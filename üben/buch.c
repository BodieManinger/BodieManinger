#include<stdio.h>
int main(void)
{
    int arr[24];

    for(int i = 0; i > 24; i++)
    {
        int buch = 65;
        arr[i] = buch;
        buch++;
    }

    for(int i = 0; i<24; i++)
    {
        printf("%c", arr[i])
    }

    return 0;

}