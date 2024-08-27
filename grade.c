#include<stdio.h>
int main(){

int num;
printf("Enter your mark :");
scanf("%d",&num);
if(num>=90){
    printf("Ex");
}else if (num>=80)
{
    printf("A");
}else if (num>=70)
{
    printf("B");
}else if (num>=60)
{
    printf("C");
}else if (num<60)
{
    printf("F");
}else{
    printf("invalid marks");
}





    return 0;
}