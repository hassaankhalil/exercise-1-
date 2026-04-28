#include <iostream>
#include <string>
#include <gtest/gtest.h>


using namespace std;

string factorize(int n) {
    string result;
    for (int i = 2; i*i; i++) {
        while (n % i == 0) {
            result += to_string(i) + " ";
            n /= i;
        }
    }

   if(n>1){
   result+= to_string(n) + " ";
   }

    if(!(result == "")) {
        result.pop_back(); 
    }

    return result;

}

TEST(FactorizeTest, Assignmenttest) {
    EXPECT_EQ(factorize(60), "2 2 3 5");
}

TEST(FactorizeTest, prime) {
    EXPECT_EQ(factorize(11), "11");
}

TEST(FactorizeTest, one) {
    EXPECT_EQ(factorize(1), "");
}

TEST(FactorizeTest, singlefactor) {
    EXPECT_EQ(factorize(32), "2 2 2 2 2");
}

TEST(FactorizeTest, Test) {
    EXPECT_EQ(factorize(100), "2 2 5 5");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
