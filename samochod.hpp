#include <pojazd.hpp>

class Samochod : public Pojazd {
public:
    Samochod(float przyspieszenie);

    virtual void przyspiesz(float) override;
    virtual void zatrzymaj(float) override;
};