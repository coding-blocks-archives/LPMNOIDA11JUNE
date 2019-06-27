// AppendTwoStrings
#include <iostream>
using namespace std;

int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

void Append(char* a,char *b){
	int i = length(a);
	int j=0;
	int jend = length(b);

	for( ; j<=jend;j++){
		a[i] = b[j];
		i++;
	}
}


int main(){
	char a[100],b[100];

	cin>>a; // Hello
	cin>>b; // World

	Append(a,b);
	cout<<a<<endl; // HelloWorld






	return 0; 
}