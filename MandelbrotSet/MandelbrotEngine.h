#pragma once

#include "glm/vec3.hpp"

class MandelbrotEngine
{
public:
	inline void setNumberOfIterations(int&& p_numberOfIterations) { m_numberOfIterations = p_numberOfIterations; }
	inline int getNumberOfIterations() { return m_numberOfIterations; }
private:
	const glm::vec3 m_insideColor = { 0, 0, 0 }; // Color for points inside mandelbrot set
	const glm::vec3 m_outsideColor = { 0, 6, 90 }; // The same but those outside

	int m_numberOfIterations;
};