bool zero_fuel(uint32_t distance_to_pump, uint32_t mpg, uint32_t fuel_left)
{
    bool can_reach = false;   
    if (mpg * fuel_left >= distance_to_pump) 
    {
        can_reach = true;
    }
    return can_reach;
}