#include<stdio.h>
#include<stdlib.h>
int main(){

int a[10][10],b[10][10],ans[10][10];
int r,c,i,j,k;
printf("Enter a number of row=");
scanf("%d",&r);

printf("Enter a number of cloum=");
scanf("%d",&r);

printf("Enter the frist matrix element\n");
scanf("%d",&c);

for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    
}
    
}

printf("Enter the secoud matrix element\n");


for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&b[i][j]);
    
}
    
}

printf("multiply of the matrix\n");
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
ans[i][j]=0;    
for(k=0;k<c;k++)    
{    
ans[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
   
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",ans[i][j]);    
}    
printf("\n");    
}  


    return 0;
}