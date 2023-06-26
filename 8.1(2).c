#include<stdio.h>
void main(){
	int i;
	int n;
	
	printf("Enter the  size of array :");
	scanf("%d",&n);
	int a[n];
	float sum=0;
	float b=0;
	for(i=0;i<n;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	b=sum/n;
	printf("%.2f",b);
	
}
