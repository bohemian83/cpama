#include <stdio.h>

int main(void) {

    float pi = 3.14;
    float radius;

    printf("Enter the radius of the sphere in meters: "); 
    scanf("%f", &radius);
    float sphere_radius = 4.0f/3.0f * pi * radius * radius * radius;
    
    printf("The volume of the sphere is: %.1f m3\n", sphere_radius);

    return 0;
}