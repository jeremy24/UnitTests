/*! \file
 *  \brief
 *  \author
 *  \date
*/
#ifndef ADDER_HPP
#define ADDER_HPP

#include <vector>
#include <set>

class Adder {
public:
    /** Default constructor */
    Adder(){};
    /** Default destructor */
    virtual ~Adder(){};

    double Add(const double &a, const double &b) {
        return (a+b);
    }

    std::vector<double> AddArray(const std::vector<double> a,
                                 const std::vector<double> b) {
        std::vector<double> temp;
        for(unsigned int i = 0; i < a.size(); i++)
            temp.push_back(a.at(i)+b.at(i));
        return(temp);
    };
};
#endif // ADDER_HPP
