#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int rekurencja(int n){
	if(n==1||n==2){
		return 1;
	}
	else{
		return rekurencja(n-1)+rekurencja(n-2);
	}
}

int iteracja(int n){
	int w=1,x,z=1;
	for(int i=2;i<n;i++){
		x=w;
		w+=z;
		z=x;
	}
	return w;
}

int main()
{
	clock_t p,k;
	int n;
	cout<<"wpisz numer liczby fibbonaciego:";
	cin>>n;
	p=clock();
	cout<<"wynik rekurencji to "<<rekurencja(n);
	k=clock();
	cout<<" w czasie "<<k-p<<" milisekund"<<endl;
	p=clock();
	cout<<"wynik iteracji to "<<iteracja(n);
	k=clock();
	cout<<" w czasie "<<k-p<<" milisekund"<<endl;
	system("pause");
    return 0;       
}