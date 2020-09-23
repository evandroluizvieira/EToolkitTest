#ifndef EARCHITECTURE_HPP
#define EARCHITECTURE_HPP

#include <EToolkit>

/*
 * @description: Evandro's toolkit.
 */
namespace EToolkit{

	/*
	 * @description: Abstract windows architecture bits class.
	 * @note: Can't use objects, only functions.
	 */
	class ETOOLKIT_API Architecture{
		private:
			/*
			 * @description: Private default constructor what prevent object instantiation.
			 */
			Architecture();

		public:
			/*
			 * @description: Function to check if the current architecture is 64 bits based.
			 * @return: true if yes, false otherwise.
			 */
			static bool is64Bits();

			/*
			 * @description: Function to check if the current architecture is 32 bits based.
			 * @return: true if yes, false otherwise.
			 */
			static bool is32Bits();
	};
}

#endif /* EARCHITECTURE_HPP */
