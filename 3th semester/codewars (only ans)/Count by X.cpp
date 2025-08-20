#include <vector>
std::vector<int> countBy(int x,int n)
{
    std::vector<int> ans;
    for (int i=1; i<=n; ++i)
    {
        ans.push_back(x*i);
    }
  return ans;
}