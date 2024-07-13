/*
You are running a website, and you are trying to calculate your advertising revenue.
Write a program that allows you to enter 3 pieces of data:

-How many ads were watched.
-What percentage of users clicked on an ad.
-The average earnings per clicked ad.

Store those 3 values in a struct.
Pass that struct to another function that prints each of the values.
The print function should also print how much you made for that day (multiply the 3 fields together).
*/

#include <iostream>

struct AdRevenue {
	int	adsWatched{};
	double userPercent{};
	double avgEarnings{};
};

AdRevenue getAdvertising()
{
	AdRevenue temp{};
	std::cout << "How many ads were shown today? ";
	std::cin >> temp.adsWatched;
	std::cout << "What percentage of ads were clicked on by users? ";
	std::cin >> temp.userPercent;
	std::cout << "What was the average earnings per click? ";
	std::cin >> temp.avgEarnings;
	std::cout << '\n';

	return temp;
}

void printAdRevenue(const AdRevenue& adRev) {
	std::cout << "Ads Watched:\t\t\t" << adRev.adsWatched << '\n';
	std::cout << "User Pct:\t\t\t" << adRev.userPercent << '\n';
	std::cout << "Avg Earnings per click:\t\t" << adRev.avgEarnings << '\n';
	std::cout << "Total Earnings:\t" << adRev.adsWatched * adRev.userPercent * adRev.avgEarnings << '\n';
}

int main() {
	printAdRevenue(getAdvertising());

	return 0;
}