#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *img = fopen("image.bin", "wb");
    int h = 10; // rand() % 100 + 1;
    int w = 10; // rand() % 100 + 1;
    fwrite(&h, sizeof(int), 1, img);
    fwrite(&w, sizeof(int), 1, img);

    int arr[h * w];
    for (int i = 0; i < h * w; i++)
        arr[i] = rand() % 1000;
    fwrite(arr, sizeof(int), h * w, img);
}