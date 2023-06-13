#include <iostream>

class parking{
public:
	parking() {
		std::cerr << "Error! Fill all stats" << std::endl;
	}
	parking(bool isJeep) {
		if (isJeep)
		{
			std::cout << "You must pay 10$ for every hour" << std::endl;
		}
		else
		{
			std::cout << "You must pay 3$ for every hour" << std::endl;
		}
	}
};

class car {
	int weight;
	int height;
	int hp; //horse power
	int torque;
	int yop; //year of production
	
	int wheelsize; //radius of wheels
	bool goodCondition;
public:
	bool isJeep;
	car() {
		std::cerr << "Error! Fill all stats" << std::endl;
	}
	car(int weight, int height, int hp, int torque, int yop, int wheelsize,bool isJeep, bool goodCondition) {
		if ( weight >= 0 && height >= 0 && hp >= 0 && torque >= 0 && yop >= 0 && wheelsize >= 0)
		{
			this->weight = weight;
			this->height = height;
			this->hp = hp;
			this->torque = torque;
			this->yop = yop;
			this->isJeep = isJeep;
			this->goodCondition = goodCondition;
		}
	}
	car(const car & obj) {
		this->weight = weight;
		this->height = height;
		this->hp = hp;
		this->torque = torque;
		this->yop = yop;
		this->isJeep = isJeep;
		this->goodCondition = goodCondition;
	}
	car& operator = (const car& obj) {
		if (this != &obj)
		{
			this->weight = weight;
			this->height = height;
			this->hp = hp;
			this->torque = torque;
			this->yop = yop;
			this->isJeep = isJeep;
			this->goodCondition = goodCondition;
		}
		return* this;
	}
};

int main() {
	int weight,height,hp,torque,yop,wheelsize;
	bool isJeep, goodCondition;
	std::cout << "Car weight: ";
	std::cin >> weight;
	std::cout << "Car height: ";
	std::cin >> height;
	std::cout << "Car hp: ";
	std::cin >> hp;
	std::cout << "Car torque: ";
	std::cin >> torque;
	std::cout << "Car production year: ";
	std::cin >> yop;
	std::cout << "Car wheels' size: ";
	std::cin >> wheelsize;
	std::cout << "Is the car jeap (enter 0 if 'No' and any other Number if 'Yes'): ";
	std::cin >> isJeep;
	std::cout << "Is the car's condition good (enter 0 if 'No' and any other Number if 'Yes'): ";
	std::cin >> goodCondition;

	car mycar(weight, height, hp, torque, yop, wheelsize, isJeep, goodCondition);

	parking park(mycar.isJeep);
}