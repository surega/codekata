#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
 int n,a=0,r,q;
 printf("Enter the number to be tested: ");
 scanf("%d",&n);
 q=n;
 do
 {
      r=q%10;
      a=a+pow(r,2);
      q=q/10;
 }
 while(q%10!=0);
 printf("%d",a);
 getch();
}
