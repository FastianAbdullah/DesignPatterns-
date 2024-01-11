/*#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

// Iterator interface
template <typename T>
class Iterator {
public:
    virtual T getNext() = 0;
    virtual bool hasNext() = 0;
};

// Concrete Iterator for a list
template <typename T>
class ListIterator : public Iterator<T> {
private:
    const std::list<T>& data;
    typename list<T>::const_iterator iterator;

public:
    ListIterator(const std::list<T>& lst) : data(lst), iterator(data.begin()) {}

    T getNext() override {
        if (hasNext()) {
            return *(iterator++);
        }
        else {
            throw std::out_of_range("No more elements in the list.");
        }
    }

    bool hasNext() override {
        return iterator != data.end();
    }
};

// Concrete Iterator for a vector
template <typename T>
class VectorIterator : public Iterator<T> {
private:
    vector<T>& data;
    size_t position;

public:
    VectorIterator(vector<T>& vec) : data(vec), position(0) {}

    T getNext() override
    {
        if (hasNext()) {
            return data[position++];
        }
        else {
            throw out_of_range("No more elements in the vector.");
        }
    }

    bool hasNext() override {
        return position < data.size();
    }
};

// Concrete Iterator for a queue
template <typename T>
class QueueIterator : public Iterator<T> {
private:
    queue<T> data;

public:
    QueueIterator(queue<T>& q) : data(q) {}

    T getNext() override {
        if (hasNext()) {
            T value = data.front();
            data.pop();
            return value;
        }
        else {
            throw std::out_of_range("No more elements in the queue.");
        }
    }

    bool hasNext() override {
        return !data.empty();
    }
};

// Concrete Iterator for a stack
template <typename T>
class StackIterator : public Iterator<T> {
private:
   stack<T> data;

public:
    StackIterator(const stack<T>& s) : data(s) {}

    T getNext() override {
        if (hasNext()) {
            T value = data.top();
            data.pop();
            return value;
        }
        else {
            throw out_of_range("No more elements in the stack.");
        }
    }

    bool hasNext() override {
        return !data.empty();
    }
};

// Aggregate interface
template <typename T>
class Aggregate {
public:
    virtual Iterator<T>* createIterator() = 0;
};

// Concrete Aggregate for a list
template <typename T>
class ListAggregate : public Aggregate<T> {
private:
  list<T> data;

public:
    void addElement(const T& element)
    {
        data.push_back(element);
    }
    Iterator<T>* createIterator() override
    {
        return new ListIterator<T>(data);
    }
};

// Concrete Aggregate for a vector
template <typename T>
class VectorAggregate : public Aggregate<T> {
private:
    vector<T> data;

public:
    void addElement(const T& element) {
        data.push_back(element);
    }

    Iterator<T>* createIterator() override {
        return new VectorIterator<T>(data);
    }
};

// Concrete Aggregate for a queue
template <typename T>
class QueueAggregate : public Aggregate<T> {
private:
    queue<T> data;

public:
    void addElement(const T& element) {
        data.push(element);
    }

    Iterator<T>* createIterator() override {
        return new QueueIterator<T>(data);
    }
};

// Concrete Aggregate for a stack
template <typename T>
class StackAggregate : public Aggregate<T> {
private:
    std::stack<T> data;

public:
    void addElement(const T& element) {
        data.push(element);
    }

    Iterator<T>* createIterator() override {
        return new StackIterator<T>(data);
    }
};

int main() {
    
    
    // Create a list aggregate and add some elements
    ListAggregate<int> listAggregate;
    listAggregate.addElement(1);
    listAggregate.addElement(2);
    listAggregate.addElement(3);

    // Create an iterator for the list aggregate
    Iterator<int>* listIterator = listAggregate.createIterator();

    // Iterate over the elements using the iterator
    cout << "List elements: ";
    while (listIterator->hasNext()) {
        cout << listIterator->getNext() << " ";
    }
    cout << endl;
    //--------------------------------------------------------------------------
    
    /*
    // Create a vector aggregate and add some elements
    VectorAggregate<int> vectorAggregate;
    vectorAggregate.addElement(4);
    vectorAggregate.addElement(5);
    vectorAggregate.addElement(6);

    // Create an iterator for the vector aggregate
    Iterator<int>* vectorIterator = vectorAggregate.createIterator();

    // Iterate over the elements using the iterator
    std::cout << "Vector elements: ";
    while (vectorIterator->hasNext()) {
        std::cout << vectorIterator->getNext() << " ";
    }
    std::cout << std::endl;
    //--------------------------------------------------------------------------
    */
    /*
    // Create a queue aggregate and add some elements
    QueueAggregate<int> queueAggregate;
    queueAggregate.addElement(7);
    queueAggregate.addElement(8);
    queueAggregate.addElement(9);

    // Create an iterator for the queue aggregate
    Iterator<int>* queueIterator = queueAggregate.createIterator();

    // Iterate over the elements using the iterator
   cout << "Queue elements: ";
    while (queueIterator->hasNext()) {
      cout << queueIterator->getNext() << " ";
    }
   cout << std::endl;

    //-------------------------------------------------------------
    */
    /*
    // Create a stack aggregate and add some elements
    StackAggregate<int> stackAggregate;
    stackAggregate.addElement(10);
    stackAggregate.addElement(11);
    stackAggregate.addElement(12);

    // Create an iterator for the stack aggregate
    Iterator<int>* stackIterator = stackAggregate.createIterator();

    // Iterate over the elements using the iterator
    std::cout << "Stack elements: ";
    while (stackIterator->hasNext()) {
        std::cout << stackIterator->getNext() << " ";
    }
    std::cout << std::endl;

    // Clean up the stack iterator
    delete stackIterator;

    return 0;
    //--------------------------------------------------------------------------
    */
//}
