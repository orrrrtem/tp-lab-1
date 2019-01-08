#include "gtest/gtest.h"
#include "automata.h"


TEST(lab4,scene1)
{
    Automata nc;
  
    
    nc.coin(10);
    int c = 10;
    EXPECT_EQ(c,nc.getcash());
    
}
