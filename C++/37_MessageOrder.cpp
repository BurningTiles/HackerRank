/**
 * Author  : BurningTiles
 * Created : 2020-09-12 00:52:28
 * Link    : GitHub.com/BurningTiles
 * Program : Message Order
**/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Message {
public: 
	int index=0;
	string str="";
	Message() {}
	Message(string x): str(x){}
	const string& get_text() {
		return str;
	}
	bool operator <(const Message &m){
		if(index<m.index)
			return true;
		return false;
	}
};

class MessageFactory {
public:
	static unsigned index;
	MessageFactory() {}
	Message create_message(const string& text) {
		Message temp(text);
		temp.index = ++index;
		return temp;
	}
};

unsigned MessageFactory::index = 0;

class Recipient {
public:
	Recipient() {}
	void receive(const Message& msg) {
		messages_.push_back(msg);
	}
	void print_messages() {
		fix_order();
		for (auto& msg : messages_) {
			cout << msg.get_text() << endl;
		}
		messages_.clear();
	}
private:
	void fix_order() {
		sort(messages_.begin(), messages_.end());
	}
	vector<Message> messages_;
};

class Network {
public:
	static void send_messages(vector<Message> messages, Recipient& recipient) {
	// simulates the unpredictable network, where sent messages might arrive in unspecified order
		random_shuffle(messages.begin(), messages.end());         
		for (auto msg : messages) {
			recipient.receive(msg);
		}
	}
};

int main() {
	MessageFactory message_factory;
	Recipient recipient;
	vector<Message> messages;
	string text;
	while (getline(cin, text)) {
		messages.push_back(message_factory.create_message(text));
	}
	Network::send_messages(messages, recipient);
	recipient.print_messages();
}

/**

Question : 
https://www.hackerrank.com/challenges/messages-order/problem

**/