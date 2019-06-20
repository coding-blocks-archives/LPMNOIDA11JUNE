// Pattern
#include <iostream>
using namespace std;

int main(){
	int n,line,i;
	cin>>n;

	for(line=1;line<=n;line++){
		// Print line times *
		for(i=1;i<=line;i++){
			cout<<"*";
		}
		cout<<' ';
		// Print n-line+1 times *
		for(i=1;i<=n-line+1;i++){
			cout<<"*";
		}
		cout<<' ';

		for(i=1;i<=n-line+1;i++){
			cout<<"*";
		}
		cout<<' ';
		for(i=1;i<=line;i++){
			cout<<"*";
		}
		cout<<endl;
	}



	return 0; 
}