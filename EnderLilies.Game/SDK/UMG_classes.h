﻿#pragma once

// Name: enderlilies, Version: 1.1.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class UMG.Visual
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UVisual : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Visual");
		return ptr;
	}



};

// Class UMG.Widget
// 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
class UWidget : public UVisual
{
public:
	class UPanelSlot*                                  Slot;                                                      // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, TextExportTransient, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             bIsEnabledDelegate;                                        // 0x0030(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FText                                       ToolTipText;                                               // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ToolTipTextDelegate;                                       // 0x0058(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	class UWidget*                                     ToolTipWidget;                                             // 0x0068(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ToolTipWidgetDelegate;                                     // 0x0070(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             VisibilityDelegate;                                        // 0x0080(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FWidgetTransform                            RenderTransform;                                           // 0x0090(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   RenderTransformPivot;                                      // 0x00AC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsVariable : 1;                                           // 0x00B4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bCreatedByConstructionScript : 1;                          // 0x00B4(0x0001) BIT_FIELD (Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsEnabled : 1;                                            // 0x00B4(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_Cursor : 1;                                      // 0x00B4(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZVCI[0x3];                                     // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateAccessibleWidgetData*                  AccessibleWidgetData;                                      // 0x00B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bIsVolatile : 1;                                           // 0x00C0(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<CoreUObject_EMouseCursor>              Cursor;                                                    // 0x00C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SlateCore_EWidgetClipping                          Clipping;                                                  // 0x00C2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               Visibility;                                                // 0x00C3(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RenderOpacity;                                             // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetNavigation*                           Navigation;                                                // 0x00C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SlateCore_EFlowDirectionPreference                 FlowDirectionPreference;                                   // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MT2T[0x27];                                    // 0x00D1(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPropertyBinding*>                    NativeBindings;                                            // 0x00F8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Widget");
		return ptr;
	}



	void SetVisibility(UMG_ESlateVisibility InVisibility);
	void SetUserFocus(class APlayerController* PlayerController);
	void SetToolTipText(const struct FText& InToolTipText);
	void SetToolTip(class UWidget* Widget);
	void SetRenderTranslation(const struct FVector2D& Translation);
	void SetRenderTransformPivot(const struct FVector2D& Pivot);
	void SetRenderTransformAngle(float Angle);
	void SetRenderTransform(const struct FWidgetTransform& InTransform);
	void SetRenderShear(const struct FVector2D& Shear);
	void SetRenderScale(const struct FVector2D& Scale);
	void SetRenderOpacity(float InOpacity);
	void SetNavigationRuleExplicit(SlateCore_EUINavigation Direction, class UWidget* InWidget);
	void SetNavigationRuleCustomBoundary(SlateCore_EUINavigation Direction, const struct FScriptDelegate& InCustomDelegate);
	void SetNavigationRuleCustom(SlateCore_EUINavigation Direction, const struct FScriptDelegate& InCustomDelegate);
	void SetNavigationRuleBase(SlateCore_EUINavigation Direction, SlateCore_EUINavigationRule Rule);
	void SetNavigationRule(SlateCore_EUINavigation Direction, SlateCore_EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void SetFocus();
	void SetCursor(TEnumAsByte<CoreUObject_EMouseCursor> InCursor);
	void SetClipping(SlateCore_EWidgetClipping InClipping);
	void SetAllNavigationRules(SlateCore_EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void ResetCursor();
	void RemoveFromParent();
	struct FEventReply OnReply__DelegateSignature();
	struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool IsVisible();
	bool IsHovered();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class APlayerController* PlayerController);
	bool HasUserFocus(class APlayerController* PlayerController);
	bool HasMouseCaptureByUser(int UserIndex, int PointerIndex);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	class UWidget* GetWidget__DelegateSignature();
	UMG_ESlateVisibility GetVisibility();
	struct FGeometry GetTickSpaceGeometry();
	struct FText GetText__DelegateSignature();
	UMG_ESlateVisibility GetSlateVisibility__DelegateSignature();
	struct FSlateColor GetSlateColor__DelegateSignature();
	struct FSlateBrush GetSlateBrush__DelegateSignature();
	float GetRenderTransformAngle();
	float GetRenderOpacity();
	class UPanelWidget* GetParent();
	struct FGeometry GetPaintSpaceGeometry();
	class APlayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	TEnumAsByte<CoreUObject_EMouseCursor> GetMouseCursor__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int GetInt32__DelegateSignature();
	class UGameInstance* GetGameInstance();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	SlateCore_EWidgetClipping GetClipping();
	SlateCore_ECheckBoxState GetCheckBoxState__DelegateSignature();
	struct FGeometry GetCachedGeometry();
	bool GetBool__DelegateSignature();
	struct FText GetAccessibleText();
	struct FText GetAccessibleSummaryText();
	class UWidget* GenerateWidgetForString__DelegateSignature(const struct FString& Item);
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
};

// Class UMG.UserWidget
// 0x0158 (FullSize[0x0260] - InheritedSize[0x0108])
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData_0AQ1[0x8];                                     // 0x0108(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                   // 0x0120(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0130(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ForegroundColorDelegate;                                   // 0x0158(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnVisibilityChanged;                                       // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3R97[0x18];                                    // 0x0178(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x0190(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                     // 0x01A0(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	class UUMGSequenceTickManager*                     AnimationTickManager;                                      // 0x01B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                    // 0x01B8(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FNamedSlotBinding>                   NamedSlotBindings;                                         // 0x01C8(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UWidgetTree*                                 WidgetTree;                                                // 0x01D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, TextExportTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Priority;                                                  // 0x01E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bSupportsKeyboardFocus : 1;                                // 0x01E4(0x0001) BIT_FIELD (Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bIsFocusable : 1;                                          // 0x01E4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bStopAction : 1;                                           // 0x01E4(0x0001) BIT_FIELD (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasScriptImplementedTick : 1;                             // 0x01E4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bHasScriptImplementedPaint : 1;                            // 0x01E4(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BWC6[0xB];                                     // 0x01E5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	UMG_EWidgetTickFrequency                           TickFrequency;                                             // 0x01F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1FSL[0x7];                                     // 0x01F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInputComponent*                             InputComponent;                                            // 0x01F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FAnimationEventBinding>              AnimationCallbacks;                                        // 0x0200(0x0010) (ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_FE1R[0x50];                                    // 0x0210(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UserWidget");
		return ptr;
	}



	void UnregisterInputComponent();
	void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate);
	void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate);
	void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);
	void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<Engine_EInputEvent> EventType);
	void StopListeningForAllInputActions();
	void StopAnimationsAndLatentActions();
	void StopAnimation(class UWidgetAnimation* InAnimation);
	void StopAllAnimations();
	void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
	void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	void SetPadding(const struct FMargin& InPadding);
	void SetOwningPlayer(class APlayerController* LocalPlayerController);
	void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay);
	void SetInputActionPriority(int NewPriority);
	void SetInputActionBlocking(bool bShouldBlock);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void SetDesiredSizeInViewport(const struct FVector2D& Size);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime);
	void SetAnchorsInViewport(const struct FAnchors& Anchors);
	void SetAlignmentInViewport(const struct FVector2D& Alignment);
	void ReverseAnimation(class UWidgetAnimation* InAnimation);
	void RemoveFromViewport();
	void RegisterInputComponent();
	void PreConstruct(bool IsDesignTime);
	void PlaySound(class USoundBase* SoundToPlay);
	class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState);
	class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
	class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
	class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState);
	float PauseAnimation(class UWidgetAnimation* InAnimation);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
	struct FEventReply OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnPaint(struct FPaintContext* Context);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseCaptureLost();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	void OnInitialized();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ListenForInputAction(const struct FName& ActionName, TEnumAsByte<Engine_EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(const struct FName& ActionName);
	bool IsInViewport();
	bool IsInteractable();
	bool IsAnyAnimationPlaying();
	bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);
	bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
	class APawn* GetOwningPlayerPawn();
	class APlayerCameraManager* GetOwningPlayerCameraManager();
	bool GetIsVisible();
	float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
	struct FAnchors GetAnchorsInViewport();
	struct FVector2D GetAlignmentInViewport();
	void FlushAnimations();
	void Destruct();
	void Construct();
	void CancelLatentActions();
	void BindToAnimationStarted(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate);
	void BindToAnimationFinished(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate);
	void BindToAnimationEvent(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate, UMG_EWidgetAnimationEvent AnimationEvent, const struct FName& UserTag);
	void AddToViewport(int ZOrder);
	bool AddToPlayerScreen(int ZOrder);
};

// Class UMG.PanelWidget
// 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                          Slots;                                                     // 0x0108(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J72T[0x8];                                     // 0x0118(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.PanelWidget");
		return ptr;
	}



	bool RemoveChildAt(int Index);
	bool RemoveChild(class UWidget* Content);
	bool HasChild(class UWidget* Content);
	bool HasAnyChildren();
	int GetChildrenCount();
	int GetChildIndex(class UWidget* Content);
	class UWidget* GetChildAt(int Index);
	TArray<class UWidget*> GetAllChildren();
	void ClearChildren();
	class UPanelSlot* AddChild(class UWidget* Content);
};

