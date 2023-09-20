#include <iostream>
#include <thread>

void test(int x)
{
	std::cout << "Hello from thread " << x << std::endl;
}

int main()
{
	std::thread thread1(&test, 1); 
	thread1.join();

	std::cout << "Hello from main thread" << std::endl;
	return 0;
}
