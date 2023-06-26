#include<stdio.h>
void main(){
	int i;
	int n;
	
	printf("Enter the  size of array :");
	scanf("%d",&n);
	int a[n];
	int count=0;
	for(i=0;i<n;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
		count++;
	}
	printf("%d",count);
}
