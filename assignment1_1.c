#include <stdio.h>
#define PI 3.14

int main()
{
    // Declare variables
    int first_rad, last_rad;     //last_radius is the last radius
    float area_sum = 0.0, circum_area= 0.0; // declared sum of areas and sum of circles to zero

    // taking input from user
    if (scanf("%d %d", &first_rad, &last_rad) != 2)
    {
        printf("Invalid input \n");
        return 1;
    }
    int rad;

    // Calculating sum of areas and circumferences
    for (rad = first_rad; rad <= last_rad; rad++)
    {
        float area = PI * rad * rad;
        float circum = 2 * PI * rad;
        area_sum = area + area_sum;
		circum_area = circum +  circum_area;
	
    }

    // Printing the  outputs
    printf("%.3f\n", area_sum);
    printf("%.3f\n", circum_area);

    return 0;
}
