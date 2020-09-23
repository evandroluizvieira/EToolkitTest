#include <EArchitecture>

bool EToolkit::Architecture::is64Bits(){
#ifdef _WIN64
	return true;
#else
	return false;
#endif
}

bool EToolkit::Architecture::is32Bits(){
#ifdef _WIN32
	return true;
#else
	return false;
#endif
}
