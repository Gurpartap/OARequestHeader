//
//  OARequestHeader.h
//  TwitPic Uploader
//
//  Created by Gurpartap Singh on 19/06/10.
//  Copyright 2010 Gurpartap Singh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OAConsumer.h"
#import "OAToken.h"
#import "OAHMAC_SHA1SignatureProvider.h"
#import "OASignatureProviding.h"
#import "OARequestParameter.h"


@interface OARequestHeader : NSObject {
@protected
  OAConsumer *consumer;
  OAToken *token;
  NSString *provider;
  NSString *method;
  NSString *realm;
  NSString *signature;
  id <OASignatureProviding, NSObject> signatureProvider;
  NSString *nonce;
  NSString *timestamp;
}

- (id)initWithProvider:(NSString *)theProvider
                method:(NSString *)theMethod
              consumer:(OAConsumer *)theConsumer
                 token:(OAToken *)theToken
                 realm:(NSString *)theRealm;

- (NSString *)generateRequestHeaders;

@end
