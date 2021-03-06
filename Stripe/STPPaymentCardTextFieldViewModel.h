//
//  STPPaymentCardTextFieldViewModel.h
//  Stripe
//
//  Created by Jack Flintermann on 7/21/15.
//  Copyright (c) 2015 Stripe, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "STPCard.h"
#import "STPCardValidator.h"
#import "STPPostalCodeValidator.h"

typedef NS_ENUM(NSInteger, STPCardFieldType) {
    STPCardFieldTypeNumber,
    STPCardFieldTypeExpiration,
    STPCardFieldTypeCVC,
    STPCardFieldTypePostalCode,
    STPCardFieldTypeName
};

@interface STPPaymentCardTextFieldViewModel : NSObject

@property (nonatomic, readwrite, copy, nullable) NSString *cardNumber;
@property (nonatomic, readonly, nullable) NSString *compressedCardNumber;
@property (nonatomic, readwrite, copy, nullable) NSString *rawExpiration;
@property (nonatomic, readonly, nullable) NSString *expirationMonth;
@property (nonatomic, readonly, nullable) NSString *expirationYear;
@property (nonatomic, readwrite, copy, nullable) NSString *cvc;
@property (nonatomic, readwrite, assign) BOOL postalCodeRequired;
@property (nonatomic, readwrite, copy, nullable) NSString *postalCode;
@property (nonatomic, readwrite, copy, nullable) NSString *postalCodeCountryCode;
@property (nonatomic, readonly) STPCardBrand brand;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, readwrite, copy, nullable) NSString *name;

- (nonnull NSString *)defaultPlaceholder;

- (STPCardValidationState)validationStateForField:(STPCardFieldType)fieldType;

@end
