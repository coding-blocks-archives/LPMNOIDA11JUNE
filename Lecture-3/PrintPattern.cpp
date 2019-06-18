// PrintPattern
#include <iostream>
using namespace std;

int main(){
	int n,val;
	cin>>n;

	for(int line=1;line<=n;line++){
		if(line%2==0){
			val  = 0;
		}
		else{
			val = 1;
		}
		for(int i = 1; i<=line ;i++){
			cout<<val<<" ";

			val = 1-val;
		}
		cout<<endl;
	}
	

	return 0; 
}