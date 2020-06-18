// transfer ownership
#include <iostream>
#include <vector>
#include <thread>

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
    //spawn thread, print tid
    std::thread t1(summation, 0, 100);
    std::cout << "T1 ID: " << t1.get_id() << std::endl;
    //move thread, print tid
    std::thread t2 = std::move(t1);
    std::cout << "T2 ID: " << t2.get_id() << std::endl;
    //print joinable info
    std::cout << "T1 J: " << (t1.joinable() ? "T" : "F")
              << "\tT2 J: " << (t2.joinable() ? "T" : "F") << std::endl;
    //join thread
    t2.join();

    return 0;
}
