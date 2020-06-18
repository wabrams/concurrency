// thread guard, for people who forget to join :)
#include <iostream>
#include <thread>

#include "lib/guard_thread.h"

//thread function
void summation(int start, int stop)
{
    int sum = 0;
    for (int i = start; i <= stop; i++)
        sum += i;
    std::cout << "sum: " << sum << std::endl;
}

int main()
{
    std::thread t(summation, 0, 10);
    guard_thread g(t);
    return 0;
}
