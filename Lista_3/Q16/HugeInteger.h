#pragma once

#include <iostream>
#include <string>
#include <array>
#include <cctype>

using std::cout, std::endl, std::array, std::string;

class HugeInteger{
    public:
        HugeInteger(string num);

        void input(string numero);

        void output()const;

        void add(const HugeInteger &);

        bool isEqualTo(const HugeInteger &) const;
        bool isNotEqualTo(const HugeInteger &) const;
        bool isGreaterThan(const HugeInteger &) const;
        bool isLessThan(const HugeInteger &) const;
        bool isGreaterThanOrIqual(const HugeInteger &) const;
        bool isLessThanOrIqual(const HugeInteger &) const;

    private:
        array<char,40>num;
        int tam_num;

};
