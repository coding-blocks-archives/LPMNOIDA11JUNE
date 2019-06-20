// UniqueNumber1
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans = 0;
	int no;
	for(int i=1;i<=n;i++){
		// Work
		cin>>no;
		ans = ans ^ no;

	}
	cout<<ans<<endl;

	return 0; 
}