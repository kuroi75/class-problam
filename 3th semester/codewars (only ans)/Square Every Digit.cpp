int square_digits(int num) 
{
     int result = 0;
    int multi = 1;

    while (num != 0) {
        int x = num % 10;
        int s = x * x;

        if (s > 9) {
            result += s * multi;
            multi *= 100;
        } else {
            result += s * multi;
            multi *= 10;
        }

        num /= 10;
    }
  return result;
}