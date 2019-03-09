#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main(){
	srand(time(NULL));
	int n,d,g,mod=0,modalna;
	bool m=false;
	cout<<"Wprowadz n, d, g"<<endl;
	cin>>n>>d>>g;
	int tab[n];
	int lic [g-d+1];
	for(int i=0;i<g-d+1;i++){
		lic[i]=0;
	}
	for(int i =0;i<n;i++){
		tab[i]=(rand()%(g-d+1))+d;
		cout<<tab[i]<<" ";
		lic[tab[i]-d]++;
	}
	for(int i=0;i<g-d+1;i++){
		if(lic[i]==mod&&m){
			m=false;
		}
		if(lic[i]>mod){
			mod=lic[i];
			m=true;
			modalna=i+d;
		}
	}
	if(m){
		cout<<endl<<"modalna to "<<modalna<<endl;
	}
	else{
		cout<<endl<<"nie ma modalnej"<<endl;
	}
	system("pause");
    return 0;       
}