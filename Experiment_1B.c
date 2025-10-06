/*NAME: TATHAGAT GAUTAM VETALE
CLASS: CIVIL BRANCH
DIVISION: B
UIN NO: 251002
*/
#include <stdio.h>
int main(){
int physics;
int chemistry;
int maths;
printf("Enter physics number =");
scanf("%d", &physics);
printf("Enter chemistry number =");
scanf("%d", &chemistry);
printf("Enter maths number =");
scanf("%d",&maths);
int sum;
float avg;
sum = physics + chemistry + maths;
avg = (float) sum/3;
printf("\n sum is %d \n avg is %f", sum, avg);
(avg>=50)? printf("\nperson is eligible for admission"): printf("\nperson is not eligible for admission");
return 0;
}
