#include <stdio.h>
int main()
{
    char filename[20];
    int error_count;
    // scanf("%s", filename);
    scanf("%d", &error_count);
    FILE *img = fopen("image.bin", "rb+");
    int h, w;
    fseek(img, 0, SEEK_SET);
    fread(&h, sizeof(int), 1, img);
    fread(&w, sizeof(int), 1, img);
    for (int i = 0; i < error_count; i++)
    {
        int row, col, correct;
        scanf("%d %d %d", &row, &col, &correct);
        fseek(img, (row * w + col + 2) * sizeof(int), SEEK_SET);
        fwrite(&correct, sizeof(int), 1, img);
        fflush(img);
    }
    fclose(img);
}