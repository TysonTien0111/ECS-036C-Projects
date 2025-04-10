#ifndef QUEUE_CPP
#define QUEUE_CPP

#include "Queue.hpp"

template <typename T>
Queue<T>::Queue(LinkedList<T> &&llist) : _llist(std::move(llist))
{
}

template <typename T>
Queue<T>::Queue() : Queue(LinkedList<T>())
{
}

template <typename T>
Queue<T>::Queue(const std::vector<T> &items) : _llist(items)
{
}

template <typename T>
size_t Queue<T>::size() const   
{
    return _llist.size();
}

template <typename T>
void Queue<T>::enqueue(T value)
{
    _llist.append(value);
}

template <typename T>
std::optional<T> Queue<T>::dequeue()
{
    return _llist.removeHead();
}

#endif