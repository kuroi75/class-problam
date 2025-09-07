std::vector<int> digitize(unsigned long n) 
{        
  std::vector<int> digits;
  
  if (n == 0) 
  {
        digits.push_back(0);
        return digits;
   }
  while (n > 0) 
    {
        digits.push_back(n%10);
        n/=10;
    }
    
    return digits;
}