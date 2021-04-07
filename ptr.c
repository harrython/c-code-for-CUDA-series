#include<stdio.h>

void swap(int*,int*);
int main(){

int a,b;
printf("Enter two numbers:");
scanf("%d%d", &a,&b);
swap(&a,&b);
printf("a=%d b=%d", a,b);

}
void swap(int *x, int *y){    //x aur y ptrs ki terh kam kar re hai
int t;
t=*x;
*x=*y;
*y=t;

//ab function ko declare karna hoga


}
