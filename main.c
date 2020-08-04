#include <stdio.h>
#include<math.h>

int main(int argc, char* argv[])
{
    int money, i;
    printf("Insert a money value: ");
    scanf("%d", &money);
   int bill[7] = {100, 50, 20, 10, 5, 2, 1};
  
   for(int n = 0; n <= 6; n++){
      i=0;
       if(money >= bill[n]){
     i =  floor(money/bill[n]);
    money = money % bill[n];
   }
   printf("%d: %d\n", bill[n], i);
   }
   
    return 0;
}