#include <string>
using namespace std;

class Product
{
	private:
	string name;
	double price;
	
	public:
	Product();
	Product(string name, double price);
	~Product();
	
	string getName();
	double getPrice();
	
	void reducePrice(double price);
};

Product::Product()
{
	this->name = "";
	this->price = 0;
}

Product::Product(string name, double price)
{
	this->name = name;
	this->price = price;
}

Product::~Product()
{
	
}

string Product::getName()
{
	return this-> name;
}

double Product::getPrice()
{
	return this-> price;
}

void Product::reducePrice(double price)
{
	this->price -= price;	
}
