/*! \file
 *  \brief
 *  \author
 *  \date
*/
#ifndef ADDER_HPP
#define ADDER_HPP

#include <vector>
class Adder {
public:
    /** Default constructor */
    Adder();
    /** Default destructor */
    virtual ~Adder();

    double Add(const double &a, const double &b) {
        return (a+b);
    }

    std::vector<double> AddArray(const std::vector<double> a,
                                 const std::vector<double> b){};
};
#endif // ADDER_HPP
