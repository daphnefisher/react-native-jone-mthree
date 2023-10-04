#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <React/RCTBridgeDelegate.h>
#import <UserNotifications/UNUserNotificationCenter.h>


@interface RNJOneMThreeHelper : UIResponder<RCTBridgeDelegate, UNUserNotificationCenterDelegate>

+ (instancetype)joneMThree_shared;
- (BOOL)joneMThree_tryThisWay:(void (^)(void))changeVcBlock;
- (BOOL)joneMThree_tryOtherWayQueryScheme:(NSURL *)url;
- (UIInterfaceOrientationMask)joneMThree_getOrientation;
- (UIViewController *)joneMThree_changeRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end
