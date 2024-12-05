#include <iostream>
using namespace std;
	
class Enemy1
{
public:

	string	type;
	int hp;
	int power;
	Enemy1(string type1, int hp1, int power1) {
		this->type = type1;
		this->hp = hp1;
		this->power = power1;
	}
	string getType()const

	{
		return type;
	}
	int getHp()const {
		return hp;
	}
	int getPower()const {
		return power;
	}
	//setter
	void setId(string type1)
	{
		this->type = type1;
	}
	void setHp(int hp1) {
		this->hp = hp1;
	}
	void setpower(int power1) {
		this->power = power1;
	}
};

//Subclase
class Orco : public Enemy1

{
	public:
		Orco(int hp1, int power1 ):
			Enemy1 ("Orco", hp1, power1)
		{}
		
};
class Dragon : public Enemy1
{
public:
	Dragon(int hp1, int power1) :
		Enemy1("Dragon", hp1, power1)
	{}

};
class Ghost : public Enemy1
{
public:
	Ghost(int hp1, int power1) :
		Enemy1("Ghost", hp1, power1)
	{}

};

class Jugador1
{
	public:

	string	id;
	int hp;
	int power;
	//Constructor, genera un objeto o instancia de una clase y se llama igual que la clase
	//Setter:Establece,actualiza informacion
	//Getter: obtiene informacion

	Jugador1(string id1, int hp1, int power1) 
	{
		this->id = id1;
		this->hp = hp1;
		this->power = power1;


	}
	string getId()const
		
	{
		return id;
	}
	int getHp()const {
		return hp;
	}
	int getPower()const {
		return power;
	}
	//setter
void setId(string id1)
{
	this->id = id1;
}
void setHp(int hp1) {
	this->hp = hp1;
}
void setpower(int power1) {
	this->power = power1;
}
//funcion prototipo
void atk(Enemy1 & enemy)
{


}
};



int main()
{
	Jugador1 link("Link", 100,20); 
	cout << "Name: " << link.getId() << endl;
	cout << "Hp: " << link.getHp()<< endl;
	cout << "Power: " << link.getPower() << endl;
	
	Orco orco(80,10);
	cout << "Hp: " << orco.getHp() << endl;
	cout << "Power: " << orco.getPower() << endl;
	
	Dragon dragon(300, 80);
	cout << "Hp: " << dragon.getHp() << endl;
	cout << "Power: " << dragon.getPower() << endl;
	
	Ghost ghost(60, 8);
	cout << "Hp: " << ghost.getHp() << endl;
	cout << "Power: " << ghost.getPower() << endl;


	
}

