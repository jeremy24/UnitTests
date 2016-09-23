/*! \file
 *  \brief
 *  \author
 *  \date
*/
#ifndef _MATRIX_HPP_
#define _MATRIX_HPP_

#include <vector>


namespace matrix
{
    
    template < class T >
    class Matrix
    {
    protected:
        std::vector<std::vector<T>> data;
        unsigned int height;
        unsigned int width;
        
    public:
        
        Matrix();
        ~Matrix();
        
        // getters
        const unsigned int get_height() const;
        const unsigned int get_width() const;
        T get_data(const unsigned int, const unsigned int) const;
        std::vector<std::vector<T>> get_data() const;
        
        // print
        void print() const;
        
        // setter
        void resize( const unsigned int, const unsigned int );
        void insert( const unsigned int, const unsigned int, const T);
        
        // transpose makes sense for any data type T
        Matrix<T> transpose() const;
    };
}

#endif // ADDER_HPP
