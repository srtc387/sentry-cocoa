#import <Foundation/Foundation.h>

#import "SentryDefines.h"
#import "SentryRateLimits.h"
#import "SentryRequestManager.h"
#import "SentryTransport.h"

@class SentryEnvelopeRateLimit, SentryOptions, SentryEvent, SentryFileManager;

NS_ASSUME_NONNULL_BEGIN

@interface SentryHttpTransport : NSObject <SentryTransport>
SENTRY_NO_INIT

- (id)initWithOptions:(SentryOptions *)options
          fileManager:(SentryFileManager *)fileManager
       requestManager:(id<SentryRequestManager>)requestManager
           rateLimits:(id<SentryRateLimits>)rateLimits
    envelopeRateLimit:(SentryEnvelopeRateLimit *)envelopeRateLimit;

@end

NS_ASSUME_NONNULL_END
