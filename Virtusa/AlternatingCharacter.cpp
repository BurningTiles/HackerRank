/**
 * Author  : BurningTiles
 * Created : 2020-09-07 12:57:51
 * Link    : GitHub.com/BurningTiles
 * Program : Alternating Character
**/

#include <bits/stdc++.h>
using namespace std;

int alternatingCharacters(string s) {
	int x=0;
	for(unsigned long i=1; i<s.size(); i++)
		if(s[i]==s[i-1]) ++x;
	return x;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}


/**

Question : 
https://www.hackerrank.com/challenges/alternating-characters/problem?h_l=interview&playlist_slugs%5B%5D=virtusa

**/