// Class UMG.ScrollBox
// 0x0760 (FullSize[0x0880] - InheritedSize[0x0120])
class UScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                               // 0x0120(0x0228) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                             WidgetBarStyle;                                            // 0x0348(0x04D0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0818(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      BarStyle;                                                  // 0x0820(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x0828(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateVisibility                               ScrollBarVisibility;                                       // 0x0829(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	SlateCore_EConsumeMouseWheel                       ConsumeMouseWheel;                                         // 0x082A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BIID[0x1];                                     // 0x082B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   ScrollbarThickness;                                        // 0x082C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     ScrollbarPadding;                                          // 0x0834(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               AlwaysShowScrollbar;                                       // 0x0844(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AlwaysShowScrollbarTrack;                                  // 0x0845(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowOverscroll;                                           // 0x0846(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateWheelScrolling;                                    // 0x0847(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Slate_EDescendantScrollDestination                 NavigationDestination;                                     // 0x0848(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KSX8[0x3];                                     // 0x0849(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NavigationScrollPadding;                                   // 0x084C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Slate_EScrollWhenFocusChanges                      ScrollWhenFocusChanges;                                    // 0x0850(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowRightClickDragScrolling;                             // 0x0851(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EUAQ[0x2];                                     // 0x0852(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WheelScrollMultiplier;                                     // 0x0854(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUserScrolled;                                            // 0x0858(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9W4U[0x18];                                    // 0x0868(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ScrollBox");
		return ptr;
	}



	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollOffset(float NewScrollOffset);
	void SetScrollBarVisibility(UMG_ESlateVisibility NewScrollBarVisibility);
	void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);
	void SetScrollbarPadding(const struct FMargin& NewScrollbarPadding);
	void SetOrientation(TEnumAsByte<SlateCore_EOrientation> NewOrientation);
	void SetConsumeMouseWheel(SlateCore_EConsumeMouseWheel NewConsumeMouseWheel);
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool NewAllowOverscroll);
	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, Slate_EDescendantScrollDestination ScrollDestination, float Padding);
	void ScrollToStart();
	void ScrollToEnd();
	float GetViewOffsetFraction();
	float GetScrollOffsetOfEnd();
	float GetScrollOffset();
	void EndInertialScrolling();
};

// Class UMG.RichTextBlockDecorator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URichTextBlockDecorator : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		return ptr;
	}



};

// Class UMG.TextLayoutWidget
// 0x0020 (FullSize[0x0128] - InheritedSize[0x0108])
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                          ShapedTextOptions;                                         // 0x0108(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x010B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Slate_ETextWrappingPolicy                          WrappingPolicy;                                            // 0x010C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      AutoWrapText : 1;                                          // 0x010D(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DB35[0x2];                                     // 0x010E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WrapTextAt;                                                // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FMargin                                     Margin;                                                    // 0x0114(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	float                                              LineHeightPercentage;                                      // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.TextLayoutWidget");
		return ptr;
	}



	void SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification);
};

// Class UMG.RichTextBlock
// 0x0550 (FullSize[0x0678] - InheritedSize[0x0128])
class URichTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                      // 0x0128(0x0018) (Edit, Protected, NativeAccessSpecifierProtected)
	class UDataTable*                                  TextStyleSet;                                              // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UClass*>                              DecoratorClasses;                                          // 0x0148(0x0010) (Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                               bOverrideDefaultStyle;                                     // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PBBZ[0x7];                                     // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTextBlockStyle                             DefaultTextStyleOverride;                                  // 0x0160(0x0270) (Edit, Protected, NativeAccessSpecifierProtected)
	float                                              MinDesiredWidth;                                           // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Slate_ETextTransformPolicy                         TextTransformPolicy;                                       // 0x03D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JM4R[0x3];                                     // 0x03D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTextBlockStyle                             DefaultTextStyle;                                          // 0x03D8(0x0270) (Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class URichTextBlockDecorator*>             InstanceDecorators;                                        // 0x0648(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_2NN8[0x20];                                    // 0x0658(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.RichTextBlock");
		return ptr;
	}



	void SetTextTransformPolicy(Slate_ETextTransformPolicy InTransformPolicy);
	void SetTextStyleSet(class UDataTable* NewTextStyleSet);
	void SetText(const struct FText& InText);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle);
	void SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush);
	void SetDefaultShadowOffset(const struct FVector2D& InShadowOffset);
	void SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetDefaultFont(const struct FSlateFontInfo& InFontInfo);
	void SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	struct FText GetText();
	class URichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);
	void ClearAllDefaultStyleOverrides();
};

// Class UMG.AsyncTaskDownloadImage
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFail;                                                    // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return ptr;
	}



	class UAsyncTaskDownloadImage* STATIC_DownloadImage(const struct FString& URL);
};

// Class UMG.ContentWidget
// 0x0000 (FullSize[0x0120] - InheritedSize[0x0120])
class UContentWidget : public UPanelWidget
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ContentWidget");
		return ptr;
	}



	class UPanelSlot* SetContent(class UWidget* Content);
	class UPanelSlot* GetContentSlot();
	class UWidget* GetContent();
};

// Class UMG.BackgroundBlur
// 0x00B8 (FullSize[0x01D8] - InheritedSize[0x0120])
class UBackgroundBlur : public UContentWidget
{
public:
	struct FMargin                                     Padding;                                                   // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bApplyAlphaToBlur;                                         // 0x0132(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_02CQ[0x1];                                     // 0x0133(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BlurStrength;                                              // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideAutoRadiusCalculation;                            // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9AAP[0x3];                                     // 0x0139(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BlurRadius;                                                // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LowQualityFallbackBrush;                                   // 0x0140(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0881[0x10];                                    // 0x01C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.BackgroundBlur");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetBlurStrength(float InStrength);
	void SetBlurRadius(int InBlurRadius);
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};

// Class UMG.PanelSlot
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                                Parent;                                                    // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     Content;                                                   // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.PanelSlot");
		return ptr;
	}



};

// Class UMG.BackgroundBlurSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UBackgroundBlurSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Q590[0x16];                                    // 0x004A(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.BackgroundBlurSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.PropertyBinding
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                      SourceObject;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDynamicPropertyPath                        SourcePath;                                                // 0x0030(0x0028) (NativeAccessSpecifierPublic)
	struct FName                                       DestinationProperty;                                       // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.PropertyBinding");
		return ptr;
	}



};

// Class UMG.BoolBinding
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBoolBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.BoolBinding");
		return ptr;
	}



	bool GetValue();
};

// Class UMG.Border
// 0x0150 (FullSize[0x0270] - InheritedSize[0x0120])
class UBorder : public UContentWidget
{
public:
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bShowEffectWhenDisabled : 1;                               // 0x0122(0x0001) BIT_FIELD (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I6PI[0x1];                                     // 0x0123(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ContentColorAndOpacity;                                    // 0x0124(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ContentColorAndOpacityDelegate;                            // 0x0134(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x0144(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_954J[0x4];                                     // 0x0154(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 Background;                                                // 0x0158(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             BackgroundDelegate;                                        // 0x01E0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                BrushColor;                                                // 0x01F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             BrushColorDelegate;                                        // 0x0200(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   DesiredSizeScale;                                          // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipForRightToLeftFlowDirection;                          // 0x0218(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FTZY[0x3];                                     // 0x0219(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                    // 0x021C(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnMouseButtonUpEvent;                                      // 0x022C(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnMouseMoveEvent;                                          // 0x023C(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnMouseDoubleClickEvent;                                   // 0x024C(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1PSF[0x14];                                    // 0x025C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Border");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetDesiredSizeScale(const struct FVector2D& InScale);
	void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrushColor(const struct FLinearColor& InBrushColor);
	void SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Class UMG.BorderSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UBorderSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G1UI[0x16];                                    // 0x004A(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.BorderSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.BrushBinding
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UBrushBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_C9WC[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.BrushBinding");
		return ptr;
	}



	struct FSlateBrush GetValue();
};

// Class UMG.Button
// 0x0308 (FullSize[0x0428] - InheritedSize[0x0120])
class UButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0120(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FButtonStyle                                WidgetStyle;                                               // 0x0128(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                           // 0x03B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EButtonClickMethod>          ClickMethod;                                               // 0x03C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EButtonTouchMethod>          TouchMethod;                                               // 0x03C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EButtonPressMethod>          PressMethod;                                               // 0x03C2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x03C3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BT7U[0x4];                                     // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnPressed;                                                 // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnReleased;                                                // 0x03E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnHovered;                                                 // 0x03F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnUnhovered;                                               // 0x0408(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E08L[0x10];                                    // 0x0418(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Button");
		return ptr;
	}



	void SetTouchMethod(TEnumAsByte<SlateCore_EButtonTouchMethod> InTouchMethod);
	void SetStyle(const struct FButtonStyle& InStyle);
	void SetPressMethod(TEnumAsByte<SlateCore_EButtonPressMethod> InPressMethod);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetClickMethod(TEnumAsByte<SlateCore_EButtonClickMethod> InClickMethod);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	bool IsPressed();
};

// Class UMG.ButtonSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V6ON[0x16];                                    // 0x004A(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ButtonSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.CanvasPanel
// 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
class UCanvasPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_8LQ9[0x10];                                    // 0x0120(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.CanvasPanel");
		return ptr;
	}



	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
};

// Class UMG.CanvasPanelSlot
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                                 LayoutData;                                                // 0x0038(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bAutoSize;                                                 // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_18S5[0x3];                                     // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ZOrder;                                                    // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JKO3[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return ptr;
	}



	void SetZOrder(int InZOrder);
	void SetSize(const struct FVector2D& InSize);
	void SetPosition(const struct FVector2D& InPosition);
	void SetOffsets(const struct FMargin& InOffset);
	void SetMinimum(const struct FVector2D& InMinimumAnchors);
	void SetMaximum(const struct FVector2D& InMaximumAnchors);
	void SetLayout(const struct FAnchorData& InLayoutData);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(const struct FAnchors& InAnchors);
	void SetAlignment(const struct FVector2D& InAlignment);
	int GetZOrder();
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FMargin GetOffsets();
	struct FAnchorData GetLayout();
	bool GetAutoSize();
	struct FAnchors GetAnchors();
	struct FVector2D GetAlignment();
};

