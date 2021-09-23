#include "Washtime.h"

Washtime::Washtime() {
    clothNumber = 0;
    time = 0;
    checked = false;
}

Washtime::Washtime(int c, int t) {
    clothNumber = c;
    time = t;
    checked = false;
}

void Washtime::setValues(int clothNumber, int time) {
    this->clothNumber = clothNumber;
    this->time = time;
}

void Washtime::setTime(int t) {
    time = t;
}

int Washtime::getTime() {
    return time;
}

void Washtime::setClothNumber(int c) {
    clothNumber = c;
}

void Washtime::setClothChecked() {
    checked = true;
}

bool Washtime::clothChecked() {
    return checked;
}
