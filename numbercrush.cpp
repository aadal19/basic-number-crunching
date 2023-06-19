#include<stdio.h>
int main(){
int a,count=0;
scanf("%d",&a);
int r;
while(a!=0){
	r=a%10;
	count++;
	a=a/10;
}
printf("%d",count);

printf("\n");
int sum=0,rem;
while(a!=0){
	rem=a%10;
	sum=sum+rem;
	a=a/10;
}
printf("%d",sum);


int sum=0,rem;
while(a!=0){
	rem=a%10;
	a=a/10;

printf("%d",rem);
}

int ch=0;
int rem;
while(a!=0){
	rem=a%10;
	ch=ch*10+rem;
	a=a/10;
}
printf("%d",ch);


int sq=a*a;
int rev=0,rem,rev2=0,rem2;


while(a){
	rem=a%10;
	rev=rev*10+rem;
	a=a/10;
}
int sqr=rev*rev;
//printf("%d",sqr);

while(sqr){
	rem2=sqr%10;
	rev2=rev2*10+rem2;
	sqr=sqr/10;
}
//printf("%d %d",sq,rev2);
if(sq==rev2)
printf("adam number");
else
printf("not adam number");
return 0;
}
