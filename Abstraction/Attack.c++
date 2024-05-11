#include <iostream>
using namespace std;

class Monster {
public:
    virtual void attack() = 0;
};
class FireMonster : public Monster {
public:
    void attack() override {
        cout << "Firemonster attack by fire" << endl;
    }
};

class WaterMonster : public Monster {
public:
    void attack() override {
        cout << "Watermonster attack by water" << endl;
    }
};

class StoneMonster : public Monster {
public:
    void attack() override {
        cout << "Stonemonster attack by stone" << endl;
    }
};

int main() {
    Monster* fireMonster = new FireMonster();
    Monster* waterMonster = new WaterMonster();
    Monster* stoneMonster = new StoneMonster();
    fireMonster->attack();
    waterMonster->attack();
    stoneMonster->attack();
    return 0;
}
