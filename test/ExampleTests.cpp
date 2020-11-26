#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../src/mike_math.hpp"
/*
class myMOCK : public myClass
{
public:
	MOCK_METHOD1(fun, double(int));

}; */
/*
struct ExampleTestsA : public ::testing::Test   //test fixture
{
	int* x;
	int GetX()
	{
		return *x;
	}
	virtual void SetUp() override
	{
		x = new int;
		*x = 4;
	}
	virtual void TearDown() override
	{
		delete x;
	}

}; */

TEST(ExampleTestsB, DemonstrateTests2) {
	EXPECT_TRUE(true);
}


/*TEST_F(ExampleTestsA, DemonstrateTests) {   // this uses the optional test fixture
	ASSERT_TRUE(true);
	EXPECT_TRUE(true);
	EXPECT_TRUE(false);
	EXPECT_EQ(GetX(), 16);
} 
TEST(ExampleTestsB, DemonstrateTests2) {
	EXPECT_TRUE(true);
	EXPECT_EQ(computeSquare(5), 25);
	Dog mikeDog(6);
    Dog TDog(7);
	BigDog BDog = computeSquare(mikeDog);
	EXPECT_EQ(BDog.size, 36) << "Hello ";
}
TEST(ExampleTestsC, A_TRUE) {

	myClass v;
	std::cout << "Hello" << "\n";
	EXPECT_TRUE(v.fun(6)==6);
}

TEST(ExampleTestsC, A_MOCK) {

	myMOCK v;
	EXPECT_CALL(v, fun(::testing::_)).Times(::testing::AtLeast(1)).WillRepeatedly(::testing::Return(99.0));
	std::cout << "Hello" << "\n";
	EXPECT_TRUE(v.fun(6) == 99);
} 
*/

