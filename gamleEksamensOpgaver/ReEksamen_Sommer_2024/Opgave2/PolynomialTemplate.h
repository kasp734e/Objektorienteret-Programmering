#pragma once

//Opgave 2 a)
#include <sstream>
#include<stdexcept>
#include <string>
#include <vector>


template<typename T>
class PolynomialTemplate
{
public:
PolynomialTemplate(const std::vector<T>& coefficients)
	: coefficients_(coefficients.empty() ? std::vector<T>{0} : coefficients)
{
}

T operator()(const T value) const
{
	T res = 0;
	T power(1);
	for (const auto& coefficient : coefficients_)
	{
		res = res + coefficient * power;
		power = power * value;
	}
	return res;
}

PolynomialTemplate operator+(const PolynomialTemplate& other) const
{
	const size_t maxSize = std::max(other.coefficients_.size(), coefficients_.size());
	std::vector<T> newCoefficients;
	for (size_t i = 0; i < maxSize; ++i)
	{
		const T value1 = (i < other.size()) ? other.coefficients_[i] : 0;
		const T value2 = (i < size()) ? coefficients_[i] : 0;
		newCoefficients.push_back(value1 + value2);
	}
	return {newCoefficients};
}

size_t order() const
{
	return coefficients_.size() - 1;
}

size_t size() const
{
	return coefficients_.size();
}

std::string toString() const
{
	std::ostringstream res;

	for (size_t i = 0; i < coefficients_.size(); ++i)
	{
		if (i > 0)
		{
			res << " + ";
		}
		res << coefficients_[i] << "*x^" << i;
	}
	return res.str();
}

private:
	
	std::vector<T> coefficients_;
};

