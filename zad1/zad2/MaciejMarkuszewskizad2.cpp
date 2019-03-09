#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    double a,b,c,A,B,C,d,x1,x2,y1,y2;
    cout<<"Wprowadz a, b, c, A, B, C"<<endl;
    cin>>a>>b>>c>>A>>B>>C;
    if(A==0||(a==0&&b==0)){
		cout<<"Wprowadzono niepoprawne dane"<<endl;
	}
	else{
		if(b==0){
			x1=c/a;
			y1=A*x1*x1+B*x1+C;
			cout<<"1 punkt:("<<x1<<", "<<y1<<")"<<endl;
		}
		else{
			c=C-(c/b);
			b=B+(a/b);
			d=(b*b)-(4*A*c);
			if(d<0){
				cout<<"Nie ma punktow wspolnych"<<endl;
			}
			if(d==0){
				x1=(-1*b)/(2*A);
				y1=A*x1*x1+B*x1+C;
			   	cout<<"1 punkt:("<<x1<<", "<<y1<<")"<<endl;
			}
			if(d>0){
				x1=(-1*b-sqrt(d))/(2*A);
				y1=A*x1*x1+B*x1+C;
				x2=(-1*b+sqrt(d))/(2*A);
				y2=A*x2*x2+B*x2+C;
				cout<<"2 punkty:("<<x1<<", "<<y1<<") i ("<<x2<<", "<<y2<<")"<<endl;
			}
		}
	}
	system("pause");
    return 0;       
}