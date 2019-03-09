#include <iostream>
#include <stdlib.h>
#include <math.h>

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
	int n;
	cout<<"Wprowadz n"<<endl;
	cin>>n;
	int r;
	for(r=1;pow(2,r)<n;r++){
	}
	int tab[r][2];
	for(int i=0;i<r;i++){
		tab[i][0]=0;
		tab[i][1]=0;
	}
	if(pierwsza(n)){
		cout<<n<<" wystepuje 1 krotnie"<<endl;
	}
	for(int i=2,j=0;!pierwsza(n);){
		if(n%i==0){
			n/=i;
			if(tab[j][1]==0||tab[j][1]==i){
				tab[j][1]=i;
			}
			else{
				j++;
				tab[j][1]=i;
			}
			tab[j][0]++;
		}
		else{
			i++;
		}
		if(pierwsza(n)){
			if(tab[j][1]!=n){
				j++;
				tab[j][1]=n;
			}
			tab[j][0]++;
		}
	}
	for(int i=0;i<r&&tab[i][0]>0;i++){
		cout<<tab[i][1]<<" wystepuje "<<tab[i][0]<<" krotnie"<<endl;
	}
	system("pause");
    return 0;       
}