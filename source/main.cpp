#include <iostream>
#include "trygonometria.h";
using namespace std;
using namespace degreemath;

int main() {
	std::cout << "Sinus 0 stopni: " << degreemath::sin(0) << std::endl;
	std::cout << "Sinus 30 stopni: " << degreemath::sin(30) << std::endl;
	std::cout << "Sinus 90 stopni: " << degreemath::sin(90) << std::endl;

	std::cout << "Cosinus 0 stopni: " << degreemath::cos(0) << std::endl;
	std::cout << "Cosinus 30 stopni: " << degreemath::cos(30) << std::endl;
	std::cout << "Cosinus 90 stopni: " << degreemath::cos(90) << std::endl;

	std::cout << "Tangens 0 stopni: " << degreemath::tg(0) << std::endl;
	std::cout << "Tangens 30 stopni: " << degreemath::tg(30) << std::endl;
	std::cout << "Tangens 90 stopni: " << degreemath::tg(90) << std::endl;

	std::cout << "Cotangens 0 stopni: " << degreemath::ctg(0) << std::endl;
	std::cout << "Cotangens 30 stopni: " << degreemath::ctg(30) << std::endl;
	std::cout << "Cotangens 90 stopni: " << degreemath::ctg(90) << std::endl;
	
	return 0;
}
