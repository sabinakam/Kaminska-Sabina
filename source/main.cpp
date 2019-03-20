#include <iostream>

using namespace std;

#include"LaborkaConfig.h"

#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h";
using namespace degreemath;
#else
#define _USE_MATH_DEFINES
#include "math.h"
#include <cmath>
#endif

//int main () {
//    #ifdef USE_TRIGONOMETRY_DEGREE
//    std::cout <<"Sinus 0 stopni: " << degreemath::sin(0)<<std::endl;
//    std::cout <<"Sinus 30 stopni: " << degreemath::sin(30)<<std::endl;
//    std::cout <<"Sinus 90 stopni: " << degreemath::sin(90)<<std::endl;
//
//    std::cout <<"Cosinus 0 stopni: " << degreemath::cos(0)<<std::endl;
//    std::cout <<"Cosinus 30 stopni: " << degreemath::cos(30)<<std::endl;
//    std::cout <<"Cosinus 90 stopni: " << degreemath::cos(90)<<std::endl;
//
//    std::cout <<"Tangens 0 stopni: " << degreemath::tg(0)<<std::endl;
//    std::cout <<"Tangens 30 stopni: " << degreemath::tg(30)<<std::endl;
//    std::cout <<"Tangens 90 stopni: " << degreemath::tg(90)<<std::endl;
//
//    std::cout <<"Cotangens 0 stopni: " << degreemath::ctg(0)<<std::endl;
//    std::cout <<"Cotangens 30 stopni: " << degreemath::ctg(30)<<std::endl;
//    std::cout <<"Cotangens 90 stopni: " << degreemath::ctg(90)<<std::endl;
//
//#else
//
//    std::cout <<"Trygonometria w radianach "<<std::endl;
//    std::cout <<"Sinus 30 stopni (pi/6): " << std::sin(M_PI/6)<<std::endl;
//    std::cout <<"Cosinus 60 stopni (pi/3): " << std::cos(M_PI/3)<<std::endl;
//    std::cout <<"Tangens 180 stopni (pi): " << std::tan(M_PI)<<std::endl;
//    std::cout <<"Cotangens 45 stopni (pi/4): " << 1/std::tan(M_PI/4)<<std::endl;
//#endif
//    return 0;
//}

int main(int arc, char*argv[]) {
	if (arc==3)
	{
		double result = 0;
		std::string opcja = argv[1];
		if (!opcja.compare("--sin"))
		{
#ifdef USE_TRIGONOMETRY_DEGREE
			result = degreemath::sin(atof(arg[2]));
#else

			result = sin(atof(argv[2]));
#endif
				std::cout << "wynik" << result << std::endl;
		}
		if (!opcja.compare("--cos"))
		{
#ifdef USE_TRIGONOMETRY_DEGREE
			result = degreemath::cos(atof(arg[2]));
#else

			result = cos(atof(argv[2]));
#endif
				std::cout<< "wynik" << result << std::endl;
		}
		if (!opcja.compare("--tg"))
		{
#ifdef USE_TRIGONOMETRY_DEGREE
			result = degreemath::tg(atof(arg[2]));

#else

			result = tg(atof(argv[2]));
#endif
				std::cout << "wynik" << result << std::endl;
		}
		if (!opcja.compare("--ctg"))
		{
#ifdef USE_TRIGONOMETRY_DEGREE
			result = degreemath::ctg(atof(arg[2]));

#else

			result = ctg(atof(argv[2]));
#endif
				std::cout << "wynik" << result << std::endl;
		}
	}
	result 0;
}

