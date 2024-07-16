#include <stdio.h>
#include <math.h>

float f(float);

float f(float x)
{

    return pow(x,5)+x+1;
}
int main()
{
    float x=-0.76,y=-0.74,epsilon=0.00025;
    // int i=1;
    do
    {
        if(f(x)*f((x+y)/2)>0){
            x=(x+y)/2;
            // printf("step%d, x=%f\n",i,x);
        }
        else if (f(y)*f((x+y)/2)>0) 
        {
            y=(x+y)/2;
            // printf("step%d, y=%f\n",i,y);
        }
        // i++;
        
    } while (fabs(f((x+y)/2))<epsilon);
    printf("The root is %f\n",(x+y)/2);
    return 0;
}