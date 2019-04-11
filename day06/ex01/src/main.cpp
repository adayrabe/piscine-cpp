
#include <iostream>
#include <fstream>
#include <sstream>

struct Data
{
    std::string s1;
    int         n;
    std::string s2;
};

void* serialize()
{
    std::ifstream ifs("/dev/random");
    unsigned char temp_char;
    std::stringstream ss;
    Data *res = new Data;
    int i = 0;
    while (i < 8)
    {
        ifs >> temp_char;
        if (isalnum(temp_char))
        {
            res->s1 += temp_char;
            i++;
        }
    }
    res->n = 0;
    i = 0;
    while (i < 4)
    {
        ifs >> temp_char;
        res->n = res->n * 256 + temp_char;
        i++;
    }
    i = 0;
    while (i < 8)
    {
        ifs >> temp_char;
        if (isalnum(temp_char))
        {
            res->s2 += temp_char;
            i++;
        }
    }
    ifs.close();
    return static_cast<void *>(res);
}



Data *deserialize(void *raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main() {

    void *temp;

    temp = serialize();
    std::cout << "S1: ";
    Data *temp_data = deserialize(temp);
    std::cout << temp_data->s1 << std::endl;
    std::cout << "num: ";
    std::cout << temp_data->n;
    std::cout << std::endl;
    std::cout << "S2: ";
    std::cout << temp_data->s2 << std::endl;

    delete temp_data;
    return 0;
}