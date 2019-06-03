#pragma once
#include "Guesser.hpp"
using std::string;
/* SmartGuesser class - smart gusser will guess the chooser code fast */
class SmartGuesser: public bullpgia::Guesser {
    public:
        SmartGuesser();
        virtual string guess() override;
        virtual void learn(string calculate)override;
};
