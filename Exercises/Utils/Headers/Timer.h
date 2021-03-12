/*
 * CODE FROM ALEIX RIUS - 2021 
 */

#include<string>
#include <ctime>
#include <iostream>

namespace Utils {
	
	class __declspec(dllexport)Timer
	{
	public: 
		Timer(std::string&& message) : mClock(clock()), mMessage(message)
		{}

		~Timer(){
			auto t = clock(); 
			std::cout << mMessage << " : took  " << static_cast<float>(clock() - mClock) / CLOCKS_PER_SEC << " seconds"<< std::endl;
		}
	private: 
		clock_t mClock; 
		std::string mMessage; 
	};
}