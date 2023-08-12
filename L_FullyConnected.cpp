#include "L_FullyConnected.h"


void L_FullyConnected::fw(Layer* next) {
	std::vector<double> outputs(next->getNNodes(), 0); // CHECK: arg order?

	for (int i = 0; i < outputs.size(); i++) {
		for (int j = 0; j < nNodes; j++) {
			outputs[i] += inputs[j] * weights[j][i];
		}
		outputs[i] += bias;
	}

	next->setInputs(outputs);
	return;
}

void L_FullyConnected::bw(const std::vector<double>& outputs) {
	// May need: input vals, output vals
	// Iterate through each learned value once and take the partial deriv
	// Update by the learning rate for each
}


void L_FullyConnected::setInputs(const std::vector<double>& input) {
	if (input.size() != nNodes) {
		std::cout << "Invalid input size.\n";
		exit(1);
	}
	
	inputs = input;
	return;
}