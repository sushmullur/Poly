// Sush Mullur
// Assignment 1

#ifndef CLION_PROJECTS_POLY_H
#define CLION_PROJECTS_POLY_H
#include <iostream>
using namespace std;

class Poly {

public:
    /**
     * Default constructor that takes no parameters and initializes the ADT to have a constant as the highest degree.
     */
    Poly();

    /**
     * Explicit constructor that creates a new Poly object with a specified maximum degree.
     * @param degree The maximum degree that can be held in this Poly class.
     */
    explicit Poly(int degree);

    /**
     * Overloaded constructor that creates a Poly with a given maximum degree and maximum degree coefficient.
     * @param value The coefficient value of the maximum degree term within the polynomial stored.
     * @param degree The maximum degree that can be held in this Poly class.
     */
    Poly(int value, int degree);

    /**
     * Copy constructor that takes in another poly object and creates a deep copy of it.
     * @param other Another poly object to create a deep copy of.
     */
    Poly(Poly const &other);

    /**
     * Destructor responsible for deleting and freeing up the memory allocated to this object.
     */
    ~Poly();

    /**
     *
     * @param os
     * @param p
     * @return
     */
    friend ostream& operator<<(ostream& os, const Poly& p);

    /**
     *
     * @param p
     * @return
     */
    Poly operator+(const Poly &p) const;

    /**
     *
     * @param p
     * @return
     */
    Poly operator-(const Poly &p) const;

protected:
    //
    int* values;
    //
    int highestDegree;

private:
    /**
     *
     */
    void populateZero();
};


#endif //CLION_PROJECTS_POLY_H
