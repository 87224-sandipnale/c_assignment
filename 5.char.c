#include<stdio.h>
int main(){

char ch;

printf("Enter the char");
scanf("%d",&ch);
if(ch>=97){
    printf("upper case");
}else if (ch>=65||ch<=95)
{
    printf("lower case");
}



    return 0;

}