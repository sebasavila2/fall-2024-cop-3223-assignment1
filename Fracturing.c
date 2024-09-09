#include <stdio.h>
#include <math.h>

int coordinates(double coordx1,double coordy1,double coordx2,double coordy2){
    printf("Point #1 entered: x1 = %lf ; y1 = %lf\n",coordx1,coordy1);
    printf("Point #2 entered: x2 = %lf ; y2 = %lf\n",coordx2,coordy2);
}
double calculateDistance()
{
    double x1,x2,y2,y1 = 0;
    printf("Enter the coordinates(x y):\n");
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);   
    coordinates(x1,y1,x2,y2);
    double distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("The distance is %lf\n",distance);
    return 0;
}    
 
int main(){
    calculateDistance();
    return 0;
}