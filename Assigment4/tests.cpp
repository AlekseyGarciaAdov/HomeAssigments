#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"
#include <sstream>

// Тесты для класса Transformer
TEST(TransformerTest, ConstructorTest) {
    Weapon weapon("Sword");
    Engine engine("Truck");
    Transformer transformer("Optimus", 100, 80, weapon, engine);

    EXPECT_EQ(transformer.getName(), "Optimus");
    EXPECT_EQ(transformer.getStrength(), 100);
    EXPECT_EQ(transformer.getSpeed(), 80);
    EXPECT_EQ(transformer.getWeapon().getName(), "Sword");
    EXPECT_EQ(transformer.getEngine().getMode(), "Truck");
}

TEST(TransformerTest, ComparisonTest) {
    Weapon weapon1("Sword");
    Engine engine1("Truck");
    Transformer transformer1("Optimus", 100, 80, weapon1, engine1);

    Weapon weapon2("Axe");
    Engine engine2("Jet");
    Transformer transformer2("Megatron", 90, 85, weapon2, engine2);

    EXPECT_TRUE(transformer1 > transformer2);
    EXPECT_TRUE(transformer2 < transformer1);
    EXPECT_FALSE(transformer1 < transformer2);
    EXPECT_FALSE(transformer2 > transformer1);
}

TEST(TransformerTest, OutputOperatorTest) {
    Weapon weapon("Sword");
    Engine engine("Truck");
    Transformer transformer("Optimus", 100, 80, weapon, engine);

    std::ostringstream output;
    output << transformer;
    EXPECT_FALSE(output.str().empty());
}

// Тесты для класса Autobot
TEST(AutobotTest, ConstructorTest) {
    Weapon weapon("Energon Axe");
    Engine engine("Truck");
    Autobot autobot("Optimus", 100, 80, weapon, engine, 95, 100);

    EXPECT_EQ(autobot.getName(), "Optimus");
    EXPECT_EQ(autobot.getStrength(), 100);
    EXPECT_EQ(autobot.getSpeed(), 80);
    EXPECT_EQ(autobot.getWeapon().getName(), "Energon Axe");
    EXPECT_EQ(autobot.getEngine().getMode(), "Truck");
    EXPECT_EQ(autobot.getCourage(), 95);
    EXPECT_EQ(autobot.getHonor(), 100);
}

TEST(AutobotTest, OutputOperatorTest) {
    Weapon weapon("Energon Axe");
    Engine engine("Truck");
    Autobot autobot("Optimus", 100, 80, weapon, engine, 95, 100);

    std::ostringstream output;
    output << autobot;
    EXPECT_FALSE(output.str().empty());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
