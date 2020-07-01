#include <stdio.h>  //header file
int main()
{
    int num1, num2, i, gcd; // variables

    printf("Enter two integer numbers: ");
    scanf("%d %d", &num1, &num2); //input


    for(i=1; i <= num1 && i <= num2; i++)  //loop
    {
        // Checks if i is factor of both integers
        if(num1%i==0 && num2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", num1, num2, gcd); //output

    return 0;
}