// Class UMG.CheckBox
// 0x0650 (FullSize[0x0770] - InheritedSize[0x0120])
class UCheckBox : public UContentWidget
{
public:
	SlateCore_ECheckBoxState                           CheckedState;                                              // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1NJ8[0x3];                                     // 0x0121(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             CheckedStateDelegate;                                      // 0x0124(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DY43[0x4];                                     // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCheckBoxStyle                              WidgetStyle;                                               // 0x0138(0x0580) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x06B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UncheckedImage;                                            // 0x06C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UncheckedHoveredImage;                                     // 0x06C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UncheckedPressedImage;                                     // 0x06D0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CheckedImage;                                              // 0x06D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CheckedHoveredImage;                                       // 0x06E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CheckedPressedImage;                                       // 0x06E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UndeterminedImage;                                         // 0x06F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UndeterminedHoveredImage;                                  // 0x06F8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            UndeterminedPressedImage;                                  // 0x0700(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0708(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K5D1[0x3];                                     // 0x0709(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x070C(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LMA3[0x4];                                     // 0x071C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 BorderBackgroundColor;                                     // 0x0720(0x0028) (Deprecated, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EButtonClickMethod>          ClickMethod;                                               // 0x0748(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EButtonTouchMethod>          TouchMethod;                                               // 0x0749(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EButtonPressMethod>          PressMethod;                                               // 0x074A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x074B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RRAL[0x4];                                     // 0x074C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnCheckStateChanged;                                       // 0x0750(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TUS9[0x10];                                    // 0x0760(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.CheckBox");
		return ptr;
	}



	void SetTouchMethod(TEnumAsByte<SlateCore_EButtonTouchMethod> InTouchMethod);
	void SetPressMethod(TEnumAsByte<SlateCore_EButtonPressMethod> InPressMethod);
	void SetIsChecked(bool InIsChecked);
	void SetClickMethod(TEnumAsByte<SlateCore_EButtonClickMethod> InClickMethod);
	void SetCheckedState(SlateCore_ECheckBoxState InCheckedState);
	bool IsPressed();
	bool IsChecked();
	SlateCore_ECheckBoxState GetCheckedState();
};

// Class UMG.CheckedStateBinding
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UCheckedStateBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_H6RF[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.CheckedStateBinding");
		return ptr;
	}



	SlateCore_ECheckBoxState GetValue();
};

// Class UMG.CircularThrobber
// 0x00B8 (FullSize[0x01C0] - InheritedSize[0x0108])
class UCircularThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                            // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Period;                                                    // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FEBH[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateBrushAsset*                            PieceImage;                                                // 0x0118(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Image;                                                     // 0x0120(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bEnableRadius;                                             // 0x01A8(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_2GRM[0x17];                                    // 0x01A9(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.CircularThrobber");
		return ptr;
	}



	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int InNumberOfPieces);
};

// Class UMG.ColorBinding
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UColorBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_R7MN[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ColorBinding");
		return ptr;
	}



	struct FSlateColor GetSlateValue();
	struct FLinearColor GetLinearValue();
};

// Class UMG.ComboBox
// 0x0038 (FullSize[0x0140] - InheritedSize[0x0108])
class UComboBox : public UWidget
{
public:
	TArray<class UObject*>                             Items;                                                     // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                     // 0x0118(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bIsFocusable;                                              // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BBJC[0x17];                                    // 0x0129(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ComboBox");
		return ptr;
	}



};

// Class UMG.ComboBoxString
// 0x0CF8 (FullSize[0x0E00] - InheritedSize[0x0108])
class UComboBoxString : public UWidget
{
public:
	TArray<struct FString>                             DefaultOptions;                                            // 0x0108(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FString                                     SelectedOption;                                            // 0x0118(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FComboBoxStyle                              WidgetStyle;                                               // 0x0128(0x03F0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTableRowStyle                              ItemStyle;                                                 // 0x0518(0x07C8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FMargin                                     ContentPadding;                                            // 0x0CE0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MaxListHeight;                                             // 0x0CF0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HasDownArrow;                                              // 0x0CF4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableGamepadNavigationMode;                               // 0x0CF5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_28EY[0x2];                                     // 0x0CF6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateFontInfo                              Font;                                                      // 0x0CF8(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0D50(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bIsFocusable;                                              // 0x0D78(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7L9X[0x3];                                     // 0x0D79(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                     // 0x0D7C(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R1YA[0x4];                                     // 0x0D8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                        // 0x0D90(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnOpening;                                                 // 0x0DA0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AUF1[0x50];                                    // 0x0DB0(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ComboBoxString");
		return ptr;
	}



	void SetSelectedOption(const struct FString& Option);
	void SetSelectedIndex(int Index);
	bool RemoveOption(const struct FString& Option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType);
	void OnOpeningEvent__DelegateSignature();
	bool IsOpen();
	struct FString GetSelectedOption();
	int GetSelectedIndex();
	int GetOptionCount();
	struct FString GetOptionAtIndex(int Index);
	int FindOptionIndex(const struct FString& Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const struct FString& Option);
};

// Class UMG.DragDropOperation
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UDragDropOperation : public UObject
{
public:
	struct FString                                     Tag;                                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     Payload;                                                   // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                                     DefaultDragVisual;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_EDragPivot                                     Pivot;                                                     // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NT1L[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Offset;                                                    // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TG99[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnDrop;                                                    // 0x0058(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDragCancelled;                                           // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnDragged;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.DragDropOperation");
		return ptr;
	}



	void Drop(const struct FPointerEvent& PointerEvent);
	void Dragged(const struct FPointerEvent& PointerEvent);
	void DragCancelled(const struct FPointerEvent& PointerEvent);
};

// Class UMG.DynamicEntryBoxBase
// 0x00D0 (FullSize[0x01D8] - InheritedSize[0x0108])
class UDynamicEntryBoxBase : public UWidget
{
public:
	UMG_EDynamicBoxType                                EntryBoxType;                                              // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TX3I[0x3];                                     // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   EntrySpacing;                                              // 0x010C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BXOL[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector2D>                           SpacingPattern;                                            // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateChildSize                             EntrySizeRule;                                             // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        EntryHorizontalAlignment;                                  // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EVerticalAlignment>          EntryVerticalAlignment;                                    // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_DA34[0x2];                                     // 0x0132(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxElementSize;                                            // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRadialBoxSettings                          RadialBoxSettings;                                         // 0x0138(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_MQIV[0x14];                                    // 0x0144(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FUserWidgetPool                             EntryWidgetPool;                                           // 0x0158(0x0080) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.DynamicEntryBoxBase");
		return ptr;
	}



	void SetRadialSettings(const struct FRadialBoxSettings& InSettings);
	void SetEntrySpacing(const struct FVector2D& InEntrySpacing);
	int GetNumEntries();
	TArray<class UUserWidget*> GetAllEntries();
};

// Class UMG.DynamicEntryBox
// 0x0008 (FullSize[0x01E0] - InheritedSize[0x01D8])
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
public:
	class UClass*                                      EntryWidgetClass;                                          // 0x01D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.DynamicEntryBox");
		return ptr;
	}



	void Reset(bool bDeleteWidgets);
	void RemoveEntry(class UUserWidget* EntryWidget);
	class UUserWidget* BP_CreateEntryOfClass(class UClass* EntryClass);
	class UUserWidget* BP_CreateEntry();
};

// Class UMG.EditableText
// 0x0358 (FullSize[0x0460] - InheritedSize[0x0108])
class UEditableText : public UWidget
{
public:
	struct FText                                       Text;                                                      // 0x0108(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             TextDelegate;                                              // 0x0120(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                  // 0x0130(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x0148(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FEditableTextStyle                          WidgetStyle;                                               // 0x0158(0x0220) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0378(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            BackgroundImageSelected;                                   // 0x0380(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            BackgroundImageComposing;                                  // 0x0388(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            CaretImage;                                                // 0x0390(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0398(0x0058) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x03F0(0x0028) (Deprecated, NativeAccessSpecifierPublic)
	bool                                               IsReadOnly;                                                // 0x0418(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPassword;                                                // 0x0419(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9G84[0x2];                                     // 0x041A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumDesiredWidth;                                       // 0x041C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCaretMovedWhenGainFocus;                                 // 0x0420(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextWhenFocused;                                  // 0x0421(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RevertTextOnEscape;                                        // 0x0422(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x0423(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextOnCommit;                                     // 0x0424(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                          // 0x0425(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<UMG_EVirtualKeyboardType>              KeyboardType;                                              // 0x0426(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                    // 0x0427(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	Slate_EVirtualKeyboardTrigger                      VirtualKeyboardTrigger;                                    // 0x0428(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Slate_EVirtualKeyboardDismissAction                VirtualKeyboardDismissAction;                              // 0x0429(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x042A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShapedTextOptions                          ShapedTextOptions;                                         // 0x042B(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GZMD[0x2];                                     // 0x042E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0430(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MPT9[0x10];                                    // 0x0450(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.EditableText");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(const struct FText& InHintText);
	void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};

// Class UMG.EditableTextBox
// 0x0930 (FullSize[0x0A38] - InheritedSize[0x0108])
class UEditableTextBox : public UWidget
{
public:
	struct FText                                       Text;                                                      // 0x0108(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             TextDelegate;                                              // 0x0120(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                       WidgetStyle;                                               // 0x0130(0x07F8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0928(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                  // 0x0930(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x0948(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0958(0x0058) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ForegroundColor;                                           // 0x09B0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                           // 0x09C0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReadOnlyForegroundColor;                                   // 0x09D0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsReadOnly;                                                // 0x09E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPassword;                                                // 0x09E1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7SXG[0x2];                                     // 0x09E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinimumDesiredWidth;                                       // 0x09E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x09E8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               IsCaretMovedWhenGainFocus;                                 // 0x09F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextWhenFocused;                                  // 0x09F9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RevertTextOnEscape;                                        // 0x09FA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x09FB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextOnCommit;                                     // 0x09FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                          // 0x09FD(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<UMG_EVirtualKeyboardType>              KeyboardType;                                              // 0x09FE(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                    // 0x09FF(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	Slate_EVirtualKeyboardTrigger                      VirtualKeyboardTrigger;                                    // 0x0A00(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Slate_EVirtualKeyboardDismissAction                VirtualKeyboardDismissAction;                              // 0x0A01(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x0A02(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShapedTextOptions                          ShapedTextOptions;                                         // 0x0A03(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DA7S[0x2];                                     // 0x0A06(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0A08(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0A18(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QV9Z[0x10];                                    // 0x0A28(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.EditableTextBox");
		return ptr;
	}



	void SetText(const struct FText& InText);
	void SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification);
	void SetIsReadOnly(bool bReadOnly);
	void SetIsPassword(bool bIsPassword);
	void SetHintText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	bool HasError();
	struct FText GetText();
	void ClearError();
};

