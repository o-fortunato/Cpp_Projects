//Step 1:
//Write a function template named add() that allows the users to add 2 values of the same type.The following program should run :
//and produce the following output :

// 5
// 4.6
// 
// 
//Step 2:
// Write a function template named mult() that allows the user to multiply one value of any type(first parameter) and an integer(second parameter).
// The function should return the same type as the first parameter.
//and produce the following output :

//6
//3.6

//Step 3:
//Write a function template named sub() that allows the user to subtract two values of different types.
//and produce the following output:

//1
//1.5
//2.5

#include <iostream>

// write your add function template here

template <typename T>
constexpr T add(T x, T y) {
	return x + y;
}

// write your mult function template here
template <typename T>
constexpr T mult(T x, int y) {
	return x * y;
}

// write your sub function template here
template <typename T, typename U>
constexpr auto sub(T x, U y) {
	return x - y;
}

int main()
{	//Step 1
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << "\n\n";

	//Step 2
	std::cout << mult(2, 3) << '\n';
	std::cout << mult(1.2, 3) << "\n\n";

	//Step 3
	std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << "\n\n";

	return 0;
}
