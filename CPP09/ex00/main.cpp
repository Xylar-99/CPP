


#include "BitcoinExchange.hpp"

#include <limits>
#include <string>
#include <cstdlib>


int main(int ac , char **av)
{

    (void)av;
    if(ac != 2) return (1);


    try
    {
        BitcoinExchange obj(av[1]);
        obj.parse();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    
    



    //  struct tm date;
    // if(!strptime(key.c_str(), "%Y-%m-%d", &date))
    //     throw(std::logic_error("Date invalid"));

    // time_t timestamp;
    // time(&timestamp);

    // std::cout << time(&timestamp);

    // std::time_t time_stamp = mktime(timestamp);

    // time_t rawTime = mktime(&timeInfo);
    // std::cout << ctime(&timestamp);

    // std::string str = "apple,banana,cherry";
    // std::stringstream ss(str);
    // std::string token;
    
    // // Split by the delimiter ','
    
    // while (std::getline(ss, token, '|')) 
    // {
    //     std::cout << token << std::endl;
    // }

    // std::cout  << "-----------------------" << std::endl;
    // struct tm tm;
    // char *str = strptime("2025-12-3", "%Y-%m-%d", &tm);

    // std::cout <<  !str << "+++++++++++++++++++" << tm.tm_year + 1900 << std::endl;
    


   

}