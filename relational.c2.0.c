 #include<stdio.h>
int main()

{

int x,y,z,n,i=0;
printf("Enter the value of x: ");
scanf("%d",&x);
printf("Enter the value of y: ");
scanf("%d",&y);


while(i<7){

printf("Enter the value of n: ");
scanf("%d",&n);

switch (n)

{
    case 1:
        z=x<y;
        i++;

       break;
    case 2:
        z=x>y;i++;
        break;
    case 3:
         z=x<=y;i++;
        break;
    case 4:
          z=(x*x-y)>(y*y-x);i++;

 break;

    case 5:
       z=(x*x*x)<(y*x*x);i++;
         break;
    case 6:
        z=((x*y)!=(y*x));i++;
         break;
    case 7:
        z=((x*y)==(y*x));i++;
         break;
         default:
         printf("wrong input entered");


}
if(z==1)
{

    printf("TRUE");

}
else
{

    printf("False");
}
}
return 0;
}
