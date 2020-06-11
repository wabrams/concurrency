#include <iostream>
#include <vector>
#include <thread>

#define CONST_NUM 10

void set(int * location, int value)
{
    *location = value;
}

void print_array(int * arr, int len)
{
    for (int i = 0; i < len; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main()
{
    int arr[CONST_NUM];
    for (int i = 0; i < CONST_NUM; i++)
        arr[i] = 0;
    //print arr pre threads
    print_array(arr, CONST_NUM);
    //set up thread pool
    std::vector<std::thread> pool;
    pool.reserve(CONST_NUM);
    //run and join threads
    for (int i = 0; i < CONST_NUM; i++)
        pool.emplace_back(set, &arr[i], i+1);
    for (auto& t: pool)
        t.join();
    //print arr post threads
    print_array(arr, CONST_NUM);

    return 0;
}
