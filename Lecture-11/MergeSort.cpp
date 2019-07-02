// MergeSort
#include <iostream>
using namespace std;
void Merge(int *a,int *x,int *y,int s,int e){
	int mid=(s+e)/2;
	int i=s;
	int k=s;
	int j=mid+1;
	while(i<=mid && j<=e){
		if(x[i]<y[j]){
			a[k] = x[i];
			k++;
			i++;
		}
		else{
			a[k] = y[j];
			k++;
			j++;
		}
	}

	if(i>mid && j<=e){
		while(j<=e){
			a[k] = y[j];
			k++;
			j++;
		}
	}
	if(i<=mid && j>e){
		while(i<=mid){
			a[k] = x[i];
			k++;
			i++;
		}
	}
}

void MergeSort(int *a,int s,int e){
	// Base case
	if(s>=e){
		return;
	}
	// Recursive case	
	// 1. Divide
	int x[100],y[100];
	int mid = (s+e)/2;
	for(int i=s;i<=mid;i++){
		x[i] = a[i];
	}
	for(int j=mid+1;j<=e;j++){
		y[j] = a[j];
	}
	// 2. Sort
	MergeSort(x,s,mid);
	MergeSort(y,mid+1,e);

	// 3. Merge
	Merge(a,x,y,s,e);
}


int main(){
	int a[]={6,5,3,7,8,5,2,1};
	int n = sizeof(a)/sizeof(int);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	MergeSort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	return 0; 
}