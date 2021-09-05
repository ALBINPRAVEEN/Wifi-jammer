#import <Cocoa/Cocoa.h>
#import "CarbonAppProcess.h"

typedef enum {
    ANViewSlideDirectionForward,
    ANViewSlideDirectionBackward
} ANViewSlideDirection;

@class ANListView;

@interface ANAppDelegate : NSObject <NSApplicationDelegate> {
    NSView * activeView;
    NSView * nextView;
    BOOL animating;
    ANListView * networkList;
}

@property (assign) IBOutlet NSWindow * window;

- (void)pushView:(NSView *)view direction:(ANViewSlideDirection)direction;
- (void)animationComplete;
- (void)showNetworkList;

@end
