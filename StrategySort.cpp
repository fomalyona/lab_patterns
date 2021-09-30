

#include "StrategySort.h"
#include "task_5.h"

std::string StrategySort::getTitle() const
{
    return Title;
}

void StrategySort::setTitle(const std::string &value)
{
    Title = value;
}

std::string StrategySort::ToString() {
    return {};
}

InsertionSort::InsertionSort()
{
    setTitle("Sort inserts");
}

std::string InsertionSort::ToString()
{
    return getTitle();
}

void InsertionSort::Sort(std::vector<int> &array)
{
    for (int i = 1; i < array.size(); i++)
    {
        int j = 0;
        int buffer = array[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (array[j] < buffer)
            {
                break;
            }
            array[j + 1] = array[j];
        }
        array[j + 1] = buffer;
    }
}

SelectionSort::SelectionSort

#include "StrategySort.h"
#include "task_5.h"

std::string StrategySort::getTitle() const
{
    return Title;
}

void StrategySort::setTitle(const std::string &value)
{
    Title = value;
}

std::string StrategySort::ToString() {
    return {};
}

InsertionSort::InsertionSort()
{
    setTitle("Sort inserts");
}

std::string InsertionSort::ToString()
{
    return getTitle();
}

void InsertionSort::Sort(std::vector<int> &array)
{
    for (int i = 1; i < array.size(); i++)
    {
        int j = 0;
        int buffer = array[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (array[j] < buffer)
            {
                break;
            }
            array[j + 1] = array[j];
        }
        array[j + 1] = buffer;
    }
}

SelectionSort::SelectionSort()
{
    setTitle("Selection sort");
}

std::string SelectionSort::ToString()
{
    return getTitle();
}

void SelectionSort::Sort(std::vector<int> &array)
{
    for (int i = 0; i < array.size() - 1; i++)
    {
        int k = i;
        for (int j = i + 1; j < array.size(); j++)
        {
            if (array[k] > array[j])
            {
                k = j;
            }
        }
        if (k != i)
        {
            int temp = array[k];
            array[k] = array[i];
            array[i] = temp;
        }
    }
}

Context::Context(StrategySort *strategy, std::vector<int> &array)
{
    this->strategy = strategy;
    this->array = array;
}

void Context::Sort()
{
    strategy->Sort(array);
}

void Context::PrintArray()
{
    std::cout << strategy->ToString() << std::endl;
    for (int i : array)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

BubbleSort::BubbleSort() {
    setTitle("Bubble sort");
}

std::string BubbleSort::ToString() {
    return getTitle();
}

void BubbleSort::Sort(std::vector<int> &array) {
    for (int i = 0; i < array.size(); ++i)
    {
        for (int j = array.size()-1; j > i; --j)
        {
            if (array[i] > array[j])
            {   swap( array[i], array[j]); }
        }
    }
}


