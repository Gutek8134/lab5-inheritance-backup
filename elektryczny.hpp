#include <pojazd.hpp>

class Elektryczny : public Pojazd{
protected:
    float stan_baterii, pojemnosc_baterii, predkosc_ladowania;
public:
    virtual void ladowanie(float) = 0;
    
    inline Elektryczny(float _pojemnosc_baterii, float _predkosc_ladowania):
    Pojazd("Mercedes Elektryczny", "Bum"),
    stan_baterii(_pojemnosc_baterii),
    pojemnosc_baterii(_pojemnosc_baterii),
    predkosc_ladowania(_predkosc_ladowania)
    {}
    
    inline Elektryczny(float _pojemnosc_baterii, float _predkosc_ladowania, std::string _marka, std::string _model):
    Pojazd(_marka, _model),
    stan_baterii(_pojemnosc_baterii),
    pojemnosc_baterii(_pojemnosc_baterii),
    predkosc_ladowania(_predkosc_ladowania)
    {}

};