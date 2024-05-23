#include <stdio.h>
#define PI 3.1416 // You can technically do this without defining PI.

/* Technically the answer is supposed to be 2cm = 12.56, but given the digits of pi
2^2 * 3.1416 really is just 12.566 and so on, and it only shows a requirement for double 
digits.
*/

int main(){
float Ar;

printf("Hand over the radius: ");
scanf("%f",&Ar);
Ar=(Ar*Ar)*PI;
printf("Here's the Area of that circle cuhh:%.2f",Ar);//.2 rounds off.
return 0;
}
