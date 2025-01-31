// Copyright (c) 2019 Lordmau5
#pragma once

#include "TimedEffect.h"

class Framerate : public TimedEffect
{
private:
	int oldFramerate = 25;
	int framerate = 25;

public:
	Framerate(int _framerate, int _duration, std::string _description);

	void Enable() override;
	void Disable() override;

	void HandleTick() override;
};
