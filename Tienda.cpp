//
// Created by guerrero on 10/19/21.
//Tienda.cpp
#include "Tienda.h"
#include <string>
#include <iostream>
#include "Producto.h"
#include "Usuario.h"
#include <vector>
using namespace std;
//Definición de constructor
explicit Producto(int=0000, std::string="" , std::string="" , float = 0.0);
Tienda::Tienda(std::string nombreTienda , Producto productoVacio, vector<Producto> inventarioTienda, Usuario usuairodef ) {
    settName(nombreTienda);
    setInventario(productoVacio,inventarioTienda ,usuairodef);



}

void Tienda::settName(string &nombreTienda) {
    nombreTienda = nombreTienda;
}


vector<Producto> Tienda::getInv() {
    return inventarioTienda;
}

void Tienda::setInventario(Producto unProducto, vector<Producto> inventarioActual, Usuario usuarioActual) {
    if (usuarioActual.isAdmin()){
        inventarioActual.push_back(unProducto);
    }

}

std::string Tienda::getName() {
    return nombreTienda;
}
