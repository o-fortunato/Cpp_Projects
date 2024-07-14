/*
In designing a game, we decide we want to have monsters, because everyone likes fighting monsters.
Declare a struct that represents your monster. The monster should have a type that can be one of the following:
an ogre, a dragon, an orc, a giant spider, or a slime.

Each individual monster should also have a name (use a std::string or std::string_view),
as well as an amount of health that represents how much damage they can take before they die.
Write a function named printMonster() that prints out all of the struct’s members.
Instantiate an ogre and a slime, initialize them using an initializer list, and pass them to printMonster().

Your program should produce the following output:

This Ogre is named Torg and has 145 health.
This Slime is named Blurp and has 23 health.
*/

//Enum to define Monster Types
	//ogre, a dragon, an orc, a giant spider, or a slime

//Define Struct Monster
	//Type, Name, Health

//Switch function to print monster type

//Define printMonster()
	//Print all Struct Members
		//This <type> is named <Struct.name> and has <Struct.health> health.

#include <iostream>
#include <string>
#include <string_view>

enum class MonsterType {
	ogre,
	dragon,
	orc,
	giantSpider,
	slime,
};

struct Monster {
	MonsterType type{};
	std::string_view name{};
	int health{};
};

constexpr std::string_view printMonsterType(const Monster& monster) {
	switch (monster.type) {
	case MonsterType::ogre : return "Ogre";
	case MonsterType::dragon : return "Dragon";
	case MonsterType::orc : return "Orc";
	case MonsterType::giantSpider : return "Giant Spider";
	case MonsterType::slime: return "Slime";
	default: return "Unknown";
	}
}

void printMonster(const Monster& monster) {
	std::cout << "This " << printMonsterType(monster) << " is named " << monster.name << " and has " << monster.health << " health.\n";
}

int main() {
	Monster a{ MonsterType::orc, "Torg", 145 };
	Monster b{ MonsterType::slime, "Blurp", 23 };

	printMonster(a);
	printMonster(b);

	return 0;
}