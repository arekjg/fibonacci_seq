#include <iostream>
#include <list>
#include <iterator>

int main()
{
    int num;
    std::list<int> fib = { 0, 1 };
    
    std::cout << "How many numbers of Fibonacci Sequence do you want to print? ";
    std::cin >> num;

    // Declare variables
    // prev1 - last number in sequence
    // prev2 - second to last number in sequence
    // next - sum of prev1 and prev2, next number in sequence
    int prev1;
    int prev2;
    int next;

    // Calculate next number and insert it to the list
    for (int i = 0; i < num - 2; i++)
    {
        std::list<int>::iterator it = fib.end();
        it--;
        prev1 = *(it);
        it--;
        prev2 = *(it);
        next = prev1 + prev2;
        fib.insert(fib.end(), next);
    }

    // Print the sequence
    if (num == 1)
    {
        std::cout << "0";
    }
    else
    {
        for (int n : fib)
        {
            std::cout << n << "\n";
        }
    }
}