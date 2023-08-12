#ifndef L_FULLYCONNECTED_H
#define L_FULLYCONNECTED_H

#include <vector>
#include <iostream>

#include "Layer.h"

class L_FullyConnected : public Layer {
private:
	// Input vals
	std::vector<double> inputs;

	// Learned vals
	std::vector<std::vector<double>> weights;
	double bias;

	// Meta
	int nNodes;

public:
	void fw(Layer* next);

	void bw(const std::vector<double>& outputs);

	void setInputs(const std::vector<double>& input);

	// TODO: Needs Big3

};


#endif