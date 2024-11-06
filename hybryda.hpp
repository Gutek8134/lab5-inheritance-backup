#include <silnikowy.hpp>
#include <elektryczny.hpp>

class Hybryda : public Silnikowy, Elektryczny{
public:
    inline Hybryda(float _przyspieszenie, float _pojemnosc_baterii, float _predkosc_ladowania)
    :Silnikowy(_przyspieszenie)
    ,Elektryczny(_pojemnosc_baterii, _predkosc_ladowania)
    {}

    virtual void przyspiesz(float) override;
    virtual void ladowanie(float) override;
};