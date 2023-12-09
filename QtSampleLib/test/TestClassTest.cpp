#include "QtSampleLib/TestClass.h"

#include <gtest/gtest.h>

namespace {

    TEST(TestClassTest, VectorContentTest)
    {
        TestClass testClass;

        EXPECT_TRUE(not testClass.vector.isEmpty());
        EXPECT_EQ(testClass.vector.size(), 3);
    }
}