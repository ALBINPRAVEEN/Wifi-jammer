#import "ANBeaconPart.h"

@implementation ANBeaconPart

@synthesize data;
@synthesize typeID;

- (id)initWithType:(UInt8)aTypeID data:(NSData *)theData {
    if ((self = [super init])) {
        data = theData;
        typeID = aTypeID;
    }
    return self;
}

@end
