// Developed By Gulam Sheikh
#include<stdio.h>
int main() {
    // Area of Circle
    printf("Want to Calculate Area of Circle \n ");
    float pi, radius;

    // Assign value to radius and pi 
    printf("Enter Radius of Circle: \n ");
        scanf("%f", &radius);
        printf("Radius of Circle is: %f \n", radius);
        pi = 3.14;

    // New Variable to store area of circle
        float area = pi*radius*radius;

    //Print Area of Circle    
        printf("Area of Circle is: %f \n", area);
        return 0;

        
}