#include "Network.h"


void Network::forwards(std::vector<int> input) {
	for (int i = 0; i < layerCount - 1; i++) {
		(*layers[i]).fw(layers[i+1]); // CHECK: Correct syntax?
	}
}

// Runs the model backwards using backpropagation
void Network::backwards() {
	for (int i = layerCount-1; i > 0; i--) {
		(*layers[i]).bw(); // FIXME: get input layers of prior layers
	}
}