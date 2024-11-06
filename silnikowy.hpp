#include <pojazd.hpp>

class Silnikowy: public Pojazd {
public:
    virtual void przyspiesz(float) override = 0;
    Silnikowy(float _przyspieszenie):
    Pojazd(_przyspieszenie, "Mercedes", "Benc")
    {}
};