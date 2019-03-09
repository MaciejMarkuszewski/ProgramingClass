#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>

using namespace std;

void mnozenie(int **a,int **b,int **c,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
}

double srednia(int **a,int n){
	double s=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			s+=a[i][j];
		}
	}
	return s/(n*n);
}

int suma(int **a,int n){
	int s=0;
	for(int i=0;i<n;i++){
		s+=a[i][i];
	}
	return s;
}

void wyswietl(int **a,int n,int w){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout.width(w);
			cout<<a[i][j];
		}
		cout<<endl;
	}
}

int main(){
	srand(time(NULL));
	int n,k,w;
	cout<<"Wprowadz rozmiar macierzy oraz liczbê okreslajaca przedzal wartosci macierzy"<<endl;
	cin>>n>>k;
	w=(floor(log10(k)+2));
	int **a=new int *[n];
	for(int i=0;i<n;i++){
		a[i]=new int [n];
	}
	int **b=new int *[n];
	for(int i=0;i<n;i++){
		b[i]=new int [n];
	}
	int **c=new int *[n];
	for(int i=0;i<n;i++){
		c[i]=new int [n];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=floor((rand()%(2*k+1))-k);
			b[i][j]=floor((rand()%(2*k+1))-k);
			c[i][j]=0;
		}
	}
	cout<<"Macierz A"<<endl;
	wyswietl(a,n,w);
	cout<<endl<<"Macierz B"<<endl;
	wyswietl(b,n,w);
	cout<<endl<<"Macierz C=A*B"<<endl;
	mnozenie(a,b,c,n);
	wyswietl(c,n,w*2-1);
	cout<<endl<<"Suma elementow na przekatniej g³ownej macierzy C"<<endl<<srednia(c,n)<<endl;
	cout<<"srednia arytmetyczna elementow macierzy C"<<endl<<suma(c,n)<<endl;
	system("pause");
	
    return 0;       
}