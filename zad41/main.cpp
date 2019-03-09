#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    string napis;
    bool n=true;
    bool p=true;
	cout<<"Wprowadz napis"<<endl;
	cin>>napis;
	cout<<"Palindromy:"<<endl;
	for(int i=0;i<napis.length()-2;i++){
		for(int j=i;j>=0&&(n||p);j--){
			if(n&&napis[j]==napis[2+i+i-j]){
				for(int k=j;k<=2+i+i-j;k++){
					cout<<napis[k];
				}
				cout<<endl;
			}
			else{
				n=false;
			}
			if(p&&napis[j]==napis[1+i+i-j]){
				if(i-j>0){
					for(int k=j;k<=1+i+i-j;k++){
						cout<<napis[k];
					}
					cout<<endl;
				}
			}
			else{
				p=false;
			}
		}
		n=true;
		p=true;
	}
	system("pause");
    return 0;       
}