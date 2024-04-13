// CICDGROUP25.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "CICDGROUP25.h"


// This is an example of an exported variable
CICDGROUP25_API int nCICDGROUP25=0;

// This is an example of an exported function.
CICDGROUP25_API int fnCICDGROUP25(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCICDGROUP25::CCICDGROUP25()
{
    return;
}

CICDGROUP25_API int TestCase(int i) {
    return i * i;
}