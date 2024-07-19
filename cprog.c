#include<stdio.h>
int main()

{

int x,y,z,k,n;
printf("Enter the value of x: ");
scanf("%d",&x);
printf("Enter the value of y: ");
scanf("%d",&y);
printf("Enter the value of z: ");
scanf("%d",&z);
while(1){

printf("Enter the value of n: ");
scanf("%d",&n);

switch (n)

{
    case 1:
        k=x+y*z/4%2-1;
        printf("k=%d",k);
        break;
    case 2:
        k=x%y+z*z;
        printf("k=%d",k);
        break;
    case 3:
        k=x*x-y/z;
        printf("k=%d",k);
        break;
    case 4:
        k=x+y/z-y;
        printf("k=%d",k);
        break;
    case 5:
        k=x+y-(x==y);
        printf("k=%d",k);
        break;
    case 6:
        k=x+y-(x=y);
        printf("k=%d",k);
        break;
}
}
return 0;
}
