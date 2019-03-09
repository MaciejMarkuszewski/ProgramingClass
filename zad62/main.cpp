#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

struct PUNKT{
	double x,y;
	string nazwa;
	double odleglosc(const double xx, const double yy){
		return sqrt((xx-x)*(xx-x)+(yy-y)*(yy-y));
	}
};

int main(){
	int n;
	cout<<"Podaj liczbe punktow";
	cin>>n;
	PUNKT *tab[n];
	for(int i=0;i<n;i++){
		tab[i] =new PUNKT;
		cout<<"Podaj x, y oraz nazwe punktu nr:"<<i<<endl;
		cin>>tab[i]->x>>tab[i]->y>>tab[i]->nazwa;
	}
	for(int i=0;i<n;i++){
		cout<<"Punkt nr:"<<i<<" "<<tab[i]->nazwa<<" ("<<tab[i]->x<<","<<tab[i]->y<<")"<<endl;
	}
	double minim=tab[0]->odleglosc(tab[1]->x,tab[1]->y);
	double maxym=tab[0]->odleglosc(tab[1]->x,tab[1]->y);
	int min1=0,min2=1,max1=0,max2=1;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(minim>tab[i]->odleglosc(tab[j]->x,tab[j]->y)){
				minim=tab[i]->odleglosc(tab[j]->x,tab[j]->y);
				min1=i;
				min2=j;
			}
			if(maxym<tab[i]->odleglosc(tab[j]->x,tab[j]->y)){
				maxym=tab[i]->odleglosc(tab[j]->x,tab[j]->y);
				max1=i;
				max2=j;
			}
		}
	}
	cout<<"Najblizsze punkty:"<<endl<<"Punkt nr:"<<min1<<" "<<tab[min1]->nazwa<<" ("<<tab[min1]->x<<","<<tab[min1]->y<<")"<<endl;
	cout<<"Punkt nr:"<<min2<<" "<<tab[min2]->nazwa<<" ("<<tab[min2]->x<<","<<tab[min2]->y<<")"<<endl<<"Odleglosc: "<<tab[min1]->odleglosc(tab[min2]->x,tab[min2]->y)<<endl;
	cout<<"Najdalsze punkty:"<<endl<<"Punkt nr:"<<max1<<" "<<tab[max1]->nazwa<<" ("<<tab[max1]->x<<","<<tab[max1]->y<<")"<<endl;
	cout<<"Punkt nr:"<<max2<<" "<<tab[max2]->nazwa<<" ("<<tab[max2]->x<<","<<tab[max2]->y<<")"<<endl<<"Odleglosc: "<<tab[max1]->odleglosc(tab[max2]->x,tab[max2]->y)<<endl;
	
	system("pause");
    return 0;       
}