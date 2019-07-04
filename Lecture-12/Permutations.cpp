// Permutations
#include <iostream>
using namespace std;

void Permutations(char *a,int i){
	// Base case
	if(a[i]=='\0'){
		cout<<a<<endl;
		return;
	}
	// Recursive case
	for(int j=i;a[j]!='\0';j++){
		swap(a[i],a[j]);
		Permutations(a,i+1);
		swap(a[i],a[j]);
		
	}
}

int main(){
	char in[100];
	cin>>in;

	Permutations(in,0);

	return 0; 
}