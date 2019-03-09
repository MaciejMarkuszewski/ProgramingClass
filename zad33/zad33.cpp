#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){
	int x,n;
	char b,c;
	cout<<"Wprowadz liczbe oraz n"<<endl;
	cin>>x>>n;
	string a="";
	if(x<0){
		x*=-1;
		c='-';
	}
	for(int i=x;i>0;i/=n){
		if(i%n>9){
			b=(i%n+55);
			a=b+a;
		}
		else{
			b=(i%n+48);
			a=b+a;
		}
	}
	if(c=='-'){
		a=c+a;
	}
	cout<<a<<endl;
	system("pause");
}