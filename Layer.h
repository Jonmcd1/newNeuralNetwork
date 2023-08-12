#ifndef LAYER_H
#define LAYER_H

#include <string>

class Layer {
private:
	std::string name;

	// Meta
	int nNodes;

public:
	// Forward pass
	virtual void fw(Layer* next) = 0;

	// Backpropagation
	virtual void bw() = 0;

	virtual void setInputs() = 0;

	virtual int getNNodes() {
		return nNodes;
	}


	// TODO: Needs Big3?

};


#endif