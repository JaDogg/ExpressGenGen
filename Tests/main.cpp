//--------------------------------------------
// Definition
//
//--------------------------------------------
// Uses
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wall"
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#include <gmock/gmock.h>
//--------------------------------------------

int main(int argc, char** argv)
{
    testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}

//--------------------------------------------

#pragma GCC diagnostic pop

