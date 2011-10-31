//
//  Created by Andrew Pouliot on 7/22/11.
//  Copyright 2011 Darknoon. All rights reserved.
//

#ifndef GLKMatrix4_cpp_h
#define GLKMatrix4_cpp_h

#ifdef __cplusplus

#include "GLKVector2_cpp.h"
#include "GLKVector3_cpp.h"
#include "GLKVector4_cpp.h"

__inline__ GLKMatrix4 operator * (const GLKMatrix4& left, const GLKMatrix4& right) {
	return GLKMatrix4Multiply(left, right);
}

__inline__ GLKMatrix4 operator + (const GLKMatrix4& left, const GLKMatrix4& right) {
	return GLKMatrix4Add(left, right);
}

__inline__ GLKMatrix4 operator - (const GLKMatrix4& left, const GLKMatrix4& right) {
	return GLKMatrix4Subtract(left, right);
}

__inline__ GLKVector4 operator * (const GLKMatrix4& left, const GLKVector4& right) {
	//TODO: which should we use?
	return GLKMatrix4MultiplyVector4(left, right);
	//return GLKMatrix4MultiplyVector3WithTranslation(left, right);
}

__inline__ GLKVector3 operator * (const GLKMatrix4& left, const GLKVector3& right) {
	//TODO: which should we use?
	return GLKMatrix4MultiplyVector3(left, right);
	//return GLKMatrix4MultiplyVector3WithTranslation(left, right);
}

__inline__ GLKVector3 operator * (const GLKMatrix4& left, const GLKVector2& right) {
	//TODO: which should we use?
	return GLKMatrix4MultiplyVector3(left, (GLKVector3){right.x, right.y, 0.0f});
	//return GLKMatrix4MultiplyVector3WithTranslation(left, right);
}

#endif

#endif
