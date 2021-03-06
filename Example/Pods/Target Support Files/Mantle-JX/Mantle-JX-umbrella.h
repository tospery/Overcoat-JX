#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "MTLReflection.h"
#import "NSDictionary+MTLJSONKeyPath.h"
#import "NSError+MTLModelException.h"
#import "Mantle.h"
#import "MTLJSONAdapter.h"
#import "MTLModel+NSCoding.h"
#import "MTLModel.h"
#import "MTLTransformerErrorHandling.h"
#import "MTLValueTransformer.h"
#import "NSArray+MTLManipulationAdditions.h"
#import "NSDictionary+MTLManipulationAdditions.h"
#import "NSDictionary+MTLMappingAdditions.h"
#import "NSObject+MTLComparisonAdditions.h"
#import "NSValueTransformer+MTLInversionAdditions.h"
#import "NSValueTransformer+MTLPredefinedTransformerAdditions.h"

FOUNDATION_EXPORT double Mantle_JXVersionNumber;
FOUNDATION_EXPORT const unsigned char Mantle_JXVersionString[];

