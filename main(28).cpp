#include <iostream>
#include <string>
#include "Product.h"

using namespace std;

int main()
{
	Product *p = new Product();
	cout << "Product 1" << endl;
	cout << "name: " << p->getName() << endl;
	cout << "price: " << p->getPrice() << endl;
	
	
	Product *p2 = new Product("Blender", 150.00);
	cout << "\n\nProduct 2" << endl;
	cout << "name: " << p2->getName() << endl;
	cout << "price: " << p2->getPrice() << endl;
	p2->reducePrice(80.50);
	cout << "price: " << p2->getPrice() << endl;
	
	
	
  return 0;
}