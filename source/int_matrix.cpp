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


void Int_Matrix::subtract( const Int_Matrix& a )
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
            data[i][j] = data[i][j] - a.get_data(i,j);
        }
    }
}

const int Int_Matrix::total() const
{
    int ret = 0;
    
    for( unsigned int i = 0 ; i < data.size() ; ++i )
    {
        for( unsigned int j = 0 ; j < data[0].size() ; ++j )
        {
            ret  = data[i][j] + ret;
        }
    }
    return ret;
}

const int Int_Matrix::trace() const
{
    if ( height != width )
    {
        std::cerr << "cannot get trace of non square matrix\n";
        return 0;
    }
    
    int ret = 0;
    
    for ( unsigned int i = 0 ; i < data.size() ; ++i )
    {
        ret += data[i][i];
    }
    return ret;
}

Int_Matrix operator+(const Int_Matrix lhs, const Int_Matrix rhs) 
{
    Int_Matrix ret;
    ret.add(lhs);
    ret.add(rhs);
    return ret;
}

Int_Matrix operator-(const Int_Matrix lhs, const Int_Matrix rhs) 
{
    Int_Matrix ret;
    ret.subtract(lhs);
    ret.subtract(rhs);
    return ret;
}

const bool operator==(const Int_Matrix a, const Int_Matrix b)
{
    if ( a.get_height() != b.get_height() ){ return false; }
    if ( a.get_width() != b.get_width() ){ return false; }
    
    for( int i = 0 ; i < a.get_data().size() ; ++i)
    {
        for(int j = 0 ; j < (a.get_data())[0].size() ; ++j )
        {
            if( a.get_data(i, j) != b.get_data(i,j) )
            {
                return false;
            }
        }
    }
    return true;
}






