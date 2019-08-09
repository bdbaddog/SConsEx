#include <iostream>

#include "core/file_funcs.h"
#include "core/string_funcs.h"

using namespace std;
using namespace core;

int main()
{
   string s1 = "Now Is The Time For All Good Folks ...";
   string s2 = upper_case(s1);
   string s3 = lower_case(s2);
   cout << "s1 : " << s1 << endl;
   cout << "s2 : " << s1 << endl;
   cout << "s3 : " << s1 << endl;

   string fileName = "nonExistantFile.dat";
	bool exists = file_exists( fileName );
   cout << "exists : " << exists << endl;

   return 0;
} // end main
