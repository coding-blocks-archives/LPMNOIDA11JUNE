// PhoneKeyPad
#include <iostream>
using namespace std;

char a[][10]={
	"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"
};
void PhoneKeyPad(char *in,int i,char* out,int j){
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}

	int key=in[i] - '0';
	for(int k=0;a[key][k]!='\0';k++){
		out[j] = a[key][k];
		PhoneKeyPad(in,i+1,out,j+1);
	}
}

int main(){

	char in[100],out[100];
	cin>>in;
	PhoneKeyPad(in,0,out,0);

	return 0;
}