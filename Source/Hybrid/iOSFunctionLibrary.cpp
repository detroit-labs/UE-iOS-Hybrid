// Fill out your copyright notice in the Description page of Project Settings.

#include "iOSFunctionLibrary.h"

#if PLATFORM_IOS
#include "IOSAppDelegate.h"
#import <UIKit/UIKit.h>
#endif

void UiOSFunctionLibrary::showNativeUI() {
	
#if PLATFORM_IOS
	NSBundle *bundle = [NSBundle bundleWithURL:[[NSBundle mainBundle] URLForResource:@"Hybrid" withExtension:@"bundle"]];
	UIStoryboard *mainStoryboard = [UIStoryboard storyboardWithName:@"Main" bundle:bundle];
	UIViewController *viewController = [mainStoryboard instantiateInitialViewController];
	
	dispatch_async(dispatch_get_main_queue(), ^{
		[[IOSAppDelegate GetDelegate].IOSController presentViewController:viewController animated:NO completion:nil];
	});
#endif
}

