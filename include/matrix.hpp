/*! \file
 *  \brief
 *  \author
 *  \date
*/
#ifndef _MATRIX_HPP_
#define _MATRIX_HPP_

#include <vector>
#include <tuple>


namespace matrix
{
    
    template < class T >
    class Matrix
    {
        std::vector<std::vector<T>> data;
        unsigned int heght;
        unsigned int width;
        
        template <T> 
        const T add(const T, const T);
        
        
    public:
        Matrix();
        ~Matrix();
        
        // add another matrix to THIS
        void add( const Matrix<T>& );
        
        // resize THIS to x,y dimensions
        void resize(const unsigned int, const unsigned int);
        
        // print THIS
        const void print();
        
        // add a value to position x,y in THIS
        void add (const unsigned int, const unsigned int, const T);
        
        // get a value at x,y from THIS
        const T get(const unsigned int, const unsigned int);
        
    };
    
    
    template <typename T>
    const Matrix<T> add(const Matrix<T>&, const Matrix<T>&); 

}



// template<class T>
// class Adder {
// public:
//     /** Default constructor */
//     Adder(){};
//     /** Default destructor */
//     virtual ~Adder(){};

//     double Add(const double &a, const double &b) {
//         return (a+b);
//     }

//     template <T>
//     std::vector<T> AddArray(const std::vector<T> &a,
//                             const std::vector<T> &b) {
//         std::vector<T> temp;
//         for(unsigned int i = 0; i < a.size(); i++)
//             temp.push_back(a.at(i)+b.at(i));
//         return(temp);
//     };
// };
#endif // ADDER_HPP
