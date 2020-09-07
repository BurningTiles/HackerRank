/**
 * Author  : BurningTiles
 * Created : 2020-09-07 07:40:59
 * Link    : GitHub.com/BurningTiles
 * Program : BoxIt!
**/

#include <bits/stdc++.h>
using namespace std;

class Box{
	private:
		int l,b,h;
	public:
		Box() { l=b=h=0; }
		Box(int x, int y, int z): l(x),b(y),h(z) {}
		Box(Box &x){
			l = x.l;
			b = x.b;
			h = x.h;
		}
		int getLength() { return l; }
		int getBreadth() { return b; }
		int getHeight() { return h; }
		long long CalculateVolume() { return long(l)*long(b)*long(h); }
		friend ostream &operator<< (ostream &output, Box &x){
			output << x.l << " " << x.b << " " << x.h;
			return output;
		}
		bool operator <(Box &x){
			if((l<x.l) || (l==x.l && b<x.b) || (l==x.l && b==x.b && h<x.h))
				return true;
			return false;
		}
};

void check2() {
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++) {
		int type;
		cin>>type;
		if(type ==1) {
			cout<<temp<<endl;
		}
		if(type == 2) {
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3) {
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp) {
				cout<<"Lesser\n";
			}
			else {
				cout<<"Greater\n";
			}
		}
		if(type==4) {
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5) {
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}
	}
}

int main(){
	check2();
	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/box-it/problem

**/