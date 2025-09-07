#include <cmath>
double square_area(double A) 
{
  double x = (4 * A * A) / (M_PI * M_PI);
  return round(x * 100) / 100;
}