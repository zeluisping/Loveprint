#include "Application.h"
#include "jade/Control.h"
#include <iostream>

int main(int argc, char ** argv)
{
	loveprint::jade::Control c;

	printf("%s\n", c.tostring());

	loveprint::Application app = loveprint::Application();

	app.Run();

	return 0;
}