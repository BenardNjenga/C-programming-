/*
Name: Benard Njenga
Reg no: CT100/G/30708/26
Description: Program to calculate the volume and surface area of a cylinder.
*/

#include <stdio.h>

int main(){
    float pi = 3.142;
    float radius,height;
    float volume,surfaceArea;

    printf("Enter the radius: ");
    scanf("%f",&radius);

    printf("Enter the height: ");
    scanf("%f", &height);

volume = pi*radius*radius*height;

surfaceArea =(2*pi*radius*radius)+ (2*pi*radius*height);

printf("===============\n");
 printf("Volume is %.2f\n",volume);
 printf("Surface area is %.2f\n" ,surfaceArea);
 printf("==============\n");

    return 0;
}  