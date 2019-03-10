#include "GUI.h"

using namespace GUIPart;
int main() {
	//note the use of "gcnew"
	//analogy: '*' is to "new" as '^' is to "gcnew"
	GUI^ g = gcnew GUI();
	Application::Run(g);
	return 0;
}
