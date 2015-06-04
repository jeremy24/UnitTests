/*! \file
 *  \brief
 *  \author
 *  \date
*/
#include <iostream>
#include <vector>

#include <UnitTest++.h>

#include "Adder.hpp"

using namespace std;

TEST_FIXTURE(Adder, TestingAdding) {
    double result = Add(1.0, 3.0);
    CHECK(result == 4.0);
}

TEST_FIXTURE(Adder, TestingVectorAddition) {
    vector<double> a,b, expected;

    a.push_back(1); a.push_back(2); a.push_back(3);
    b.push_back(1); b.push_back(2); b.push_back(3);

    for(unsigned int i = 0; i < a.size(); i++)
        expected.push_back(a.at(i)+b.at(i));

    vector<double> result = AddArray(a,b);

    CHECK(result.size() == expected.size());
    CHECK_ARRAY_EQUAL(result, expected, expected.size());
}
