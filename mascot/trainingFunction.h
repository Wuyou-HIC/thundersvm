/*
 * testTrainer.h
 *
 *  Created on: 31/10/2013
 *      Author: zeyi
 */

#ifndef TESTTRAINER_H_
#define TESTTRAINER_H_

#include "svmParam.h"
#include <iostream>

using std::string;

void trainSVM(SVMParam &param, string strTrainingFileName, int nNumofFeature);

#endif /* TESTTRAINER_H_ */