//
//  Tests.m
//  Tests
//
//  Created by Andrew Pouliot on 10/31/11.
//  Copyright (c) 2011 Darknoon. All rights reserved.
//

#import "GLKMath_cpp.h"

#import "Tests.h"

@implementation Tests

- (void)testVector2;
{
	GLKVector2 a = (GLKVector2){1.0f, 2.0f};
	GLKVector2 b = (GLKVector2){3.0f, 4.5f};
	
	STAssertEquals( (a+b).x, a.x + b.x, @"Vector 2 failure");
	STAssertEquals( (a+b).y, a.y + b.y, @"Vector 2 failure");

	STAssertEquals( (a*b).x, a.x * b.x, @"Vector 2 failure");
	STAssertEquals( (a*b).y, a.y * b.y, @"Vector 2 failure");

	STAssertEquals( (a-b).x, a.x - b.x, @"Vector 2 failure");
	STAssertEquals( (a-b).y, a.y - b.y, @"Vector 2 failure");
	
	//Assigning operators
	
	GLKVector2 c = a;
	c += b;
	STAssertEquals( c.x, a.x + b.x, @"Vector 2 failure");
	STAssertEquals( c.y, a.y + b.y, @"Vector 2 failure");
	
	c -= b;
	STAssertEqualsWithAccuracy( c.x, a.x, 1e-8f, @"Vector 2 failure");
	STAssertEqualsWithAccuracy( c.y, a.y, 1e-8f, @"Vector 2 failure");

	c *= 0.0f;
	STAssertEqualsWithAccuracy( c.x, 0.0f, 1e-8f, @"Vector 2 failure");
	STAssertEqualsWithAccuracy( c.y, 0.0f, 1e-8f, @"Vector 2 failure");
	
	c += 10.0f * a;
	c /= 2.0f;
	STAssertEqualsWithAccuracy( c.x, 5.0f * a.x, 1e-8f, @"Vector 2 failure");
	STAssertEqualsWithAccuracy( c.y, 5.0f * a.y, 1e-8f, @"Vector 2 failure");

}

//TODO: write more tests!

@end
