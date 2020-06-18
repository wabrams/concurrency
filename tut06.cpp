// scoped thread
#include <iostream>
#include <thread>

#include "lib/scoped_thread.h"

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
    scoped_thread st(std::thread(summation, 0, 100));
    return 0;
}
