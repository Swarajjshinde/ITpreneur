/*1.Find the Largest of Three Numbers
Use relational and logical operators to compare three numbers.*/


#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter your numbers:\n");
    scanf("%d %d %d",&a,&b,&c);

    if((a>b) && (a>c)){
        printf("%d is greater value",a);
    }
    else if((b>a) && (b>c)){
        printf("%d is greater value",b);
    }
    else{
        printf("%d is greater value",c);
    }
}