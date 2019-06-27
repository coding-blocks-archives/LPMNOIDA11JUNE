// Permutations
#include <iostream>
using namespace std;


int main(){
	char a[100];
	cin>>a;

	int freq[26] = {0};

	for(int i=0;a[i]!='\0';i++){
		char ch = a[i];
		int index = ch - 'a';
		freq[index]++;
	}

	for(int i = 0;i<26;i++){
		cout<<freq[i]<<" ";
	}
	cout<<endl;







	return 0; 
}