//
//  AMPError.h
//  AmpiriSDK
//
//  Created by Glispa GmbH on 08.04.15.
//  Copyright (c) 2015 Glispa GmbH All rights reserved.
//

#import <Foundation/Foundation.h>


extern NSString *const errorDomain;

typedef enum : NSUInteger {
    AMPErrorInvalidHTTPStatusCode = 900,
    AMPErrorCodeNoAd,
    AMPErrorCodeLoadingProblem,
    AMPErrorCodeUnknownError,
    AMPErrorCodeDND,
    AMPErrorResponseStatus,
    AMPErrorInvalidHandshake,
} AMPErrorCode;

@interface AMPError : NSError

@property(nonatomic, readonly) NSString *amp_errorDescription;

+ (id)errorWithCode:(NSInteger)errorCode andLocalizedDescription:(NSString *)localizedDescription;

- (id)initWithCode:(NSInteger)errorCode andLocalizedDescription:(NSString *)localizedDescription;

+ (instancetype)amp_invalidHTTPStatusError;

+ (instancetype)amp_noAdError;

+ (instancetype)amp_adLoadingError;

+ (instancetype)amp_unknownError;

+ (instancetype)amp_dndError;

+ (instancetype)amp_responseStatusError;

+ (instancetype)amp_InvalidHandshakeError;

@end
