#include <stdio.h>
#include <math.h>
int main(void){
while(1){
int a, b, c, d;
int m1=1000,m2=100,m3=10,m4=1;
int sum,ans;

printf("Enter Number :");
scanf("%d%d%d%d",&a,&b,&c,&d);
sum =(a*m1)+(b*m2)+(c*m3)+(d*m4);

 printf("Entered Number = %d\n",sum);
 a=pow(a,4);b=pow(b,4);c=pow(c,4);d=pow(d,4);
 ans=a+b+c+d;

 if(ans==sum)
 printf("Number is the same = %d\n\n",ans);
 else
 printf("Not Same number = %d\n\n",ans);
}
 return 0;
}





printf("Day %2d minimum temperature: ", ++day);
scanf("%d%d",&High Temp Monday ,&Low Temp Monday);


  printf("High Temp Monday :");
  scanf("%d" ,&High);
  printf("Low  Temp Monday :");
  scanf("%d" ,&Low);