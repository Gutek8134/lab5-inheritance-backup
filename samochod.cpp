#include <samochod.hpp>
#include <iostream>

Samochod::Samochod(float przyspieszenie) {
    this->predkosc = 0;
    this->przyspieszenie = przyspieszenie;
}

void Samochod::przyspiesz(float delta_time) {
    predkosc += delta_time * przyspieszenie;
    std::cout << "Predkosc samochodu wynosi " << predkosc << std::endl;
}

void Samochod::zatrzymaj(float delta_time){
    predkosc -= delta_time * przyspieszenie;
}