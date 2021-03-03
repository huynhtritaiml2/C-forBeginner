#include <iostream>

/*
Operator: + - * /

How about??
Point a;
Point b;
a + b =??????

so, operator overloading, we can define what plus sign mean
NOTE: Operator overloading is kind of function

*/

class Position
{
    public:
        int x = 10;
        int y = 20;
        Position operator + (Position pos) // if pos1 + pos2, then pos2 is pos in this statement
        {
            Position new_pos; // declare new instance, because we need to return a new instance of this class
            new_pos.x = x + pos.x;
            new_pos.y = y + pos.y;
            return new_pos;
        }
        bool operator == (Position pos)
        {
            if(x == pos.x && y == pos.y)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    Position pos1, pos2;
    Position pos3 = pos1 + pos2;
    std::cout << pos3.x << " " << pos3.y << std::endl; //20 40
    //pos2.x = 30; // Check
    
    if(pos1 == pos2)
    {
        std::cout << "They are the same!\n";
        std::cout << "That I really love tacos\n";
        std::cout << "Pizza\n";
    }
    
    return 0;
}
/*
Before: 
20 40
They are the same!
That I really love tacos
Pizza

After: pos2.x = 30;
20 40
*/