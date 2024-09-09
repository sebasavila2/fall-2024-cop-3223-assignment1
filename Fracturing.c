// Sebastian Avila 5633895 Assignment 1


#include <stdio.h>
#include <math.h>
#define PI 3.14159

double askForUserInput(const char* prompt) {
    double value=0;
    printf("%s", prompt);
    scanf("%lf", &value);
    return value;
}


//called for the beginning of each function
int coordinates(double coordx1,double coordy1,double coordx2,double coordy2){
    printf("Point #1 entered: x1 = %lf ; y1 = %lf\n",coordx1,coordy1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf\n",coordx2,coordy2);
}
double calculateDistance()
{
    // asking the user for input
    double x1 = askForUserInput("Enter x1: ");
    double y1 = askForUserInput("Enter y1: ");
    double x2 = askForUserInput("Enter x2: ");
    double y2 = askForUserInput("Enter y2: ");
    coordinates(x1,y1,x2,y2);
    //calling function to display the coordinates
    double distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("The distance between the two points is: %lf\n",distance);
    return distance;
}    
double calculatePerimeter(){
    double diameter = calculateDistance();
    //have to redefine distance as the diameter
    double perimeter =diameter*PI;
    //2pir
    printf("The perimeter of the city encompassed by your request is %lf\n",perimeter);
    return 2;
}
double calculateArea(){
    double diameter = calculateDistance();
    //redefining diamater and turning into radius for area(unnecessary but clean)
    double radius = diameter/2;
    double area = (pow(radius,2)*PI);
    printf("The area of the city encompassed by your request is %lf\n",area);
    return 2;
}
int main(int argc, char **argv){
    //calculateDistance();
    calculateArea();
    return 0;
}