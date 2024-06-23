#include <iostream>
#include <vector>

template<typename T>
T square(T x)
{
    std::cout << "[IN]: " << x << std::endl;
    return x * x;
}


template<typename T>
std::vector<T> square(const std::vector<T>& v)
{

    std::vector<T> result;

    std::cout << "[IN]: ";
    for (int i = 0; i < v.size(); ++i) 
    {
        std::cout << v[i];
        if (i < v.size() - 1) 
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl; 

    for (const auto& elem : v) 
    {
        result.push_back(elem * elem);
    }
    return result;
}



int main()
{
    std::cout << "[OUT]: " << square(4) << std::endl;
    
    std::vector<int> input = { -1, 4, 8 };

    std::vector<int> result = square(input);
    std::cout << "[OUT]: ";
    for (size_t i = 0; i < result.size(); ++i)
    {
        std::cout << result[i];
        if (i < result.size() - 1)
        {
            std::cout << ", ";
        }
    }
}

