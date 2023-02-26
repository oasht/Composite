#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;
class Unit
{
public:
    virtual void getUnit() = 0;
    virtual void addUnit(Unit* p) { assert(false); }
    virtual ~Unit() {}
};



class Foundation : public Unit
{
public:
    virtual void getUnit() { cout << "Foundation" << endl; }
};
class Wall : public Unit
{
public:
    virtual void getUnit() { cout << "Wall" << endl; }
};
class Window : public Unit
{
public:
    virtual void getUnit() { cout << "Window" << endl; }
};
class Door : public Unit
{
public:
    virtual void getUnit() { cout << "Door" << endl; }
};

class Roof : public Unit
{
public:
    virtual void getUnit() { cout << "Roof" << endl; }
};
class Pool : public Unit
{
public:
    virtual void getUnit() { cout << "Pool" << endl; }
};

class Garden : public Unit
{
public:
    virtual void getUnit() { cout << "Garden" << endl; }
};

class Disco : public Unit
{
public:
    virtual void getUnit() { cout << "Disco hall" << endl; }
};



class CompositeUnit : public Unit
{
private:
    std::vector<Unit*> c;
public:
    void getUnit() {

        for (int i = 0; i < c.size(); ++i)
            c[i]->getUnit();

    }
    void addUnit(Unit* p) { c.push_back(p); }
    ~CompositeUnit() {
        for (int i = 0; i < c.size(); ++i)
            delete c[i];
    }

};

CompositeUnit* create_SimpleHouse()
{

    CompositeUnit* simple_house = new CompositeUnit;
    simple_house->addUnit(new Foundation);
    for (int i = 0; i < 4; ++i)
        simple_house->addUnit(new Wall);
    for (int i = 0; i < 4; ++i)
        simple_house->addUnit(new Window);
    simple_house->addUnit(new Door);
    simple_house->addUnit(new Roof);
    return simple_house;
}

CompositeUnit* create_DiscoHouse()
{

    CompositeUnit* disco_house = new CompositeUnit;
    disco_house->addUnit(new Foundation);
    for (int i = 0; i < 4; ++i)
        disco_house->addUnit(new Wall);
    for (int i = 0; i < 4; ++i)
        disco_house->addUnit(new Window);
    disco_house->addUnit(new Door);
    disco_house->addUnit(new Roof);
    disco_house->addUnit(new Pool);
    for (int i = 0; i < 2; ++i)
        disco_house->addUnit(new Disco);
    return disco_house;
}
CompositeUnit* create_EliteHouse()
{

    CompositeUnit* elite_house = new CompositeUnit;
    elite_house->addUnit(new Foundation);
    for (int i = 0; i < 4; ++i)
        elite_house->addUnit(new Wall);
    for (int i = 0; i < 4; ++i)
        elite_house->addUnit(new Window);
    elite_house->addUnit(new Door);
    elite_house->addUnit(new Roof);
    elite_house->addUnit(new Pool);
    elite_house->addUnit(new Garden);
    return elite_house;
}
