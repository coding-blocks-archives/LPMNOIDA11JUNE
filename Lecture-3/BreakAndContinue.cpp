#include <iostream>
using namespace std;

int main(){
// ------------------ CONTINUE --------------------

	int i = 1;

	while(i<=10){

		if(i==5){
			i++;
			break;
		}
		cout<<i<<" ";
		i++;
	}
	cout<<i<<endl;
	cout<<endl;









 // ------------------- BREAK ----------------------	
	
	// int i = 1;

	// for(int j=1;j<=10;j++){
	// 	if(j==4){
	// 		break;
	// 		cout<<j<<" ";
	// 	}
	// 	cout<<j<<" ";

	// }
	// cout<<endl;

	// while(i<=10){
	// 	if(i==7){
	// 		break; // Take us out from the inner most loop
	// 	}
	// 	cout<<i<<" ";
	// 	i++;
	// }
	// cout<<endl;
	

	return 0; 
}