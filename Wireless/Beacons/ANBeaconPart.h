#import <Foundation/Foundation.h>

@interface ANBeaconPart : NSObject {
    NSData * data;
    UInt8 typeID;
}

@property (readonly) NSData * data;
@property (readonly) UInt8 typeID;

- (id)initWithType:(UInt8)aTypeID data:(NSData *)theData;

@end
