// number of threads
#include <iostream>
#include <thread>

int main()
{
    //we can see max supported threads
    int max_threads = std::thread::hardware_concurrency();
    std::cout << "total: " << max_threads << std::endl
              << "spawnable: " << (max_threads - 1) << std::endl;
    return 0;
}
