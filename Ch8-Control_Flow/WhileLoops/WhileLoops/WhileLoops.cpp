/*
Now make the numbers print like this:

		1
	  2 1
	3 2 1
  4 3 2 1
5 4 3 2 1
Hint: Figure out how to make it print like this first:

X X X X 1
X X X 2 1
X X 3 2 1
X 4 3 2 1
5 4 3 2 1
*/

#include <iostream>

int main() {
	constexpr int lineLength{ 5 };
	int lineNumber{ 1 };
	while (lineNumber <= lineLength) {
		int displayValue{ lineLength };
		while (displayValue > 0) {
			if (displayValue > lineNumber) {
				std::cout << "  ";
			}
			else {
				std::cout << ' ' << displayValue;
			}
			--displayValue;
		}
		std::cout << '\n';
		++lineNumber;
	}
	return 0;
}