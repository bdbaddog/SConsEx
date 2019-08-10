#include "linear_funcs.h"

#include <cmath>

void numerics::compute_mapping( double a0,double a1, double b0,double b1,   double& slope,double& intercept )
{
	if ( ( a1-a0 )==0 )
	{
		slope = 0;
		intercept = 0;
	}
	else
	{
		slope = ( b1-b0 )/( a1-a0 );
		intercept = b1 - slope*a1;
	}
} // end compute_mapping() ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// EOF
