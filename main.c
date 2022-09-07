#include <stdio.h>

int main()
{
    //EXEMPLE-->CALCULATE THE AREA OF SHAPES
    //EXEMPLE-->RECTANGLE :
    int width , height , area;

    //the width of rect
    printf("enter the width:");
    scanf("%d", &width);

    //the height of the rect
    printf("enter the height:");
    scanf("%d", &height);

    //the area of the rect
    area= width*height;
    printf("the area is %d\n" ,area);

    //EXEMPLE-->CIRCLE
    float x=3.14;
    float y;
    float res;
    printf ("the constant value of radius of the circle is %f\n" , x);
    //THE AREA OF THE CIRCLE
    printf ("enter the radius area\n");
    scanf("%f" , &y);
    //THE RESULT
    res = x*y*y;
    printf("the result is %f" , res);


    return 0;
}
