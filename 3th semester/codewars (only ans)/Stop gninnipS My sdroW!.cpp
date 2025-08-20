using namespace std;
std::string spinWords(const std::string &str)
{
    std::stringstream ss(str);
    string word;
    string result;
    while (ss >> word)
    {
        if (word.size() >=5)
        {
            reverse(word.begin(), word.end());
        }
        if (!result.empty())
        {
            result += " ";
        }
        result += word;
    }
  return result;
}