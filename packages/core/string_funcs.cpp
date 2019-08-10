#include "string_funcs.h"

std::string core::upper_case( std::string& s )
{
	std::string ret = s;
	std::string::iterator it= ret.begin();
	for( ; it!=ret.end(); ++it )
	{
		if ( isalpha( *it ) && islower( *it ) )
		{
			( *it ) = static_cast<char>( static_cast<int>( static_cast<char>( *it ) ) - 32 );
		}
	}
	return ret;

}// end upper_case ~~~~~~~~~~~~~~~~~~~~~~~~~~

std::string core::lower_case( std::string& s )
{
	std::string ret = s;
	std::string::iterator it = ret.begin();
	for( ; it!=ret.end(); ++it )
	{
		if ( isalpha( *it ) && isupper( *it ) )
		{
			( *it ) = static_cast<char>( static_cast<int>( static_cast<char>( *it ) ) + 32 );
		}
	}
	return ret;

}// end lower_case ~~~~~~~~~~~~~~~~~~~~~~~~~~

// EOF
