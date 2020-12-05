//program to convert Fahrenheit to Celcius  /centigrade
//Author Majid Mujahid Hussain Dated 5 December 2020*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    float fahrenheit,  celcius;
    printf("%0.1f", fahrenheit);
    printf("%0.1f \n", celcius);
    printf("Enter the temperature (in Fahrenheit) " );
    scanf("%f", &fahrenheit);
    printf("%0.1f\n",fahrenheit);
    // calculating Centigrade/Celcuis from Fahrenheit

     celcius = (fahrenheit - 32) / 1.8;
     printf("\n The temperature %f Fahrenheit is equal to  %.2f Celcuis/Centigrade ",fahrenheit, celcius);
    return 0;
}
