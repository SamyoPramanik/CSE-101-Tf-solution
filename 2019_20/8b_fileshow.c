#include <stdio.h>
// #include <time.h>
int main()
{
    while (1)
    {
        FILE *img = fopen("image.bin", "rb+");
        int h, w;
        fread(&h, sizeof(int), 1, img);
        fread(&w, sizeof(int), 1, img);
        printf("%d %d\n", h, w);
        int pixel;
        // for (int i = 0; i < h; i++)
        // {
        //     for (int j = 0; j < w; j++)
        //     {
        //         fread(&pixel, sizeof(int), 1, img);
        //         printf("%d ", pixel);
        //     }
        //     printf("\n");
        // }

        int i = 0;
        while (fread(&pixel, sizeof(int), 1, img))
        {
            printf("%d ", pixel);
            i++;
            if (i % 10 == 0)
            {
                printf("\n");
                i = 0;
            }
        }
        sleep(1);
    }
}