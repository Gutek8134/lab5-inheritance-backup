#include <pojazd.hpp>

class Rower : public Pojazd {
public:
    Rower(float predkosc);

    virtual void przyspiesz(float) override;
    virtual void zatrzymaj(float) override;
};