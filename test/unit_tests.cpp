#include "gtest/gtest.h"
#include "possible_parentheses.h"



void showResult(std::list<std::string> & result) {
    for (std::list<std::string>::iterator i = result.begin(); i!=result.end(); ++i) {
        printf("%s\n", (*i).c_str());
    }
};

TEST(test_recursive, 1) {
	std::list<std::string> result;
	possibleParenthesis(1, result);

	static char hardCodedResult1[] = "{}";
	std::list<std::string> answer;
	answer.push_back(hardCodedResult1);
	
	ASSERT_EQ(answer, result);

}

TEST(test_recursive, 2) {
    std::list<std::string> result;
    possibleParenthesis(2, result);

	static char hardCodedResult1[] = "{}{}";
	static char hardCodedResult2[] = "{{}}";
	std::list<std::string> answer;
	answer.push_back(hardCodedResult1);
	answer.push_back(hardCodedResult2);

	ASSERT_EQ(answer, result);

}

TEST(test_recursive, 3) {
    std::list<std::string> result;
    possibleParenthesis(3, result);

	static char hardCodedResult1[] = "{}{}{}";
	static char hardCodedResult2[] = "{}{{}}";
	static char hardCodedResult3[] = "{{}}{}";
	static char hardCodedResult4[] = "{{}{}}";
	static char hardCodedResult5[] = "{{{}}}";

	std::list<std::string> answer;
	answer.push_back(hardCodedResult1);
	answer.push_back(hardCodedResult2);
	answer.push_back(hardCodedResult3);
	answer.push_back(hardCodedResult4);
	answer.push_back(hardCodedResult5);

	ASSERT_EQ(answer, result);
}


