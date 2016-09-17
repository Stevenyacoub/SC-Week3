
// Motor.h
#ifndef MotorWeek3_H
#define MotorWeek3_H

class Motor
{
    private:
        int port;
    public:
        Motor(int _port);
        void setSpeed(double speed);
        void wait(int amount);
};

#endif


