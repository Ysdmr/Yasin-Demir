#include <iostream>
#include <vector>

double mean(std::vector<double> data)
{
    double toplam = 0;
    for (int i = 0; i < size(data); i++)
    {
        toplam = toplam + data.at(i);
    }
    return toplam / size(data);
}

int main()
{
    std::vector<double> num{ 1,2,3,4,5,57,5 };
    std::cout << mean(num);
}
