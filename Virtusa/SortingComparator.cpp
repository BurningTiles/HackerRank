/**
 * Author  : BurningTiles
 * Created : 2020-09-07 13:14:27
 * Link    : GitHub.com/BurningTiles
 * Program : Sorting Comparator
**/

#include <bits/stdc++.h>
using namespace std;

struct Player {
    int score;
    string name;
};

class Checker {
public:
  	// complete this method
    static int comparator(Player a, Player b)  {
		if(a.score<b.score) return -1;
		if(a.score>b.score) return 1;
		if(a.name<b.name) return 1;
		if(a.name>b.name) return -1;
		return 0;
    }
};

bool compare(Player a, Player b) {
    if(Checker::comparator(a,b) == -1)
        return false;
    return true;
}

int main() {
    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player player;
        player.name = name, player.score = score;
        players.push_back(player);
    }
    sort(players.begin(), players.end(), compare);
    for(int i = 0; i < players.size(); i++) {
        cout << players[i].name << " " << players[i].score << endl;
    }
    return 0;
}

/**

Question :
https://www.hackerrank.com/challenges/ctci-comparator-sorting/problem?h_l=interview&playlist_slugs%5B%5D=virtusa

**/