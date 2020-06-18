#ifndef CONCURRENCY_GUARD_THREAD_H
#define CONCURRENCY_GUARD_THREAD_H

#include <thread>

class guard_thread
{
    std::thread& t;

    public:
        explicit guard_thread(std::thread& t_): t(t_) {}
        ~guard_thread()
        {
            if (t.joinable())
                t.join();
        }
        guard_thread(guard_thread const&) = delete;
        guard_thread& operator=(guard_thread const&) = delete;
};


#endif //CONCURRENCY_GUARD_THREAD_H
