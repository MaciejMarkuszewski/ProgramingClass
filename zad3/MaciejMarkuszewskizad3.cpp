#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    double xc,yc,zc,r,x,y,z,a;
    cout<<"Wprowadz xc, yc, zc, r, x, y, z"<<endl;
    cin>>xc>>yc>>zc>>r>>x>>y>>z;
    if(r>0){
	    if(x-xc>r||xc-x>r||yc-y>r||y-yc>r||zc-z>r||z-zc>r){
			cout<<"na zewnatrz kuli"<<endl;
		}
		else{
			a=(x-xc)*(x-xc)+(y-yc)*(y-yc)+(z-zc)*(z-zc);
			if(a>r*r){
				cout<<"na zewnatrz kuli"<<endl;
			}
			if(a==r*r){
				cout<<"na powierzchni kuli"<<endl;
			}
			if(a<r*r){
				cout<<"wewnatrz kuli"<<endl;
			}
		}
	}
	else{
		cout<<"Wprowadzono niepoprawne dane"<<endl;
	}
	system("pause");
    return 0;       
}