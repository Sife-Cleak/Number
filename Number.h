#include <iostream>
#include <vector>
#include <string>

class N{
    std::vector<unsigned> v;
    bool _symbol;

    public:
        N(unsigned int n);
        N(const N &i);
        N(const std::string &s);
        N operator+(const N &i);
        N operator-(const N &i);
        void readv();
    private:
};