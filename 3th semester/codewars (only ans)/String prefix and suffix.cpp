int solve(std::string s)
{
    int n = s.length();

    if (n < 2)
    {
        return 0;
    }

    for (int length = n / 2; length >= 1; --length)
    {   
        bool ismatch = true;

        for (int i =0; i < length; ++i)
        {
            if (s[i] != s[n - length + i])
            {
                ismatch = false;
                break;
            }
        }
    if (ismatch)
        {
            return length;
        }
    
    }

    return 0;
}