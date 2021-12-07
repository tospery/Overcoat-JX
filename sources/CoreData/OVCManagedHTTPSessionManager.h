// OVCManagedHTTPRequestOperationManager.h
//
// Copyright (c) 2013-2016 Overcoat Team
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

#import <Overcoat/OVCHTTPSessionManager.h>
#import <CoreData/CoreData.h>

NS_ASSUME_NONNULL_BEGIN

/**
 `OVCManagedHTTPSessionManager` provides methods to communicate with a web application over HTTP,
 mapping responses into native model objects which can optionally be persisted in a Core Data store.
 */
@interface OVCManagedHTTPSessionManager : OVCHTTPSessionManager

/**
 Initializes the receiver with the specified base URL and managed object context.

 This is the designated initializer.

 @param url The base URL for the HTTP client.
 @param context An optional managed object context that will be used to persist model objects
 parsed from a response. If the context concurrency type is not
 `NSPrivateQueueConcurrencyType`, a private context will be used to perform
 insertions in the background.
 @param configuration The configuration used to create the managed session.

 @return An initialized client.
 */
- (instancetype)initWithBaseURL:(OVC_NULLABLE NSURL *)url
           managedObjectContext:(OVC_NULLABLE NSManagedObjectContext *)context
           sessionConfiguration:(OVC_NULLABLE NSURLSessionConfiguration *)configuration NS_DESIGNATED_INITIALIZER;

/**
 The managed object context that will be used to persist model objects parsed from a response.
 */
@property (strong, nonatomic, readonly, OVC_NULLABLE) NSManagedObjectContext *managedObjectContext;

@end

NS_ASSUME_NONNULL_END
