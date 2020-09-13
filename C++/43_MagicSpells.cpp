/**
 * Author  : BurningTiles
 * Created : 2020-09-13 00:46:52
 * Link    : GitHub.com/BurningTiles
 * Program : Magic Spells
**/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spell { 
	private:
		string scrollName;
	public:
		Spell(): scrollName("") { }
		Spell(string name): scrollName(name) { }
		virtual ~Spell() { }
		string revealScrollName() {
			return scrollName;
		}
};

class Fireball : public Spell { 
	private: int power;
	public:
		Fireball(int power): power(power) { }
		void revealFirepower(){
			cout << "Fireball: " << power << endl;
		}
};

class Frostbite : public Spell {
	private: int power;
	public:
		Frostbite(int power): power(power) { }
		void revealFrostpower(){
			cout << "Frostbite: " << power << endl;
		}
};

class Thunderstorm : public Spell { 
	private: int power;
	public:
		Thunderstorm(int power): power(power) { }
		void revealThunderpower(){
			cout << "Thunderstorm: " << power << endl;
		}
};

class Waterbolt : public Spell { 
	private: int power;
	public:
		Waterbolt(int power): power(power) { }
		void revealWaterpower(){
			cout << "Waterbolt: " << power << endl;
		}
};

class SpellJournal {
	public:
		static string journal;
		static string read() {
			return journal;
		}
}; 
string SpellJournal::journal = "";

void counterspell(Spell *spell) {
	
	if(Fireball *fi = dynamic_cast<Fireball*>(spell))
		fi->revealFirepower();
	else if(Frostbite *fr = dynamic_cast<Frostbite*>(spell))
		fr->revealFrostpower();
	else if(Thunderstorm *t = dynamic_cast<Thunderstorm*>(spell))
		t->revealThunderpower();
	else if(Waterbolt *w = dynamic_cast<Waterbolt*>(spell))
		w->revealWaterpower();
	else{
		string s1=spell->revealScrollName() ,s2=SpellJournal::journal;
		int dp[s1.size()+1][s2.size()+1] , i, j;
		for(i=0; i<=s1.size(); i++) dp[i][0]=0;
		for(i=0; i<=s2.size(); i++) dp[0][i]=0;
		for(i=1; i<=s1.size(); i++)
			for(j=1; j<=s2.size(); j++)
				if(s1[i-1]==s2[j-1])
					dp[i][j] = dp[i-1][j-1]+1;
				else
					dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
		cout << dp[s1.size()][s2.size()] << endl;
	}
}

class Wizard {
	public:
		Spell *cast() {
			Spell *spell;
			string s; cin >> s;
			int power; cin >> power;
			if(s == "fire") {
				spell = new Fireball(power);
			}
			else if(s == "frost") {
				spell = new Frostbite(power);
			}
			else if(s == "water") {
				spell = new Waterbolt(power);
			}
			else if(s == "thunder") {
				spell = new Thunderstorm(power);
			} 
			else {
				spell = new Spell(s);
				cin >> SpellJournal::journal;
			}
			return spell;
		}
};

int main() {
	int T;
	cin >> T;
	Wizard Arawn;
	while(T--) {
		Spell *spell = Arawn.cast();
		counterspell(spell);
	}
	return 0;
}

/**

Question :
https://www.hackerrank.com/challenges/magic-spells/problem

**/