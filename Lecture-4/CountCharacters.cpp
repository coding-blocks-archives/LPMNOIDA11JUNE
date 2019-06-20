// CountCharacters
#include <iostream>
using namespace std;

int main(){

	char ch;
	int digit = 0;
	int spaces = 0;
	int characters = 0;
	int special = 0;


	// cin>>ch; // Initialization
	ch = cin.get();

	while(ch!='$'){ // Condition Check
		// Work
		if((ch>='a'&&ch<='z') || (ch>='A' && ch<='Z')){
			characters++;
		}
		else if(ch>='0'&&ch<='9'){
			digit++;
		}
		else if( ch==' ' || ch=='\t' || ch=='\n' ){
			spaces++;
		}
		else{
			special++;
		}
		// cin>>ch; // Updation
		ch = cin.get();
	}

	cout<<"Characters : "<<characters<<endl;
	cout<<"Spaces : "<<spaces<<endl;
	cout<<"digit : "<<digit<<endl;
	cout<<"Other Characters : "<<special<<endl;

	return 0; 
}