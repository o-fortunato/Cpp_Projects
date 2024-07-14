/*
Create a class template named Triad that has 3 members of the same template type.
Also create a function template named print that can print a Triad.
The following program should compile :

int main()
{
	Triad t1{ 1, 2, 3 }; // note: uses CTAD to deduce template arguments
	print(t1);

	Triad t2{ 1.2, 3.4, 5.6 }; // note: uses CTAD to deduce template arguments
	print(t2);

	return 0;
}
and produce the following result :

[1, 2, 3] [1.2, 3.4, 5.6]
If you are using C++17, you will need to provide a deduction guide for CTAD to work.
*/

#include <iostream>

template <typename T>
struct Triad {
	T a{};
	T b{};
	T c{};
};

template <typename T>
Triad(T, T, T) -> Triad<T>;

template <typename T>
void print(const Triad<T>& triad) {
	std::cout << '[' << triad.a << ' ' << triad.b << ' ' << triad.c << "] ";
}

int main()
{
	Triad t1{ 1, 2, 3 }; // note: uses CTAD to deduce template arguments
	print(t1);

	Triad t2{ 1.2, 3.4, 5.6 }; // note: uses CTAD to deduce template arguments
	print(t2);

	return 0;
}