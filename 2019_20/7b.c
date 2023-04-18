#include <stdio.h>

typedef struct
{
    double temp, humidity, rain;
} District;

int main()
{
    FILE *ifp = fopen("data.txt", "r");
    FILE *temp_fp = fopen("temperature.txt", "w");
    FILE *hum_fp = fopen("humidity.txt", "w");
    FILE *rain_fp = fopen("rain.txt", "w");

    District avg[65];
    for (int i = 1; i < 64; i++)
        avg[i].temp = avg[i].humidity = avg[i].rain = 0;

    for (int i = 0; i < 23360; i++)
    {
        int id, day, temp, humidity, rain;
        fscanf(ifp, "%d %d %d %d %d", &id, &day, &temp, &humidity, &rain);
        avg[id].temp += (temp * 1.0) / 365;
        avg[id].humidity += (humidity * 1.0) / 365;
        avg[id].rain += (rain * 1.0) / 365;
    }
    fclose(ifp);
    for (int i = 1; i <= 64; i++)
    {
        fprintf(temp_fp, "%d %lf\n", i, avg[i].temp);
        fprintf(hum_fp, "%d %lf\n", i, avg[i].humidity);
        fprintf(rain_fp, "%d %lf\n", i, avg[i].rain);
    }
    fclose(temp_fp);
    fclose(hum_fp);
    fclose(rain_fp);
}