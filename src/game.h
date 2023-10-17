#include <box2d/box2d.h>

class Game {
private:
	bool initialized = false;
	b2World* world;
	b2Body* body;
public:
	Game();
	~Game();
	void Run();
};
