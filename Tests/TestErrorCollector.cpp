//--------------------------------------------
// Definition
//
//--------------------------------------------
// Uses
#include "TestHelper.h"
//--------------------------------------------

TEST(ErrorCollector, CollectError)
{
    ErrorCollector err;
    err.Collect("New Error");
    ASSERT_EQ(err.GetCount(), 1);
}

TEST(ErrorCollector, IsEmpty)
{
    ErrorCollector err;
    ErrorCollector err2;
    err.Collect("New Error");

    ASSERT_FALSE(err.IsEmpty());
    ASSERT_TRUE(err2.IsEmpty());
}

TEST(ErrorCollector, GetAllErrors)
{
    ErrorCollector err;
    err.Collect("(Part of Test) Some Error");
    auto errList = err.GetAllErrors();
    ASSERT_EQ(errList->front(), "Error >(Part of Test) Some Error");
}
//--------------------------------------------
