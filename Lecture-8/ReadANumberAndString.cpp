#include <iostream>
using namespace std;

int main(){
	int n;
	char a[100];

	// Read number 
	cin>>n;
	// cin.get(); // ' ' or '\n' will not get stored i.e. ignored
	cin.ignore();
	// Read string
	cin.getline(a,100);

	cout<<n<<endl;
	cout<<a<<endl;

	return 0; 
}
