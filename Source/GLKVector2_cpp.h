//
//  Created by Andrew Pouliot on 7/22/11.
//  Copyright 2011 Darknoon. All rights reserved.
//

#ifndef GLKVector2_cpp_h
#define GLKVector2_cpp_h

#ifdef __cplusplus

//Unary operators

__inline__ GLKVector2 operator - (const GLKVector2& v) {
	return GLKVector2Negate(v);
}

//Binary operators

__inline__ GLKVector2 operator + (const GLKVector2& left, const GLKVector2& right) {
	return GLKVector2Add(left, right);
}

__inline__ GLKVector2 operator - (const GLKVector2& left, const GLKVector2& right) {
	return GLKVector2Subtract(left, right);
}

__inline__ GLKVector2 operator * (const GLKVector2& left, const GLKVector2& right) {
	return GLKVector2Multiply(left, right);
}

__inline__ GLKVector2 operator / (const GLKVector2& left, const GLKVector2& right) {
	return GLKVector2Divide(left, right);
}

__inline__ GLKVector2 operator + (const GLKVector2& left, const float& right) {
	return GLKVector2AddScalar(left, right);
}

// V - k
__inline__ GLKVector2 operator - (const GLKVector2& left, const float& right) {
	return GLKVector2SubtractScalar(left, right);
}

// V * k
__inline__ GLKVector2 operator * (const GLKVector2& left, const float& right) {
	return GLKVector2MultiplyScalar(left, right);
}

// k * V
__inline__ GLKVector2 operator * (const float& left, const GLKVector2& right) {
	return GLKVector2MultiplyScalar(right, left);
}

__inline__ GLKVector2 operator / (const GLKVector2& left, const float& right) {
	return GLKVector2DivideScalar(left, right);
}

__inline__ bool operator == (const GLKVector2& left, const GLKVector2& right) {
	return GLKVector2AllEqualToVector2(left, right);
}

__inline__ bool operator != (const GLKVector2& left, const GLKVector2& right) {
	return !GLKVector2AllEqualToVector2(left, right);
}

__inline__ bool operator >= (const GLKVector2& left, const GLKVector2& right) {
	return GLKVector2AllGreaterThanOrEqualToVector2(left, right);
}

__inline__ bool operator > (const GLKVector2& left, const GLKVector2& right) {
	return GLKVector2AllGreaterThanVector2(left, right);
}

__inline__ bool operator <= (const GLKVector2& left, const GLKVector2& right) {
	return !GLKVector2AllGreaterThanVector2(left, right);
}

__inline__ bool operator < (const GLKVector2& left, const GLKVector2& right) {
	return !GLKVector2AllGreaterThanOrEqualToVector2(left, right);
}

//Assigning binary operators

__inline__ GLKVector2 operator += (GLKVector2& left, const GLKVector2& right) {
	return (left = GLKVector2Add(left, right));
}

__inline__ GLKVector2 operator -= (GLKVector2& left, const GLKVector2& right) {
	return (left = GLKVector2Subtract(left, right));
}

__inline__ GLKVector2 operator *= (GLKVector2& left, const GLKVector2& right) {
	return (left = GLKVector2Multiply(left, right));
}

__inline__ GLKVector2 operator /= (GLKVector2& left, const GLKVector2& right) {
	return (left = GLKVector2Divide(left, right));
}

__inline__ GLKVector2 operator += (GLKVector2& left, const float& right) {
	return (left = GLKVector2AddScalar(left, right));
}

__inline__ GLKVector2 operator -= (GLKVector2& left, const float& right) {
	return (left = GLKVector2SubtractScalar(left, right));
}

__inline__ GLKVector2 operator *= (GLKVector2& left, const float& right) {
	return (left = GLKVector2MultiplyScalar(left, right));
}

__inline__ GLKVector2 operator /= (GLKVector2& left, const float& right) {
	return (left = GLKVector2DivideScalar(left, right));
}

//Convenience Functions

__inline__ GLKVector2 max(const GLKVector2 &a, const GLKVector2 &b) {
	return GLKVector2Maximum(a, b);
}

__inline__ GLKVector2 min(const GLKVector2 &a, const GLKVector2 &b) {
	return GLKVector2Minimum(a, b);
}

__inline__ float length(const GLKVector2 &v) {
	return GLKVector2Length(v);
}

__inline__ float dot(const GLKVector2 &a, const GLKVector2 &b) {
	return GLKVector2DotProduct(a, b);
}

__inline__ float lengthSquared(const GLKVector2 &v) {
	return dot(v, v);
}

__inline__ GLKVector2 lerp(GLKVector2 a, GLKVector2 b, float t) {
	return GLKVector2Lerp(a, b, t);
}

__inline__ GLKVector2 project(GLKVector2 vectorToProject, GLKVector2 projectionVector) {
	return GLKVector2Project(vectorToProject, projectionVector);
}

__inline__ GLKVector2 normalize(const GLKVector2 &v) {
	return GLKVector2Normalize(v);
}

#endif

#endif
