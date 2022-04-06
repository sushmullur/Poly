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
     * Overloads the << operator so the object can be output in a readable format.
     * @param os Reference to the output stream object to output to.
     * @param Poly object that will be read and output.
     * @return Reference to the output stream object containing the output format and information.
     */
    friend ostream& operator<<(ostream& os, const Poly& p);

    /**
     * Overloads the + operator to allow for addition between Poly objects.
     * @param p Another poly object that will be added to this object.
     * @return A new poly object which contains the sum of this object and the parameter poly object.
     */
    Poly operator+(const Poly &p) const;

    /**
     * Overloads the - operator to allow for subtraction between Poly object.
     * @param p Another poly object that will be subtracted from this object.
     * @return A new poly object containing the difference between this and the parameter poly object.
     */
    Poly operator-(const Poly &p) const;

    Poly operator*(const Poly &p) const;

    Poly operator==(const Poly &p) const;

    Poly &operator=(const Poly &p);


protected:
    // Pointer that will be used to dynamically allocate an array to hold coefficient values for the polynomial.
    int* values;
    // Integer that stores the highest degree of the polynomial.
    int highestDegree;

private:
    /**
     * Helper method that populates a constructed Poly object with 0 values.
     */
    void populateZero();
};


#endif //CLION_PROJECTS_POLY_H
