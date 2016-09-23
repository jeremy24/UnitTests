#include "int_matrix.hpp"
#include "matrix.hpp"

#include <iostream>

using namespace matrix;


void Int_Matrix::add( const Int_Matrix& a )
{
    if ( a.get_height() != height )
    {
        std::cerr << "height not the same in add\n";
        return;
    }
    if ( a.get_width() != width )
    {
        std::cerr << "width not the same in add\n";
        return;
    }
    for( unsigned int i = 0 ; i < data.size() ; ++i )
    {
        for( unsigned int j = 0 ; j < data[0].size() ; ++j )
        {
            data[i][j] = data[i][j] + a.get_data(i,j);
        }
    }
}