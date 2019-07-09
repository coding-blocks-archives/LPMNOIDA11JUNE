// ExperimentalAnalysis
#include <iostream>
#include <ctime>
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
	int x[10000],y[10000];
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

void BubbleSort(int* a,int n){

	// Recursive case
	for(int i=0;i<=n-2;i++){
		for(int j=0;j<=n-2-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}

}

int main(){

	int a[10000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		a[i] = n-i;
	}

	clock_t t;
	t = clock();
	MergeSort(a,0,n-1);
	t= clock() - t;
	cout<<"MergeSort took "<<t<<endl;

	for(int i=0;i<n;i++){
		a[i] = n-i;
	}
	t = clock();
	BubbleSort(a,n);
	t= clock() - t;
	cout<<"BubbleSort took "<<t<<endl;	





	
	return 0;
}
