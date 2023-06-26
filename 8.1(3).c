#include<stdio.h>
void main(){
	int i,j;
	int n;
	printf("Enter the size of Array ");
	scanf("%d",&n);
	int a[n];
	int b[n];
	int c[n];
	printf("Enter Array A's Elements :\n");
	for(i=0;i<n;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("Enter Array B's Elements :\n");
	for(i=0;i<n;i++){
		printf("b[%d]",i);
		scanf("%d",&b[i]);
	}
	printf("Array C is :\n");
	for(i=0;i<n;i++){
		printf("c[%d]",i);
		c[i]=a[i]+b[i];
		printf("%d\n",c[i]);
	}
}
