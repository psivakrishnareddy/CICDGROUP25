// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the CICDGROUP25_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// CICDGROUP25_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef CICDGROUP25_EXPORTS
#define CICDGROUP25_API __declspec(dllexport)
#else
#define CICDGROUP25_API __declspec(dllimport)
#endif

// This class is exported from the dll
class CICDGROUP25_API CCICDGROUP25 {
public:
	CCICDGROUP25(void);
	// TODO: add your methods here.
};

extern CICDGROUP25_API int nCICDGROUP25;

CICDGROUP25_API int fnCICDGROUP25(void);

CICDGROUP25_API int TestCase(int i);