#include<stdio.h>
void fibonaciByValue(int n);
void fibonaciByReference(int*n);
int main(){
	int n;
	printf("enter the number n  ");
	scanf("%d",&n);
	printf("fibonaci by value:\n");
  fibonaciByValue(n);
 fibonaciByReference(&n);
}
 void fibonaciByValue(int n){
 	int i;
 	int arr[n];
 	arr[0]=0,arr[1]=1;
	for(i=2;i<n;i++){
	arr[i]=arr[i-1]+arr[i-2];
	}
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}

}
 void fibonaciByReference(int*n){
 	int i;
 	int arr[*n];
 	arr[0]=0,arr[1]=1;
	for(i=2;i<*n;i++){
	arr[i]=arr[i-1]+arr[i-2];
	}
	printf("fibonaci by reference\n");
	for(i=0;i<*n;i++){
		printf("%d\n",arr[i]);
	}
	
}
