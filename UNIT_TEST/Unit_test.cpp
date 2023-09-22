#include <gtest/gtest.h>
#include "../Matrix.h"
#include "../Neuronal_Network.h"

// Testing Constructor Initialization
TEST(NeuralNetworkTests, InitializationTest) {
    int inputNodes = 4;
    int hiddenNodes = 3;
    int outputNodes = 1;
    double lr = 0.05;

    NeuralNetwork neuralNet(inputNodes, hiddenNodes, outputNodes, lr);

    // Ensure the Neural Network is correctly initialized
    ASSERT_EQ(neuralNet.getInputSize(), inputNodes);
    ASSERT_EQ(neuralNet.getHiddenSize(), hiddenNodes);
    ASSERT_EQ(neuralNet.getOutputSize(), outputNodes);
    ASSERT_DOUBLE_EQ(neuralNet.getLearningRate(), lr);
}

// Testing Prediction Functionality
TEST(NeuralNetworkTests, PredictFunctionalityTest) {
    NeuralNetwork neuralNet(2, 2, 1, 0.01);

    std::vector<double> inputData = {1.0, 0.5};
    std::vector<double> result = neuralNet.predict(inputData);

    ASSERT_EQ(result.size(), 1);  // Should match the output size of the network
}

// Testing Training of Neural Network
TEST(NeuralNetworkTests, NeuralNetworkTrainingTest) {
    NeuralNetwork neuralNet(2, 3, 1, 0.1);

    std::vector<std::vector<double>> trainingInputs = {{1, 1}, {1, 0}, {0, 1}, {0, 0}};
    std::vector<int> targetLabels = {0, 1, 1, 0};  // XOR Problem

    std::vector<double> trainingErrors;
    neuralNet.train(trainingInputs, targetLabels, 5000, trainingErrors, 4);

    // Check if the final error is near zero
    EXPECT_NEAR(trainingErrors.back(), 0.0, 0.1);

    // Validate if Neural Network has learnt XOR
    EXPECT_NEAR(neuralNet.oneHotPredict({1, 1}), 0, 0.1);
    EXPECT_NEAR(neuralNet.oneHotPredict({1, 0}), 1, 0.1);
    EXPECT_NEAR(neuralNet.oneHotPredict({0, 1}), 1, 0.1);
    EXPECT_NEAR(neuralNet.oneHotPredict({0, 0}), 0, 0.1);
}

// Test Sigmoid Function
TEST(SigmoidFunctionTest, SigmoidValuesTest) {
    ASSERT_NEAR(NeuralNetwork::calcSigmoid(1.0), 0.7310585786300049, 1e-9);
    ASSERT_NEAR(NeuralNetwork::calcSigmoid(-1.0), 0.2689414213699951, 1e-9);
    ASSERT_NEAR(NeuralNetwork::calcSigmoid(0), 0.5, 1e-9);
}
// Testing MyMatrix Constructor
TEST(MatrixTests, InitializationTest) {
    MyMatrix matrix(4, 5);
    EXPECT_EQ(matrix.rows(), 4);
    EXPECT_EQ(matrix.columns(), 5);
}

// Testing Setting and Getting Values
TEST(MatrixTests, SetValueTest) {
    MyMatrix matrix(3, 3);
    matrix(1, 2) = 5.0;
    EXPECT_DOUBLE_EQ(matrix(1, 2), 5.0);
}

// Testing Addition of Matrices
TEST(MatrixTests, MatrixAdditionTest) {
    MyMatrix matrix1(2, 2);
    matrix1.setAll(2.0);
    MyMatrix matrix2(2, 2);
    matrix2.setAll(3.0);
    MyMatrix result = matrix1 + matrix2;
    EXPECT_DOUBLE_EQ(result(0, 1), 5.0);
}

// Testing Subtraction of Matrices
TEST(MatrixTests, MatrixSubtractionTest) {
    MyMatrix matrix1(2, 2);
    matrix1.setAll(4.0);
    MyMatrix matrix2(2, 2);
    matrix2.setAll(2.0);
    MyMatrix result = matrix1 - matrix2;
    EXPECT_DOUBLE_EQ(result(1, 0), 2.0);
}

// Testing Matrix Multiplication
TEST(MatrixTests, MatrixMultiplicationTest) {
    MyMatrix matrix1(2, 2);
    matrix1(0, 0) = 1.0;
    matrix1(1, 1) = 2.0;
    MyMatrix matrix2(2, 2);
    matrix2(0, 0) = 3.0;
    matrix2(1, 1) = 4.0;
    MyMatrix result = matrix1 * matrix2;
    EXPECT_DOUBLE_EQ(result(0, 0), 3.0);
    EXPECT_DOUBLE_EQ(result(1, 1), 8.0);
}

// Testing Scalar Multiplication
TEST(MatrixTests, ScalarMultiplicationTest) {
    MyMatrix matrix(2, 2);
    matrix.setAll(2.0);
    MyMatrix result = matrix * 4.0;
    EXPECT_DOUBLE_EQ(result(0, 1), 8.0);
    EXPECT_DOUBLE_EQ(result(1, 0), 8.0);
}

// Testing Matrix Transpose
TEST(MatrixTests, TransposeFunctionalityTest) {
    MyMatrix matrix(2, 3);
    matrix(0, 0) = 1;
    matrix(0, 1) = 2;
    matrix(0, 2) = 3;
    matrix(1, 0) = 4;
    matrix(1, 1) = 5;
    matrix(1, 2) = 6;
    MyMatrix transposedMatrix = matrix.transpose();
    EXPECT_DOUBLE_EQ(transposedMatrix(0, 1), 4);
    EXPECT_DOUBLE_EQ(transposedMatrix(1, 0), 2);
    EXPECT_DOUBLE_EQ(transposedMatrix(2, 1), 6);
}

// Testing Element-wise Product
TEST(MatrixTests, ElementWiseProductTest) {
    MyMatrix matrix1(2, 2);
    matrix1(0, 0) = 1;
    matrix1(0, 1) = 2;
    matrix1(1, 0) = 3;
    matrix1(1, 1) = 4;
    MyMatrix matrix2(2, 2);
    matrix2(0, 0) = 2;
    matrix2(0, 1) = 3;
    matrix2(1, 0) = 4;
    matrix2(1, 1) = 5;
    MyMatrix result = matrix1.elementWiseProduct(matrix2);
    EXPECT_DOUBLE_EQ(result(0, 0), 2);
    EXPECT_DOUBLE_EQ(result(0, 1), 6);
    EXPECT_DOUBLE_EQ(result(1, 0), 12);
    EXPECT_DOUBLE_EQ(result(1, 1), 20);
}
