//
// Created by nick on 5/31/18.
//

#ifndef CPURSUIT_POLYNOMIAL_H
#define CPURSUIT_POLYNOMIAL_H


#include <vector>

class Polynomial {
private:
    std::vector<double> coeffecients;
public:
    Polynomial(std::vector<double> coeffecients);
    double Calculate(double x);
    double Degree();
    double Derivative(double x);
    double SecondDerivative(double x);

    double Curvature(double x);
};


#endif //CPURSUIT_POLYNOMIAL_H
