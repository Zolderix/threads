#include <iostream>
#include <thread>



int main()
{
	auto lambda = [](int x)
		{
			std::cout << "Hello from thread " << x << std::endl;
		};
	std::thread thread1(lambda, 1); 
	thread1.join();

	std::cout << "Hello from main thread" << std::endl;
	return 0;
}
