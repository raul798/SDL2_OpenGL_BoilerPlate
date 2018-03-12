#pragma once
#ifndef MATRIX_4_HPP
#define MATRIX_4_HPP

#include <iostream>

#include "vector_4.hpp"

namespace engine
{
	class matrix_4
	{
	public:
		//constructors
		matrix_4();
		matrix_4(float pArray[16]);
		matrix_4(float pValue0, float pValue1, float pValue2, float pValue3,
				 float pValue4, float pValue5, float pValue6, float pValue7,
				 float pValue8, float pValue9, float pValue10, float pValue11,
				 float pValue12, float pValue13, float pValue14, float pValue15);

		//functions
		float **get_matrix();
		float *get_matrix_row(int pRowIndex);
		float *get_matrix_column(int pColumnIndex);
		void identity();
		matrix_4 get_transpose();
		float& matrix_4::operator[](const int pRightSide);
		float get_matrix_value(int pRowIndex, int pColumnIndex);
		vector_3 get_angle();
		friend std::ostream& operator<< (std::ostream& pOstream, matrix_4 pMatrix);
		vector_4& translate(vector_4 pVector);
		matrix_4 rotate_from_degrees(float pDegrees);
		matrix_4 rotate_from_radians(float pRadians);
		matrix_4 rotate_x(float pRadians);
		matrix_4 rotate_y(float pRadians);
		matrix_4 rotate_z(float pRadians);
		matrix_4 invert();
		void transform();
	
		//arithmetic functions
		matrix_4  operator+(const matrix_4 pRightSide);
		matrix_4& operator+=(const matrix_4 pRightSide);
		matrix_4  operator-(const matrix_4 pRightSide);
		matrix_4& operator-=(const matrix_4 pRightSide);
		matrix_4  operator*(matrix_4& pRightSide);
		matrix_4  operator/(matrix_4 pRightSide);
		matrix_4& operator=(const matrix_4 pRightSide);
	private:
		float mMatrix[4][4];
	};
}

#endif