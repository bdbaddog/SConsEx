#include <iostream>

#include "numerics/constants.h"
#include "numerics/linear_funcs.h"

using namespace std;
using namespace core;
using namespace numerics;

int main()
{
   cout << "Pi : " << Pi << endl;
   cout << "2*Pi : " << TwoPi << endl;

	double a0=0, a1=100, b0=-50, b1=50, slope=0, intercept=0;
	compute_mapping( a0,a1, b0,b1, slope,intercept );
   cout << "slope : " << slope << endl;
   cout << "intercept : " << intercept << endl;

   return 0;
} // end main
