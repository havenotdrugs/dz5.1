#include <iostream>

using namespace std;

class Human {
public:
	int age;
	string name;
	double weith;
};

class Pilot : public Human {
public:
	int exFly;
};

class Teacher : public Human {
public:
	int numClasses;
};


int main() {
	Human Tima;
	Pilot Oleg;
	Teacher Danya;
	Tima.age = 19;
	Tima.name = "Tima";
	Tima.weith = 120.5;
	Oleg.exFly = 19;
	Danya.numClasses = 4;
	cout << Tima.age << " " << Danya.numClasses;
}
