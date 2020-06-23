#include <stdio.h>  // header file
#include <math.h>   // header file
int main()
{
    float a,b,c,s,area; // variable

    scanf("%f%f%f",&a,&b,&c);// input

    s=(a+b+c)/2; // half perimeter

    if( a+b>c && b+c>a && a+c>b) // condition
    {
        area= sqrt(s*(s-a)*(s-b)*(s-c)); // formula

        printf("The area is =%f",area);  // output
    }
    else
    {
        printf("The triangle is impossible"); //output
    }


    return 0;
}
