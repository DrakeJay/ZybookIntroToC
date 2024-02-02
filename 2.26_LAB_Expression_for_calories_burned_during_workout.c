#include <stdio.h>

int main(void) {

   /* Type your code here. */
   float age;
   float weight;
   float heart;
   float min;
   
   float avgCalories;
   
   
   scanf( "%f" , &age);
   scanf( "%f" , &weight);
   scanf( "%f" , &heart);
   scanf( "%f" , &min);
   
   avgCalories = ((age * 0.2757 + weight * 0.03295 + heart * 1.0781 - 75.4991) * min) / 8.368;
   
   
   printf("Calories: %0.2lf calories\n" , avgCalories);
   
   
   return 0;
}