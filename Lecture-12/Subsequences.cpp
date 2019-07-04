// Subsequences
#include <iostream>
using namespace std;

void Subsequences(char *in,int i,char *out,int j){
	// Base case
	if(in[i] == '\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}
	// Recursive case
	// ith value ko output mei consider krlo
	out[j] = in[i];
	Subsequences(in,i+1,out,j+1);

	// ith value ko outpur mei consider mat kro
	Subsequences(in,i+1,out,j);
}


int main(){
	char a[100],out[100];
	cin>>a;

	Subsequences(a,0,out,0);


	return 0; 
}