#include <iostream>
#include <vector>
#include <set>
#include <string>


class TheQuestionsAndAnswersDivTwo {
public:
  int find(std::vector<std::string> questions);
};

int TheQuestionsAndAnswersDivTwo::find(std::vector<std::string> questions)
{
  std::set<std::string> set;

  for (std::vector<std::string>::iterator it = questions.begin(); it != questions.end(); ++ it)
    set.insert(*it);

  return 1 << set.size();
}


int main(int argc, char** argv)
{
  std::vector<std::string> questions;

  while (! std::cin.eof()) {
    std::string question;

    std::cin >> question;
    
    if (question.size())
      questions.push_back(question);
  }
  
  std::cout << TheQuestionsAndAnswersDivTwo().find(questions) << std::endl;
}
