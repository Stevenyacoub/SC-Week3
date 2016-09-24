/*
 * Shooter.cpp
 *
 *  Created on: Sep 17, 2016
 *      Author: Steven
 */

#include "Shooter.h"


Shooter::Shooter(int leftport, int rightport )
:motorLeft(new Motor(leftport)),motorRight(new Motor(rightport)){
	// TODO Auto-generated constructor stub

}

void Shooter:: shootBall(){
	motorLeft ->setSpeed(0.8);
	motorRight -> setSpeed(0.8);
	motorLeft -> wait(600);
	motorRight -> wait(600);
	motorRight ->setSpeed(0);
	motorLeft ->setSpeed(0);

}

Shooter::~Shooter() {
	// TODO Auto-generated destructor stub
	delete motorLeft;
	delete motorRight;
}

