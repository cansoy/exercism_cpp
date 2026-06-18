#include <iostream>

class Alien
{
private:
    int health{3};

public:
    int x_coordinate;
    int y_coordinate;
    Alien(int x, int y) : x_coordinate{x}, y_coordinate{y} {}

    int get_health()
    {
        return health;
    }

    bool hit()
    {
        if (health > 0)
            health--;
        return true;
    }

    bool is_alive()
    {
        return health > 0;
    }

    bool teleport(int new_x, int new_y)
    {
        x_coordinate = new_x;
        y_coordinate = new_y;
        return true;
    }
    bool collision_detection(const Alien &alien)
    {
        return alien.x_coordinate == x_coordinate && alien.y_coordinate == y_coordinate;
    }
};

int main()
{

    Alien alien_1{10, 20};
    Alien alien_2{10, 20};
    Alien alien_3{10, 30};

    std::cout << alien_1.collision_detection(alien_2) << std::endl;
    std::cout << alien_1.collision_detection(alien_3) << std::endl;
}