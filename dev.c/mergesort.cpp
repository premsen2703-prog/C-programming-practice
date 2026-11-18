#include<stdio.h>
void merge(int a[],int p,int q,int r){
	int n1=q-p+1;
	int n2=r-q;
	int L[n1],M[n2];
	for(int i=0;i<n1;i++)
	L[i]=a[p+1];
	for(int j=0;j<n2;j++)
	M[j]=a[q-1+j];
	int i,j,k;
	i=0;j=0;k=p;
	while((i<n1)&&(j<n2))
	{
		if(L[i]<=M[j]){
		a[k]=L[i];
		i++;	
	}	
	else{
		a[k]=M[j];
		j++;
		k++;	
	}
	}
	while(i<n1){
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=M[j];
		j++;
		k++;
	}
}
void mergesort(int a[],int l,int r){
	if(l<r){
		int m=(1+(r-1/2));
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}
	
}
void printArray(int a[],int size){
	for(int i=0;i<size;i++){
		printf("%d",a[i]);
		printf("\n");
	}
}
int main(){
	int a[]={6,5,12,10,9,1};
	int size=sizeof(a)/sizeof(a[0]);
	mergesort(a,0,size-1);
	printf("Sorted Array: \n");
	printArray(a,size);
}
