

#include "PmergeMe.hpp"



PmergeMe::PmergeMe()
{
    int arr[] = {27, 6, 72, 30, 45, 99, 35, 29, 81, 57, 44, 14, 93, 84, 16, 70, 50, 96, 49, 58, 82, 77, 34, 37, 76, 59, 100, 80, 41, 47, 61, 48, 3, 54, 36, 69, 55, 73, 31, 12, 26, 95, 86, 97, 22, 1, 88, 98, 17, 19, 90, 40, 83, 51, 68, 5, 56, 53, 28, 91, 18, 2, 33, 63, 25, 20, 74, 8, 10, 94, 92, 62, 15, 85, 23, 7, 38, 87, 89, 4, 24, 64, 32, 39, 71, 46, 43, 78, 9, 65, 66, 21, 42, 13, 67, 52, 11, 60, 79, 75};

    for(int i = 0 ; i < 100 ; i++)
    {
        vec.push_back(arr[i]);
    }
    
}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
    *this = obj;
}

PmergeMe & PmergeMe::operator=(const PmergeMe &obj)
{
    (void)obj;
    return *this;
}

PmergeMe::~PmergeMe(){}


int IsDigit(char *s1 , char *s2)
{
    std::string str1 = s1;
    std::string str2 = s2;
    int flag =  str1.find_first_not_of("0123456789") != str1.npos; 
        flag +=  str2.find_first_not_of("0123456789") != str2.npos; 
    
    std::cout << flag << std::endl;
    return(flag);
}

void PmergeMe::checks(char **av , int ac)
{

    int mid = (ac - 1) / 2;

    for(int i = 0 ; i < mid ; i++)
    {
        if(IsDigit(av[mid + i] , av[mid - i]))
            throw(std::runtime_error("Error"));
    }

}


void PrintContainer(std::vector<int> arr)
{
    for(size_t ii = 0; ii < arr.size();ii++)
    {
        std::cout << arr[ii] << std::endl;
    }
}

void PmergeMe::MYSort()
{

    // this is hardcode hahahahhahahhahah
    std::vector<int *> res;
    std::vector<int> large;
    std::vector<int> small;
    int *add;

    for(size_t  i = 0; i < vec.size(); i+=2)
    {
        add = new int[2];
        if(vec[i]  > vec[i + 1])
        {
            add[1] = vec[i];
            add[0] = vec[i + 1];
        }
        else
        {
            add[0] = vec[i];
            add[1] = vec[i + 1];
        }
        large.push_back(add[1]);
        small.push_back(add[0]);
        res.push_back(add);
    }

    std::vector<int> _sort;

    std::sort(large.begin() , large.end());
    std::sort(small.begin() , small.end());
    size_t  j = 0;
    size_t  i = 0;
    PrintContainer(small);
    std::cout << "++++++++++++++++++++++++++++" << std::endl;
    PrintContainer(large);

    // return ;
    while(i < large.size() || j < small.size())
    {
        if(small[j] < large[i] && j < small.size())
        {
           _sort.push_back(small[j]);
            j++;
        }
        else
        {
            _sort.push_back(large[i]);
            i++;
        }

    }
    std::cout << "++++++++++++++++++++++++++++" << std::endl;
    PrintContainer(_sort);
    
}




