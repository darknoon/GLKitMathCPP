//
//  Created by Andrew Pouliot on 7/22/11.
//  Copyright 2011 Darknoon. All rights reserved.
//

#ifndef GLKMatrix3_cpp_h
#define GLKMatrix3_cpp_h

#ifdef __cplusplus

#include "GLKVector2_cpp.h"
#include "GLKVector3_cpp.h"
#include "GLKVector4_cpp.h"

__inline__ GLKMatrix3 operator * (const GLKMatrix3& left, const GLKMatrix3& right) {
	return GLKMatrix3Multiply(left, right);
}

__inline__ GLKMatrix3 operator + (const GLKMatrix3& left, const GLKMatrix3& right) {
	return GLKMatrix3Add(left, right);
}

__inline__ GLKMatrix3 operator - (const GLKMatrix3& left, const GLKMatrix3& right) {
	return GLKMatrix3Subtract(left, right);
}

__inline__ GLKVector3 operator * (const GLKMatrix3& left, const GLKVector3& right) {
	//TODO: which should we use?
	return GLKMatrix3MultiplyVector3(left, right);
	//return GLKMatrix3MultiplyVector3WithTranslation(left, right);
}

__inline__ GLKVector3 operator * (const GLKMatrix3& left, const GLKVector2& right) {
	//TODO: which should we use?
	return GLKMatrix3MultiplyVector3(left, (GLKVector3){right.x, right.y, 0.0f});
	//return GLKMatrix3MultiplyVector3WithTranslation(left, right);
}

#endif

#endif
