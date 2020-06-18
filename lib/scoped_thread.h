#ifndef CONCURRENCY_SCOPED_THREAD_H
#define CONCURRENCY_SCOPED_THREAD_H

class scoped_thread
{
    std::thread t;

    public:
        explicit scoped_thread(std::thread t_): t(std::move(t_))
        {
            if(!t.joinable())
                throw std::logic_error("No thread");
        }
        ~scoped_thread()
        {
            t.join();
        }
        scoped_thread(scoped_thread const&) = delete;
        scoped_thread& operator=(scoped_thread const&) = delete;
};

#endif //CONCURRENCY_SCOPED_THREAD_H
