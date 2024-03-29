//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIButton, XIConversationInputView;

@protocol XIConversationInputViewDelegate <NSObject>

@optional
- (void)conversationInputView:(XIConversationInputView *)arg1 didClickedReturnButton:(NSString *)arg2;
- (void)conversationInputView:(XIConversationInputView *)arg1 touchUpOutsideRecordingButton:(UIButton *)arg2;
- (void)conversationInputView:(XIConversationInputView *)arg1 touchUpInsideRecordingButton:(UIButton *)arg2;
- (void)conversationInputView:(XIConversationInputView *)arg1 touchDragOutsideRecordingButton:(UIButton *)arg2;
- (void)conversationInputView:(XIConversationInputView *)arg1 touchDragInsideRecordingButton:(UIButton *)arg2;
- (void)conversationInputView:(XIConversationInputView *)arg1 touchDownRecordingButton:(UIButton *)arg2;
- (void)conversationInputViewDidClickedImagePickerFunction:(XIConversationInputView *)arg1;
- (void)conversationInputViewDidClickedCameraFunction:(XIConversationInputView *)arg1;
- (void)conversationInputView:(XIConversationInputView *)arg1 didChangedFrameWithDuration:(double)arg2 beginFrame:(struct CGRect)arg3 endFrame:(struct CGRect)arg4;
@end

