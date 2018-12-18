#ifndef MATRIXFUNCTIONS_H_INCLUDED
#define MATRIXFUNCTIONS_H_INCLUDED


#include <iostream>
#include "boost/multi_array.hpp"
#include "math.h"
#include "distanceWeights.h"
using namespace std;
typedef boost::multi_array<double,2> mat;


void matrixSum(boost::multi_array<double, 2> &matrix1, boost::multi_array<double, 2> matrix2);
void inverse(boost::multi_array<double, 2> matrix, boost::multi_array<double, 2> &inverseMatrix);
void multSkalarMatrix(boost::multi_array<double, 2> &matrix, double weight);
float calculateWeight2D(int directionX, int directionY, string norm, vector<double> spacing);
float calculateWeight3D(int directionX, int directionY, int directionZ, string norm, vector<double> spacing);
#ifdef _WIN32
#include "matrixFunctions.cpp"
#endif // _WIN32
#endif // MATRIXFUNCTIONS_H_INCLUDED
