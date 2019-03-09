#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main(){
	srand(time(NULL));
	int n,m,x;
	cout<<"Wprowadz n"<<endl;
	cin>>n;
	int tab[n];
	for(int i=0;i<n;i++){
		tab[i]=rand();
	}
	for(int i=0;i<n;i++){
		m=i;
		for(int j=i+1;j<n;j++){
			if(tab[j]<tab[m]){
				m=j;
			}
		}
		x=tab[i];
		tab[i]=tab[m];
		tab[m]=x;
	}
	for(int i=0;i<n;i++){
		cout<<tab[i]<<endl;
	}
	system("pause");
}