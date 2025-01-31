// Copyright (c) 2019 Lordmau5
#include "LagEffect.h"

LagEffect::LagEffect(int _duration, std::string _description)
	: TimedEffect(_duration, _description, "game_speed") {}

void LagEffect::Disable() {
	CTimer::ms_fTimeScale = 1.0f;

	TimedEffect::Disable();
}

void LagEffect::HandleTick() {
	if (wait > 0) {
		wait -= CalculateTick();
		return;
	}

	CTimer::ms_fTimeScale = RandomHelper::Random(0.1f, 2.0f);
	wait = RandomHelper::Random(50, 200);
}
