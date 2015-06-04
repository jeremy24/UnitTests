/*! \file
 *  \brief
 *  \author
 *  \date
*/
#include <vector>

#include <UnitTest++.h>

#include "Adder.hpp"

using namespace std;

TEST(TestingAdding) {
    Adder adding;
    double result = adding.Add(1.0, 3.0);
    CHECK(result == 4.0);
}

TEST_FIXTURE(Adder, TestingVectorAddition) {
    vector<double> a,b;
    a.push_back(1); a.push_back(2); a.push_back(3);
    b.push_back(1); b.push_back(2); b.push_back(3);
    vector<double> result = AddArray(a,b);

}
