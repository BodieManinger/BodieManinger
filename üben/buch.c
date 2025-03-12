#include<stdio.h>
int main(void)
{
    int arr[24];
    int buch = 65;

    for(int i = 0; i < 26; i++)
    {
        arr[i] = buch;
        printf("%c\n", arr[i]);
        buch++;
    }

   

    return 0;

}