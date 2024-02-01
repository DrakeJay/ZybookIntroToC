#include <stdio.h>

int main(void) {

   /* Type your code here. */
   int userNum;
   int divNum;
   int answerNum;
   
   scanf("%d", &userNum);
   scanf("%d", &divNum);
   
   
   answerNum = userNum / divNum ;
   printf("%d " ,answerNum);
   
   answerNum = answerNum / divNum ;
   printf("%d " ,answerNum);
   
   answerNum = answerNum / divNum ;
   printf("%d\n" ,answerNum);
   return 0;
}