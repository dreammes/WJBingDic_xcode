//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class AVCaptureDevice, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoPreviewLayer, NSArray, NSString, UIButton, UIScrollView, UIView, _TtC7BingDic25PhotoTranslateContentView, _TtC7BingDic7DropBox;

@interface _TtC7BingDic28PhotoTranslateViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: imageView
    // Error parsing type: , name: leftBackButton
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: cameraButton
    // Error parsing type: , name: imagePickerButton
    // Error parsing type: , name: flashButton
    // Error parsing type: , name: bottomView
    // Error parsing type: , name: originLanguageButton
    // Error parsing type: , name: targetLanguageButton
    // Error parsing type: , name: centerChangeButton
    // Error parsing type: , name: device
    // Error parsing type: , name: session
    // Error parsing type: , name: imageOutput
    // Error parsing type: , name: previewLayer
    // Error parsing type: , name: originStr
    // Error parsing type: , name: originLanguageList
    // Error parsing type: , name: targetLanguageList
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)shouldPhotoTranslateContentViewShowResultsView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)checkLanguageButtonsCanChange;
- (void)userInteractionEnabledWithEnable:(_Bool)arg1;
- (void)showResults;
- (id)scaleToSizeWithImage:(id)arg1 size:(struct CGSize)arg2;
- (struct CGRect)calculateImageSizeWithImage:(id)arg1;
- (void)resetViewStatus;
- (void)beginTranslate;
- (void)requestVideoAuth;
- (void)changeLanguageButtonClickedWithSender:(id)arg1;
- (void)originLanguageButtonActionWithLangObject:(id)arg1;
- (void)targetLanguageButtonActionWithLangObject:(id)arg1;
- (void)flashButtonClickedWithSender:(id)arg1;
- (void)imagePickerButtonClickedWithSender:(id)arg1;
- (void)cameraButtonClickedWithSender:(id)arg1;
- (void)leftBackButtonClickedWithSender:(id)arg1;
- (void)closeButtonClickedWithSender:(id)arg1;
- (void)translateResponseWithRequest:(id)arg1;
- (void)OCRResponseWithRequest:(id)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
@property(nonatomic, copy) NSArray *targetLanguageList; // @synthesize targetLanguageList;
@property(nonatomic, copy) NSArray *originLanguageList; // @synthesize originLanguageList;
@property(nonatomic, copy) NSString *originStr; // @synthesize originStr;
@property(nonatomic, retain) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer;
@property(nonatomic, retain) AVCaptureStillImageOutput *imageOutput; // @synthesize imageOutput;
@property(nonatomic, retain) AVCaptureSession *session; // @synthesize session;
@property(nonatomic, retain) AVCaptureDevice *device; // @synthesize device;
@property(nonatomic, retain) UIButton *centerChangeButton; // @synthesize centerChangeButton;
@property(nonatomic, retain) _TtC7BingDic7DropBox *targetLanguageButton; // @synthesize targetLanguageButton;
@property(nonatomic, retain) _TtC7BingDic7DropBox *originLanguageButton; // @synthesize originLanguageButton;
@property(nonatomic, retain) UIView *bottomView; // @synthesize bottomView;
@property(nonatomic, retain) UIButton *flashButton; // @synthesize flashButton;
@property(nonatomic, retain) UIButton *imagePickerButton; // @synthesize imagePickerButton;
@property(nonatomic, retain) UIButton *cameraButton; // @synthesize cameraButton;
@property(nonatomic, retain) UIButton *closeButton; // @synthesize closeButton;
@property(nonatomic, retain) UIButton *leftBackButton; // @synthesize leftBackButton;
@property(nonatomic, retain) _TtC7BingDic25PhotoTranslateContentView *imageView; // @synthesize imageView;
@property(nonatomic, retain) UIScrollView *scrollView; // @synthesize scrollView;
- (void)initAVCaptureDevice;
- (void)setupSubViewsLayouts;
- (void)initLanguageButton;
- (void)setupSubViews;

@end
