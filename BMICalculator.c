#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   printf("BMI Calculator\n");
   char name[20];
   double weight ,height ;
   int age;

   printf("Enter Your Age :");
   scanf("%d" ,&age);
   
   printf("\n");

   getchar();
   printf("Enter Your Name :");
   fgets(name, 20,stdin);

   printf("\n");

   printf("Enter Your Weight in KG : ");
   scanf("%lf", &weight);

   printf("\n");

   printf("Enter Your Height in Meters : ");
   scanf("%lf", &height);

   printf("\n");
   //BMI Calculation
   double BMI= weight/(pow(height,2));

   printf("Hi! %sYour BMI is %lf, and " ,name,BMI);

   if ( age >= 20)
   {
   
      if (BMI >= 40.0)
      {
         system("Color 04");
         printf("You are obese \n");
      }

      else if  (25.0 <= BMI && BMI <= 39.9 )
      {
         system("Color 06");
         printf("You are owerweight \n");
      }

      else if  (18.5 <= BMI && BMI <= 24.9 )
      {
         system("Color 0A");
         printf("Your BMI is within a healthy range \n");
      }

      else
      {
         printf("Your are Underweight\n");
      }

   }

   else
   {
      if (BMI >= 95.0)
      {
         system("Color 04");
         printf("You are obese \n");
      }

      else if  (85.0 <= BMI && BMI <= 94.9 )
      {
         system("Color 06");
         printf("You are owerweight \n");
      }

      else if  (5 <= BMI && BMI <= 84.9 )
      {
         system("Color 0A");
         printf("Your BMI is within a healthy range \n");
      }

      else
      {
         printf("Your are Underweight\n");
      }
   }


   



   return 0;
}
