#include <rower.hpp>
#include <iostream>

Rower::Rower(float przyspieszenie) {
    this->predkosc = 0;
    this->przyspieszenie = przyspieszenie;
}

void Rower::przyspiesz(float delta_time) {
    predkosc += delta_time * przyspieszenie;
    std::cout << "Predkosc roweru wynosi " << predkosc << std::endl;
}

void Rower::zatrzymaj(float delta_time){
    predkosc -= delta_time * przyspieszenie;
}