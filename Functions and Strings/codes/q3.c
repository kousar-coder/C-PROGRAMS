#include <stdio.h>

float volumeCalc(int h, int a) {
    float vol;
    vol = (a * a * h) / 3.0;
    return vol;
}

void getdata() {
    int a, h;
    float vol;

    printf("Enter the value of height: ");
    scanf("%d", &h);
    printf("Enter the value of area: ");
    scanf("%d", &a);

    vol = volumeCalc(h, a);

    printf("Volume = %f\n", vol);
}

int main() {
    getdata();
    return 0;
}

