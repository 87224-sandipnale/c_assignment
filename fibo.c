#include<stdio.h>
int main(){
 /*printf("Enter a number");
 int num;

scanf("%d",&num);
int i=1;
for(i=0;i<num;i++){
printf("%d",i+i,i++);


} */
int i,n;

int t1=0,t2=1;

int next=t1+t2;
printf("Enter the number:");

scanf("%d",&n);
printf("fibonacci sries: %d,%d ",t1,t2);
for (i=3;i<=n;++i){
    printf("%d, ",next);
    t1=t2;
    t2=next;
    next=t1+t2;
}








    return 0;

}