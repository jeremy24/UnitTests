/*! \file
 *  \brief
 *  \author
 *  \date
*/
#ifndef ADDER_HPP
#define ADDER_HPP

#include <vector>
#include <set>


template<class T>
class Adder {
public:
    /** Default constructor */
    Adder(){};
    /** Default destructor */
    virtual ~Adder(){};

    double Add(const double &a, const double &b) {
        return (a+b);
    }

    template <T>
    std::vector<T> AddArray(const std::vector<T> &a,
                            const std::vector<T> &b) {
        std::vector<T> temp;
        for(unsigned int i = 0; i < a.size(); i++)
            temp.push_back(a.at(i)+b.at(i));
        return(temp);
    };
};
#endif // ADDER_HPP
