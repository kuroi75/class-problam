bool is_even(double n)
{
   if (n != long(n))
   {
        return false;
   }
   return (long) n % 2 == 0;
}