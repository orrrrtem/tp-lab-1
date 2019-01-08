#include "gtest/gtest.h"
#include "automata.h"


TEST(lab4,scene1)
{
    Automata nc;
    std::string expect = "THE MACHINE HAS TURNED ON";
    EXPECT_EQ(expect,nc.on());
    
    nc.coin(10);
    int c = 10;
    EXPECT_EQ(c,nc.getcash());
    
    nc.coin(30);
    EXPECT_EQ(ACCEPT, nc.getstate())
        
    std::string ans = "ENJOY YOUR DRINK";
    EXPECT_EQ(ans,nc.choice(2));
}
