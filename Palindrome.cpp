#include "Palindrome.h"
#include <string>
#include <vector>

using namespace std;

void Palindrome::show() {
	printf("Hello World!\n");
}

bool Palindrome::checker(vector<char> str) {
	int left = 0;
	int right = str.size() - 1;

	while (left < right) {
		while (left < right && !isalnum(str[left])) ++left;
		while (left < right && !isalnum(str[right])) --right;

		if (tolower(str[left]) != tolower(str[right])) {
			return false;
		}

		++left;
		--right;
	}

	return true;
}