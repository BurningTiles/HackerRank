/**
 * Author  : BurningTiles
 * Created : 2020-09-11 15:23:24
 * Link    : GitHub.com/BurningTiles
 * Program : Overload Operators
**/

#include <bits/stdc++.h>
using namespace std;

class Complex {
	public:
	int a,b;
	void input(string s) {
		int v1=0;
		int i=0;
		while(s[i]!='+') {
			v1=v1*10+s[i]-'0';
			i++;
		}
		while(s[i]==' ' || s[i]=='+'||s[i]=='i') i++;
		int v2=0;
		while(i<s.length()) {
			v2=v2*10+s[i]-'0';
			i++;
		}
		a=v1;
		b=v2;
	}
};

Complex operator +(const Complex &x,const Complex &y){
	Complex temp;
	temp.a = x.a + y.a;
	temp.b = x.b + y.b;
	return temp;
}

ostream &operator << (ostream &out, const Complex &x){
	out << x.a << "+i" << x.b;
	return out;
}

int main() {
	Complex x,y;
	string s1,s2;
	cin>>s1;
	cin>>s2;
	x.input(s1);
	y.input(s2);
	Complex z=x+y;
	cout<<z<<endl;
}

/**

Question :
https://www.hackerrank.com/challenges/overload-operators/problem

**/