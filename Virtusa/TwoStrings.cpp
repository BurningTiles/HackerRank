/**
 * Author  : BurningTiles
 * Created : 2020-09-07 12:45:14
 * Link    : GitHub.com/BurningTiles
 * Program : Two Strings
**/

#include <bits/stdc++.h>
using namespace std;

string twoStrings(string s1, string s2) {
	int x[128]={0};
	for(unsigned long i=0; i<s1.size(); i++)
		++x[int(s1[i])];
	for(unsigned long i=0; i<s2.size(); i++)
		if(x[int(s2[i])])
			return "YES";
	return "NO";
}

int main() {
	ofstream fout(getenv("OUTPUT_PATH"));

	int q;
	cin >> q;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int q_itr = 0; q_itr < q; q_itr++) {
		string s1;
		getline(cin, s1);

		string s2;
		getline(cin, s2);

		string result = twoStrings(s1, s2);

		fout << result << "\n";
	}

	fout.close();

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/two-strings/problem?h_l=interview&playlist_slugs%5B%5D=virtusa

**/