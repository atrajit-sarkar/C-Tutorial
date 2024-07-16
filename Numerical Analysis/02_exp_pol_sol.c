#include <stdio.h>
#include <math.h>

float f(float);

float f(float x)
{
    return pow(2, x) - pow(x, 2);
}

int main()
{
    float x = -0.8, y = -0.75, epsilon = 0.0025;
    do
    {
        if (f(x) * f((x + y) / 2) > 0)
        {
            x = (x + y) / 2;
            // printf("step%d, x=%f\n",i,x);
        }
        else if (f(y) * f((x + y) / 2) > 0)
        {
            y = (x + y) / 2;
            // printf("step%d, y=%f\n",i,y);
        }
        // i++;

    } while (fabs(f((x + y) / 2)) < epsilon);
    printf("The root is %f\n", (x + y) / 2);
    return 0;
}