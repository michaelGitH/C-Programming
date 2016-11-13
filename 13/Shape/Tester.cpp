#include<iostream>
#include<vector>
using std::vector;

#include<iomanip>
using std::setprecision;

#include<iostream>
#include"Shape.h"
#include"Square.h"
#include"Triangle.h"
#include"Circle.h"
#include"Sphere.h"
#include"Cube.h"
#include"Tetrahedron.h";


int main()
{
	std::cout << setprecision(2) << std::fixed;

	Square square(0.5);
	Triangle triangle(3, 4, 5);
	Circle circle(5);
	Sphere sphere(5);
	Cube cube(3);
	Tetrahedron tetrahedron(5);

	vector<Shape*>shapes(6);
	shapes[0] = &square;
	shapes[1] = &triangle;
	shapes[2] = &circle;
	shapes[3] = &sphere;
	shapes[4] = &cube;
	shapes[5] = &tetrahedron;

	for (size_t i = 0; i < shapes.size(); i++) {
		shapes[i]->print();
		
		if (dynamic_cast<TwoDimensionalShape*>(shapes[i]) != 0) {
			std::cout << "Area: " << shapes[i]->getArea() << '\n';
			TwoDimensionalShape* two = dynamic_cast<TwoDimensionalShape*>(shapes[i]);
			two->draw(1, 1, 1, '&', '*');
			std::cout << "\n\n\n";
		}
		else {
			std::cout << "Area: " << shapes[i]->getArea() << "\n";
			ThreeDimensionalShape *threeD = dynamic_cast<ThreeDimensionalShape*>(shapes[i]);
			std::cout << "Volume: " << threeD->getVolume() << "\n\n";
		}
	}

	system("pause");
	return 0;
}