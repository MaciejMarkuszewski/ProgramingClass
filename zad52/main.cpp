#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main()
{
	double a,b,e,w=0;
	cout<<"wpisz przedzia³ ca³ki oraz jej dok³adnoœæ";
	cin>>a>>b>>e;
	for(double i=a;i<b;i+=2*e){
		w+=(exp(i-1)+4*exp((i+e)-1)+exp((i+2*e)-1))*e/3;
	}
	cout<<w;
	system("pause");
	
    return 0;       
}