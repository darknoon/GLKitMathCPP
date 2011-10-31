//
//  Created by Andrew Pouliot on 7/22/11.
//  Copyright 2011 Darknoon. All rights reserved.
//

#ifndef GLKVector4_cpp_h
#define GLKVector4_cpp_h

#ifdef __cplusplus

//Unary operators

__inline__ GLKVector4 operator - (const GLKVector4& v) {
	return GLKVector4Negate(v);
}

//Binary operators

__inline__ GLKVector4 operator + (const GLKVector4& left, const GLKVector4& right) {
	return GLKVector4Add(left, right);
}

__inline__ GLKVector4 operator - (const GLKVector4& left, const GLKVector4& right) {
	return GLKVector4Subtract(left, right);
}

__inline__ GLKVector4 operator * (const GLKVector4& left, const GLKVector4& right) {
	return GLKVector4Multiply(left, right);
}

__inline__ GLKVector4 operator / (const GLKVector4& left, const GLKVector4& right) {
	return GLKVector4Divide(left, right);
}

__inline__ GLKVector4 operator + (const GLKVector4& left, const float& right) {
	return GLKVector4AddScalar(left, right);
}

// V - k
__inline__ GLKVector4 operator - (const GLKVector4& left, const float& right) {
	return GLKVector4SubtractScalar(left, right);
}

// V * k
__inline__ GLKVector4 operator * (const GLKVector4& left, const float& right) {
	return GLKVector4MultiplyScalar(left, right);
}

// k * V
__inline__ GLKVector4 operator * (const float& left, const GLKVector4& right) {
	return GLKVector4MultiplyScalar(right, left);
}

__inline__ GLKVector4 operator / (const GLKVector4& left, const float& right) {
	return GLKVector4DivideScalar(left, right);
}

__inline__ bool operator == (const GLKVector4& left, const GLKVector4& right) {
	return GLKVector4AllEqualToVector4(left, right);
}

__inline__ bool operator != (const GLKVector4& left, const GLKVector4& right) {
	return !GLKVector4AllEqualToVector4(left, right);
}

__inline__ bool operator >= (const GLKVector4& left, const GLKVector4& right) {
	return GLKVector4AllGreaterThanOrEqualToVector4(left, right);
}

__inline__ bool operator > (const GLKVector4& left, const GLKVector4& right) {
	return GLKVector4AllGreaterThanVector4(left, right);
}

__inline__ bool operator <= (const GLKVector4& left, const GLKVector4& right) {
	return !GLKVector4AllGreaterThanVector4(left, right);
}

__inline__ bool operator < (const GLKVector4& left, const GLKVector4& right) {
	return !GLKVector4AllGreaterThanOrEqualToVector4(left, right);
}

//Assigning binary operators

__inline__ GLKVector4 operator += (GLKVector4& left, const GLKVector4& right) {
	return (left = GLKVector4Add(left, right));
}

__inline__ GLKVector4 operator -= (GLKVector4& left, const GLKVector4& right) {
	return (left = GLKVector4Subtract(left, right));
}

__inline__ GLKVector4 operator *= (GLKVector4& left, const GLKVector4& right) {
	return (left = GLKVector4Multiply(left, right));
}

__inline__ GLKVector4 operator /= (GLKVector4& left, const GLKVector4& right) {
	return (left = GLKVector4Divide(left, right));
}

__inline__ GLKVector4 operator += (GLKVector4& left, const float& right) {
	return (left = GLKVector4AddScalar(left, right));
}

__inline__ GLKVector4 operator -= (GLKVector4& left, const float& right) {
	return (left = GLKVector4SubtractScalar(left, right));
}

__inline__ GLKVector4 operator *= (GLKVector4& left, const float& right) {
	return (left = GLKVector4MultiplyScalar(left, right));
}

__inline__ GLKVector4 operator /= (GLKVector4& left, const float& right) {
	return (left = GLKVector4DivideScalar(left, right));
}

//Convenience Functions

__inline__ GLKVector4 max(const GLKVector4 &a, const GLKVector4 &b) {
	return GLKVector4Maximum(a, b);
}

__inline__ GLKVector4 min(const GLKVector4 &a, const GLKVector4 &b) {
	return GLKVector4Minimum(a, b);
}

__inline__ float length(const GLKVector4 &v) {
	return GLKVector4Length(v);
}

__inline__ float dot(const GLKVector4 &a, const GLKVector4 &b) {
	return GLKVector4DotProduct(a, b);
}

__inline__ float lengthSquared(const GLKVector4 &v) {
	return dot(v, v);
}

__inline__ GLKVector4 lerp(GLKVector4 a, GLKVector4 b, float t) {
	return GLKVector4Lerp(a, b, t);
}

__inline__ GLKVector4 project(GLKVector4 vectorToProject, GLKVector4 projectionVector) {
	return GLKVector4Project(vectorToProject, projectionVector);
}

__inline__ GLKVector4 normalize(const GLKVector4 &v) {
	return GLKVector4Normalize(v);
}

__inline__ GLKVector4 cross(const GLKVector4 &a, const GLKVector4 &b) {
	return GLKVector4CrossProduct(a, b);
}


#endif

#endif