// Class UMG.ExpandableArea
// 0x0230 (FullSize[0x0338] - InheritedSize[0x0108])
class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData_04QK[0x8];                                     // 0x0108(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FExpandableAreaStyle                        Style;                                                     // 0x0110(0x0120) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BorderBrush;                                               // 0x0230(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateColor                                 BorderColor;                                               // 0x02B8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bIsExpanded;                                               // 0x02E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_582S[0x3];                                     // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxHeight;                                                 // 0x02E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     HeaderPadding;                                             // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     AreaPadding;                                               // 0x02F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnExpansionChanged;                                        // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UWidget*                                     HeaderContent;                                             // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                                     BodyContent;                                               // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IXOB[0x10];                                    // 0x0328(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ExpandableArea");
		return ptr;
	}



	void SetIsExpanded_Animated(bool IsExpanded);
	void SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};

// Class UMG.FloatBinding
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UFloatBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.FloatBinding");
		return ptr;
	}



	float GetValue();
};

// Class UMG.GridPanel
// 0x0030 (FullSize[0x0150] - InheritedSize[0x0120])
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                      ColumnFill;                                                // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      RowFill;                                                   // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DTE0[0x10];                                    // 0x0140(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.GridPanel");
		return ptr;
	}



	void SetRowFill(int ColumnIndex, float Coefficient);
	void SetColumnFill(int ColumnIndex, float Coefficient);
	class UGridSlot* AddChildToGrid(class UWidget* Content, int InRow, int InColumn);
};

// Class UMG.GridSlot
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QN9K[0x2];                                     // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Row;                                                       // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RowSpan;                                                   // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Column;                                                    // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ColumnSpan;                                                // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Layer;                                                     // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Nudge;                                                     // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TTHY[0x8];                                     // 0x0068(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.GridSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetRowSpan(int InRowSpan);
	void SetRow(int InRow);
	void SetPadding(const struct FMargin& InPadding);
	void SetNudge(const struct FVector2D& InNudge);
	void SetLayer(int InLayer);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetColumnSpan(int InColumnSpan);
	void SetColumn(int InColumn);
};

// Class UMG.HorizontalBox
// 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_0WJB[0x10];                                    // 0x0120(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.HorizontalBox");
		return ptr;
	}



	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
};

// Class UMG.HorizontalBoxSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData_6CEE[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateChildSize                             Size;                                                      // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WX16[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.Image
// 0x0108 (FullSize[0x0210] - InheritedSize[0x0108])
class UImage : public UWidget
{
public:
	struct FSlateBrush                                 Brush;                                                     // 0x0108(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             BrushDelegate;                                             // 0x0190(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x01A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                   // 0x01B0(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bFlipForRightToLeftFlowDirection;                          // 0x01C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VJ3P[0x3];                                     // 0x01C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                    // 0x01C4(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VT5F[0x3C];                                    // 0x01D4(0x003C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Image");
		return ptr;
	}



	void SetOpacity(float InOpacity);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushTintColor(const struct FSlateColor& TintColor);
	void SetBrushSize(const struct FVector2D& DesiredSize);
	void SetBrushResourceObject(class UObject* ResourceObject);
	void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
	void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void SetBrushFromSoftTexture(bool bMatchSize);
	void SetBrushFromSoftMaterial();
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAtlasInterface(bool bMatchSize);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};

// Class UMG.InputKeySelector
// 0x05F8 (FullSize[0x0700] - InheritedSize[0x0108])
class UInputKeySelector : public UWidget
{
public:
	struct FButtonStyle                                WidgetStyle;                                               // 0x0108(0x0278) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TextStyle;                                                 // 0x0380(0x0270) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FInputChord                                 SelectedKey;                                               // 0x05F0(0x0020) (BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0610(0x0058) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     Margin;                                                    // 0x0668(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                ColorAndOpacity;                                           // 0x0678(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       KeySelectionText;                                          // 0x0688(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       NoKeySpecifiedText;                                        // 0x06A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                               bAllowModifierKeys;                                        // 0x06B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowGamepadKeys;                                         // 0x06B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5PNC[0x6];                                     // 0x06BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKey>                                EscapeKeys;                                                // 0x06C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnKeySelected;                                             // 0x06D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnIsSelectingKeyChanged;                                   // 0x06E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3PN4[0x10];                                    // 0x06F0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.InputKeySelector");
		return ptr;
	}



	void SetTextBlockVisibility(UMG_ESlateVisibility InVisibility);
	void SetSelectedKey(const struct FInputChord& InSelectedKey);
	void SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText);
	void SetKeySelectionText(const struct FText& InKeySelectionText);
	void SetEscapeKeys(TArray<struct FKey> InKeys);
	void SetAllowModifierKeys(bool bInAllowModifierKeys);
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
	void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void OnIsSelectingKeyChanged__DelegateSignature();
	bool GetIsSelectingKey();
};

// Class UMG.Int32Binding
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UInt32Binding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Int32Binding");
		return ptr;
	}



	int GetValue();
};

// Class UMG.InvalidationBox
// 0x0018 (FullSize[0x0138] - InheritedSize[0x0120])
class UInvalidationBox : public UContentWidget
{
public:
	bool                                               bCanCache;                                                 // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               CacheRelativeTransforms;                                   // 0x0121(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GT06[0x16];                                    // 0x0122(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.InvalidationBox");
		return ptr;
	}



	void SetCanCache(bool CanCache);
	void InvalidateCache();
	bool GetCanCache();
};

// Class UMG.UserListEntry
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUserListEntry : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UserListEntry");
		return ptr;
	}



	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
};

// Class UMG.UserListEntryLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UserListEntryLibrary");
		return ptr;
	}



	bool STATIC_IsListItemSelected();
	bool STATIC_IsListItemExpanded();
	class UListViewBase* STATIC_GetOwningListView();
};

// Class UMG.UserObjectListEntry
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUserObjectListEntry : public UUserListEntry
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UserObjectListEntry");
		return ptr;
	}



	void OnListItemObjectSet(class UObject* ListItemObject);
};

// Class UMG.UserObjectListEntryLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UserObjectListEntryLibrary");
		return ptr;
	}



	class UObject* STATIC_GetListItemObject();
};

// Class UMG.ListViewBase
// 0x0110 (FullSize[0x0218] - InheritedSize[0x0108])
class UListViewBase : public UWidget
{
public:
	class UClass*                                      EntryWidgetClass;                                          // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              WheelScrollMultiplier;                                     // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableScrollAnimation;                                    // 0x0114(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableFixedLineOffset;                                    // 0x0115(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_KFDP[0x2];                                     // 0x0116(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FixedLineScrollOffset;                                     // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BMD8[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    BP_OnEntryGenerated;                                       // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    BP_OnEntryReleased;                                        // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FUserWidgetPool                             EntryWidgetPool;                                           // 0x0140(0x0080) (Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FMAV[0x58];                                    // 0x01C0(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ListViewBase");
		return ptr;
	}



	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollOffset(float InScrollOffset);
	void SetScrollBarVisibility(UMG_ESlateVisibility InVisibility);
	void ScrollToTop();
	void ScrollToBottom();
	void RequestRefresh();
	void RegenerateAllEntries();
	TArray<class UUserWidget*> GetDisplayedEntryWidgets();
};

// Class UMG.ListView
// 0x0150 (FullSize[0x0368] - InheritedSize[0x0218])
class UListView : public UListViewBase
{
public:
	unsigned char                                      UnknownData_UWS4[0xC0];                                    // 0x0218(0x00C0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x02D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<Slate_ESelectionMode>                  SelectionMode;                                             // 0x02D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	SlateCore_EConsumeMouseWheel                       ConsumeMouseWheel;                                         // 0x02DA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bClearSelectionOnClick;                                    // 0x02DB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsFocusable;                                              // 0x02DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IQY7[0x3];                                     // 0x02DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              EntrySpacing;                                              // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bReturnFocusToSelection;                                   // 0x02E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_PK1D[0x3];                                     // 0x02E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UObject*>                             ListItems;                                                 // 0x02E8(0x0010) (ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_QFF7[0x10];                                    // 0x02F8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    BP_OnEntryInitialized;                                     // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    BP_OnItemClicked;                                          // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    BP_OnItemDoubleClicked;                                    // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    BP_OnItemIsHoveredChanged;                                 // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    BP_OnItemSelectionChanged;                                 // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    BP_OnItemScrolledIntoView;                                 // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ListView");
		return ptr;
	}



	void SetSelectionMode(TEnumAsByte<Slate_ESelectionMode> SelectionMode);
	void SetSelectedIndex(int Index);
	void ScrollIndexIntoView(int Index);
	void RemoveItem(class UObject* Item);
	void NavigateToIndex(int Index);
	bool IsRefreshPending();
	int GetNumItems();
	TArray<class UObject*> GetListItems();
	class UObject* GetItemAt(int Index);
	int GetIndexForItem(class UObject* Item);
	void ClearListItems();
	void BP_SetSelectedItem(class UObject* Item);
	void BP_SetListItems(TArray<class UObject*> InListItems);
	void BP_SetItemSelection(class UObject* Item, bool bSelected);
	void BP_ScrollItemIntoView(class UObject* Item);
	void BP_NavigateToItem(class UObject* Item);
	bool BP_IsItemVisible(class UObject* Item);
	bool BP_GetSelectedItems(TArray<class UObject*>* Items);
	class UObject* BP_GetSelectedItem();
	int BP_GetNumItemsSelected();
	void BP_ClearSelection();
	void BP_CancelScrollIntoView();
	void AddItem(class UObject* Item);
};

