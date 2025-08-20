std::vector<int> solve(std::vector<int>v)
{
    std::sort(v.begin(), v.end());
    std::vector<int> ans;
    int l=0, r=v.size() - 1;

    while (l <=r)
    {
        if (l !=r)
        {
            ans.push_back(v[r--]);
            ans.push_back(v[l++]);
        }
        else
        {
            ans.push_back(v[l++]); 
        }
    }
    return ans;
}