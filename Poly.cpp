// Sush Mullur
// Assignment 1

#include "Poly.h"

Poly::Poly() {
    this-> highestDegree = 0;
    values = new int[1];
    values[0] = 0;
}

Poly::Poly(int degree) {
    if(degree >= 0) {
        this->highestDegree = degree;
        values = new int[degree + 1];
        populateZero();
    } else {
        this->highestDegree = 0;
        values = new int[1];
        populateZero();
    }
}

Poly::Poly(int value, int degree) {
    this-> highestDegree = degree;
    values = new int[degree+1];
    populateZero();
    values[degree] = value;
}

Poly::Poly(const Poly &other) {
    this-> highestDegree = other.highestDegree;
    values = new int[highestDegree+1];
    for(int i = 0; i < highestDegree + 1; i++) {
        values[i] = other.values[i];
    }
}

Poly::~Poly() {
    delete[] values;
}

ostream &operator<<(ostream &os, const Poly &p) {
    bool isEmpty = true;
    for(int i = p.highestDegree; i >= 0; i--) {
        if(p.values[i] > 0) {
            os << "+" << p.values[i];
            isEmpty = false;
        } else if(p.values[i] == 0) {

        } else {
            os << p.values[i];
            isEmpty = false;
        }

        if(i != 0 && p.values[i] != 0) {
            os << "x";
            if(i != 1) {
                os << "^" << i;
            }
        }
    }
    if(isEmpty) os << "0";
    return os;
}

void Poly::populateZero() {
    for(int i = 0; i < highestDegree + 1; i++) {
        values[i] = 0;
    }
}

Poly Poly::operator+(const Poly &p) const {
    Poly added(max(p.highestDegree, highestDegree));
    for(int i = 0; i < max(p.highestDegree, highestDegree) + 1; i++) {
        if(i <= p.highestDegree) {
            added.values[i] += p.values[i];
        }
        if(i <= highestDegree) {
            added.values[i] += values[i];
        }
    }
    return added;
}

Poly Poly::operator-(const Poly &p) const {
    Poly subtracted(max(p.highestDegree, highestDegree));
    for(int i = 0; i <= highestDegree; i++) {
        subtracted.values[i] = values[i];
    }
    for(int i = 0; i < max(p.highestDegree, highestDegree) + 1; i++) {
        if(i <= p.highestDegree) {
            subtracted.values[i] -= p.values[i];
        }
    }
    return subtracted;
}

Poly &Poly::operator=(const Poly &p) {
    if (this == &p) {
        return *this;
    }
    this->highestDegree = p.highestDegree;
    delete[] values;
    values = new int[highestDegree+1];
    for(int i = 0; i < highestDegree+1; i++) {
        values[i] = p.values[i];
    }
    return *this;
}

Poly Poly::operator==(const Poly &p) const {
    return Poly();
}




