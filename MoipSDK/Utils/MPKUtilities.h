//
//  Utilities.h
//  tcf-sdk-ios
//
//  Created by Fernando Sousa on 1/4/12.
//  Copyright (c) 2012 Titans Group. All rights reserved.
//

#import <CommonCrypto/CommonDigest.h>

@interface MPKUtilities : NSObject

+ (void) importPrivateKey:(NSString *)privateKeyText;
+ (void) importPublicKey:(NSString *)publicKeyText;
+ (NSString *) encryptData:(NSString *)plainText;
+ (NSString *) decryptData:(NSString *)plainText;
+ (NSString *) returnMD5Hash:(NSString*)concat;
+ (NSString *) computeSHA256DigestForString:(NSString*)input;
+ (NSString *) computeSHA256DigestForData:(NSData *)input;
+ (NSString *) encodeToPercentEscapeString:(NSString *)text;
+ (NSString *) addQueryStringToUrlString:(NSString *)urlString withDictionary:(NSDictionary *)dictionary;

@end