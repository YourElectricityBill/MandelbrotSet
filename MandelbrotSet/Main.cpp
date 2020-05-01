#include <iostream>

#include <complex>

void mandelbrot(std::complex<double>&& p_constant, int p_numberOfIterations);

void rvalue(int&& p_smtg);

int main()
{
	//mandelbrot(-1, 6);

	int a, b;
	
	return 0;
}

void rvalue(int&& p_smtg)
{

}

void mandelbrot(std::complex<double>&& p_constant, int p_numberOfIterations)
{
	int z = 0;
	std::complex<double> c = p_constant;
	// f(z) = z^2 + c;
	for (int iteration = 0; iteration < p_numberOfIterations; ++iteration)
	{
		//int f = std::pow(z, 2) + c;
		std::cout << "f(" << z << ") = " << z << "^2 + " << c << " = " << f << "\n";
		z = std::move(f);
	}
}
