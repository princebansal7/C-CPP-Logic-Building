#include<stdio.h>

int main(){
    float r,area;
    printf("Enter Radius: ");
    scanf("%f",&r);
    area = 3.14*r*r;
    printf("Area of circle is %.2f having radius %.2f\n",area,r);
    return 0;
}