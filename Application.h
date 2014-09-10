#ifndef LOVEPRINT_APPLICATION_H
#define LOVEPRINT_APPLICATION_H

// std
#include <vector>

namespace loveprint
{

class Window;

class Application final
{
	bool _quit;
	bool _running;

public:
	void Quit();
	void Run();

	Application();
	~Application();
}; // Application

} // loveprint

#endif // LOVEPRINT_APPLICATION_H