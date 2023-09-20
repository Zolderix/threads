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

	std::vector<std::thread> threads;
	for (int i = 0; i < 10; i++)
	{
		threads.push_back(std::thread(lambda, i));
	}
	for (int i = 0; i < 10; i++)
	{
		threads[i].join();
	}

	std::cout << "Hello from main thread" << std::endl;
	return 0;
}
