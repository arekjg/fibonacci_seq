#include <iostream>
#include <list>
#include <iterator>

int main()
{
    int num;
    std::list<int> l = { 0, 1 };
    

    std::cout << "How many numbers of Fibonacci Sequence do you want to print? ";
    std::cin >> num;

    int prev1;
    int prev2;
    int next;

    for (int i = 0; i < num - 2; i++)
    {
        std::list<int>::iterator it = l.end();
        it--;
        prev1 = *(it);
        it--;
        prev2 = *(it);
        next = prev1 + prev2;
        l.insert(l.end(), next);
        std::cout << prev1 << "   " << prev2 << "   " << next << "\n";
    }

    for (int n : l)
    {
        std::cout << n << ", ";
    }
}