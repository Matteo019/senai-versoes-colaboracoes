#include <stdio.h>

int main() {
  
 int appleQuantity;
 double applePrice = 1.49;
 double appleReview;
 int appleReviewDisplay;
 const char appleLocation = 'F';

 appleQuantity = 23;
 appleReview = 82.5;
 
//New appleReview String Definition
 int appleReviewScore = 823;
 int appleReviewPeople = 9;

 //New Customer score
 appleReviewScore += 53;
 appleReviewPeople++;

//New appleReview Value Definition
appleReview = appleReviewScore / appleReviewPeople;
  appleReviewDisplay = appleReview;

int dayOfWeek = 0;
dayOfWeek = 3;

 if(appleQuantity < 10 || dayOfWeek == 3){
  printf("Sale on apples today, today only they are: $%.2f\n\n", applePrice * .9);
 }


 // Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
 printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}
