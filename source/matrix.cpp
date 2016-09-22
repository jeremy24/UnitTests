#include "matrix.hpp"

#include <vector>
#include <iostream>

// using namespace matrix;

template < typename T >
matrix::Matrix<T>::Matrix()
{
    this.height = 0;
    this.width = 0;
}

template < typename T >
matrix::Matrix<T>::~Matrix()
{
    std::cout << "Destroying a matrix\n"; 
}

// template < typename T >
// const void matrix::Matrix<T>::print()
// {
//     std::cout << "Matrix:\nHeight: " 
//               << height 
//               << "\nWidth" 
//               << width 
//               << "\n";
//     std::vector<T>::iverator iv = data.begin();
//     while ( iv != data.end() )
//     {
//         std::vector<T>::iterator jv = *iv.begin();
//         while ( jv != *iv.end())
//         {
//             std::cout << *jv << " ";
//             ++jv;
//         }
//         std::cout << "\n";
//         ++iv;
//     }
// }