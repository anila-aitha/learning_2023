#include <stdio.h>
int main() {
  int num1,num2;
  scanf("%d%d",&num1,&num2);
  if(num1>num2)
  printf("%d",num1);
  else
  printf("%d",num2);
    return 0;
}

#include <stdio.h>
int main() {
  int num1,num2;
  scanf("%d%d",&num1,&num2);
   num1>num2? printf("%d",num1):printf("%d",num2);
}