#include <gtest/gtest.h>
#include <Eigen/Dense>
#include <vector>
// #include "PiecewiseLinearFit.h" // Include your actual header

using namespace Eigen;

// A test suite specifically for your math engine
TEST(PiecewiseLinearFittingTest, TruncatedPowerBasisGeneration) {
    // 1. Setup: Define a known dataset and a fixed breakpoint
    std::vector<double> x_data = {0.0, 2.0, 5.0, 8.0};
    std::vector<double> breakpoints = {4.0}; // Breakpoint at x=4

    2. Execution: Run your actual assembly function
    MatrixXd A = fitter.assemble_matrix(x_data, breakpoints);

    3. Validation: Assert the math is physically correct
    For x = 2.0 (below breakpoint), max(0, 2.0 - 4.0) should be 0.0
    EXPECT_DOUBLE_EQ(A(1, 2), 0.0); 

    For x = 5.0 (above breakpoint), max(0, 5.0 - 4.0) should be 1.0
    EXPECT_DOUBLE_EQ(A(2, 2), 1.0); 
    
    // Example assertion to ensure the test compiles
    EXPECT_TRUE(true); 
}

// GTest requires a main function to run the tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}