// Class UMG.ListViewDesignerPreviewItem
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UListViewDesignerPreviewItem : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ListViewDesignerPreviewItem");
		return ptr;
	}



};

// Class UMG.MenuAnchor
// 0x0050 (FullSize[0x0170] - InheritedSize[0x0120])
class UMenuAnchor : public UContentWidget
{
public:
	class UClass*                                      MenuClass;                                                 // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnGetMenuContentEvent;                                     // 0x0128(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnGetUserMenuContentEvent;                                 // 0x0138(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EMenuPlacement>              Placement;                                                 // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFitInWindow;                                              // 0x0149(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldDeferPaintingAfterWindowContent;                     // 0x014A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               UseApplicationMenuStack;                                   // 0x014B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AHSF[0x4];                                     // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMenuOpenChanged;                                         // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0M5M[0x10];                                    // 0x0160(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MenuAnchor");
		return ptr;
	}



	void ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void SetPlacement(TEnumAsByte<SlateCore_EMenuPlacement> InPlacement);
	void Open(bool bFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	class UUserWidget* GetUserWidget__DelegateSignature();
	struct FVector2D GetMenuPosition();
	void FitInWindow(bool bFit);
	void Close();
};

// Class UMG.MouseCursorBinding
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UMouseCursorBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MouseCursorBinding");
		return ptr;
	}



	TEnumAsByte<CoreUObject_EMouseCursor> GetValue();
};

// Class UMG.MovieScene2DTransformPropertySystem
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MovieScene2DTransformPropertySystem");
		return ptr;
	}



};

// Class UMG.MovieScene2DTransformSection
// 0x0470 (FullSize[0x0558] - InheritedSize[0x00E8])
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_UZ8O[0x8];                                     // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieScene2DTransformMask                  TransformMask;                                             // 0x00F0(0x0004) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_10BI[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneFloatChannel                     Translation[0x2];                                          // 0x00F8(0x0140) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     Rotation;                                                  // 0x0238(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     Scale[0x2];                                                // 0x02D8(0x0140) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     Shear[0x2];                                                // 0x0418(0x0140) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return ptr;
	}



};

// Class UMG.MovieScene2DTransformTrack
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return ptr;
	}



};

// Class UMG.MovieSceneMarginSection
// 0x0280 (FullSize[0x0368] - InheritedSize[0x00E8])
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     TopCurve;                                                  // 0x00E8(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     LeftCurve;                                                 // 0x0188(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     RightCurve;                                                // 0x0228(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     BottomCurve;                                               // 0x02C8(0x00A0) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return ptr;
	}



};

// Class UMG.MovieSceneMarginTrack
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData_P348[0x8];                                     // 0x00A8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return ptr;
	}



};

// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData_VNMN[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               BrushPropertyNamePath;                                     // 0x0090(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FName                                       TrackName;                                                 // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		return ptr;
	}



};

// Class UMG.MultiLineEditableText
// 0x0348 (FullSize[0x0470] - InheritedSize[0x0128])
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                      // 0x0128(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                  // 0x0140(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x0158(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             WidgetStyle;                                               // 0x0168(0x0270) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bIsReadOnly;                                               // 0x03D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F37G[0x7];                                     // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateFontInfo                              Font;                                                      // 0x03E0(0x0058) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextWhenFocused;                                  // 0x0438(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearTextSelectionOnFocusLoss;                             // 0x0439(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RevertTextOnEscape;                                        // 0x043A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x043B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                          // 0x043C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                    // 0x043D(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	Slate_EVirtualKeyboardDismissAction                VirtualKeyboardDismissAction;                              // 0x043E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JC7R[0x1];                                     // 0x043F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0440(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0450(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P51G[0x10];                                    // 0x0460(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		return ptr;
	}



	void SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle);
	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(const struct FText& InHintText);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
	struct FText GetHintText();
};

// Class UMG.MultiLineEditableTextBox
// 0x0B70 (FullSize[0x0C98] - InheritedSize[0x0128])
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                      // 0x0128(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FText                                       HintText;                                                  // 0x0140(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             HintTextDelegate;                                          // 0x0158(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                       WidgetStyle;                                               // 0x0168(0x07F8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TextStyle;                                                 // 0x0960(0x0270) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bIsReadOnly;                                               // 0x0BD0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowContextMenu;                                          // 0x0BD1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                    // 0x0BD2(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	Slate_EVirtualKeyboardDismissAction                VirtualKeyboardDismissAction;                              // 0x0BD3(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y1N1[0x4];                                     // 0x0BD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0BD8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0BE0(0x0058) (Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ForegroundColor;                                           // 0x0C38(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                BackgroundColor;                                           // 0x0C48(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ReadOnlyForegroundColor;                                   // 0x0C58(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextChanged;                                             // 0x0C68(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTextCommitted;                                           // 0x0C78(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KSYZ[0x10];                                    // 0x0C88(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return ptr;
	}



	void SetTextStyle(const struct FTextBlockStyle& InTextStyle);
	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(const struct FText& InHintText);
	void SetError(const struct FText& InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
	struct FText GetHintText();
};

// Class UMG.NamedSlot
// 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
class UNamedSlot : public UContentWidget
{
public:
	unsigned char                                      UnknownData_1B8M[0x10];                                    // 0x0120(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.NamedSlot");
		return ptr;
	}



};

// Class UMG.NamedSlotInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNamedSlotInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		return ptr;
	}



};

// Class UMG.NativeWidgetHost
// 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData_OZYB[0x10];                                    // 0x0108(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		return ptr;
	}



};

// Class UMG.Overlay
// 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_BH3H[0x10];                                    // 0x0120(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Overlay");
		return ptr;
	}



	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
};

// Class UMG.OverlaySlot
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UOverlaySlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData_NTEA[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ONT8[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.OverlaySlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.ProgressBar
// 0x0210 (FullSize[0x0318] - InheritedSize[0x0108])
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                           WidgetStyle;                                               // 0x0108(0x01A0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x02A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            BackgroundImage;                                           // 0x02B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            FillImage;                                                 // 0x02B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USlateBrushAsset*                            MarqueeImage;                                              // 0x02C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Percent;                                                   // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_EProgressBarFillType>            BarFillType;                                               // 0x02CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsMarquee;                                                // 0x02CD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T7DE[0x2];                                     // 0x02CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   BorderPadding;                                             // 0x02D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             PercentDelegate;                                           // 0x02D8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                                FillColorAndOpacity;                                       // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             FillColorAndOpacityDelegate;                               // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7U9Z[0x10];                                    // 0x0308(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ProgressBar");
		return ptr;
	}



	void SetPercent(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
};

// Class UMG.RetainerBox
// 0x0030 (FullSize[0x0150] - InheritedSize[0x0120])
class URetainerBox : public UContentWidget
{
public:
	bool                                               bRetainRender;                                             // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               RenderOnInvalidation;                                      // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RenderOnPhase;                                             // 0x0122(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0EXB[0x1];                                     // 0x0123(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Phase;                                                     // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PhaseCount;                                                // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HY69[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          EffectMaterial;                                            // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FName                                       TextureParameter;                                          // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NAU5[0x10];                                    // 0x0140(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.RetainerBox");
		return ptr;
	}



	void SetTextureParameter(const struct FName& TextureParameter);
	void SetRetainRendering(bool bInRetainRendering);
	void SetRenderingPhase(int RenderPhase, int TotalPhases);
	void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
	void RequestRender();
	class UMaterialInstanceDynamic* GetEffectMaterial();
};

// Class UMG.RichTextBlockImageDecorator
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	class UDataTable*                                  ImageSet;                                                  // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.RichTextBlockImageDecorator");
		return ptr;
	}



};

// Class UMG.SafeZone
// 0x0018 (FullSize[0x0138] - InheritedSize[0x0120])
class USafeZone : public UContentWidget
{
public:
	bool                                               PadLeft;                                                   // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PadRight;                                                  // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PadTop;                                                    // 0x0122(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               PadBottom;                                                 // 0x0123(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FDBV[0x14];                                    // 0x0124(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SafeZone");
		return ptr;
	}



	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};

// Class UMG.SafeZoneSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                               bIsTitleSafe;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y4R7[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     SafeAreaScale;                                             // 0x003C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HAlign;                                                    // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VAlign;                                                    // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IIBG[0x2];                                     // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SafeZoneSlot");
		return ptr;
	}



};

// Class UMG.ScaleBox
// 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
class UScaleBox : public UContentWidget
{
public:
	TEnumAsByte<Slate_EStretch>                        Stretch;                                                   // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_EStretchDirection>               StretchDirection;                                          // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VUQ1[0x2];                                     // 0x0122(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              UserSpecifiedScale;                                        // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IgnoreInheritedScale;                                      // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DJG0[0x17];                                    // 0x0129(0x0017) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ScaleBox");
		return ptr;
	}



	void SetUserSpecifiedScale(float InUserSpecifiedScale);
	void SetStretchDirection(TEnumAsByte<Slate_EStretchDirection> InStretchDirection);
	void SetStretch(TEnumAsByte<Slate_EStretch> InStretch);
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};

