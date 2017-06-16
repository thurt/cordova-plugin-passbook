#import <Cordova/CDVPlugin.h>

@interface CDVPassbook : CDVPlugin

- (void)available:(CDVInvokedUrlCommand*)command;
- (void)downloadPass:(CDVInvokedUrlCommand*)command;
- (void)addPass:(CDVInvokedUrlCommand*)command;
- (void)openPass:(CDVInvokedUrlCommand*)command;
- (void)isPassAdded:(CDVInvokedUrlCommand*)command;

@end