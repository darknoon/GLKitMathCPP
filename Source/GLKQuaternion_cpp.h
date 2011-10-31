//
//  Created by Andrew Pouliot on 7/22/11.
//  Copyright 2011 Darknoon. All rights reserved.
//

#ifndef GLKQuaternion_cpp_h
#define GLKQuaternion_cpp_h

#import <GLKit/GLKQuaternion.h>

#ifdef __cplusplus

//Binary operators

__inline__ GLKQuaternion operator + (const GLKQuaternion& left, const GLKQuaternion& right) {
	return GLKQuaternionAdd(left, right);	
}
__inline__ GLKQuaternion operator - (const GLKQuaternion& left, const GLKQuaternion& right) {
	return GLKQuaternionSubtract(left, right);
}

__inline__ GLKQuaternion operator * (const GLKQuaternion& left, const GLKQuaternion& right) {
	return GLKQuaternionMultiply(left, right);
}

//Assigning operators

__inline__ GLKQuaternion operator += (GLKQuaternion& left, const GLKQuaternion& right) {
	return (left = GLKQuaternionAdd(left, right));
}
__inline__ GLKQuaternion operator -= (GLKQuaternion& left, const GLKQuaternion& right) {
	return (left = GLKQuaternionSubtract(left, right));
}

__inline__ GLKQuaternion operator *= (GLKQuaternion& left, const GLKQuaternion& right) {
	return (left = GLKQuaternionMultiply(left, right));
}


//Convenience functions

__inline__ float length (GLKQuaternion& q) {
	return GLKQuaternionLength(q);
}

__inline__ GLKQuaternion slerp (GLKQuaternion& a, GLKQuaternion& b, float t) {
	return GLKQuaternionSlerp(a, b, t);
}

#endif

#endif