// Class UMG.ScaleBoxSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UScaleBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4S7X[0x16];                                    // 0x004A(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ScaleBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.ScrollBar
// 0x0508 (FullSize[0x0610] - InheritedSize[0x0108])
class UScrollBar : public UWidget
{
public:
	struct FScrollBarStyle                             WidgetStyle;                                               // 0x0108(0x04D0) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x05D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysShowScrollbar;                                      // 0x05E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysShowScrollbarTrack;                                 // 0x05E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x05E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SA1B[0x1];                                     // 0x05E3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Thickness;                                                 // 0x05E4(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x05EC(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KI4X[0x14];                                    // 0x05FC(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ScrollBar");
		return ptr;
	}



	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};

// Class UMG.ScrollBoxSlot
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RSWP[0xE];                                     // 0x004A(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.ScrollBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.SizeBox
// 0x0038 (FullSize[0x0158] - InheritedSize[0x0120])
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData_4IIH[0x10];                                    // 0x0120(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WidthOverride;                                             // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightOverride;                                            // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDesiredWidth;                                           // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDesiredHeight;                                          // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDesiredWidth;                                           // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDesiredHeight;                                          // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinAspectRatio;                                            // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAspectRatio;                                            // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_WidthOverride : 1;                               // 0x0150(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_HeightOverride : 1;                              // 0x0150(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MinDesiredWidth : 1;                             // 0x0150(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MinDesiredHeight : 1;                            // 0x0150(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MaxDesiredWidth : 1;                             // 0x0150(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MaxDesiredHeight : 1;                            // 0x0150(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MinAspectRatio : 1;                              // 0x0150(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MaxAspectRatio : 1;                              // 0x0150(0x0001) BIT_FIELD (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NP66[0x7];                                     // 0x0151(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SizeBox");
		return ptr;
	}



	void SetWidthOverride(float InWidthOverride);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMinAspectRatio(float InMinAspectRatio);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetMaxAspectRatio(float InMaxAspectRatio);
	void SetHeightOverride(float InHeightOverride);
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMinAspectRatio();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearMaxAspectRatio();
	void ClearHeightOverride();
};

// Class UMG.SizeBoxSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SG6F[0x10];                                    // 0x0048(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EY8B[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.SlateBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return ptr;
	}



	struct FVector2D STATIC_TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalVector);
	struct FVector2D STATIC_TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector);
	float STATIC_TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar);
	float STATIC_TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar);
	void STATIC_ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate, bool bIncludeWindowPosition);
	void STATIC_ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate, bool bIncludeWindowPosition);
	void STATIC_ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition);
	void STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D STATIC_LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
	bool STATIC_IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
	struct FVector2D STATIC_GetLocalTopLeft(const struct FGeometry& Geometry);
	struct FVector2D STATIC_GetLocalSize(const struct FGeometry& Geometry);
	struct FVector2D STATIC_GetAbsoluteSize(const struct FGeometry& Geometry);
	bool STATIC_EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);
	void STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D STATIC_AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
};

// Class UMG.SlateVectorArtData
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>                    VertexData;                                                // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint32_t>                                   IndexData;                                                 // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                          Material;                                                  // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                                   ExtentMin;                                                 // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                                   ExtentMax;                                                 // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SlateVectorArtData");
		return ptr;
	}



};

// Class UMG.SlateAccessibleWidgetData
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class USlateAccessibleWidgetData : public UObject
{
public:
	bool                                               bCanChildrenBeAccessible;                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateAccessibleBehavior                       AccessibleBehavior;                                        // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_ESlateAccessibleBehavior                       AccessibleSummaryBehavior;                                 // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DUXR[0x5];                                     // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       AccessibleText;                                            // 0x0030(0x0018) (NativeAccessSpecifierPublic)
	struct FScriptDelegate                             AccessibleTextDelegate;                                    // 0x0048(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FText                                       AccessibleSummaryText;                                     // 0x0058(0x0018) (NativeAccessSpecifierPublic)
	struct FScriptDelegate                             AccessibleSummaryTextDelegate;                             // 0x0070(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SlateAccessibleWidgetData");
		return ptr;
	}



};

// Class UMG.Slider
// 0x03F0 (FullSize[0x04F8] - InheritedSize[0x0108])
class USlider : public UWidget
{
public:
	float                                              Value;                                                     // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ValueDelegate;                                             // 0x010C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MinValue;                                                  // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxValue;                                                  // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OLCJ[0x4];                                     // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSliderStyle                                WidgetStyle;                                               // 0x0128(0x0340) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8D0R[0x3];                                     // 0x0469(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                SliderBarColor;                                            // 0x046C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SliderHandleColor;                                         // 0x047C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IndentHandle;                                              // 0x048C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Locked;                                                    // 0x048D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MouseUsesStep;                                             // 0x048E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RequiresControllerLock;                                    // 0x048F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StepSize;                                                  // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsFocusable;                                               // 0x0494(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PB8W[0x3];                                     // 0x0495(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                       // 0x0498(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                         // 0x04A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                  // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                    // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x04D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VRS7[0x10];                                    // 0x04E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Slider");
		return ptr;
	}



	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetMinValue(float InValue);
	void SetMaxValue(float InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	float GetValue();
	float GetNormalizedValue();
};

// Class UMG.Spacer
// 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
class USpacer : public UWidget
{
public:
	struct FVector2D                                   Size;                                                      // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_595L[0x10];                                    // 0x0110(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Spacer");
		return ptr;
	}



	void SetSize(const struct FVector2D& InSize);
};

// Class UMG.SpinBox
// 0x0418 (FullSize[0x0520] - InheritedSize[0x0108])
class USpinBox : public UWidget
{
public:
	float                                              Value;                                                     // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ValueDelegate;                                             // 0x010C(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TPF7[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSpinBoxStyle                               WidgetStyle;                                               // 0x0120(0x02E8) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USlateWidgetStyleAsset*                      Style;                                                     // 0x0408(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinFractionalDigits;                                       // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxFractionalDigits;                                       // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysUsesDeltaSnap;                                      // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UAKL[0x3];                                     // 0x0419(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Delta;                                                     // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SliderExponent;                                            // 0x0420(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J2WC[0x4];                                     // 0x0424(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateFontInfo                              Font;                                                      // 0x0428(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Slate_ETextJustify>                    Justification;                                             // 0x0480(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2L2G[0x3];                                     // 0x0481(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinDesiredWidth;                                           // 0x0484(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ClearKeyboardFocusOnCommit;                                // 0x0488(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SelectAllTextOnCommit;                                     // 0x0489(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PIOB[0x6];                                     // 0x048A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateColor                                 ForegroundColor;                                           // 0x0490(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnValueCommitted;                                          // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBeginSliderMovement;                                     // 0x04D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnEndSliderMovement;                                       // 0x04E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      bOverride_MinValue : 1;                                    // 0x04F8(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bOverride_MaxValue : 1;                                    // 0x04F8(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bOverride_MinSliderValue : 1;                              // 0x04F8(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      bOverride_MaxSliderValue : 1;                              // 0x04F8(0x0001) BIT_FIELD (Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S1M5[0x3];                                     // 0x04F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinValue;                                                  // 0x04FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxValue;                                                  // 0x0500(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MinSliderValue;                                            // 0x0504(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaxSliderValue;                                            // 0x0508(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_3WIY[0x14];                                    // 0x050C(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.SpinBox");
		return ptr;
	}



	void SetValue(float NewValue);
	void SetMinValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMinFractionalDigits(int NewValue);
	void SetMaxValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void SetMaxFractionalDigits(int NewValue);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void SetDelta(float NewValue);
	void SetAlwaysUsesDeltaSnap(bool bNewValue);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	int GetMinFractionalDigits();
	float GetMaxValue();
	float GetMaxSliderValue();
	int GetMaxFractionalDigits();
	float GetDelta();
	bool GetAlwaysUsesDeltaSnap();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};

// Class UMG.TextBinding
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UTextBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData_L3G7[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.TextBinding");
		return ptr;
	}



	struct FText GetTextValue();
	struct FString GetStringValue();
};

// Class UMG.TextBlock
// 0x0180 (FullSize[0x02A8] - InheritedSize[0x0128])
class UTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                      // 0x0128(0x0018) (Edit, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             TextDelegate;                                              // 0x0140(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                                 ColorAndOpacity;                                           // 0x0150(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                   // 0x0178(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                      // 0x0188(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 StrikeBrush;                                               // 0x01E0(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowOffset;                                              // 0x0268(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColorAndOpacity;                                     // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             ShadowColorAndOpacityDelegate;                             // 0x0280(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MinDesiredWidth;                                           // 0x0290(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bWrapWithInvalidationPanel;                                // 0x0294(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoWrapText;                                             // 0x0295(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Slate_ETextTransformPolicy                         TextTransformPolicy;                                       // 0x0296(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSimpleTextMode;                                           // 0x0297(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_XY87[0x10];                                    // 0x0298(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.TextBlock");
		return ptr;
	}



	void SetTextTransformPolicy(Slate_ETextTransformPolicy InTransformPolicy);
	void SetText(const struct FText& InText);
	void SetStrikeBrush(const struct FSlateBrush& InStrikeBrush);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	struct FText GetText();
	class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
	class UMaterialInstanceDynamic* GetDynamicFontMaterial();
};

// Class UMG.Throbber
// 0x00A8 (FullSize[0x01B0] - InheritedSize[0x0108])
class UThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                            // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateHorizontally;                                      // 0x010C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateVertically;                                        // 0x010D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnimateOpacity;                                           // 0x010E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MF45[0x1];                                     // 0x010F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USlateBrushAsset*                            PieceImage;                                                // 0x0110(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Image;                                                     // 0x0118(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3QD0[0x10];                                    // 0x01A0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Throbber");
		return ptr;
	}



	void SetNumberOfPieces(int InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};

