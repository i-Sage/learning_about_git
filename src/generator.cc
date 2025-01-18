/// This file is responsible for generating the test input
/// file used for benchmarking different input methods from
/// stding

#include <fstream>
#include <random>


int main()
{
    std::ofstream test_file{"test_file.txt"};

    /// Set up random number engine
    std::random_device rd;
    std::mt19937_64 gen{rd()};
    std::uniform_int_distribution<long long> distribution(1e7, 1e8);

    for(size_t idx {0}; idx < 1e6; idx++)
    {
        test_file << distribution(gen) 
                  << ' ' 
                  << distribution(gen) << '\n';
    }
}