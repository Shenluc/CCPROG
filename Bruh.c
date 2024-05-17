#include <stdio.h>
int main (){
  
int x,notx,pc1,nc1;
char LeBron[8];char Raymone[16];float James;

printf("What is your name?\n");

for (nc1=0;nc1 < 8;nc1++){
scanf(" %c", LeBron[nc1]);
}

printf("What is the product name?\n");

for (pc1=0;pc1 < 16;pc1++){
scanf(" %c", Raymone[pc1]);
}

printf("What is the unit price?\n");
scanf(" %f", James);
printf("What is the Quantity?\n");
scanf(" %d", x);

printf("%d\n", LeBron);
for (notx=0;notx!=x;notx+=1){
	printf("%s  ", Raymone); printf("  Price:%f\n", James);
};
	
return 0;
}
