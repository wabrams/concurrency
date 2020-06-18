// pass parameters to thread
#include <iostream>
#include <thread>

void add(int a, int b)
{
    std::cout << a << +" + " << b << " = " << (a + b) << std::endl;
}
int main()
{
    std::thread t(add, 2, 3);
    t.join();

    return 0;
}
