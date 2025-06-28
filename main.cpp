#include "Palindrome.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	Palindrome obj;

	vector<char> letters;
	string input;
	string word;

	printf("type word for checking palindrome>> ");
	cin >> input;

	for (char ch : input) {
		if (ch != ' ') {
			letters.push_back(ch);
		}
	}

	if (obj.checker(letters)) {
		printf("1");
		return 0;
	}

	printf("0");
	
	return 0;
}