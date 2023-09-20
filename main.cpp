#include <iostream>
#include <thread>
#include <vector>



int main()
{
	auto lambda = [](int x)
		{
			std::cout << "Hello from thread " << std::this_thread::get_id() << std::endl;
			std::cout << "Argument: " << x << std::endl;
		};

	//jthreads are used since c++20 to join automatically
	std::vector<std::jthread> threads;
	for (int i = 0; i < 10; i++)
	{
		threads.push_back(std::jthread(lambda, i));
	}

	std::cout << "Hello from main thread" << std::endl;
	return 0;
}
