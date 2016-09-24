/*
 * Shooter.h
 *
 *  Created on: Sep 17, 2016
 *      Author: Steven
 */

#ifndef SHOOTER_H_
#define SHOOTER_H_
#include "Motor.h"

class Shooter {
public:
	Shooter(int leftport, int rightport);
	void shootBall();
	virtual ~Shooter();
private:
	Motor* motorLeft;
	Motor* motorRight;
};

#endif /* SHOOTER_H_ */
