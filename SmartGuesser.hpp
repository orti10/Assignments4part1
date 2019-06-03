#pragma once
#include "Guesser.hpp"
using std::string;
class SmartGuesser: public bullpgia::Guesser {
    public:
        SmartGuesser();
        virtual string guess() override;
        virtual void learn(string calculate)override;
};
