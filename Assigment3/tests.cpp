#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Dinobot.h"

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

    // Проверка, что transformer1 сильнее transformer2
    EXPECT_TRUE(transformer1 > transformer2);

    // Проверка, что transformer2 слабее transformer1
    EXPECT_TRUE(transformer2 < transformer1);

    // Проверка, что transformer1 не слабее transformer2
    EXPECT_FALSE(transformer1 < transformer2);

    // Проверка, что transformer2 не сильнее transformer1
    EXPECT_FALSE(transformer2 > transformer1);
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

TEST(AutobotTest, ProtectTest) {
    Weapon weapon("Energon Axe");
    Engine engine("Truck");
    Autobot autobot("Optimus", 100, 80, weapon, engine, 95, 100);

    testing::internal::CaptureStdout();
    autobot.protect();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Optimus is protecting the innocent!\n");
}

// Тесты для класса Decepticon
TEST(DecepticonTest, ConstructorTest) {
    Weapon weapon("Plasma Cannon");
    Engine engine("Jet");
    Decepticon decepticon("Megatron", 95, 85, weapon, engine, 90, 95);

    EXPECT_EQ(decepticon.getName(), "Megatron");
    EXPECT_EQ(decepticon.getStrength(), 95);
    EXPECT_EQ(decepticon.getSpeed(), 85);
    EXPECT_EQ(decepticon.getWeapon().getName(), "Plasma Cannon");
    EXPECT_EQ(decepticon.getEngine().getMode(), "Jet");
    EXPECT_EQ(decepticon.getCunning(), 90);
    EXPECT_EQ(decepticon.getMalice(), 95);
}

TEST(DecepticonTest, DeceiveTest) {
    Weapon weapon("Plasma Cannon");
    Engine engine("Jet");
    Decepticon decepticon("Megatron", 95, 85, weapon, engine, 90, 95);

    testing::internal::CaptureStdout();
    decepticon.deceive();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Megatron is deceiving the enemy!\n");
}

// Тесты для класса Dinobot
TEST(DinobotTest, ConstructorTest) {
    Weapon weapon("Sword");
    Engine engine("T-Rex");
    Dinobot dinobot("Grimlock", 90, 70, weapon, engine, 85, 90);

    EXPECT_EQ(dinobot.getName(), "Grimlock");
    EXPECT_EQ(dinobot.getStrength(), 90);
    EXPECT_EQ(dinobot.getSpeed(), 70);
    EXPECT_EQ(dinobot.getWeapon().getName(), "Sword");
    EXPECT_EQ(dinobot.getEngine().getMode(), "T-Rex");
    EXPECT_EQ(dinobot.getFerocity(), 85);
    EXPECT_EQ(dinobot.getRoarLevel(), 90);
}

TEST(DinobotTest, RoarTest) {
    Weapon weapon("Sword");
    Engine engine("T-Rex");
    Dinobot dinobot("Grimlock", 90, 70, weapon, engine, 85, 90);

    testing::internal::CaptureStdout();
    dinobot.roar();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Grimlock is roaring with level 90!\n");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
