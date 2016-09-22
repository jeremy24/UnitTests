#include "matrix.hpp"

#include <vector>
#include <iostream>
#include <algorithm>

// using namespace matrix;




template <class T> 
matrix::Matrix<T>::Matrix()
{
    height = 0;
    width = 0;
}

template < class T >
matrix::Matrix<T>::~Matrix()
{
    std::cout << "Destroying a matrix\n"; 
}

template <class T>
const T matrix::Matrix<T>::add(const T a, const T b)
{
    return a + b;
}

template < class T >
void matrix::Matrix<T>::print()
{
    std::cout << "Matrix:\nHeight: " 
              << height 
              << "\nWidth: " 
              << width 
              << "\nReal Height: "
              << (*(data.begin())).size()
              << "\nReal Width: "
              << (*(data.begin())).size()
              << "\n";
              
    class std::vector<std::vector<T>>::iterator iv = data.begin();

    while ( iv != data.end() )
    {
        typename std::vector<T>::iterator jv = (*iv).begin();
        while ( jv != (*iv).end() )
        {
            std::cout << *jv << " ";
            ++jv;
        }
        std::cout << "\n";
        ++iv;
    }
}


// template <class T>
// void matrix::Matrix<T>::add( const Matrix <T> & rhs )
// {
//     if ( width !=  (rhs.get_width()) )
//     {
//         std::cerr << "Cannot add matrices of differing widths\n";
//         return;
//     }
//     if ( height != (rhs.get_height()) )
//     {
//         std::cerr << "Cannot add matrices of differing height\n";
//         return;
//     }
    
    
//     class std::vector<std::vector<T>>::iterator iv1 = data.begin();
//     class std::vector<std::vector<T>>::iterator iv2 = rhs.begin();
//     while ( iv1 != data.end() )
//     {
//         typename std::vector<std::vector<T>>::iterator jv1 = *(iv1).begin();
//         typename std::vector<std::vector<T>>::iterator jv2 = *(jv1).begin();
//         while ( jv1 != *iv1.end())
//         {
//             *jv1 = add(*jv1, *jv2);
//             ++jv1;
//             ++jv2;
//         }
//         std::cout << "\n";
//         ++iv1;
//         ++iv2;
//     }
// }

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

// template <class T>
// void matrix::Matrix<T>::insert(const unsigned int x , const unsigned int y, const T value)
// {
//     if ( x > width - 1)
//     {
//         std::cerr << "Trying to add a value to an out of bounds x\n";
//         return;
//     }
//     if ( y > height - 1)
//     {
//         std::cerr << "Trying to add a value to and out of bound y\n";
//         return;
//     }
//     data[x][y] = value;
// }

// // template <class T>
// // const T matrix::Matrix<T>::get(const unsigned int x, const unsigned int y) const
// // {
// //     if ( x >= width )
// //     {
// //         std::cerr << "Attempting to get value with an out of bounds x\n";
// //         return;
// //     }
// //     if ( y >= height)
// //     {
// //         std::cerr << "Attempting to get value with an out of bounds y\n";
// //         return;
// //     }
// //     return data[x][y];
// // }



// template <class T>
// const matrix::Matrix<T> matrix::add( const matrix::Matrix<T> &a, const matrix::Matrix<T> &b)
// {
//     matrix::Matrix<T> ret;
    
//     ret.resize(a.get_width(), a.get_height());
    
//     ret.add(a);
//     ret.add(b);
    
//     return ret;
// }

template <class T>
void matrix::Matrix<T>::fill( const T val )
{
    class std::vector<std::vector<T>>::iterator iv = data.begin();
    while ( iv != data.end() )
    {
        std::fill((*iv).begin(), (*iv).end(), val);
        ++iv;
    }
}


template class matrix::Matrix<double>;