// Class UMG.TileView
// 0x0020 (FullSize[0x0388] - InheritedSize[0x0368])
class UTileView : public UListView
{
public:
	float                                              EntryHeight;                                               // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              EntryWidth;                                                // 0x036C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Slate_EListItemAlignment                           TileAlignment;                                             // 0x0370(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWrapHorizontalNavigation;                                 // 0x0371(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_G5GK[0x16];                                    // 0x0372(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.TileView");
		return ptr;
	}



	void SetEntryWidth(float NewWidth);
	void SetEntryHeight(float NewHeight);
	float GetEntryWidth();
	float GetEntryHeight();
};

// Class UMG.TreeView
// 0x0058 (FullSize[0x03C0] - InheritedSize[0x0368])
class UTreeView : public UListView
{
public:
	unsigned char                                      UnknownData_BP26[0x10];                                    // 0x0368(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             BP_OnGetItemChildren;                                      // 0x0378(0x0010) (Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    BP_OnItemExpansionChanged;                                 // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RPUJ[0x28];                                    // 0x0398(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.TreeView");
		return ptr;
	}



	void SetItemExpansion(class UObject* Item, bool bExpandItem);
	void ExpandAll();
	void CollapseAll();
};

// Class UMG.UMGSequencePlayer
// 0x0550 (FullSize[0x0578] - InheritedSize[0x0028])
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData_6EAF[0x3E8];                                   // 0x0028(0x03E8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetAnimation*                            Animation;                                                 // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6LA8[0x8];                                     // 0x0418(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneRootEvaluationTemplateInstance   RootTemplateInstance;                                      // 0x0420(0x00E8) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ND6V[0x70];                                    // 0x0508(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return ptr;
	}



	void SetUserTag(const struct FName& InUserTag);
	struct FName GetUserTag();
};

// Class UMG.UMGSequenceTickManager
// 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
class UUMGSequenceTickManager : public UObject
{
public:
	unsigned char                                      WeakUserWidgets[0x50];                                     // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty
	class UMovieSceneEntitySystemLinker*               Linker;                                                    // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_M6VQ[0xA0];                                    // 0x0080(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UMGSequenceTickManager");
		return ptr;
	}



};

// Class UMG.UniformGridPanel
// 0x0028 (FullSize[0x0148] - InheritedSize[0x0120])
class UUniformGridPanel : public UPanelWidget
{
public:
	struct FMargin                                     SlotPadding;                                               // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              MinDesiredSlotWidth;                                       // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinDesiredSlotHeight;                                      // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_66X0[0x10];                                    // 0x0138(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		return ptr;
	}



	void SetSlotPadding(const struct FMargin& InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content, int InRow, int InColumn);
};

// Class UMG.UniformGridSlot
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UUniformGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1O3L[0x2];                                     // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Row;                                                       // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Column;                                                    // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1BYP[0xC];                                     // 0x0044(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetRow(int InRow);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetColumn(int InColumn);
};

// Class UMG.VerticalBox
// 0x0010 (FullSize[0x0130] - InheritedSize[0x0120])
class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData_MZJ2[0x10];                                    // 0x0120(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.VerticalBox");
		return ptr;
	}



	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
};

// Class UMG.VerticalBoxSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FSlateChildSize                             Size;                                                      // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QEYZ[0x8];                                     // 0x0050(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DQPM[0x6];                                     // 0x005A(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.Viewport
// 0x0048 (FullSize[0x0168] - InheritedSize[0x0120])
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                                BackgroundColor;                                           // 0x0120(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_51KA[0x38];                                    // 0x0130(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.Viewport");
		return ptr;
	}



	class AActor* Spawn(class UClass* ActorClass);
	void SetViewRotation(const struct FRotator& Rotation);
	void SetViewLocation(const struct FVector& Location);
	struct FRotator GetViewRotation();
	class UWorld* GetViewportWorld();
	struct FVector GetViewLocation();
};

// Class UMG.VisibilityBinding
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UVisibilityBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.VisibilityBinding");
		return ptr;
	}



	UMG_ESlateVisibility GetValue();
};

// Class UMG.WidgetAnimation
// 0x0030 (FullSize[0x0090] - InheritedSize[0x0060])
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWidgetAnimationBinding>             AnimationBindings;                                         // 0x0068(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bLegacyFinishOnStop;                                       // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_Z4XI[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DisplayLabel;                                              // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		return ptr;
	}



	void UnbindFromAnimationStarted(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);
	void UnbindFromAnimationFinished(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);
	void UnbindAllFromAnimationStarted(class UUserWidget* Widget);
	void UnbindAllFromAnimationFinished(class UUserWidget* Widget);
	float GetStartTime();
	float GetEndTime();
	void BindToAnimationStarted(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);
	void BindToAnimationFinished(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);
};

// Class UMG.WidgetAnimationDelegateBinding
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
public:
	TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;                           // 0x0028(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetAnimationDelegateBinding");
		return ptr;
	}



};

// Class UMG.WidgetAnimationPlayCallbackProxy
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UWidgetAnimationPlayCallbackProxy : public UObject
{
public:
	struct FScriptMulticastDelegate                    Finished;                                                  // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TXPB[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetAnimationPlayCallbackProxy");
		return ptr;
	}



	class UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
	class UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed);
};

// Class UMG.WidgetBinding
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UWidgetBinding : public UPropertyBinding
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetBinding");
		return ptr;
	}



	class UWidget* GetValue();
};

// Class UMG.WidgetBlueprintGeneratedClass
// 0x0040 (FullSize[0x0368] - InheritedSize[0x0328])
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                                 WidgetTree;                                                // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bClassRequiresNativeTick : 1;                              // 0x0330(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_3XER[0x7];                                     // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDelegateRuntimeBinding>             Bindings;                                                  // 0x0338(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UWidgetAnimation*>                    Animations;                                                // 0x0348(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               NamedSlots;                                                // 0x0358(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return ptr;
	}



};

// Class UMG.WidgetBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return ptr;
	}



	struct FEventReply STATIC_UnlockMouse(struct FEventReply* Reply);
	struct FEventReply STATIC_Unhandled();
	void STATIC_SetWindowTitleBarState(class UWidget* TitleBarContent, Engine_EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
	void STATIC_SetWindowTitleBarOnCloseClickedDelegate(const struct FScriptDelegate& Delegate);
	void STATIC_SetWindowTitleBarCloseButtonActive(bool bActive);
	struct FEventReply STATIC_SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers);
	struct FEventReply STATIC_SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition);
	void STATIC_SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, Engine_EMouseLockMode InMouseLockMode);
	void STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	void STATIC_SetInputMode_GameOnly(class APlayerController* PlayerController);
	void STATIC_SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, Engine_EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
	void STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	bool STATIC_SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<CoreUObject_EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot);
	void STATIC_SetFocusToGameViewport();
	void STATIC_SetColorVisionDeficiencyType(SlateCore_EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
	void STATIC_SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture);
	void STATIC_SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material);
	void STATIC_RestorePreviousWindowTitleBarState();
	struct FEventReply STATIC_ReleaseMouseCapture(struct FEventReply* Reply);
	struct FEventReply STATIC_ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks);
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	struct FSlateBrush STATIC_NoResourceBrush();
	struct FSlateBrush STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height);
	struct FSlateBrush STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height);
	struct FSlateBrush STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	struct FEventReply STATIC_LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
	bool STATIC_IsDragDropping();
	struct FEventReply STATIC_Handled();
	void STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding);
	struct FKeyEvent STATIC_GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromPointerEvent(const struct FPointerEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromKeyEvent(const struct FKeyEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);
	class UMaterialInstanceDynamic* STATIC_GetDynamicMaterial(struct FSlateBrush* Brush);
	class UDragDropOperation* STATIC_GetDragDroppingContent();
	class UTexture2D* STATIC_GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush);
	class UMaterialInterface* STATIC_GetBrushResourceAsMaterial(const struct FSlateBrush& Brush);
	class UObject* STATIC_GetBrushResource(const struct FSlateBrush& Brush);
	void STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* Interface, bool TopLevelOnly);
	void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly);
	struct FEventReply STATIC_EndDragDrop(struct FEventReply* Reply);
	void STATIC_DrawTextFormatted(struct FPaintContext* Context, const struct FText& Text, const struct FVector2D& Position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint);
	void STATIC_DrawText(struct FPaintContext* Context, const struct FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint);
	void STATIC_DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness);
	void STATIC_DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness);
	void STATIC_DrawBox(struct FPaintContext* Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint);
	void STATIC_DismissAllMenus();
	struct FEventReply STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	struct FEventReply STATIC_DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	class UDragDropOperation* STATIC_CreateDragDropOperation(class UClass* OperationClass);
	static class UUserWidget* STATIC_Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);
	struct FEventReply STATIC_ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers);
	struct FEventReply STATIC_CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
	struct FEventReply STATIC_CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);
	void STATIC_CancelDragDrop();
};

