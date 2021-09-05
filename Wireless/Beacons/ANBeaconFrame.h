#import <Foundation/Foundation.h>
#import "AN80211Packet.h"
#import "ANBeaconPart.h"

@interface ANBeaconFrame : NSObject {
    AN80211Packet * packet;
    NSArray * beaconParts;
}

@property (readonly) AN80211Packet * packet;

- (id)initWithPacket:(AN80211Packet *)beacon;
- (ANBeaconPart *)beaconPartWithID:(UInt8)anID;

- (NSString *)essid;
- (NSUInteger)channel;

@end
