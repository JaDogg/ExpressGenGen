//--------------------------------------------
// Definition
//
//--------------------------------------------
// Uses
#include "TestHelper.h"
//--------------------------------------------

TEST(ErrorCollector, CollectError)
{
    auto err(std::make_shared<ErrorCollectorImpl>());
    err->Collect("New Error");
    ASSERT_EQ(err->GetCount(), 1);
}

TEST(ErrorCollector, IsEmpty)
{
    auto err(std::make_shared<ErrorCollectorImpl>());
    auto err2(std::make_shared<ErrorCollectorImpl>());
    err->Collect("New Error");

    ASSERT_FALSE(err->IsEmpty());
    ASSERT_TRUE(err2->IsEmpty());
}

TEST(ErrorCollector, GetAllErrors)
{
    auto err(std::make_shared<ErrorCollectorImpl>());
    err->Collect("(Part of Test) Some Error");
    auto errList = err->GetAllErrors();
    ASSERT_EQ(errList->front(), "Error >(Part of Test) Some Error");
}
//--------------------------------------------
