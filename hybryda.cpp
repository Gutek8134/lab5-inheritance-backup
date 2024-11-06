#include <hybryda.hpp>

void Hybryda::ladowanie(float delta_time){
    stan_baterii = (pojemnosc_baterii - stan_baterii > delta_time * predkosc_ladowania) ?
                    stan_baterii + delta_time * pojemnosc_baterii :
                    pojemnosc_baterii;
}

void Hybryda::przyspiesz(float delta_time){
    Silnikowy::predkosc += Silnikowy::przyspieszenie * delta_time;
}
