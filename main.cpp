#include "Palindrome.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	Palindrome obj;

	vector<char> letters;
	string input;

	printf("type word for checking palindrome>> ");
	cin >> input;

	for (char ch : input) {
		if (ch != ' ') {
			letters.push_back(ch);
		}
	}

	cout << input;

	if (obj.checker(letters)) {
		printf(" is palindrome");
		return 0;
	}

	printf(" is not palindrome");
	
	return 0;
}