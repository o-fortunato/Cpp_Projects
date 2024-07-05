#include <iostream>

/*
Write a short program to simulate a ball being dropped off of a tower.
To start, the user should be asked for the height of the tower in meters.
Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start).
Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds.
The function can calculate how far the ball has fallen after x seconds using the following formula:
	distance fallen = gravity_constant * x_seconds2 / 2

Expected output:

Enter the height of the tower in meters: 100
At 0 seconds, the ball is at height: 100 meters
At 1 seconds, the ball is at height: 95.1 meters
At 2 seconds, the ball is at height: 80.4 meters
At 3 seconds, the ball is at height: 55.9 meters
At 4 seconds, the ball is at height: 21.6 meters
At 5 seconds, the ball is on the ground.

Note: Depending on the height of the tower, the ball may not reach the ground in 5 seconds -- that’s okay. We’ll improve this program once we’ve covered loops.
Note: The ^ symbol isn’t an exponent in C++. Implement the formula using multiplication instead of exponentiation.
Note: Remember to use double literals for doubles, e.g. 2.0 rather than 2.
*/

#define GRAVITY 9.8

double inputTowerHeight() {
	std::cout << "Input the Tower height (meters): ";
	double towerHeight{};
	std::cin >> towerHeight;

	return towerHeight;
}

//Create function: Calculate distance fallen
		//distance fallen = gravity_constant * x_seconds2 / 2
double distanceFallen(double seconds) {
	double distanceFallen{ GRAVITY * (seconds * seconds) / 2 };

	return distanceFallen;
}
double currentBallHeight(double towerHeight, double currentSeconds) {
	double 	currentBallHeight{ towerHeight - distanceFallen(currentSeconds) };

	return currentBallHeight;
}
int main() {
	//Input tower height, in meters
	double towerHeight{ inputTowerHeight() };

	//Output height of ball after 1, 2, 3, 4, 5 seconds
	//Cannot go under 0m
	double secondsPassed{ 0.0 };
	while (currentBallHeight(towerHeight, secondsPassed) > 0.0) {
		std::cout << "At " << secondsPassed << " seconds, the ball is at height: " << currentBallHeight(towerHeight, secondsPassed) << '\n';
		secondsPassed++;
	}
	std::cout << "At " << secondsPassed << " seconds, the ball is on the ground.";

	return 0;
}