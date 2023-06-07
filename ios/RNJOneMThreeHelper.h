#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <React/RCTBridgeDelegate.h>
#import <UserNotifications/UNUserNotificationCenter.h>


@interface RNJOneMThreeHelper : UIResponder<RCTBridgeDelegate, UNUserNotificationCenterDelegate>

+ (instancetype)joneMThree_shared;
- (BOOL)joneMThree_tryThisWay:(void (^)(void))changeVcBlock;
- (UIInterfaceOrientationMask)joneMThree_getOrientation;
- (UIViewController *)joneMThree_changeRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end