// Class UMG.WidgetComponent
// 0x0128 (FullSize[0x0590] - InheritedSize[0x0468])
class UWidgetComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_50P2[0x8];                                     // 0x0468(0x0008) Fix Super Size
	class UClass*                                      WidgetClass;                                               // 0x0470(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FIntPoint                                   DrawSize;                                                  // 0x0478(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bManuallyRedraw;                                           // 0x0480(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bRedrawRequested;                                          // 0x0481(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NO09[0x2];                                     // 0x0482(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RedrawTime;                                                // 0x0484(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ES2T[0x8];                                     // 0x0488(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntPoint                                   CurrentDrawSize;                                           // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDrawAtDesiredSize;                                        // 0x0498(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_93F6[0x3];                                     // 0x0499(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   Pivot;                                                     // 0x049C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bReceiveHardwareInput;                                     // 0x04A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bWindowFocusable;                                          // 0x04A5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_EWindowVisibility                              WindowVisibility;                                          // 0x04A6(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bApplyGammaCorrection;                                     // 0x04A7(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULocalPlayer*                                OwnerPlayer;                                               // 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                BackgroundColor;                                           // 0x04B0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                                TintColorAndOpacity;                                       // 0x04C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              OpacityFromTexture;                                        // 0x04D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_EWidgetBlendMode                               BlendMode;                                                 // 0x04D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsTwoSided;                                               // 0x04D5(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               TickWhenOffscreen;                                         // 0x04D6(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_J8IS[0x1];                                     // 0x04D7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBodySetup*                                  BodySetup;                                                 // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          TranslucentMaterial;                                       // 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          TranslucentMaterial_OneSided;                              // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OpaqueMaterial;                                            // 0x04F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          OpaqueMaterial_OneSided;                                   // 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          MaskedMaterial;                                            // 0x0500(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                          MaskedMaterial_OneSided;                                   // 0x0508(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                      RenderTarget;                                              // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAddedToScreen;                                            // 0x0520(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEditTimeUsable;                                           // 0x0521(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_IXTQ[0x2];                                     // 0x0522(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SharedLayerName;                                           // 0x0524(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                LayerZOrder;                                               // 0x052C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_EWidgetGeometryMode                            GeometryMode;                                              // 0x0530(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ER9H[0x3];                                     // 0x0531(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              CylinderArcAngle;                                          // 0x0534(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	UMG_ETickMode                                      TickMode;                                                  // 0x0538(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JDY8[0x27];                                    // 0x0539(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserWidget*                                 Widget;                                                    // 0x0560(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KJIU[0x28];                                    // 0x0568(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetComponent");
		return ptr;
	}



	void SetWindowVisibility(UMG_EWindowVisibility InVisibility);
	void SetWindowFocusable(bool bInWindowFocusable);
	void SetWidgetSpace(UMG_EWidgetSpace NewSpace);
	void SetWidget(class UUserWidget* Widget);
	void SetTwoSided(bool bWantTwoSided);
	void SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity);
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);
	void SetTickMode(UMG_ETickMode InTickMode);
	void SetRedrawTime(float InRedrawTime);
	void SetPivot(const struct FVector2D& InPivot);
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void SetManuallyRedraw(bool bUseManualRedraw);
	void SetGeometryMode(UMG_EWidgetGeometryMode InGeometryMode);
	void SetDrawSize(const struct FVector2D& Size);
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
	void SetCylinderArcAngle(float InCylinderArcAngle);
	void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
	void RequestRedraw();
	bool IsWidgetVisible();
	UMG_EWindowVisibility GetWindowVisiblility();
	bool GetWindowFocusable();
	UMG_EWidgetSpace GetWidgetSpace();
	class UUserWidget* GetWidget();
	class UUserWidget* GetUserWidgetObject();
	bool GetTwoSided();
	bool GetTickWhenOffscreen();
	class UTextureRenderTarget2D* GetRenderTarget();
	float GetRedrawTime();
	struct FVector2D GetPivot();
	class ULocalPlayer* GetOwnerPlayer();
	class UMaterialInstanceDynamic* GetMaterialInstance();
	bool GetManuallyRedraw();
	UMG_EWidgetGeometryMode GetGeometryMode();
	struct FVector2D GetDrawSize();
	bool GetDrawAtDesiredSize();
	float GetCylinderArcAngle();
	struct FVector2D GetCurrentDrawSize();
};

// Class UMG.WidgetInteractionComponent
// 0x0208 (FullSize[0x0400] - InheritedSize[0x01F8])
class UWidgetInteractionComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnHoveredWidgetChanged;                                    // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FRSF[0x10];                                    // 0x0208(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                VirtualUserIndex;                                          // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PointerIndex;                                              // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ECollisionChannel>              TraceChannel;                                              // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_04GD[0x3];                                     // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InteractionDistance;                                       // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMG_EWidgetInteractionSource                       InteractionSource;                                         // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableHitTesting;                                         // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowDebug;                                                // 0x022A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_806N[0x1];                                     // 0x022B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DebugSphereLineThickness;                                  // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DebugLineThickness;                                        // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                DebugColor;                                                // 0x0234(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7C2S[0x7C];                                    // 0x0244(0x007C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FHitResult                                  CustomHitResult;                                           // 0x02C0(0x008C) (Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	struct FVector2D                                   LocalHitLocation;                                          // 0x034C(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                                   LastLocalHitLocation;                                      // 0x0354(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_8441[0x4];                                     // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWidgetComponent*                            HoveredWidgetComponent;                                    // 0x0360(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FHitResult                                  LastHitResult;                                             // 0x0368(0x008C) (Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                               bIsHoveredWidgetInteractable;                              // 0x03F4(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsHoveredWidgetFocusable;                                 // 0x03F5(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsHoveredWidgetHitTestVisible;                            // 0x03F6(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_V7LT[0x9];                                     // 0x03F7(0x0009) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetInteractionComponent");
		return ptr;
	}



	void SetFocus(class UWidget* FocusWidget);
	void SetCustomHitResult(const struct FHitResult& HitResult);
	bool SendKeyChar(const struct FString& Characters, bool bRepeat);
	void ScrollWheel(float ScrollDelta);
	void ReleasePointerKey(const struct FKey& Key);
	bool ReleaseKey(const struct FKey& Key);
	void PressPointerKey(const struct FKey& Key);
	bool PressKey(const struct FKey& Key, bool bRepeat);
	bool PressAndReleaseKey(const struct FKey& Key);
	bool IsOverInteractableWidget();
	bool IsOverHitTestVisibleWidget();
	bool IsOverFocusableWidget();
	struct FHitResult GetLastHitResult();
	class UWidgetComponent* GetHoveredWidgetComponent();
	struct FVector2D Get2DHitLocation();
};

// Class UMG.WidgetLayoutLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return ptr;
	}



	class UWrapBoxSlot* STATIC_SlotAsWrapBoxSlot(class UWidget* Widget);
	class UWidgetSwitcherSlot* STATIC_SlotAsWidgetSwitcherSlot(class UWidget* Widget);
	class UVerticalBoxSlot* STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget);
	class UUniformGridSlot* STATIC_SlotAsUniformGridSlot(class UWidget* Widget);
	class USizeBoxSlot* STATIC_SlotAsSizeBoxSlot(class UWidget* Widget);
	class UScrollBoxSlot* STATIC_SlotAsScrollBoxSlot(class UWidget* Widget);
	class UScaleBoxSlot* STATIC_SlotAsScaleBoxSlot(class UWidget* Widget);
	class USafeZoneSlot* STATIC_SlotAsSafeBoxSlot(class UWidget* Widget);
	class UOverlaySlot* STATIC_SlotAsOverlaySlot(class UWidget* Widget);
	class UHorizontalBoxSlot* STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget);
	class UGridSlot* STATIC_SlotAsGridSlot(class UWidget* Widget);
	class UCanvasPanelSlot* STATIC_SlotAsCanvasSlot(class UWidget* Widget);
	class UBorderSlot* STATIC_SlotAsBorderSlot(class UWidget* Widget);
	void STATIC_RemoveAllWidgets(class UObject* WorldContextObject);
	bool STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative);
	struct FGeometry STATIC_GetViewportWidgetGeometry(class UObject* WorldContextObject);
	struct FVector2D STATIC_GetViewportSize(class UObject* WorldContextObject);
	float STATIC_GetViewportScale(class UObject* WorldContextObject);
	struct FGeometry STATIC_GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
	bool STATIC_GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
	struct FVector2D STATIC_GetMousePositionOnViewport(class UObject* WorldContextObject);
	struct FVector2D STATIC_GetMousePositionOnPlatform();
};

// Class UMG.WidgetNavigation
// 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                       Up;                                                        // 0x0028(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Down;                                                      // 0x004C(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Left;                                                      // 0x0070(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Right;                                                     // 0x0094(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Next;                                                      // 0x00B8(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FWidgetNavigationData                       Previous;                                                  // 0x00DC(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetNavigation");
		return ptr;
	}



};

// Class UMG.WidgetSwitcher
// 0x0018 (FullSize[0x0138] - InheritedSize[0x0120])
class UWidgetSwitcher : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                         // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W15T[0x14];                                    // 0x0124(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		return ptr;
	}



	void SetActiveWidgetIndex(int Index);
	void SetActiveWidget(class UWidget* Widget);
	class UWidget* GetWidgetAtIndex(int Index);
	int GetNumWidgets();
	int GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
};

// Class UMG.WidgetSwitcherSlot
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData_VQK1[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMargin                                     Padding;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WT0N[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.WidgetTree
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UWidgetTree : public UObject
{
public:
	class UWidget*                                     RootWidget;                                                // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WidgetTree");
		return ptr;
	}



};

// Class UMG.WindowTitleBarArea
// 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
class UWindowTitleBarArea : public UContentWidget
{
public:
	bool                                               bWindowButtonsEnabled;                                     // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoubleClickTogglesFullscreen;                             // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7O7M[0x1E];                                    // 0x0122(0x001E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WindowTitleBarArea");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.WindowTitleBarAreaSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OV4X[0x16];                                    // 0x004A(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WindowTitleBarAreaSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
};

// Class UMG.WrapBox
// 0x0028 (FullSize[0x0148] - InheritedSize[0x0120])
class UWrapBox : public UPanelWidget
{
public:
	struct FVector2D                                   InnerSlotPadding;                                          // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WrapWidth;                                                 // 0x0128(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WrapSize;                                                  // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExplicitWrapWidth;                                        // 0x0130(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bExplicitWrapSize;                                         // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EOrientation>                Orientation;                                               // 0x0132(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IP38[0x15];                                    // 0x0133(0x0015) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WrapBox");
		return ptr;
	}



	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);
};

// Class UMG.WrapBoxSlot
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bFillEmptySpace;                                           // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NWFT[0x3];                                     // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FillSpanWhenLessThan;                                      // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DBMI[0xE];                                     // 0x0052(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UMG.WrapBoxSlot");
		return ptr;
	}



	void SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
