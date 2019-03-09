#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
	string napis;
	int a=0,e=0,i=0,o=0,u=0,y=0;
	cout<<"Wprowadz napis"<<endl;
	cin>>napis;
	for(int j=0;j<napis.length();j++){
		switch(napis[j]){
			case 'a':
			case 'A':
				a++;
			break;
			case 'e':
			case 'E':
				e++;
			break;
			case 'i':
			case 'I':
				i++;
			break;
			case 'o':
			case 'O':
				o++;
			break;
			case 'u':
			case 'U':
				u++;
			break;
			case 'y':
			case 'Y':
				y++;
			break;
		}
	}
	cout<<"a "<<a<<endl<<"e "<<e<<endl<<"i "<<i<<endl<<"o "<<o<<endl<<"u "<<u<<endl<<"y "<<y<<endl;
	system("pause");
    return 0;       
}