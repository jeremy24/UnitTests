#include "matrix.hpp"

#include <vector>
#include <iostream>
#include <algorithm>

using namespace matrix;


template class matrix::Matrix<double>;
template class matrix::Matrix<int>;


template <class T>
Matrix<T>::Matrix()
{
    height = 0;
    width = 0;
}

template <class T>
Matrix<T>::~Matrix()
{
    // do nothing
}

template <class T>
void Matrix<T>::print() const
{
    std::cout << "Matrix::\n"
              << "Height: " << height << "\n"
              << "Width: " << width << "\n";
    for( int i = 0 ; i < data.size() ; ++i )
    {
        for ( int j = 0 ; j < data[0].size() ; ++j )
        {
            std::cout << data[i][j] << " ";
        }
        std::cout << "\n";
    }
}

template <typename T>
T Matrix<T>::get_data(const unsigned int a, const unsigned int b) const
{
    return data[a][b];
}

template <class T>
const unsigned int Matrix<T>::get_height() const
{
    const unsigned int a = height;
    return a;
}

template <class T>
const unsigned int Matrix<T>::get_width() const
{
    const unsigned int a = width;
    return a;
}

template <class T>
Matrix<T> Matrix<T>::transpose() const 
{
    Matrix<T> ret;
    ret.resize( height, width );
    for ( int i = 0 ; i < width ; ++i )
    {
        for ( int j = 0 ; j < height ; ++j )
        {
            ret.insert(j, i, data[i][j]);
        }
    }
    return ret;
}




template <class T>
void matrix::Matrix<T>::resize( const unsigned int x, const unsigned int y)
{
    if (x < width)
    {
        std::cerr << "Cannot make the matrix width smaller\n";
        return;
    }
    if ( y < height )
    {
        std::cerr << "Cannot make the matrix height smaller\n";
        return;
    }
    height = y;
    width = x;
    data.resize(x);
    for(int i = 0 ; i < data.size() ; ++i)
    {
        data[i].resize(y);
    }
}

template <class T>
void matrix::Matrix<T>::insert(const unsigned int x , const unsigned int y, const T value)
{
    if ( x > width - 1)
    {
        std::cerr << "Trying to add a value to an out of bounds x\n";
        return;
    }
    if ( y > height - 1)
    {
        std::cerr << "Trying to add a value to and out of bound y\n";
        return;
    }
    data[x][y] = value;
}








