/**
 * Author  : BurningTiles
 * Created : 2020-09-10 16:35:19
 * Link    : GitHub.com/BurningTiles
 * Program : C Class Template
**/

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

template <class T>
class AddElements{
    public:
    T a;
    AddElements(T b):a(b){}
    T add(T &b){
        return a+b;
    }
	string concatenate(string b){
        return a+b;
    }
};

int start(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int temp=start();

int main () {
	int n,i;
	cin >> n;
	for(i=0;i<n;i++) {
		string type;
		cin >> type;
		if(type=="float") {
			double element1,element2;
			cin >> element1 >> element2;
			AddElements<double> myfloat (element1);
			cout << myfloat.add(element2) << endl;
		}
		else if(type == "int") {
			int element1, element2;
			cin >> element1 >> element2;
			AddElements<int> myint (element1);
			cout << myint.add(element2) << endl;
		}
		else if(type == "string") {
			string element1, element2;
			cin >> element1 >> element2;
			AddElements<string> mystring (element1);
			cout << mystring.concatenate(element2) << endl;
		}
	}
	return 0;
}


/**

Question :
https://www.hackerrank.com/challenges/c-class-templates/problem

**/