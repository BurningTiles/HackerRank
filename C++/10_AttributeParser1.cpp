/**
 * Author  : BurningTiles
 * Created : 2020-09-05 17:51:28
 * Link    : GitHub.com/BurningTiles
 * Program : Attribute Parser
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	vector<string> stk;
	map<string, map<string, string> > ref;
	
	while (n--) {
		string init;
		cin >> init;
		if (init[1] == '/') {
			stk.pop_back();
			continue;
		}
		string tag_name = init.substr(1, init.length()-(1+(init.back() == '>' ? 1 : 0)));
		stk.push_back((!stk.empty() ? stk.back()+"." : "") + tag_name);
		if (init.back() == '>')
			continue;
		string name;
		for (cin >> name; ; cin >> name) {
			string value;
			cin >> value; 
			cin >> value;
			ref[stk.back()][name] = value.substr(1, value.length()-(2+(value.back() == '>' ? 1 : 0)));
			if (value.back() == '>') {
				break;
			}
		}
	}
	
	while (q--) {
		string s;
		cin >> s;
		string key = s.substr(0, s.find("~"));
		string value = s.substr(s.find("~")+1);
		if (ref.find(key)==ref.end()) {
			puts("Not Found!");
			continue;
		}
		if (ref[key].find(value)==ref[key].end()) {
			puts("Not Found!");
			continue;
		}
		puts(ref[key][value].c_str());
	}

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/attribute-parser/problem

**/