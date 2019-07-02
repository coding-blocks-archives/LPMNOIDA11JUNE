// BinarySearch
#include <iostream>
using namespace std;

int BinarySearch(int *a,int s,int e,int key){
	// Base case
	if(s>e){
		return -1;
	}
	// Recursive case	
	int mid = (s+e)/2;
	if(a[mid] == key){
		return mid;
	}
	else if(a[mid]<key){
		s = mid+1;
	}
	else{
		e = mid-1;
	}
	int ChoteArrayKaAns = BxninarySearch(a,s,e,key);
	return ChoteArrayKaAns;
}



int main(){
	int a[]={1,3,5,6,7,8,9};
	int n = sizeof(a)/sizeof(int);
	int key;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cin>>key;
	cout<<BinarySearch(a,0,n-1,key)<<endl;


	return 0; 
}