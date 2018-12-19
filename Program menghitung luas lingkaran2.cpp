#include <stdio.h>
#include <conio.h>

int main(){


float phi=3.14;
float r,luas;

printf("Program Menghitung luas lingkaran\n");
printf("Masukan jari-jari Lingkaran : ");
scanf("%f",&r);

luas =phi*r*r;
printf("luas : %f",luas);
getch();
return 0;
}
