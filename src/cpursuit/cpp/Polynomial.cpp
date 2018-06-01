//
// Created by nick on 5/31/18.
//

#include <cmath>
#include "../headers/Polynomial.h"
using namespace std;

Polynomial::Polynomial(std::vector<double> coeffecients) {
    this->coeffecients = coeffecients;
}

double Polynomial::Calculate(double x) {
    double sum = 0;
    for (auto i = (int) this->Degree(); i >= 0; i--) {
        sum += this->coeffecients[i] * pow(x, i);
    }
    return sum;
}

double Polynomial::Degree() {
    return this->coeffecients.size() - 1;
}

double Polynomial::Derivative(double x) {
    double sum = 0;
    for (auto i = (int) this->Degree(); i >= 1; i--) {
        if (i < 1) {
            continue;
        }
        sum += i * this->coeffecients[i] * pow(x, i - 1);
    }
    return sum;
}

double Polynomial::SecondDerivative(double x) {
    double sum = 0;
    for (auto i = (int) this->Degree(); i >= 2; i--) {
        if (i < 2) {
            continue;
        }
        sum += i * (i - 1) * this->coeffecients[i] * pow(x, i - 2);
    }
    return sum;
}

double Polynomial::Curvature(double x) {
    return this->SecondDerivative(x) / pow(1 + pow(this->Derivative(x), 2), 3.0/2.0);
}