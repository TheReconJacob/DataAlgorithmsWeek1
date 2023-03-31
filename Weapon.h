#pragma once
class Weapon {
public:
	int id;
	Weapon() {}
	Weapon(int id) :id(id) {}
	bool operator==(const Weapon& rhd);
};