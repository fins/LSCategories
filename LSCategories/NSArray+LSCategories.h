// Copyright (c) 2016 Leszek S
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

@interface NSArray (LSCategories)

/**
 Returns array with objects in reversed order.

 @return Array with objects in reversed order.
 */
- (NSArray *)lsReveresedArray;

/**
 Returns array with objects in random order.

 @return Array with objects in random order.
 */
- (NSArray *)lsShuffledArray;

/**
 Returns random object from array.

 @return Random object from array.
 */
- (id)lsRandomObject;

/**
 Returns array of given size with random objects.

 @param size Number of random elements to pick from the array.
 @return Array of given size with random objects.
 */
- (NSArray *)lsRandomObjectsWithSize:(NSUInteger)size;

/**
 Returns object at given index of nil if index is out of valid range.

 @param index Index of object.
 @return Object at given index of nil if index is out of valid range.
 */
- (id)lsSafeObjectAtIndex:(NSUInteger)index;

@end
