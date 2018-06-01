//
// Created by nick on 5/31/18.
//

#include <gtest/gtest.h>
#include "Polynomial.h"
#include <vector>

TEST(CPursuitTest, PolynomialTest) {
    std::vector<double> coeff = {1.0, 1.0};
    Polynomial p(coeff);
    EXPECT_EQ(p.Calculate(0), 1.0);
    EXPECT_EQ(p.Derivative(0), 1.0);
    EXPECT_EQ(p.SecondDerivative(0), 0);
};

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}