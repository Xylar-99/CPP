#include "BitcoinExchange.hpp"


void print_map(std::map<time_t , float> &data)
{
    std::map<time_t , float>::iterator it = data.begin();

    while(it != data.end())
    {
        std::cout << it->first << "   " << it->second << std::endl;
        it++;
    }
}



int main(int ac , char **av)
{
    (void)ac;
    (void)av;
    try
    {
        BitcoinExchange obj;
        obj.Throw_exeption(ac != 2 , " could not open file.");
        obj.bitcOpenFile(av[1]);
        obj.bitcParsefile();
        // print_map(obj._data);
        

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}