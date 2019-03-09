#include <iostream>
#include <stdlib.h>

using namespace std;

bool pierwsza(int x){
	if(x==0||x==1){
		return false;
	}
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	int d,g;
	cout<<"Wprowadz d, g"<<endl;
	cin>>d>>g;
	cout<<"Liczby blizniacze:"<<endl;
	for(int i=d+(d+1)%2;i<=g-2;i+=2){
		if(pierwsza(i)){
			if(pierwsza(i+2)){
				cout<<i<<" "<<i+2<<endl;
			}
		}
	}
	system("pause");
}