// LargestOfN
#include <iostream>
using namespace std;

int length(char *a){
	int i;
	for(i=0;a[i]!='\0';i++){

	}
	return i;
}

void COPY(char* a,char* b){

	int jend = length(b);
	int i = 0;
	for(int j=0;j<=jend;j++){
		a[i] = b[j];
		i++; 
	}
}

int main(){
	char in[100],largest[100];
	int largest_length = 0,in_length=0;

	int n;
	cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		cin.getline(in,100);
		in_length = length(in);
		if(in_length>largest_length){
			COPY(largest,in);
			// largest = in; 
			largest_length = in_length;
		}
	}
	cout<<largest<<endl;
	return 0; 
}