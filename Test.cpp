#include <gtest/gtest.h>
#include <string>
#include "my_vector.hpp"
#include "sortable_vector.hpp"

class VectorTest : public testing::Test {
};

TEST(Assignment4, test1) {
    my_vector<int> mv1;
    my_container<int>& mc1 = mv1;
    // Adds a new element at the end of the vector.
    mc1.add(10);
    EXPECT_TRUE(mc1[0] == 10);
    EXPECT_TRUE(mc1.size() == 1);

    mc1.add(20);
    EXPECT_TRUE(mc1[0] == 10);
    EXPECT_TRUE(mc1[1] == 20);
    EXPECT_TRUE(mc1.size() == 2);

    mc1.add(30);
    EXPECT_TRUE(mc1[0] == 10);
    EXPECT_TRUE(mc1[1] == 20);
    EXPECT_TRUE(mc1[2] == 30);
    EXPECT_TRUE(mc1.size() == 3);
}

TEST(Assignment4, test2) {
    my_vector<int> mv1;
    my_container<int>& mc1 = mv1;
    mc1.add(1);
    mc1.add(2);
    mc1.pop_back();

    EXPECT_TRUE(mc1[0] == 1);
    EXPECT_TRUE(mc1.size() == 1);

    mc1.pop_back();
    EXPECT_TRUE(mc1.size() == 0);
}

TEST(Assignment4, test3) {
    my_vector<int> mv1;
    my_container<int>& mc1 = mv1;
    mc1.add(10);
    mc1.add(20);
    mc1.add(30);

    my_vector<int> mv2(mv1);
    my_container<int>& mc2 = mv2;
    mc2.pop_back();

    EXPECT_TRUE(mc1.size() == 3);
    EXPECT_TRUE(mc2.size() == 2);

    EXPECT_TRUE(mc1[0] == 10);
    EXPECT_TRUE(mc1[1] == 20);
    EXPECT_TRUE(mc1[2] == 30);

    EXPECT_TRUE(mc2[0] == 10);
    EXPECT_TRUE(mc2[1] == 20);

    mc2.add(40);
    EXPECT_TRUE(mc1.size() == 3);
    EXPECT_TRUE(mc2.size() == 3);
    EXPECT_TRUE(mc1[2] == 30);
    EXPECT_TRUE(mc2[2] == 40);
}

TEST(Assignment4, test4) {
    my_vector<int> mv1;
    my_container<int>& mc1 = mv1;
    mc1.add(1);
    mc1.add(2);
    mc1.clear();

    EXPECT_TRUE(mc1.size() == 0);
}

TEST(Assignment4, test5) {
    my_vector<int> mv1;
    my_container<int>& mc1 = mv1;
    mc1.add(1);
    mc1.add(2);
    mc1.add(3);

    my_vector<int> mv2;
    my_container<int>& mc2 = mv2;
    mc2.add(10);
    mc2.add(20);
    mc2.add(30);
    mc2.add(40);

    // swap the contents of mc1 and mc2.
    mc1.swap(mc2);

    EXPECT_TRUE(mc1.size() == 4);
    EXPECT_TRUE(mc1[0] == 10);
    EXPECT_TRUE(mc1[1] == 20);
    EXPECT_TRUE(mc1[2] == 30);
    EXPECT_TRUE(mc1[3] == 40);

    EXPECT_TRUE(mc2.size() == 3);
    EXPECT_TRUE(mc2[0] == 1);
    EXPECT_TRUE(mc2[1] == 2);
    EXPECT_TRUE(mc2[2] == 3);
}

TEST(Assignment4, test6) {
    my_vector<int> mv1;
    my_container<int>& mc1 = mv1;
    mc1.add(11);
    mc1.add(22);
    mc1.add(33);

    EXPECT_TRUE(*mc1.begin() == 11);
    EXPECT_TRUE(*(mc1.begin() + 1) == 22);
    EXPECT_TRUE(*(mc1.begin() + 2) == 33);
}

TEST(Assignment4, test7) {
    sortable_vector<int> sv1;
    sv1.add(20);
    sv1.add(3);
    sv1.add(5);

    EXPECT_TRUE(sv1[0] == 3);
    EXPECT_TRUE(sv1[1] == 5);
    EXPECT_TRUE(sv1[2] == 20);
}
