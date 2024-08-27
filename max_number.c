#include<stdio.h>
int main(){


int number[10];

int i;
int max,min;
printf("Enter a 10 Number");
for(i=0;i<10;i++){
printf("Enter a number %d\n",i+1);
scanf("%d",&number[i]);

         }

//logic
max=number[0];

for(i=1;i<10;i++){

if (number[i]>max){
max=number[i];
        }
}



printf("your max value is %d",max);







    return 0;

}