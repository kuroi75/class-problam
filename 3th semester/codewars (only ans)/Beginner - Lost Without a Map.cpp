std::vector<int> maps(const std::vector<int> & values) 
{ 
  std::vector<int> result;
  for (int num : values)
   {
        result.push_back(num * 2);
   }
  return result;
}