// Copyright (c) 2019 Lordmau5
#pragma once

#include "plugin.h"
#include "common.h"

using namespace plugin;

class ColorHelper
{
public:
	static void RGBtoHSV(float fR, float fG, float fB, float& fH, float& fS, float& fV);
	static void HSVtoRGB(float& fR, float& fG, float& fB, float fH, float fS, float fV);
	static void HueShift(int& r, int& g, int& b, float shift, float value);
};
