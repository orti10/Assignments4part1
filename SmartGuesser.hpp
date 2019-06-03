#pragma once
#include "Guesser.hpp"
using std::string;
/* SmartGuesser class - smart gusser will guess the chooser code fast */
class SmartGuesser: public bullpgia::Guesser {
    public:
        SmartGuesser();
        virtual string guess() override;
        /* This method recives the string that calculateBullAndPgia returns and learn about the next guess. */
        virtual void learn(string reply)override;
        


};
