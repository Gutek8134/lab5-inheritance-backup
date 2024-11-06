#include <samochod.hpp>
#include <iostream>

class ElektrycznySamochod : public Samochod
{
public:
    inline virtual void przyspiesz(float delta_time) override {
        Samochod::przyspiesz(delta_time);
        std::cout<<"TO JEST ELEKTRYCZNY SAMOCHOD Z CHIN" << std::endl;
    }
};
