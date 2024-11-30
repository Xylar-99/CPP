


#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

class PmergeMe
{
private:
    std::vector<int> vec;
public: 
    PmergeMe();
    PmergeMe(const PmergeMe &obj);
    PmergeMe & operator=(const PmergeMe &obj);
    ~PmergeMe();

public:
    static void checks(char **av , int ac);
    void MYSort();

};

#endif
