// RotateAString
#include <iostream>
using namespace std;

int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

void RotateString(char* a,int n){
	// 1. Shift every character at n postion ahead
	int i = length(a);
	int len = length(a);

	while(i>=0){
		a[i+n] = a[i];
		i--;
	}
	// cout<<a<<endl;
	// 2. Bring n characters in front
	int j = len;
	i = 0;
	for(i=0;i<n;i++){
		a[i] = a[j];
		j++;
	}
	// cout<<a<<endl;
	a[len] = '\0';
}


int main(){
	char a[100];
	int n;

	cin.getline(a,100);
	cin>>n;

	RotateString(a,n);
	cout<<a<<endl;





	return 0; 
}