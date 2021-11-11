// Iterate over all elements using for_each
// and lambda function
std::for_each(setOfStr.begin(), setOfStr.end(), [](const std::string & str)
                                                {
                                                    std::cout<<str<<" , ";
                                                });

Complete example is as follows,
#include <iostream>
#include <set>
#include <string>
#include <algorithm>
int main()
{
// Set of strings
    std::set<std::string> setOfStr =
    { "jjj", "khj", "bca", "aaa", "ddd" };
    std::cout << "*** Iterating Set in Forward Direction using Iterators ***"
            << std::endl;
// Creating a iterator pointing to start of set
    std::set<std::string>::iterator it = setOfStr.begin();
// Iterate till the end of set
    while (it != setOfStr.end())
    {
        // Print the element
        std::cout << (*it) << " , ";
        //Increment the iterator
        it++;
    }
    std::cout << std::endl;
    std::cout << "*** Iterating Set in Reverse Direction using Iterators ***"
            << std::endl;
// Creating a reverse iterator pointing to end of set i.e. rbegin
    std::set<std::string>::reverse_iterator revIt = setOfStr.rbegin();
// Iterate till the start of set i.e. rend
    while (revIt != setOfStr.rend())
    {
        // Print the element
        std::cout << (*revIt) << " , ";
        //Increment the iterator
        revIt++;
    }
    std::cout << std::endl;
    std::cout << "*** Iterating Set using range based for loop ***"
            << std::endl;
// Iterate over all elements of set
// using range based for loop
    for (auto elem : setOfStr)
    {
        std::cout << elem << " , ";
    }
    std::cout << std::endl;
    std::cout << "*** Iterating Set using for_each algo & Lambda function ***"
            << std::endl;
// Iterate over all elements using for_each
// and lambda function
    std::for_each(setOfStr.begin(), setOfStr.end(), [](const std::string & str)
    {
        std::cout<<str<<" , ";
    });
    std::cout << std::endl;
}
