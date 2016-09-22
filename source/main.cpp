/*! \file
 *  \brief
 *  \author
 *  \date
*/
#include <UnitTest++/UnitTest++.h>

#include "matrix.hpp"

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(int argv, char* argc[]) {
    
    
    vector<matrix::Matrix<double>> list;
    
    srand(time(NULL));    
    
    int i = 0;
    
    while ( i < 10000 )
    {
        matrix::Matrix<double> mat1;
        mat1.resize(10, 10);
        for (int i = 0 ; i < 10 ; ++i)
        {
            mat1.insert(rand() % 10, rand() % 10, rand() % 100);
        }
        list.push_back(mat1);
        ++i;
    }
    
    matrix::Matrix<double> result;
    
    
    result.resize(10, 10);
    result.add(list);
    result.print();
    
    
    return 0;
}
