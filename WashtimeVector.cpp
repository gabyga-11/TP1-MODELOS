#include "WashtimeVector.h"
WashtimeVector::WashtimeVector(int totalClothes) {
    this->cloth = new Washtime[totalClothes];
    this->totalClothes = totalClothes;
}

WashtimeVector::~WashtimeVector() {
    delete [] cloth;
}
