std::string get_middle(std::string input) 
{
    size_t ln =input.length();
    size_t middle = ln / 2;

    if (ln % 2 == 0)
    {
    return std::string() + input[middle-1] + input[middle];
    }
    else
    {
        return std::string(1, input[middle]);
    }
}