
#include "Partie.hpp"
#include "Random.hpp"
#include <CppUTest/CommandLineTestRunner.h>
using namespace std;
TEST_GROUP(GroupPartie) { };
TEST(GroupPartie, test_partie_1) { // premier test unitaire
    string result = compareResult("rock","scissor");
    CHECK_EQUAL("win", result);
}
TEST(GroupPartie, test_partie_2) { // premier test unitaire
    string result = compareResult("rock","rock");
    CHECK_EQUAL("draw", result);
}
TEST(GroupPartie, test_partie_3) { // premier test unitaire
    string result = compareResult("rock","paper");
    CHECK_EQUAL("lose", result);
}
