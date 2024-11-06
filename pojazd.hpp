#include <string>

class Pojazd {

protected:
    float przyspieszenie, predkosc;
    std::string marka, model;

public:
    virtual void przyspiesz(float delta_time) = 0;
    virtual void zatrzymaj(float delta_time);
    Pojazd(std::string _marka, std::string _model):
        przyspieszenie(1),
        predkosc(0),
        marka(_marka),
        model(_model)
        {}
    Pojazd(float _przyspieszenie, std::string _marka, std::string _model):
        przyspieszenie(_przyspieszenie),
        predkosc(0),
        marka(_marka),
        model(_model)
        {}
};