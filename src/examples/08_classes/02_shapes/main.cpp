//main
#include <iostream>
#include<memory>
#include<vector>
#include "shape.h"
#include "line.h"
#include "circle.h"
/*
Create a Shape pointer of type Line
Create vector of Shape pointers
iterate with auto
*/
using std::unique_ptr; using std::make_unique; using std::vector;

int main() 
{
	unique_ptr<Shape> shape = make_unique<Line>();
	shape->draw();
	unique_ptr<Shape> shape1 = make_unique<Circle>();
	shape1->draw();

	vector<unique_ptr<Shape>> shapes;
	shapes.push_back(std::move(shape));
	shapes.push_back(std::move(shape1));

	for(auto& shape: shapes)
	{
		shape->draw();
	}

	return 0;
}