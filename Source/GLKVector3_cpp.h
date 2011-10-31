//
//  Created by Andrew Pouliot on 7/22/11.
//  Copyright 2011 Darknoon. All rights reserved.
//

#ifndef GLKVector3_cpp_h
#define GLKVector3_cpp_h

#ifdef __cplusplus

//Unary operators

__inline__ GLKVector3 operator - (const GLKVector3& v) {
	return GLKVector3Negate(v);
}

//Binary operators

__inline__ GLKVector3 operator + (const GLKVector3& left, const GLKVector3& right) {
	return GLKVector3Add(left, right);
}

__inline__ GLKVector3 operator - (const GLKVector3& left, const GLKVector3& right) {
	return GLKVector3Subtract(left, right);
}

__inline__ GLKVector3 operator * (const GLKVector3& left, const GLKVector3& right) {
	return GLKVector3Multiply(left, right);
}

__inline__ GLKVector3 operator / (const GLKVector3& left, const GLKVector3& right) {
	return GLKVector3Divide(left, right);
}

__inline__ GLKVector3 operator + (const GLKVector3& left, const float& right) {
	return GLKVector3AddScalar(left, right);
}

// V - k
__inline__ GLKVector3 operator - (const GLKVector3& left, const float& right) {
	return GLKVector3SubtractScalar(left, right);
}

// V * k
__inline__ GLKVector3 operator * (const GLKVector3& left, const float& right) {
	return GLKVector3MultiplyScalar(left, right);
}

// k * V
__inline__ GLKVector3 operator * (const float& left, const GLKVector3& right) {
	return GLKVector3MultiplyScalar(right, left);
}

__inline__ GLKVector3 operator / (const GLKVector3& left, const float& right) {
	return GLKVector3DivideScalar(left, right);
}

__inline__ bool operator == (const GLKVector3& left, const GLKVector3& right) {
	return GLKVector3AllEqualToVector3(left, right);
}

__inline__ bool operator != (const GLKVector3& left, const GLKVector3& right) {
	return !GLKVector3AllEqualToVector3(left, right);
}

__inline__ bool operator >= (const GLKVector3& left, const GLKVector3& right) {
	return GLKVector3AllGreaterThanOrEqualToVector3(left, right);
}

__inline__ bool operator > (const GLKVector3& left, const GLKVector3& right) {
	return GLKVector3AllGreaterThanVector3(left, right);
}

__inline__ bool operator <= (const GLKVector3& left, const GLKVector3& right) {
	return !GLKVector3AllGreaterThanVector3(left, right);
}

__inline__ bool operator < (const GLKVector3& left, const GLKVector3& right) {
	return !GLKVector3AllGreaterThanOrEqualToVector3(left, right);
}

//Assigning binary operators

__inline__ GLKVector3 operator += (GLKVector3& left, const GLKVector3& right) {
	return (left = GLKVector3Add(left, right));
}

__inline__ GLKVector3 operator -= (GLKVector3& left, const GLKVector3& right) {
	return (left = GLKVector3Subtract(left, right));
}

__inline__ GLKVector3 operator *= (GLKVector3& left, const GLKVector3& right) {
	return (left = GLKVector3Multiply(left, right));
}

__inline__ GLKVector3 operator /= (GLKVector3& left, const GLKVector3& right) {
	return (left = GLKVector3Divide(left, right));
}

__inline__ GLKVector3 operator += (GLKVector3& left, const float& right) {
	return (left = GLKVector3AddScalar(left, right));
}

__inline__ GLKVector3 operator -= (GLKVector3& left, const float& right) {
	return (left = GLKVector3SubtractScalar(left, right));
}

__inline__ GLKVector3 operator *= (GLKVector3& left, const float& right) {
	return (left = GLKVector3MultiplyScalar(left, right));
}

__inline__ GLKVector3 operator /= (GLKVector3& left, const float& right) {
	return (left = GLKVector3DivideScalar(left, right));
}

//Convenience Functions

__inline__ GLKVector3 max(const GLKVector3 &a, const GLKVector3 &b) {
	return GLKVector3Maximum(a, b);
}

__inline__ GLKVector3 min(const GLKVector3 &a, const GLKVector3 &b) {
	return GLKVector3Minimum(a, b);
}

__inline__ float length(const GLKVector3 &v) {
	return GLKVector3Length(v);
}

__inline__ float dot(const GLKVector3 &a, const GLKVector3 &b) {
	return GLKVector3DotProduct(a, b);
}

__inline__ float lengthSquared(const GLKVector3 &v) {
	return dot(v, v);
}

__inline__ GLKVector3 lerp(GLKVector3 a, GLKVector3 b, float t) {
	return GLKVector3Lerp(a, b, t);
}

__inline__ GLKVector3 project(GLKVector3 vectorToProject, GLKVector3 projectionVector) {
	return GLKVector3Project(vectorToProject, projectionVector);
}

__inline__ GLKVector3 normalize(const GLKVector3 &v) {
	return GLKVector3Normalize(v);
}

__inline__ GLKVector3 cross(const GLKVector3 &a, const GLKVector3 &b) {
	return GLKVector3CrossProduct(a, b);
}

#endif

#endif
