//
//  ABI38_0_0EXFaceDetectorManager.h
//  Exponent
//
//  Created by Stanisław Chmiela on 22.11.2017.
//  Copyright © 2017 650 Industries. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <ABI38_0_0UMFaceDetectorInterface/ABI38_0_0UMFaceDetectorManager.h>

@interface ABI38_0_0EXFaceDetectorManager : NSObject <ABI38_0_0UMFaceDetectorManager>

- (void)setOnFacesDetected:(void (^)(NSArray<NSDictionary *> *))onFacesDetected;

- (void)setIsEnabled:(BOOL)enabled;
- (void)updateSettings:(NSDictionary *)settings;

- (void)maybeStartFaceDetectionOnSession:(AVCaptureSession *)session withPreviewLayer:(AVCaptureVideoPreviewLayer *)previewLayer;
- (void)maybeStartFaceDetectionOnSession:(AVCaptureSession *)session withPreviewLayer:(AVCaptureVideoPreviewLayer *)previewLayer mirrored:(BOOL)mirrored;
- (void)stopFaceDetection;

@end
