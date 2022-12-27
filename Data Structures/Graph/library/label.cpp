#include "../header/graph.h"

void Graph::lableInit() {
	label.resize(_matrSize, false);
}

void Graph::lableReload() {
	for (int i = 0; i < label.size(); i++)
		label[i] = false;
}