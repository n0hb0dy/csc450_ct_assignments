#include <iostream>
#include <thread>
#include <mutex>

std::mutex mutex;

void countUp()
{
    for (int i = 1; i <= 20; ++i)
    {
        std::lock_guard<std::mutex> lock(mutex);
        std::cout << "Thread One: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

void countDown()
{
    for (int i = 20; i >= 0; --i)
    {
        std::lock_guard<std::mutex> lock(mutex);
        std::cout << "Thread Two: " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

int main()
{
    std::thread t1(countUp);
    t1.join();

    std::thread t2(countDown);
    t2.join();

    return 0;
}
