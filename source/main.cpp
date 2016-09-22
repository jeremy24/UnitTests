/*! \file
 *  \brief
 *  \author
 *  \date
*/
#include <UnitTest++/UnitTest++.h>

#include "matrix.hpp"

#include <iostream>

using namespace std;

int main(int argv, char* argc[]) {
    
    matrix::Matrix<double> mat1;
    // matrix::Matrix<double> mat2;
    // matrix::Matrix<double> mat3;
    
    mat1.resize(10, 10);
    mat1.fill(5); 
    mat1.print();
    

    
    return 0;
}
