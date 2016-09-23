#ifndef _INT_MATRIX_HPP_
#define _INT_MATRIX_HPP_

#include "matrix.hpp"

namespace matrix
{
    class Int_Matrix : public Matrix<int>
    {
        
    public:
        Int_Matrix() {}
        ~Int_Matrix() {}
    
        void add( const Int_Matrix& );
        void subtract( const Int_Matrix& );
        const int trace() const;
        const int total() const;
    };
    
    Int_Matrix operator+(const Int_Matrix, const Int_Matrix);
    Int_Matrix operator-(const Int_Matrix, const Int_Matrix);
}



#endif
