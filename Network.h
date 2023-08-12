#ifndef NETWORK_H
#define NETWORK_H

#include <vector>
#include "Layer.h"

class Network {
private:
	std::vector<Layer*> layers;
	int layerCount;


	// Hyperparams
	double learningRate;


	// Dtor
	~Network() {
		for (int i = 0; i < layerCount; i++) {
			delete layers[i];
		}
	}

public:
	// Runs the model forwards, given an input
	void forwards(std::vector<int> input);

	// Runs the model backwards using backpropagation
	void backwards();



	// Appends a new layer to the vector
	template <typename T>
	void addLayer(T& newLayer) {
		// type must have a copy ctor
		Layer* temp = new T(newLayer);
		layers.push_back(temp);
		layerCount++;
		return;
	}


	// TODO: Needs Big3
};


#endif