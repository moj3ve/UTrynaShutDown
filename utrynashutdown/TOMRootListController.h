#import <Preferences/PSListController.h>
#import <Preferences/PSTableCell.h>
#import <Preferences/PSSpecifier.h>
#import <CepheiPrefs/HBRootListController.h>
#import <CepheiPrefs/HBAppearanceSettings.h>
#import <Cephei/HBRespringController.h>
#import <Cephei/HBPreferences.h>

@interface TOMRootListController : HBRootListController 
@property (nonatomic, retain) NSMutableDictionary *savedSpecifiers;
@end

@interface TOMRootViewController : UIViewController<UIAlertViewDelegate> 
@end

@interface PSListController (iOS12Plus)
-(BOOL)containsSpecifier:(id)arg1;
@end

@interface NSTask : NSObject
@property(copy) NSArray *arguments;
@property(copy) NSString *currentDirectoryPath;
@property(copy) NSDictionary *environment;
@property(copy) NSString *launchPath;
@property(readonly) int processIdentifier;
@property long long qualityOfService;
@property(getter=isRunning, readonly) bool running;
@property(retain) id standardError;
@property(retain) id standardInput;
@property(retain) id standardOutput;
@property(copy) id /* block */ terminationHandler;
@property(readonly) long long terminationReason;
@property(readonly) int terminationStatus;

+ (id)currentTaskDictionary;
+ (id)launchedTaskWithDictionary:(id)arg1;
+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2;

- (id)init;
- (void)interrupt;
- (bool)isRunning;
- (void)launch;
- (int)processIdentifier;
- (long long)qualityOfService;
- (bool)resume;
- (bool)suspend;
- (long long)suspendCount;
- (void)terminate;
- (id /* block */)terminationHandler;
- (long long)terminationReason;
- (int)terminationStatus;
@end

@interface UTrynaShutDownHeaderCell : PSTableCell 
@end





