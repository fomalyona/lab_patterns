
#include <string>
#include <vector>
#include <iostream>
template <typename T>
inline void swap( T & arg1, T & arg2)
{
    T temp = arg1;
    arg1 = arg2;
    arg2 = temp;
};

class StrategySort
{
private:
    std::string Title;

public:
    std::string getTitle() const;
    void setTitle(const std::string &value);
    virtual void Sort(std::vector<int> &array) = 0;
    virtual std::string ToString();
};
class InsertionSort : public StrategySort
{
public:
    InsertionSort();
    std::string ToString() override;
    void Sort(std::vector<int> &array) override;
};

class SelectionSort : public StrategySort
{
public:
    SelectionSort();
    std::string ToString() override;
    void Sort(std::vector<int> &array) override;
};

class BubbleSort : public StrategySort
{
public:
    BubbleSort();
    std::string ToString() override;
    void Sort(std::vector<int> &array) override;
};

class Context
{
private:
    StrategySort *strategy;
    std::vector<int> array;
public:
    virtual ~Context()
    {
        delete strategy;
    }

    Context(StrategySort *strategy, std::vector<int> &array);
    void Sort();
    void PrintArray();
};
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
#include <string>
#include <vector>
#include <iostream>
template <typename T>
inline void swap( T & arg1, T & arg2)
{
    T temp = arg1;
    arg1 = arg2;
    arg2 = temp;
};

class StrategySort
{
private:
    std::string Title;

public:
    std::string getTitle() const;
    void setTitle(const std::string &value);
    virtual void Sort(std::vector<int> &array) = 0;
    virtual std::string ToString();
};
class InsertionSort : public StrategySort
{
public:
    InsertionSort();
    std::string ToString() override;
    void Sort(std::vector<int> &array) override;
};

class SelectionSort : public StrategySort
{
public:
    SelectionSort();
    std::string ToString() override;
    void Sort(std::vector<int> &array) override;
};

class BubbleSort : public StrategySort
{
public:
    BubbleSort();
    std::string ToString() override;
    void Sort(std::vector<int> &array) override;
};

class Context
{
private:
    StrategySort *strategy;
    std::vector<int> array;
public:
    virtual ~Context()
    {
        delete strategy;
    }

    Context(StrategySort *strategy, std::vector<int> &array);
    void Sort();
    void PrintArray();
};
