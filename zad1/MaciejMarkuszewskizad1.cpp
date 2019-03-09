#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    double xp,xk,dx;
    cout<<"Wprowadz xp, xk, dx"<<endl;
	cin>>xp>>xk>>dx;
    if(xk>=xp&&dx>0){
	    cout.setf(ios::fixed);
	    cout.setf(ios::showpoint);
	    cout.width(8);
	    cout<<right<<"x";
	    cout.width(16);
		cout<<right<<"cos^2(x)-1";
	    cout.width(16);
		cout<<right<<"(x^2-1)/(x^2+1)";
	    cout.width(32);
		cout<<right<<"e^(x-1)";
	    cout.width(32);
		cout<<right<<"1/(e^x)"<<endl;
	    for(double x=xp;x<=xk;x+=dx){
	    	cout.precision(2);
	    	cout.width(8);
			cout<<right<<x;
	    	cout.precision(3);
	    	cout.width(16);
			cout<<right<<cos(x)*cos(x)-1;
	    	cout.precision(2);
	    	cout.width(16);
			cout<<right<<(x*x-1)/(x*x+1);
	    	cout.precision(4);
	    	cout.width(32);
			cout<<right<<exp(x-1);
	    	cout.width(32);
			cout<<right<<1/exp(x)<<endl;
		}
	}
	else{
		cout<<"Wprowadzono niepoprawne dane"<<endl;
	}
	system("pause");
    return 0;       
}