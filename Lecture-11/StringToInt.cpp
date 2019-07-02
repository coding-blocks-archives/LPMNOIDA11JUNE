// StringToInt
#include <iostream>
using namespace std;

int StringToInt(char*a,int n){
	if(n==0){
		return 0;
	}

	int last_digit = a[n-1] - '0';
	// int ChotaNumber = StringToInt(a,n-1);
	// int BadaNumber = ChotaNumber*10+last_digit;
	// return BadaNumber;
	return StringToInt(a,n-1)*10 + last_digit;
}

int main(){	
	char a[]="1234";
	

	cout<<StringToInt(a,4)*100<<endl;


	return 0; 
}