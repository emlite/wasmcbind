#include <webbind/enums.h>

DEFINE_EMLITE_TYPE(SecurityPolicyViolationEventDisposition, em_Val);
SecurityPolicyViolationEventDisposition SecurityPolicyViolationEventDisposition_enforce() { return (SecurityPolicyViolationEventDisposition){em_Val_from_string("enforce")}; }
SecurityPolicyViolationEventDisposition SecurityPolicyViolationEventDisposition_report() { return (SecurityPolicyViolationEventDisposition){em_Val_from_string("report")}; }
DEFINE_EMLITE_TYPE(EndingType, em_Val);
EndingType EndingType_transparent() { return (EndingType){em_Val_from_string("transparent")}; }
EndingType EndingType_native() { return (EndingType){em_Val_from_string("native")}; }
DEFINE_EMLITE_TYPE(IDBRequestReadyState, em_Val);
IDBRequestReadyState IDBRequestReadyState_pending() { return (IDBRequestReadyState){em_Val_from_string("pending")}; }
IDBRequestReadyState IDBRequestReadyState_done() { return (IDBRequestReadyState){em_Val_from_string("done")}; }
DEFINE_EMLITE_TYPE(IDBTransactionDurability, em_Val);
IDBTransactionDurability IDBTransactionDurability_default_() { return (IDBTransactionDurability){em_Val_from_string("default")}; }
IDBTransactionDurability IDBTransactionDurability_strict() { return (IDBTransactionDurability){em_Val_from_string("strict")}; }
IDBTransactionDurability IDBTransactionDurability_relaxed() { return (IDBTransactionDurability){em_Val_from_string("relaxed")}; }
DEFINE_EMLITE_TYPE(IDBCursorDirection, em_Val);
IDBCursorDirection IDBCursorDirection_next() { return (IDBCursorDirection){em_Val_from_string("next")}; }
IDBCursorDirection IDBCursorDirection_nextunique() { return (IDBCursorDirection){em_Val_from_string("nextunique")}; }
IDBCursorDirection IDBCursorDirection_prev() { return (IDBCursorDirection){em_Val_from_string("prev")}; }
IDBCursorDirection IDBCursorDirection_prevunique() { return (IDBCursorDirection){em_Val_from_string("prevunique")}; }
DEFINE_EMLITE_TYPE(IDBTransactionMode, em_Val);
IDBTransactionMode IDBTransactionMode_readonly() { return (IDBTransactionMode){em_Val_from_string("readonly")}; }
IDBTransactionMode IDBTransactionMode_readwrite() { return (IDBTransactionMode){em_Val_from_string("readwrite")}; }
IDBTransactionMode IDBTransactionMode_versionchange() { return (IDBTransactionMode){em_Val_from_string("versionchange")}; }
DEFINE_EMLITE_TYPE(AccelerometerLocalCoordinateSystem, em_Val);
AccelerometerLocalCoordinateSystem AccelerometerLocalCoordinateSystem_device() { return (AccelerometerLocalCoordinateSystem){em_Val_from_string("device")}; }
AccelerometerLocalCoordinateSystem AccelerometerLocalCoordinateSystem_screen() { return (AccelerometerLocalCoordinateSystem){em_Val_from_string("screen")}; }
DEFINE_EMLITE_TYPE(AudioSessionType, em_Val);
AudioSessionType AudioSessionType_auto_() { return (AudioSessionType){em_Val_from_string("auto")}; }
AudioSessionType AudioSessionType_playback() { return (AudioSessionType){em_Val_from_string("playback")}; }
AudioSessionType AudioSessionType_transient() { return (AudioSessionType){em_Val_from_string("transient")}; }
AudioSessionType AudioSessionType_transient_solo() { return (AudioSessionType){em_Val_from_string("transient-solo")}; }
AudioSessionType AudioSessionType_ambient() { return (AudioSessionType){em_Val_from_string("ambient")}; }
AudioSessionType AudioSessionType_play_and_record() { return (AudioSessionType){em_Val_from_string("play-and-record")}; }
DEFINE_EMLITE_TYPE(AudioSessionState, em_Val);
AudioSessionState AudioSessionState_inactive() { return (AudioSessionState){em_Val_from_string("inactive")}; }
AudioSessionState AudioSessionState_active() { return (AudioSessionState){em_Val_from_string("active")}; }
AudioSessionState AudioSessionState_interrupted() { return (AudioSessionState){em_Val_from_string("interrupted")}; }
DEFINE_EMLITE_TYPE(AutoplayPolicy, em_Val);
AutoplayPolicy AutoplayPolicy_allowed() { return (AutoplayPolicy){em_Val_from_string("allowed")}; }
AutoplayPolicy AutoplayPolicy_allowed_muted() { return (AutoplayPolicy){em_Val_from_string("allowed-muted")}; }
AutoplayPolicy AutoplayPolicy_disallowed() { return (AutoplayPolicy){em_Val_from_string("disallowed")}; }
DEFINE_EMLITE_TYPE(AutoplayPolicyMediaType, em_Val);
AutoplayPolicyMediaType AutoplayPolicyMediaType_mediaelement() { return (AutoplayPolicyMediaType){em_Val_from_string("mediaelement")}; }
AutoplayPolicyMediaType AutoplayPolicyMediaType_audiocontext() { return (AutoplayPolicyMediaType){em_Val_from_string("audiocontext")}; }
DEFINE_EMLITE_TYPE(BackgroundFetchResult, em_Val);
BackgroundFetchResult BackgroundFetchResult_none() { return (BackgroundFetchResult){em_Val_from_string("")}; }
BackgroundFetchResult BackgroundFetchResult_success() { return (BackgroundFetchResult){em_Val_from_string("success")}; }
BackgroundFetchResult BackgroundFetchResult_failure() { return (BackgroundFetchResult){em_Val_from_string("failure")}; }
DEFINE_EMLITE_TYPE(BackgroundFetchFailureReason, em_Val);
BackgroundFetchFailureReason BackgroundFetchFailureReason_none() { return (BackgroundFetchFailureReason){em_Val_from_string("")}; }
BackgroundFetchFailureReason BackgroundFetchFailureReason_aborted() { return (BackgroundFetchFailureReason){em_Val_from_string("aborted")}; }
BackgroundFetchFailureReason BackgroundFetchFailureReason_bad_status() { return (BackgroundFetchFailureReason){em_Val_from_string("bad-status")}; }
BackgroundFetchFailureReason BackgroundFetchFailureReason_fetch_error() { return (BackgroundFetchFailureReason){em_Val_from_string("fetch-error")}; }
BackgroundFetchFailureReason BackgroundFetchFailureReason_quota_exceeded() { return (BackgroundFetchFailureReason){em_Val_from_string("quota-exceeded")}; }
BackgroundFetchFailureReason BackgroundFetchFailureReason_download_total_exceeded() { return (BackgroundFetchFailureReason){em_Val_from_string("download-total-exceeded")}; }
DEFINE_EMLITE_TYPE(PresentationStyle, em_Val);
PresentationStyle PresentationStyle_unspecified() { return (PresentationStyle){em_Val_from_string("unspecified")}; }
PresentationStyle PresentationStyle_inline_() { return (PresentationStyle){em_Val_from_string("inline")}; }
PresentationStyle PresentationStyle_attachment() { return (PresentationStyle){em_Val_from_string("attachment")}; }
DEFINE_EMLITE_TYPE(CompressionFormat, em_Val);
CompressionFormat CompressionFormat_deflate() { return (CompressionFormat){em_Val_from_string("deflate")}; }
CompressionFormat CompressionFormat_deflate_raw() { return (CompressionFormat){em_Val_from_string("deflate-raw")}; }
CompressionFormat CompressionFormat_gzip() { return (CompressionFormat){em_Val_from_string("gzip")}; }
DEFINE_EMLITE_TYPE(PressureSource, em_Val);
PressureSource PressureSource_cpu() { return (PressureSource){em_Val_from_string("cpu")}; }
DEFINE_EMLITE_TYPE(PressureState, em_Val);
PressureState PressureState_nominal() { return (PressureState){em_Val_from_string("nominal")}; }
PressureState PressureState_fair() { return (PressureState){em_Val_from_string("fair")}; }
PressureState PressureState_serious() { return (PressureState){em_Val_from_string("serious")}; }
PressureState PressureState_critical() { return (PressureState){em_Val_from_string("critical")}; }
DEFINE_EMLITE_TYPE(ContactProperty, em_Val);
ContactProperty ContactProperty_address() { return (ContactProperty){em_Val_from_string("address")}; }
ContactProperty ContactProperty_email() { return (ContactProperty){em_Val_from_string("email")}; }
ContactProperty ContactProperty_icon() { return (ContactProperty){em_Val_from_string("icon")}; }
ContactProperty ContactProperty_name() { return (ContactProperty){em_Val_from_string("name")}; }
ContactProperty ContactProperty_tel() { return (ContactProperty){em_Val_from_string("tel")}; }
DEFINE_EMLITE_TYPE(ContentCategory, em_Val);
ContentCategory ContentCategory_none() { return (ContentCategory){em_Val_from_string("")}; }
ContentCategory ContentCategory_homepage() { return (ContentCategory){em_Val_from_string("homepage")}; }
ContentCategory ContentCategory_article() { return (ContentCategory){em_Val_from_string("article")}; }
ContentCategory ContentCategory_video() { return (ContentCategory){em_Val_from_string("video")}; }
ContentCategory ContentCategory_audio() { return (ContentCategory){em_Val_from_string("audio")}; }
DEFINE_EMLITE_TYPE(CookieSameSite, em_Val);
CookieSameSite CookieSameSite_strict() { return (CookieSameSite){em_Val_from_string("strict")}; }
CookieSameSite CookieSameSite_lax() { return (CookieSameSite){em_Val_from_string("lax")}; }
CookieSameSite CookieSameSite_none() { return (CookieSameSite){em_Val_from_string("none")}; }
DEFINE_EMLITE_TYPE(CredentialMediationRequirement, em_Val);
CredentialMediationRequirement CredentialMediationRequirement_silent() { return (CredentialMediationRequirement){em_Val_from_string("silent")}; }
CredentialMediationRequirement CredentialMediationRequirement_optional() { return (CredentialMediationRequirement){em_Val_from_string("optional")}; }
CredentialMediationRequirement CredentialMediationRequirement_conditional() { return (CredentialMediationRequirement){em_Val_from_string("conditional")}; }
CredentialMediationRequirement CredentialMediationRequirement_required() { return (CredentialMediationRequirement){em_Val_from_string("required")}; }
DEFINE_EMLITE_TYPE(ScriptingPolicyViolationType, em_Val);
ScriptingPolicyViolationType ScriptingPolicyViolationType_externalScript() { return (ScriptingPolicyViolationType){em_Val_from_string("externalScript")}; }
ScriptingPolicyViolationType ScriptingPolicyViolationType_inlineScript() { return (ScriptingPolicyViolationType){em_Val_from_string("inlineScript")}; }
ScriptingPolicyViolationType ScriptingPolicyViolationType_inlineEventHandler() { return (ScriptingPolicyViolationType){em_Val_from_string("inlineEventHandler")}; }
ScriptingPolicyViolationType ScriptingPolicyViolationType_eval() { return (ScriptingPolicyViolationType){em_Val_from_string("eval")}; }
DEFINE_EMLITE_TYPE(FontFaceLoadStatus, em_Val);
FontFaceLoadStatus FontFaceLoadStatus_unloaded() { return (FontFaceLoadStatus){em_Val_from_string("unloaded")}; }
FontFaceLoadStatus FontFaceLoadStatus_loading() { return (FontFaceLoadStatus){em_Val_from_string("loading")}; }
FontFaceLoadStatus FontFaceLoadStatus_loaded() { return (FontFaceLoadStatus){em_Val_from_string("loaded")}; }
FontFaceLoadStatus FontFaceLoadStatus_error() { return (FontFaceLoadStatus){em_Val_from_string("error")}; }
DEFINE_EMLITE_TYPE(FontFaceSetLoadStatus, em_Val);
FontFaceSetLoadStatus FontFaceSetLoadStatus_loading() { return (FontFaceSetLoadStatus){em_Val_from_string("loading")}; }
FontFaceSetLoadStatus FontFaceSetLoadStatus_loaded() { return (FontFaceSetLoadStatus){em_Val_from_string("loaded")}; }
DEFINE_EMLITE_TYPE(HighlightType, em_Val);
HighlightType HighlightType_highlight() { return (HighlightType){em_Val_from_string("highlight")}; }
HighlightType HighlightType_spelling_error() { return (HighlightType){em_Val_from_string("spelling-error")}; }
HighlightType HighlightType_grammar_error() { return (HighlightType){em_Val_from_string("grammar-error")}; }
DEFINE_EMLITE_TYPE(ChildDisplayType, em_Val);
ChildDisplayType ChildDisplayType_block() { return (ChildDisplayType){em_Val_from_string("block")}; }
ChildDisplayType ChildDisplayType_normal() { return (ChildDisplayType){em_Val_from_string("normal")}; }
DEFINE_EMLITE_TYPE(LayoutSizingMode, em_Val);
LayoutSizingMode LayoutSizingMode_block_like() { return (LayoutSizingMode){em_Val_from_string("block-like")}; }
LayoutSizingMode LayoutSizingMode_manual() { return (LayoutSizingMode){em_Val_from_string("manual")}; }
DEFINE_EMLITE_TYPE(BlockFragmentationType, em_Val);
BlockFragmentationType BlockFragmentationType_none() { return (BlockFragmentationType){em_Val_from_string("none")}; }
BlockFragmentationType BlockFragmentationType_page() { return (BlockFragmentationType){em_Val_from_string("page")}; }
BlockFragmentationType BlockFragmentationType_column() { return (BlockFragmentationType){em_Val_from_string("column")}; }
BlockFragmentationType BlockFragmentationType_region() { return (BlockFragmentationType){em_Val_from_string("region")}; }
DEFINE_EMLITE_TYPE(BreakType, em_Val);
BreakType BreakType_none() { return (BreakType){em_Val_from_string("none")}; }
BreakType BreakType_line() { return (BreakType){em_Val_from_string("line")}; }
BreakType BreakType_column() { return (BreakType){em_Val_from_string("column")}; }
BreakType BreakType_page() { return (BreakType){em_Val_from_string("page")}; }
BreakType BreakType_region() { return (BreakType){em_Val_from_string("region")}; }
DEFINE_EMLITE_TYPE(SpatialNavigationDirection, em_Val);
SpatialNavigationDirection SpatialNavigationDirection_up() { return (SpatialNavigationDirection){em_Val_from_string("up")}; }
SpatialNavigationDirection SpatialNavigationDirection_down() { return (SpatialNavigationDirection){em_Val_from_string("down")}; }
SpatialNavigationDirection SpatialNavigationDirection_left() { return (SpatialNavigationDirection){em_Val_from_string("left")}; }
SpatialNavigationDirection SpatialNavigationDirection_right() { return (SpatialNavigationDirection){em_Val_from_string("right")}; }
DEFINE_EMLITE_TYPE(FocusableAreaSearchMode, em_Val);
FocusableAreaSearchMode FocusableAreaSearchMode_visible() { return (FocusableAreaSearchMode){em_Val_from_string("visible")}; }
FocusableAreaSearchMode FocusableAreaSearchMode_all() { return (FocusableAreaSearchMode){em_Val_from_string("all")}; }
DEFINE_EMLITE_TYPE(CSSNumericBaseType, em_Val);
CSSNumericBaseType CSSNumericBaseType_length() { return (CSSNumericBaseType){em_Val_from_string("length")}; }
CSSNumericBaseType CSSNumericBaseType_angle() { return (CSSNumericBaseType){em_Val_from_string("angle")}; }
CSSNumericBaseType CSSNumericBaseType_time() { return (CSSNumericBaseType){em_Val_from_string("time")}; }
CSSNumericBaseType CSSNumericBaseType_frequency() { return (CSSNumericBaseType){em_Val_from_string("frequency")}; }
CSSNumericBaseType CSSNumericBaseType_resolution() { return (CSSNumericBaseType){em_Val_from_string("resolution")}; }
CSSNumericBaseType CSSNumericBaseType_flex() { return (CSSNumericBaseType){em_Val_from_string("flex")}; }
CSSNumericBaseType CSSNumericBaseType_percent() { return (CSSNumericBaseType){em_Val_from_string("percent")}; }
DEFINE_EMLITE_TYPE(CSSMathOperator, em_Val);
CSSMathOperator CSSMathOperator_sum() { return (CSSMathOperator){em_Val_from_string("sum")}; }
CSSMathOperator CSSMathOperator_product() { return (CSSMathOperator){em_Val_from_string("product")}; }
CSSMathOperator CSSMathOperator_negate() { return (CSSMathOperator){em_Val_from_string("negate")}; }
CSSMathOperator CSSMathOperator_invert() { return (CSSMathOperator){em_Val_from_string("invert")}; }
CSSMathOperator CSSMathOperator_min() { return (CSSMathOperator){em_Val_from_string("min")}; }
CSSMathOperator CSSMathOperator_max() { return (CSSMathOperator){em_Val_from_string("max")}; }
CSSMathOperator CSSMathOperator_clamp() { return (CSSMathOperator){em_Val_from_string("clamp")}; }
DEFINE_EMLITE_TYPE(ScrollBehavior, em_Val);
ScrollBehavior ScrollBehavior_auto_() { return (ScrollBehavior){em_Val_from_string("auto")}; }
ScrollBehavior ScrollBehavior_instant() { return (ScrollBehavior){em_Val_from_string("instant")}; }
ScrollBehavior ScrollBehavior_smooth() { return (ScrollBehavior){em_Val_from_string("smooth")}; }
DEFINE_EMLITE_TYPE(ScrollLogicalPosition, em_Val);
ScrollLogicalPosition ScrollLogicalPosition_start() { return (ScrollLogicalPosition){em_Val_from_string("start")}; }
ScrollLogicalPosition ScrollLogicalPosition_center() { return (ScrollLogicalPosition){em_Val_from_string("center")}; }
ScrollLogicalPosition ScrollLogicalPosition_end() { return (ScrollLogicalPosition){em_Val_from_string("end")}; }
ScrollLogicalPosition ScrollLogicalPosition_nearest() { return (ScrollLogicalPosition){em_Val_from_string("nearest")}; }
DEFINE_EMLITE_TYPE(ScrollIntoViewContainer, em_Val);
ScrollIntoViewContainer ScrollIntoViewContainer_all() { return (ScrollIntoViewContainer){em_Val_from_string("all")}; }
ScrollIntoViewContainer ScrollIntoViewContainer_nearest() { return (ScrollIntoViewContainer){em_Val_from_string("nearest")}; }
DEFINE_EMLITE_TYPE(CSSBoxType, em_Val);
CSSBoxType CSSBoxType_margin() { return (CSSBoxType){em_Val_from_string("margin")}; }
CSSBoxType CSSBoxType_border() { return (CSSBoxType){em_Val_from_string("border")}; }
CSSBoxType CSSBoxType_padding() { return (CSSBoxType){em_Val_from_string("padding")}; }
CSSBoxType CSSBoxType_content() { return (CSSBoxType){em_Val_from_string("content")}; }
DEFINE_EMLITE_TYPE(DevicePostureType, em_Val);
DevicePostureType DevicePostureType_continuous() { return (DevicePostureType){em_Val_from_string("continuous")}; }
DevicePostureType DevicePostureType_folded() { return (DevicePostureType){em_Val_from_string("folded")}; }
DEFINE_EMLITE_TYPE(ItemType, em_Val);
ItemType ItemType_product() { return (ItemType){em_Val_from_string("product")}; }
ItemType ItemType_subscription() { return (ItemType){em_Val_from_string("subscription")}; }
DEFINE_EMLITE_TYPE(ShadowRootMode, em_Val);
ShadowRootMode ShadowRootMode_open() { return (ShadowRootMode){em_Val_from_string("open")}; }
ShadowRootMode ShadowRootMode_closed() { return (ShadowRootMode){em_Val_from_string("closed")}; }
DEFINE_EMLITE_TYPE(SlotAssignmentMode, em_Val);
SlotAssignmentMode SlotAssignmentMode_manual() { return (SlotAssignmentMode){em_Val_from_string("manual")}; }
SlotAssignmentMode SlotAssignmentMode_named() { return (SlotAssignmentMode){em_Val_from_string("named")}; }
DEFINE_EMLITE_TYPE(UnderlineStyle, em_Val);
UnderlineStyle UnderlineStyle_none() { return (UnderlineStyle){em_Val_from_string("none")}; }
UnderlineStyle UnderlineStyle_solid() { return (UnderlineStyle){em_Val_from_string("solid")}; }
UnderlineStyle UnderlineStyle_dotted() { return (UnderlineStyle){em_Val_from_string("dotted")}; }
UnderlineStyle UnderlineStyle_dashed() { return (UnderlineStyle){em_Val_from_string("dashed")}; }
UnderlineStyle UnderlineStyle_wavy() { return (UnderlineStyle){em_Val_from_string("wavy")}; }
DEFINE_EMLITE_TYPE(UnderlineThickness, em_Val);
UnderlineThickness UnderlineThickness_none() { return (UnderlineThickness){em_Val_from_string("none")}; }
UnderlineThickness UnderlineThickness_thin() { return (UnderlineThickness){em_Val_from_string("thin")}; }
UnderlineThickness UnderlineThickness_thick() { return (UnderlineThickness){em_Val_from_string("thick")}; }
DEFINE_EMLITE_TYPE(MediaKeysRequirement, em_Val);
MediaKeysRequirement MediaKeysRequirement_required() { return (MediaKeysRequirement){em_Val_from_string("required")}; }
MediaKeysRequirement MediaKeysRequirement_optional() { return (MediaKeysRequirement){em_Val_from_string("optional")}; }
MediaKeysRequirement MediaKeysRequirement_not_allowed() { return (MediaKeysRequirement){em_Val_from_string("not-allowed")}; }
DEFINE_EMLITE_TYPE(MediaKeySessionType, em_Val);
MediaKeySessionType MediaKeySessionType_temporary() { return (MediaKeySessionType){em_Val_from_string("temporary")}; }
MediaKeySessionType MediaKeySessionType_persistent_license() { return (MediaKeySessionType){em_Val_from_string("persistent-license")}; }
DEFINE_EMLITE_TYPE(MediaKeySessionClosedReason, em_Val);
MediaKeySessionClosedReason MediaKeySessionClosedReason_internal_error() { return (MediaKeySessionClosedReason){em_Val_from_string("internal-error")}; }
MediaKeySessionClosedReason MediaKeySessionClosedReason_closed_by_application() { return (MediaKeySessionClosedReason){em_Val_from_string("closed-by-application")}; }
MediaKeySessionClosedReason MediaKeySessionClosedReason_release_acknowledged() { return (MediaKeySessionClosedReason){em_Val_from_string("release-acknowledged")}; }
MediaKeySessionClosedReason MediaKeySessionClosedReason_hardware_context_reset() { return (MediaKeySessionClosedReason){em_Val_from_string("hardware-context-reset")}; }
MediaKeySessionClosedReason MediaKeySessionClosedReason_resource_evicted() { return (MediaKeySessionClosedReason){em_Val_from_string("resource-evicted")}; }
DEFINE_EMLITE_TYPE(MediaKeyStatus, em_Val);
MediaKeyStatus MediaKeyStatus_usable() { return (MediaKeyStatus){em_Val_from_string("usable")}; }
MediaKeyStatus MediaKeyStatus_expired() { return (MediaKeyStatus){em_Val_from_string("expired")}; }
MediaKeyStatus MediaKeyStatus_released() { return (MediaKeyStatus){em_Val_from_string("released")}; }
MediaKeyStatus MediaKeyStatus_output_restricted() { return (MediaKeyStatus){em_Val_from_string("output-restricted")}; }
MediaKeyStatus MediaKeyStatus_output_downscaled() { return (MediaKeyStatus){em_Val_from_string("output-downscaled")}; }
MediaKeyStatus MediaKeyStatus_usable_in_future() { return (MediaKeyStatus){em_Val_from_string("usable-in-future")}; }
MediaKeyStatus MediaKeyStatus_status_pending() { return (MediaKeyStatus){em_Val_from_string("status-pending")}; }
MediaKeyStatus MediaKeyStatus_internal_error() { return (MediaKeyStatus){em_Val_from_string("internal-error")}; }
DEFINE_EMLITE_TYPE(MediaKeyMessageType, em_Val);
MediaKeyMessageType MediaKeyMessageType_license_request() { return (MediaKeyMessageType){em_Val_from_string("license-request")}; }
MediaKeyMessageType MediaKeyMessageType_license_renewal() { return (MediaKeyMessageType){em_Val_from_string("license-renewal")}; }
MediaKeyMessageType MediaKeyMessageType_license_release() { return (MediaKeyMessageType){em_Val_from_string("license-release")}; }
MediaKeyMessageType MediaKeyMessageType_individualization_request() { return (MediaKeyMessageType){em_Val_from_string("individualization-request")}; }
DEFINE_EMLITE_TYPE(IdentityCredentialRequestOptionsContext, em_Val);
IdentityCredentialRequestOptionsContext IdentityCredentialRequestOptionsContext_signin() { return (IdentityCredentialRequestOptionsContext){em_Val_from_string("signin")}; }
IdentityCredentialRequestOptionsContext IdentityCredentialRequestOptionsContext_signup() { return (IdentityCredentialRequestOptionsContext){em_Val_from_string("signup")}; }
IdentityCredentialRequestOptionsContext IdentityCredentialRequestOptionsContext_use() { return (IdentityCredentialRequestOptionsContext){em_Val_from_string("use")}; }
IdentityCredentialRequestOptionsContext IdentityCredentialRequestOptionsContext_continue_() { return (IdentityCredentialRequestOptionsContext){em_Val_from_string("continue")}; }
DEFINE_EMLITE_TYPE(IdentityCredentialRequestOptionsMode, em_Val);
IdentityCredentialRequestOptionsMode IdentityCredentialRequestOptionsMode_active() { return (IdentityCredentialRequestOptionsMode){em_Val_from_string("active")}; }
IdentityCredentialRequestOptionsMode IdentityCredentialRequestOptionsMode_passive() { return (IdentityCredentialRequestOptionsMode){em_Val_from_string("passive")}; }
DEFINE_EMLITE_TYPE(OpaqueProperty, em_Val);
OpaqueProperty OpaqueProperty_opaque() { return (OpaqueProperty){em_Val_from_string("opaque")}; }
DEFINE_EMLITE_TYPE(FenceReportingDestination, em_Val);
FenceReportingDestination FenceReportingDestination_buyer() { return (FenceReportingDestination){em_Val_from_string("buyer")}; }
FenceReportingDestination FenceReportingDestination_seller() { return (FenceReportingDestination){em_Val_from_string("seller")}; }
FenceReportingDestination FenceReportingDestination_component_seller() { return (FenceReportingDestination){em_Val_from_string("component-seller")}; }
FenceReportingDestination FenceReportingDestination_direct_seller() { return (FenceReportingDestination){em_Val_from_string("direct-seller")}; }
FenceReportingDestination FenceReportingDestination_shared_storage_select_url() { return (FenceReportingDestination){em_Val_from_string("shared-storage-select-url")}; }
DEFINE_EMLITE_TYPE(RequestDestination, em_Val);
RequestDestination RequestDestination_none() { return (RequestDestination){em_Val_from_string("")}; }
RequestDestination RequestDestination_audio() { return (RequestDestination){em_Val_from_string("audio")}; }
RequestDestination RequestDestination_audioworklet() { return (RequestDestination){em_Val_from_string("audioworklet")}; }
RequestDestination RequestDestination_document() { return (RequestDestination){em_Val_from_string("document")}; }
RequestDestination RequestDestination_embed() { return (RequestDestination){em_Val_from_string("embed")}; }
RequestDestination RequestDestination_font() { return (RequestDestination){em_Val_from_string("font")}; }
RequestDestination RequestDestination_frame() { return (RequestDestination){em_Val_from_string("frame")}; }
RequestDestination RequestDestination_iframe() { return (RequestDestination){em_Val_from_string("iframe")}; }
RequestDestination RequestDestination_image() { return (RequestDestination){em_Val_from_string("image")}; }
RequestDestination RequestDestination_json() { return (RequestDestination){em_Val_from_string("json")}; }
RequestDestination RequestDestination_manifest() { return (RequestDestination){em_Val_from_string("manifest")}; }
RequestDestination RequestDestination_object() { return (RequestDestination){em_Val_from_string("object")}; }
RequestDestination RequestDestination_paintworklet() { return (RequestDestination){em_Val_from_string("paintworklet")}; }
RequestDestination RequestDestination_report() { return (RequestDestination){em_Val_from_string("report")}; }
RequestDestination RequestDestination_script() { return (RequestDestination){em_Val_from_string("script")}; }
RequestDestination RequestDestination_sharedworker() { return (RequestDestination){em_Val_from_string("sharedworker")}; }
RequestDestination RequestDestination_style() { return (RequestDestination){em_Val_from_string("style")}; }
RequestDestination RequestDestination_track() { return (RequestDestination){em_Val_from_string("track")}; }
RequestDestination RequestDestination_video() { return (RequestDestination){em_Val_from_string("video")}; }
RequestDestination RequestDestination_worker() { return (RequestDestination){em_Val_from_string("worker")}; }
RequestDestination RequestDestination_xslt() { return (RequestDestination){em_Val_from_string("xslt")}; }
DEFINE_EMLITE_TYPE(RequestMode, em_Val);
RequestMode RequestMode_navigate() { return (RequestMode){em_Val_from_string("navigate")}; }
RequestMode RequestMode_same_origin() { return (RequestMode){em_Val_from_string("same-origin")}; }
RequestMode RequestMode_no_cors() { return (RequestMode){em_Val_from_string("no-cors")}; }
RequestMode RequestMode_cors() { return (RequestMode){em_Val_from_string("cors")}; }
DEFINE_EMLITE_TYPE(RequestCredentials, em_Val);
RequestCredentials RequestCredentials_omit() { return (RequestCredentials){em_Val_from_string("omit")}; }
RequestCredentials RequestCredentials_same_origin() { return (RequestCredentials){em_Val_from_string("same-origin")}; }
RequestCredentials RequestCredentials_include() { return (RequestCredentials){em_Val_from_string("include")}; }
DEFINE_EMLITE_TYPE(RequestCache, em_Val);
RequestCache RequestCache_default_() { return (RequestCache){em_Val_from_string("default")}; }
RequestCache RequestCache_no_store() { return (RequestCache){em_Val_from_string("no-store")}; }
RequestCache RequestCache_reload() { return (RequestCache){em_Val_from_string("reload")}; }
RequestCache RequestCache_no_cache() { return (RequestCache){em_Val_from_string("no-cache")}; }
RequestCache RequestCache_force_cache() { return (RequestCache){em_Val_from_string("force-cache")}; }
RequestCache RequestCache_only_if_cached() { return (RequestCache){em_Val_from_string("only-if-cached")}; }
DEFINE_EMLITE_TYPE(RequestRedirect, em_Val);
RequestRedirect RequestRedirect_follow() { return (RequestRedirect){em_Val_from_string("follow")}; }
RequestRedirect RequestRedirect_error() { return (RequestRedirect){em_Val_from_string("error")}; }
RequestRedirect RequestRedirect_manual() { return (RequestRedirect){em_Val_from_string("manual")}; }
DEFINE_EMLITE_TYPE(RequestDuplex, em_Val);
RequestDuplex RequestDuplex_half() { return (RequestDuplex){em_Val_from_string("half")}; }
DEFINE_EMLITE_TYPE(RequestPriority, em_Val);
RequestPriority RequestPriority_high() { return (RequestPriority){em_Val_from_string("high")}; }
RequestPriority RequestPriority_low() { return (RequestPriority){em_Val_from_string("low")}; }
RequestPriority RequestPriority_auto_() { return (RequestPriority){em_Val_from_string("auto")}; }
DEFINE_EMLITE_TYPE(ResponseType, em_Val);
ResponseType ResponseType_basic() { return (ResponseType){em_Val_from_string("basic")}; }
ResponseType ResponseType_cors() { return (ResponseType){em_Val_from_string("cors")}; }
ResponseType ResponseType_default_() { return (ResponseType){em_Val_from_string("default")}; }
ResponseType ResponseType_error() { return (ResponseType){em_Val_from_string("error")}; }
ResponseType ResponseType_opaque() { return (ResponseType){em_Val_from_string("opaque")}; }
ResponseType ResponseType_opaqueredirect() { return (ResponseType){em_Val_from_string("opaqueredirect")}; }
DEFINE_EMLITE_TYPE(FileSystemPermissionMode, em_Val);
FileSystemPermissionMode FileSystemPermissionMode_read() { return (FileSystemPermissionMode){em_Val_from_string("read")}; }
FileSystemPermissionMode FileSystemPermissionMode_readwrite() { return (FileSystemPermissionMode){em_Val_from_string("readwrite")}; }
DEFINE_EMLITE_TYPE(WellKnownDirectory, em_Val);
WellKnownDirectory WellKnownDirectory_desktop() { return (WellKnownDirectory){em_Val_from_string("desktop")}; }
WellKnownDirectory WellKnownDirectory_documents() { return (WellKnownDirectory){em_Val_from_string("documents")}; }
WellKnownDirectory WellKnownDirectory_downloads() { return (WellKnownDirectory){em_Val_from_string("downloads")}; }
WellKnownDirectory WellKnownDirectory_music() { return (WellKnownDirectory){em_Val_from_string("music")}; }
WellKnownDirectory WellKnownDirectory_pictures() { return (WellKnownDirectory){em_Val_from_string("pictures")}; }
WellKnownDirectory WellKnownDirectory_videos() { return (WellKnownDirectory){em_Val_from_string("videos")}; }
DEFINE_EMLITE_TYPE(FileSystemHandleKind, em_Val);
FileSystemHandleKind FileSystemHandleKind_file() { return (FileSystemHandleKind){em_Val_from_string("file")}; }
FileSystemHandleKind FileSystemHandleKind_directory() { return (FileSystemHandleKind){em_Val_from_string("directory")}; }
DEFINE_EMLITE_TYPE(WriteCommandType, em_Val);
WriteCommandType WriteCommandType_write() { return (WriteCommandType){em_Val_from_string("write")}; }
WriteCommandType WriteCommandType_seek() { return (WriteCommandType){em_Val_from_string("seek")}; }
WriteCommandType WriteCommandType_truncate() { return (WriteCommandType){em_Val_from_string("truncate")}; }
DEFINE_EMLITE_TYPE(FullscreenNavigationUI, em_Val);
FullscreenNavigationUI FullscreenNavigationUI_auto_() { return (FullscreenNavigationUI){em_Val_from_string("auto")}; }
FullscreenNavigationUI FullscreenNavigationUI_show() { return (FullscreenNavigationUI){em_Val_from_string("show")}; }
FullscreenNavigationUI FullscreenNavigationUI_hide() { return (FullscreenNavigationUI){em_Val_from_string("hide")}; }
DEFINE_EMLITE_TYPE(GamepadHand, em_Val);
GamepadHand GamepadHand_none() { return (GamepadHand){em_Val_from_string("")}; }
GamepadHand GamepadHand_left() { return (GamepadHand){em_Val_from_string("left")}; }
GamepadHand GamepadHand_right() { return (GamepadHand){em_Val_from_string("right")}; }
DEFINE_EMLITE_TYPE(GamepadMappingType, em_Val);
GamepadMappingType GamepadMappingType_none() { return (GamepadMappingType){em_Val_from_string("")}; }
GamepadMappingType GamepadMappingType_standard() { return (GamepadMappingType){em_Val_from_string("standard")}; }
GamepadMappingType GamepadMappingType_xr_standard() { return (GamepadMappingType){em_Val_from_string("xr-standard")}; }
DEFINE_EMLITE_TYPE(GamepadHapticsResult, em_Val);
GamepadHapticsResult GamepadHapticsResult_complete() { return (GamepadHapticsResult){em_Val_from_string("complete")}; }
GamepadHapticsResult GamepadHapticsResult_preempted() { return (GamepadHapticsResult){em_Val_from_string("preempted")}; }
DEFINE_EMLITE_TYPE(GamepadHapticEffectType, em_Val);
GamepadHapticEffectType GamepadHapticEffectType_dual_rumble() { return (GamepadHapticEffectType){em_Val_from_string("dual-rumble")}; }
GamepadHapticEffectType GamepadHapticEffectType_trigger_rumble() { return (GamepadHapticEffectType){em_Val_from_string("trigger-rumble")}; }
DEFINE_EMLITE_TYPE(GyroscopeLocalCoordinateSystem, em_Val);
GyroscopeLocalCoordinateSystem GyroscopeLocalCoordinateSystem_device() { return (GyroscopeLocalCoordinateSystem){em_Val_from_string("device")}; }
GyroscopeLocalCoordinateSystem GyroscopeLocalCoordinateSystem_screen() { return (GyroscopeLocalCoordinateSystem){em_Val_from_string("screen")}; }
DEFINE_EMLITE_TYPE(HandwritingRecognitionType, em_Val);
HandwritingRecognitionType HandwritingRecognitionType_text() { return (HandwritingRecognitionType){em_Val_from_string("text")}; }
HandwritingRecognitionType HandwritingRecognitionType_per_character() { return (HandwritingRecognitionType){em_Val_from_string("per-character")}; }
DEFINE_EMLITE_TYPE(HandwritingInputType, em_Val);
HandwritingInputType HandwritingInputType_mouse() { return (HandwritingInputType){em_Val_from_string("mouse")}; }
HandwritingInputType HandwritingInputType_stylus() { return (HandwritingInputType){em_Val_from_string("stylus")}; }
HandwritingInputType HandwritingInputType_touch() { return (HandwritingInputType){em_Val_from_string("touch")}; }
DEFINE_EMLITE_TYPE(DocumentReadyState, em_Val);
DocumentReadyState DocumentReadyState_loading() { return (DocumentReadyState){em_Val_from_string("loading")}; }
DocumentReadyState DocumentReadyState_interactive() { return (DocumentReadyState){em_Val_from_string("interactive")}; }
DocumentReadyState DocumentReadyState_complete() { return (DocumentReadyState){em_Val_from_string("complete")}; }
DEFINE_EMLITE_TYPE(DocumentVisibilityState, em_Val);
DocumentVisibilityState DocumentVisibilityState_visible() { return (DocumentVisibilityState){em_Val_from_string("visible")}; }
DocumentVisibilityState DocumentVisibilityState_hidden() { return (DocumentVisibilityState){em_Val_from_string("hidden")}; }
DEFINE_EMLITE_TYPE(CanPlayTypeResult, em_Val);
CanPlayTypeResult CanPlayTypeResult_none() { return (CanPlayTypeResult){em_Val_from_string("")}; }
CanPlayTypeResult CanPlayTypeResult_maybe() { return (CanPlayTypeResult){em_Val_from_string("maybe")}; }
CanPlayTypeResult CanPlayTypeResult_probably() { return (CanPlayTypeResult){em_Val_from_string("probably")}; }
DEFINE_EMLITE_TYPE(TextTrackMode, em_Val);
TextTrackMode TextTrackMode_disabled() { return (TextTrackMode){em_Val_from_string("disabled")}; }
TextTrackMode TextTrackMode_hidden() { return (TextTrackMode){em_Val_from_string("hidden")}; }
TextTrackMode TextTrackMode_showing() { return (TextTrackMode){em_Val_from_string("showing")}; }
DEFINE_EMLITE_TYPE(TextTrackKind, em_Val);
TextTrackKind TextTrackKind_subtitles() { return (TextTrackKind){em_Val_from_string("subtitles")}; }
TextTrackKind TextTrackKind_captions() { return (TextTrackKind){em_Val_from_string("captions")}; }
TextTrackKind TextTrackKind_descriptions() { return (TextTrackKind){em_Val_from_string("descriptions")}; }
TextTrackKind TextTrackKind_chapters() { return (TextTrackKind){em_Val_from_string("chapters")}; }
TextTrackKind TextTrackKind_metadata() { return (TextTrackKind){em_Val_from_string("metadata")}; }
DEFINE_EMLITE_TYPE(SelectionMode, em_Val);
SelectionMode SelectionMode_select() { return (SelectionMode){em_Val_from_string("select")}; }
SelectionMode SelectionMode_start() { return (SelectionMode){em_Val_from_string("start")}; }
SelectionMode SelectionMode_end() { return (SelectionMode){em_Val_from_string("end")}; }
SelectionMode SelectionMode_preserve() { return (SelectionMode){em_Val_from_string("preserve")}; }
DEFINE_EMLITE_TYPE(PredefinedColorSpace, em_Val);
PredefinedColorSpace PredefinedColorSpace_srgb() { return (PredefinedColorSpace){em_Val_from_string("srgb")}; }
PredefinedColorSpace PredefinedColorSpace_display_p3() { return (PredefinedColorSpace){em_Val_from_string("display-p3")}; }
DEFINE_EMLITE_TYPE(CanvasColorType, em_Val);
CanvasColorType CanvasColorType_unorm8() { return (CanvasColorType){em_Val_from_string("unorm8")}; }
CanvasColorType CanvasColorType_float16() { return (CanvasColorType){em_Val_from_string("float16")}; }
DEFINE_EMLITE_TYPE(CanvasFillRule, em_Val);
CanvasFillRule CanvasFillRule_nonzero() { return (CanvasFillRule){em_Val_from_string("nonzero")}; }
CanvasFillRule CanvasFillRule_evenodd() { return (CanvasFillRule){em_Val_from_string("evenodd")}; }
DEFINE_EMLITE_TYPE(ImageSmoothingQuality, em_Val);
ImageSmoothingQuality ImageSmoothingQuality_low() { return (ImageSmoothingQuality){em_Val_from_string("low")}; }
ImageSmoothingQuality ImageSmoothingQuality_medium() { return (ImageSmoothingQuality){em_Val_from_string("medium")}; }
ImageSmoothingQuality ImageSmoothingQuality_high() { return (ImageSmoothingQuality){em_Val_from_string("high")}; }
DEFINE_EMLITE_TYPE(CanvasLineCap, em_Val);
CanvasLineCap CanvasLineCap_butt() { return (CanvasLineCap){em_Val_from_string("butt")}; }
CanvasLineCap CanvasLineCap_round() { return (CanvasLineCap){em_Val_from_string("round")}; }
CanvasLineCap CanvasLineCap_square() { return (CanvasLineCap){em_Val_from_string("square")}; }
DEFINE_EMLITE_TYPE(CanvasLineJoin, em_Val);
CanvasLineJoin CanvasLineJoin_round() { return (CanvasLineJoin){em_Val_from_string("round")}; }
CanvasLineJoin CanvasLineJoin_bevel() { return (CanvasLineJoin){em_Val_from_string("bevel")}; }
CanvasLineJoin CanvasLineJoin_miter() { return (CanvasLineJoin){em_Val_from_string("miter")}; }
DEFINE_EMLITE_TYPE(CanvasTextAlign, em_Val);
CanvasTextAlign CanvasTextAlign_start() { return (CanvasTextAlign){em_Val_from_string("start")}; }
CanvasTextAlign CanvasTextAlign_end() { return (CanvasTextAlign){em_Val_from_string("end")}; }
CanvasTextAlign CanvasTextAlign_left() { return (CanvasTextAlign){em_Val_from_string("left")}; }
CanvasTextAlign CanvasTextAlign_right() { return (CanvasTextAlign){em_Val_from_string("right")}; }
CanvasTextAlign CanvasTextAlign_center() { return (CanvasTextAlign){em_Val_from_string("center")}; }
DEFINE_EMLITE_TYPE(CanvasTextBaseline, em_Val);
CanvasTextBaseline CanvasTextBaseline_top() { return (CanvasTextBaseline){em_Val_from_string("top")}; }
CanvasTextBaseline CanvasTextBaseline_hanging() { return (CanvasTextBaseline){em_Val_from_string("hanging")}; }
CanvasTextBaseline CanvasTextBaseline_middle() { return (CanvasTextBaseline){em_Val_from_string("middle")}; }
CanvasTextBaseline CanvasTextBaseline_alphabetic() { return (CanvasTextBaseline){em_Val_from_string("alphabetic")}; }
CanvasTextBaseline CanvasTextBaseline_ideographic() { return (CanvasTextBaseline){em_Val_from_string("ideographic")}; }
CanvasTextBaseline CanvasTextBaseline_bottom() { return (CanvasTextBaseline){em_Val_from_string("bottom")}; }
DEFINE_EMLITE_TYPE(CanvasDirection, em_Val);
CanvasDirection CanvasDirection_ltr() { return (CanvasDirection){em_Val_from_string("ltr")}; }
CanvasDirection CanvasDirection_rtl() { return (CanvasDirection){em_Val_from_string("rtl")}; }
CanvasDirection CanvasDirection_inherit() { return (CanvasDirection){em_Val_from_string("inherit")}; }
DEFINE_EMLITE_TYPE(CanvasFontKerning, em_Val);
CanvasFontKerning CanvasFontKerning_auto_() { return (CanvasFontKerning){em_Val_from_string("auto")}; }
CanvasFontKerning CanvasFontKerning_normal() { return (CanvasFontKerning){em_Val_from_string("normal")}; }
CanvasFontKerning CanvasFontKerning_none() { return (CanvasFontKerning){em_Val_from_string("none")}; }
DEFINE_EMLITE_TYPE(CanvasFontStretch, em_Val);
CanvasFontStretch CanvasFontStretch_ultra_condensed() { return (CanvasFontStretch){em_Val_from_string("ultra-condensed")}; }
CanvasFontStretch CanvasFontStretch_extra_condensed() { return (CanvasFontStretch){em_Val_from_string("extra-condensed")}; }
CanvasFontStretch CanvasFontStretch_condensed() { return (CanvasFontStretch){em_Val_from_string("condensed")}; }
CanvasFontStretch CanvasFontStretch_semi_condensed() { return (CanvasFontStretch){em_Val_from_string("semi-condensed")}; }
CanvasFontStretch CanvasFontStretch_normal() { return (CanvasFontStretch){em_Val_from_string("normal")}; }
CanvasFontStretch CanvasFontStretch_semi_expanded() { return (CanvasFontStretch){em_Val_from_string("semi-expanded")}; }
CanvasFontStretch CanvasFontStretch_expanded() { return (CanvasFontStretch){em_Val_from_string("expanded")}; }
CanvasFontStretch CanvasFontStretch_extra_expanded() { return (CanvasFontStretch){em_Val_from_string("extra-expanded")}; }
CanvasFontStretch CanvasFontStretch_ultra_expanded() { return (CanvasFontStretch){em_Val_from_string("ultra-expanded")}; }
DEFINE_EMLITE_TYPE(CanvasFontVariantCaps, em_Val);
CanvasFontVariantCaps CanvasFontVariantCaps_normal() { return (CanvasFontVariantCaps){em_Val_from_string("normal")}; }
CanvasFontVariantCaps CanvasFontVariantCaps_small_caps() { return (CanvasFontVariantCaps){em_Val_from_string("small-caps")}; }
CanvasFontVariantCaps CanvasFontVariantCaps_all_small_caps() { return (CanvasFontVariantCaps){em_Val_from_string("all-small-caps")}; }
CanvasFontVariantCaps CanvasFontVariantCaps_petite_caps() { return (CanvasFontVariantCaps){em_Val_from_string("petite-caps")}; }
CanvasFontVariantCaps CanvasFontVariantCaps_all_petite_caps() { return (CanvasFontVariantCaps){em_Val_from_string("all-petite-caps")}; }
CanvasFontVariantCaps CanvasFontVariantCaps_unicase() { return (CanvasFontVariantCaps){em_Val_from_string("unicase")}; }
CanvasFontVariantCaps CanvasFontVariantCaps_titling_caps() { return (CanvasFontVariantCaps){em_Val_from_string("titling-caps")}; }
DEFINE_EMLITE_TYPE(CanvasTextRendering, em_Val);
CanvasTextRendering CanvasTextRendering_auto_() { return (CanvasTextRendering){em_Val_from_string("auto")}; }
CanvasTextRendering CanvasTextRendering_optimizeSpeed() { return (CanvasTextRendering){em_Val_from_string("optimizeSpeed")}; }
CanvasTextRendering CanvasTextRendering_optimizeLegibility() { return (CanvasTextRendering){em_Val_from_string("optimizeLegibility")}; }
CanvasTextRendering CanvasTextRendering_geometricPrecision() { return (CanvasTextRendering){em_Val_from_string("geometricPrecision")}; }
DEFINE_EMLITE_TYPE(OffscreenRenderingContextId, em_Val);
OffscreenRenderingContextId OffscreenRenderingContextId__2d() { return (OffscreenRenderingContextId){em_Val_from_string("2d")}; }
OffscreenRenderingContextId OffscreenRenderingContextId_bitmaprenderer() { return (OffscreenRenderingContextId){em_Val_from_string("bitmaprenderer")}; }
OffscreenRenderingContextId OffscreenRenderingContextId_webgl() { return (OffscreenRenderingContextId){em_Val_from_string("webgl")}; }
OffscreenRenderingContextId OffscreenRenderingContextId_webgl2() { return (OffscreenRenderingContextId){em_Val_from_string("webgl2")}; }
OffscreenRenderingContextId OffscreenRenderingContextId_webgpu() { return (OffscreenRenderingContextId){em_Val_from_string("webgpu")}; }
DEFINE_EMLITE_TYPE(ScrollRestoration, em_Val);
ScrollRestoration ScrollRestoration_auto_() { return (ScrollRestoration){em_Val_from_string("auto")}; }
ScrollRestoration ScrollRestoration_manual() { return (ScrollRestoration){em_Val_from_string("manual")}; }
DEFINE_EMLITE_TYPE(NavigationHistoryBehavior, em_Val);
NavigationHistoryBehavior NavigationHistoryBehavior_auto_() { return (NavigationHistoryBehavior){em_Val_from_string("auto")}; }
NavigationHistoryBehavior NavigationHistoryBehavior_push() { return (NavigationHistoryBehavior){em_Val_from_string("push")}; }
NavigationHistoryBehavior NavigationHistoryBehavior_replace() { return (NavigationHistoryBehavior){em_Val_from_string("replace")}; }
DEFINE_EMLITE_TYPE(NavigationType, em_Val);
NavigationType NavigationType_push() { return (NavigationType){em_Val_from_string("push")}; }
NavigationType NavigationType_replace() { return (NavigationType){em_Val_from_string("replace")}; }
NavigationType NavigationType_reload() { return (NavigationType){em_Val_from_string("reload")}; }
NavigationType NavigationType_traverse() { return (NavigationType){em_Val_from_string("traverse")}; }
DEFINE_EMLITE_TYPE(NavigationFocusReset, em_Val);
NavigationFocusReset NavigationFocusReset_after_transition() { return (NavigationFocusReset){em_Val_from_string("after-transition")}; }
NavigationFocusReset NavigationFocusReset_manual() { return (NavigationFocusReset){em_Val_from_string("manual")}; }
DEFINE_EMLITE_TYPE(NavigationScrollBehavior, em_Val);
NavigationScrollBehavior NavigationScrollBehavior_after_transition() { return (NavigationScrollBehavior){em_Val_from_string("after-transition")}; }
NavigationScrollBehavior NavigationScrollBehavior_manual() { return (NavigationScrollBehavior){em_Val_from_string("manual")}; }
DEFINE_EMLITE_TYPE(DOMParserSupportedType, em_Val);
DOMParserSupportedType DOMParserSupportedType_text_html() { return (DOMParserSupportedType){em_Val_from_string("text/html")}; }
DOMParserSupportedType DOMParserSupportedType_text_xml() { return (DOMParserSupportedType){em_Val_from_string("text/xml")}; }
DOMParserSupportedType DOMParserSupportedType_application_xml() { return (DOMParserSupportedType){em_Val_from_string("application/xml")}; }
DOMParserSupportedType DOMParserSupportedType_application_xhtml_xml() { return (DOMParserSupportedType){em_Val_from_string("application/xhtml+xml")}; }
DOMParserSupportedType DOMParserSupportedType_image_svg_xml() { return (DOMParserSupportedType){em_Val_from_string("image/svg+xml")}; }
DEFINE_EMLITE_TYPE(ImageDataPixelFormat, em_Val);
ImageDataPixelFormat ImageDataPixelFormat_rgba_unorm8() { return (ImageDataPixelFormat){em_Val_from_string("rgba-unorm8")}; }
ImageDataPixelFormat ImageDataPixelFormat_rgba_float16() { return (ImageDataPixelFormat){em_Val_from_string("rgba-float16")}; }
DEFINE_EMLITE_TYPE(ImageOrientation, em_Val);
ImageOrientation ImageOrientation_from_image() { return (ImageOrientation){em_Val_from_string("from-image")}; }
ImageOrientation ImageOrientation_flipY() { return (ImageOrientation){em_Val_from_string("flipY")}; }
DEFINE_EMLITE_TYPE(PremultiplyAlpha, em_Val);
PremultiplyAlpha PremultiplyAlpha_none() { return (PremultiplyAlpha){em_Val_from_string("none")}; }
PremultiplyAlpha PremultiplyAlpha_premultiply() { return (PremultiplyAlpha){em_Val_from_string("premultiply")}; }
PremultiplyAlpha PremultiplyAlpha_default_() { return (PremultiplyAlpha){em_Val_from_string("default")}; }
DEFINE_EMLITE_TYPE(ColorSpaceConversion, em_Val);
ColorSpaceConversion ColorSpaceConversion_none() { return (ColorSpaceConversion){em_Val_from_string("none")}; }
ColorSpaceConversion ColorSpaceConversion_default_() { return (ColorSpaceConversion){em_Val_from_string("default")}; }
DEFINE_EMLITE_TYPE(ResizeQuality, em_Val);
ResizeQuality ResizeQuality_pixelated() { return (ResizeQuality){em_Val_from_string("pixelated")}; }
ResizeQuality ResizeQuality_low() { return (ResizeQuality){em_Val_from_string("low")}; }
ResizeQuality ResizeQuality_medium() { return (ResizeQuality){em_Val_from_string("medium")}; }
ResizeQuality ResizeQuality_high() { return (ResizeQuality){em_Val_from_string("high")}; }
DEFINE_EMLITE_TYPE(WorkerType, em_Val);
WorkerType WorkerType_classic() { return (WorkerType){em_Val_from_string("classic")}; }
WorkerType WorkerType_module_() { return (WorkerType){em_Val_from_string("module")}; }
DEFINE_EMLITE_TYPE(UserIdleState, em_Val);
UserIdleState UserIdleState_active() { return (UserIdleState){em_Val_from_string("active")}; }
UserIdleState UserIdleState_idle() { return (UserIdleState){em_Val_from_string("idle")}; }
DEFINE_EMLITE_TYPE(ScreenIdleState, em_Val);
ScreenIdleState ScreenIdleState_locked() { return (ScreenIdleState){em_Val_from_string("locked")}; }
ScreenIdleState ScreenIdleState_unlocked() { return (ScreenIdleState){em_Val_from_string("unlocked")}; }
DEFINE_EMLITE_TYPE(RedEyeReduction, em_Val);
RedEyeReduction RedEyeReduction_never() { return (RedEyeReduction){em_Val_from_string("never")}; }
RedEyeReduction RedEyeReduction_always() { return (RedEyeReduction){em_Val_from_string("always")}; }
RedEyeReduction RedEyeReduction_controllable() { return (RedEyeReduction){em_Val_from_string("controllable")}; }
DEFINE_EMLITE_TYPE(FillLightMode, em_Val);
FillLightMode FillLightMode_auto_() { return (FillLightMode){em_Val_from_string("auto")}; }
FillLightMode FillLightMode_off() { return (FillLightMode){em_Val_from_string("off")}; }
FillLightMode FillLightMode_flash() { return (FillLightMode){em_Val_from_string("flash")}; }
DEFINE_EMLITE_TYPE(MeteringMode, em_Val);
MeteringMode MeteringMode_none() { return (MeteringMode){em_Val_from_string("none")}; }
MeteringMode MeteringMode_manual() { return (MeteringMode){em_Val_from_string("manual")}; }
MeteringMode MeteringMode_single_shot() { return (MeteringMode){em_Val_from_string("single-shot")}; }
MeteringMode MeteringMode_continuous() { return (MeteringMode){em_Val_from_string("continuous")}; }
DEFINE_EMLITE_TYPE(LoginStatus, em_Val);
LoginStatus LoginStatus_logged_in() { return (LoginStatus){em_Val_from_string("logged-in")}; }
LoginStatus LoginStatus_logged_out() { return (LoginStatus){em_Val_from_string("logged-out")}; }
DEFINE_EMLITE_TYPE(ScriptInvokerType, em_Val);
ScriptInvokerType ScriptInvokerType_classic_script() { return (ScriptInvokerType){em_Val_from_string("classic-script")}; }
ScriptInvokerType ScriptInvokerType_module_script() { return (ScriptInvokerType){em_Val_from_string("module-script")}; }
ScriptInvokerType ScriptInvokerType_event_listener() { return (ScriptInvokerType){em_Val_from_string("event-listener")}; }
ScriptInvokerType ScriptInvokerType_user_callback() { return (ScriptInvokerType){em_Val_from_string("user-callback")}; }
ScriptInvokerType ScriptInvokerType_resolve_promise() { return (ScriptInvokerType){em_Val_from_string("resolve-promise")}; }
ScriptInvokerType ScriptInvokerType_reject_promise() { return (ScriptInvokerType){em_Val_from_string("reject-promise")}; }
DEFINE_EMLITE_TYPE(ScriptWindowAttribution, em_Val);
ScriptWindowAttribution ScriptWindowAttribution_self() { return (ScriptWindowAttribution){em_Val_from_string("self")}; }
ScriptWindowAttribution ScriptWindowAttribution_descendant() { return (ScriptWindowAttribution){em_Val_from_string("descendant")}; }
ScriptWindowAttribution ScriptWindowAttribution_ancestor() { return (ScriptWindowAttribution){em_Val_from_string("ancestor")}; }
ScriptWindowAttribution ScriptWindowAttribution_same_page() { return (ScriptWindowAttribution){em_Val_from_string("same-page")}; }
ScriptWindowAttribution ScriptWindowAttribution_other() { return (ScriptWindowAttribution){em_Val_from_string("other")}; }
DEFINE_EMLITE_TYPE(MagnetometerLocalCoordinateSystem, em_Val);
MagnetometerLocalCoordinateSystem MagnetometerLocalCoordinateSystem_device() { return (MagnetometerLocalCoordinateSystem){em_Val_from_string("device")}; }
MagnetometerLocalCoordinateSystem MagnetometerLocalCoordinateSystem_screen() { return (MagnetometerLocalCoordinateSystem){em_Val_from_string("screen")}; }
DEFINE_EMLITE_TYPE(AppBannerPromptOutcome, em_Val);
AppBannerPromptOutcome AppBannerPromptOutcome_accepted() { return (AppBannerPromptOutcome){em_Val_from_string("accepted")}; }
AppBannerPromptOutcome AppBannerPromptOutcome_dismissed() { return (AppBannerPromptOutcome){em_Val_from_string("dismissed")}; }
DEFINE_EMLITE_TYPE(MediaDecodingType, em_Val);
MediaDecodingType MediaDecodingType_file() { return (MediaDecodingType){em_Val_from_string("file")}; }
MediaDecodingType MediaDecodingType_media_source() { return (MediaDecodingType){em_Val_from_string("media-source")}; }
MediaDecodingType MediaDecodingType_webrtc() { return (MediaDecodingType){em_Val_from_string("webrtc")}; }
DEFINE_EMLITE_TYPE(MediaEncodingType, em_Val);
MediaEncodingType MediaEncodingType_record() { return (MediaEncodingType){em_Val_from_string("record")}; }
MediaEncodingType MediaEncodingType_webrtc() { return (MediaEncodingType){em_Val_from_string("webrtc")}; }
DEFINE_EMLITE_TYPE(HdrMetadataType, em_Val);
HdrMetadataType HdrMetadataType_smpteSt2086() { return (HdrMetadataType){em_Val_from_string("smpteSt2086")}; }
HdrMetadataType HdrMetadataType_smpteSt2094_10() { return (HdrMetadataType){em_Val_from_string("smpteSt2094-10")}; }
HdrMetadataType HdrMetadataType_smpteSt2094_40() { return (HdrMetadataType){em_Val_from_string("smpteSt2094-40")}; }
DEFINE_EMLITE_TYPE(ColorGamut, em_Val);
ColorGamut ColorGamut_srgb() { return (ColorGamut){em_Val_from_string("srgb")}; }
ColorGamut ColorGamut_p3() { return (ColorGamut){em_Val_from_string("p3")}; }
ColorGamut ColorGamut_rec2020() { return (ColorGamut){em_Val_from_string("rec2020")}; }
DEFINE_EMLITE_TYPE(TransferFunction, em_Val);
TransferFunction TransferFunction_srgb() { return (TransferFunction){em_Val_from_string("srgb")}; }
TransferFunction TransferFunction_pq() { return (TransferFunction){em_Val_from_string("pq")}; }
TransferFunction TransferFunction_hlg() { return (TransferFunction){em_Val_from_string("hlg")}; }
DEFINE_EMLITE_TYPE(ReadyState, em_Val);
ReadyState ReadyState_closed() { return (ReadyState){em_Val_from_string("closed")}; }
ReadyState ReadyState_open() { return (ReadyState){em_Val_from_string("open")}; }
ReadyState ReadyState_ended() { return (ReadyState){em_Val_from_string("ended")}; }
DEFINE_EMLITE_TYPE(EndOfStreamError, em_Val);
EndOfStreamError EndOfStreamError_network() { return (EndOfStreamError){em_Val_from_string("network")}; }
EndOfStreamError EndOfStreamError_decode() { return (EndOfStreamError){em_Val_from_string("decode")}; }
DEFINE_EMLITE_TYPE(AppendMode, em_Val);
AppendMode AppendMode_segments() { return (AppendMode){em_Val_from_string("segments")}; }
AppendMode AppendMode_sequence() { return (AppendMode){em_Val_from_string("sequence")}; }
DEFINE_EMLITE_TYPE(MockCapturePromptResult, em_Val);
MockCapturePromptResult MockCapturePromptResult_granted() { return (MockCapturePromptResult){em_Val_from_string("granted")}; }
MockCapturePromptResult MockCapturePromptResult_denied() { return (MockCapturePromptResult){em_Val_from_string("denied")}; }
DEFINE_EMLITE_TYPE(CaptureAction, em_Val);
CaptureAction CaptureAction_next() { return (CaptureAction){em_Val_from_string("next")}; }
CaptureAction CaptureAction_previous() { return (CaptureAction){em_Val_from_string("previous")}; }
CaptureAction CaptureAction_first() { return (CaptureAction){em_Val_from_string("first")}; }
CaptureAction CaptureAction_last() { return (CaptureAction){em_Val_from_string("last")}; }
DEFINE_EMLITE_TYPE(MediaStreamTrackState, em_Val);
MediaStreamTrackState MediaStreamTrackState_live() { return (MediaStreamTrackState){em_Val_from_string("live")}; }
MediaStreamTrackState MediaStreamTrackState_ended() { return (MediaStreamTrackState){em_Val_from_string("ended")}; }
DEFINE_EMLITE_TYPE(VideoFacingModeEnum, em_Val);
VideoFacingModeEnum VideoFacingModeEnum_user() { return (VideoFacingModeEnum){em_Val_from_string("user")}; }
VideoFacingModeEnum VideoFacingModeEnum_environment() { return (VideoFacingModeEnum){em_Val_from_string("environment")}; }
VideoFacingModeEnum VideoFacingModeEnum_left() { return (VideoFacingModeEnum){em_Val_from_string("left")}; }
VideoFacingModeEnum VideoFacingModeEnum_right() { return (VideoFacingModeEnum){em_Val_from_string("right")}; }
DEFINE_EMLITE_TYPE(VideoResizeModeEnum, em_Val);
VideoResizeModeEnum VideoResizeModeEnum_none() { return (VideoResizeModeEnum){em_Val_from_string("none")}; }
VideoResizeModeEnum VideoResizeModeEnum_crop_and_scale() { return (VideoResizeModeEnum){em_Val_from_string("crop-and-scale")}; }
DEFINE_EMLITE_TYPE(EchoCancellationModeEnum, em_Val);
EchoCancellationModeEnum EchoCancellationModeEnum_all() { return (EchoCancellationModeEnum){em_Val_from_string("all")}; }
EchoCancellationModeEnum EchoCancellationModeEnum_remote_only() { return (EchoCancellationModeEnum){em_Val_from_string("remote-only")}; }
DEFINE_EMLITE_TYPE(MediaDeviceKind, em_Val);
MediaDeviceKind MediaDeviceKind_audioinput() { return (MediaDeviceKind){em_Val_from_string("audioinput")}; }
MediaDeviceKind MediaDeviceKind_audiooutput() { return (MediaDeviceKind){em_Val_from_string("audiooutput")}; }
MediaDeviceKind MediaDeviceKind_videoinput() { return (MediaDeviceKind){em_Val_from_string("videoinput")}; }
DEFINE_EMLITE_TYPE(MediaSessionPlaybackState, em_Val);
MediaSessionPlaybackState MediaSessionPlaybackState_none() { return (MediaSessionPlaybackState){em_Val_from_string("none")}; }
MediaSessionPlaybackState MediaSessionPlaybackState_paused() { return (MediaSessionPlaybackState){em_Val_from_string("paused")}; }
MediaSessionPlaybackState MediaSessionPlaybackState_playing() { return (MediaSessionPlaybackState){em_Val_from_string("playing")}; }
DEFINE_EMLITE_TYPE(MediaSessionAction, em_Val);
MediaSessionAction MediaSessionAction_play() { return (MediaSessionAction){em_Val_from_string("play")}; }
MediaSessionAction MediaSessionAction_pause() { return (MediaSessionAction){em_Val_from_string("pause")}; }
MediaSessionAction MediaSessionAction_seekbackward() { return (MediaSessionAction){em_Val_from_string("seekbackward")}; }
MediaSessionAction MediaSessionAction_seekforward() { return (MediaSessionAction){em_Val_from_string("seekforward")}; }
MediaSessionAction MediaSessionAction_previoustrack() { return (MediaSessionAction){em_Val_from_string("previoustrack")}; }
MediaSessionAction MediaSessionAction_nexttrack() { return (MediaSessionAction){em_Val_from_string("nexttrack")}; }
MediaSessionAction MediaSessionAction_skipad() { return (MediaSessionAction){em_Val_from_string("skipad")}; }
MediaSessionAction MediaSessionAction_stop() { return (MediaSessionAction){em_Val_from_string("stop")}; }
MediaSessionAction MediaSessionAction_seekto() { return (MediaSessionAction){em_Val_from_string("seekto")}; }
MediaSessionAction MediaSessionAction_togglemicrophone() { return (MediaSessionAction){em_Val_from_string("togglemicrophone")}; }
MediaSessionAction MediaSessionAction_togglecamera() { return (MediaSessionAction){em_Val_from_string("togglecamera")}; }
MediaSessionAction MediaSessionAction_togglescreenshare() { return (MediaSessionAction){em_Val_from_string("togglescreenshare")}; }
MediaSessionAction MediaSessionAction_hangup() { return (MediaSessionAction){em_Val_from_string("hangup")}; }
MediaSessionAction MediaSessionAction_previousslide() { return (MediaSessionAction){em_Val_from_string("previousslide")}; }
MediaSessionAction MediaSessionAction_nextslide() { return (MediaSessionAction){em_Val_from_string("nextslide")}; }
MediaSessionAction MediaSessionAction_enterpictureinpicture() { return (MediaSessionAction){em_Val_from_string("enterpictureinpicture")}; }
MediaSessionAction MediaSessionAction_voiceactivity() { return (MediaSessionAction){em_Val_from_string("voiceactivity")}; }
DEFINE_EMLITE_TYPE(BitrateMode, em_Val);
BitrateMode BitrateMode_constant() { return (BitrateMode){em_Val_from_string("constant")}; }
BitrateMode BitrateMode_variable() { return (BitrateMode){em_Val_from_string("variable")}; }
DEFINE_EMLITE_TYPE(RecordingState, em_Val);
RecordingState RecordingState_inactive() { return (RecordingState){em_Val_from_string("inactive")}; }
RecordingState RecordingState_recording() { return (RecordingState){em_Val_from_string("recording")}; }
RecordingState RecordingState_paused() { return (RecordingState){em_Val_from_string("paused")}; }
DEFINE_EMLITE_TYPE(RTCDegradationPreference, em_Val);
RTCDegradationPreference RTCDegradationPreference_maintain_framerate() { return (RTCDegradationPreference){em_Val_from_string("maintain-framerate")}; }
RTCDegradationPreference RTCDegradationPreference_maintain_resolution() { return (RTCDegradationPreference){em_Val_from_string("maintain-resolution")}; }
RTCDegradationPreference RTCDegradationPreference_balanced() { return (RTCDegradationPreference){em_Val_from_string("balanced")}; }
DEFINE_EMLITE_TYPE(NavigationTimingType, em_Val);
NavigationTimingType NavigationTimingType_navigate() { return (NavigationTimingType){em_Val_from_string("navigate")}; }
NavigationTimingType NavigationTimingType_reload() { return (NavigationTimingType){em_Val_from_string("reload")}; }
NavigationTimingType NavigationTimingType_back_forward() { return (NavigationTimingType){em_Val_from_string("back_forward")}; }
NavigationTimingType NavigationTimingType_prerender() { return (NavigationTimingType){em_Val_from_string("prerender")}; }
DEFINE_EMLITE_TYPE(ConnectionType, em_Val);
ConnectionType ConnectionType_bluetooth() { return (ConnectionType){em_Val_from_string("bluetooth")}; }
ConnectionType ConnectionType_cellular() { return (ConnectionType){em_Val_from_string("cellular")}; }
ConnectionType ConnectionType_ethernet() { return (ConnectionType){em_Val_from_string("ethernet")}; }
ConnectionType ConnectionType_mixed() { return (ConnectionType){em_Val_from_string("mixed")}; }
ConnectionType ConnectionType_none() { return (ConnectionType){em_Val_from_string("none")}; }
ConnectionType ConnectionType_other() { return (ConnectionType){em_Val_from_string("other")}; }
ConnectionType ConnectionType_unknown() { return (ConnectionType){em_Val_from_string("unknown")}; }
ConnectionType ConnectionType_wifi() { return (ConnectionType){em_Val_from_string("wifi")}; }
ConnectionType ConnectionType_wimax() { return (ConnectionType){em_Val_from_string("wimax")}; }
DEFINE_EMLITE_TYPE(EffectiveConnectionType, em_Val);
EffectiveConnectionType EffectiveConnectionType__2g() { return (EffectiveConnectionType){em_Val_from_string("2g")}; }
EffectiveConnectionType EffectiveConnectionType__3g() { return (EffectiveConnectionType){em_Val_from_string("3g")}; }
EffectiveConnectionType EffectiveConnectionType__4g() { return (EffectiveConnectionType){em_Val_from_string("4g")}; }
EffectiveConnectionType EffectiveConnectionType_slow_2g() { return (EffectiveConnectionType){em_Val_from_string("slow-2g")}; }
DEFINE_EMLITE_TYPE(NotificationPermission, em_Val);
NotificationPermission NotificationPermission_default_() { return (NotificationPermission){em_Val_from_string("default")}; }
NotificationPermission NotificationPermission_denied() { return (NotificationPermission){em_Val_from_string("denied")}; }
NotificationPermission NotificationPermission_granted() { return (NotificationPermission){em_Val_from_string("granted")}; }
DEFINE_EMLITE_TYPE(NotificationDirection, em_Val);
NotificationDirection NotificationDirection_auto_() { return (NotificationDirection){em_Val_from_string("auto")}; }
NotificationDirection NotificationDirection_ltr() { return (NotificationDirection){em_Val_from_string("ltr")}; }
NotificationDirection NotificationDirection_rtl() { return (NotificationDirection){em_Val_from_string("rtl")}; }
DEFINE_EMLITE_TYPE(OrientationSensorLocalCoordinateSystem, em_Val);
OrientationSensorLocalCoordinateSystem OrientationSensorLocalCoordinateSystem_device() { return (OrientationSensorLocalCoordinateSystem){em_Val_from_string("device")}; }
OrientationSensorLocalCoordinateSystem OrientationSensorLocalCoordinateSystem_screen() { return (OrientationSensorLocalCoordinateSystem){em_Val_from_string("screen")}; }
DEFINE_EMLITE_TYPE(ClientLifecycleState, em_Val);
ClientLifecycleState ClientLifecycleState_active() { return (ClientLifecycleState){em_Val_from_string("active")}; }
ClientLifecycleState ClientLifecycleState_frozen() { return (ClientLifecycleState){em_Val_from_string("frozen")}; }
DEFINE_EMLITE_TYPE(PaymentDelegation, em_Val);
PaymentDelegation PaymentDelegation_shippingAddress() { return (PaymentDelegation){em_Val_from_string("shippingAddress")}; }
PaymentDelegation PaymentDelegation_payerName() { return (PaymentDelegation){em_Val_from_string("payerName")}; }
PaymentDelegation PaymentDelegation_payerPhone() { return (PaymentDelegation){em_Val_from_string("payerPhone")}; }
PaymentDelegation PaymentDelegation_payerEmail() { return (PaymentDelegation){em_Val_from_string("payerEmail")}; }
DEFINE_EMLITE_TYPE(PaymentShippingType, em_Val);
PaymentShippingType PaymentShippingType_shipping() { return (PaymentShippingType){em_Val_from_string("shipping")}; }
PaymentShippingType PaymentShippingType_delivery() { return (PaymentShippingType){em_Val_from_string("delivery")}; }
PaymentShippingType PaymentShippingType_pickup() { return (PaymentShippingType){em_Val_from_string("pickup")}; }
DEFINE_EMLITE_TYPE(PaymentComplete, em_Val);
PaymentComplete PaymentComplete_fail() { return (PaymentComplete){em_Val_from_string("fail")}; }
PaymentComplete PaymentComplete_success() { return (PaymentComplete){em_Val_from_string("success")}; }
PaymentComplete PaymentComplete_unknown() { return (PaymentComplete){em_Val_from_string("unknown")}; }
DEFINE_EMLITE_TYPE(PermissionState, em_Val);
PermissionState PermissionState_granted() { return (PermissionState){em_Val_from_string("granted")}; }
PermissionState PermissionState_denied() { return (PermissionState){em_Val_from_string("denied")}; }
PermissionState PermissionState_prompt() { return (PermissionState){em_Val_from_string("prompt")}; }
DEFINE_EMLITE_TYPE(PointerAxis, em_Val);
PointerAxis PointerAxis_block() { return (PointerAxis){em_Val_from_string("block")}; }
PointerAxis PointerAxis_inline_() { return (PointerAxis){em_Val_from_string("inline")}; }
PointerAxis PointerAxis_x() { return (PointerAxis){em_Val_from_string("x")}; }
PointerAxis PointerAxis_y() { return (PointerAxis){em_Val_from_string("y")}; }
DEFINE_EMLITE_TYPE(PresentationConnectionState, em_Val);
PresentationConnectionState PresentationConnectionState_connecting() { return (PresentationConnectionState){em_Val_from_string("connecting")}; }
PresentationConnectionState PresentationConnectionState_connected() { return (PresentationConnectionState){em_Val_from_string("connected")}; }
PresentationConnectionState PresentationConnectionState_closed() { return (PresentationConnectionState){em_Val_from_string("closed")}; }
PresentationConnectionState PresentationConnectionState_terminated() { return (PresentationConnectionState){em_Val_from_string("terminated")}; }
DEFINE_EMLITE_TYPE(PresentationConnectionCloseReason, em_Val);
PresentationConnectionCloseReason PresentationConnectionCloseReason_error() { return (PresentationConnectionCloseReason){em_Val_from_string("error")}; }
PresentationConnectionCloseReason PresentationConnectionCloseReason_closed() { return (PresentationConnectionCloseReason){em_Val_from_string("closed")}; }
PresentationConnectionCloseReason PresentationConnectionCloseReason_wentaway() { return (PresentationConnectionCloseReason){em_Val_from_string("wentaway")}; }
DEFINE_EMLITE_TYPE(AttributionAggregationProtocol, em_Val);
AttributionAggregationProtocol AttributionAggregationProtocol_dap_15_histogram() { return (AttributionAggregationProtocol){em_Val_from_string("dap-15-histogram")}; }
AttributionAggregationProtocol AttributionAggregationProtocol_tee_00() { return (AttributionAggregationProtocol){em_Val_from_string("tee-00")}; }
DEFINE_EMLITE_TYPE(AttributionLogic, em_Val);
AttributionLogic AttributionLogic_last_n_touch() { return (AttributionLogic){em_Val_from_string("last-n-touch")}; }
DEFINE_EMLITE_TYPE(IPAddressSpace, em_Val);
IPAddressSpace IPAddressSpace_public_() { return (IPAddressSpace){em_Val_from_string("public")}; }
IPAddressSpace IPAddressSpace_private_() { return (IPAddressSpace){em_Val_from_string("private")}; }
IPAddressSpace IPAddressSpace_local() { return (IPAddressSpace){em_Val_from_string("local")}; }
DEFINE_EMLITE_TYPE(PushEncryptionKeyName, em_Val);
PushEncryptionKeyName PushEncryptionKeyName_p256dh() { return (PushEncryptionKeyName){em_Val_from_string("p256dh")}; }
PushEncryptionKeyName PushEncryptionKeyName_auth() { return (PushEncryptionKeyName){em_Val_from_string("auth")}; }
DEFINE_EMLITE_TYPE(ReferrerPolicy, em_Val);
ReferrerPolicy ReferrerPolicy_none() { return (ReferrerPolicy){em_Val_from_string("")}; }
ReferrerPolicy ReferrerPolicy_no_referrer() { return (ReferrerPolicy){em_Val_from_string("no-referrer")}; }
ReferrerPolicy ReferrerPolicy_no_referrer_when_downgrade() { return (ReferrerPolicy){em_Val_from_string("no-referrer-when-downgrade")}; }
ReferrerPolicy ReferrerPolicy_same_origin() { return (ReferrerPolicy){em_Val_from_string("same-origin")}; }
ReferrerPolicy ReferrerPolicy_origin() { return (ReferrerPolicy){em_Val_from_string("origin")}; }
ReferrerPolicy ReferrerPolicy_strict_origin() { return (ReferrerPolicy){em_Val_from_string("strict-origin")}; }
ReferrerPolicy ReferrerPolicy_origin_when_cross_origin() { return (ReferrerPolicy){em_Val_from_string("origin-when-cross-origin")}; }
ReferrerPolicy ReferrerPolicy_strict_origin_when_cross_origin() { return (ReferrerPolicy){em_Val_from_string("strict-origin-when-cross-origin")}; }
ReferrerPolicy ReferrerPolicy_unsafe_url() { return (ReferrerPolicy){em_Val_from_string("unsafe-url")}; }
DEFINE_EMLITE_TYPE(RemotePlaybackState, em_Val);
RemotePlaybackState RemotePlaybackState_connecting() { return (RemotePlaybackState){em_Val_from_string("connecting")}; }
RemotePlaybackState RemotePlaybackState_connected() { return (RemotePlaybackState){em_Val_from_string("connected")}; }
RemotePlaybackState RemotePlaybackState_disconnected() { return (RemotePlaybackState){em_Val_from_string("disconnected")}; }
DEFINE_EMLITE_TYPE(ResizeObserverBoxOptions, em_Val);
ResizeObserverBoxOptions ResizeObserverBoxOptions_border_box() { return (ResizeObserverBoxOptions){em_Val_from_string("border-box")}; }
ResizeObserverBoxOptions ResizeObserverBoxOptions_content_box() { return (ResizeObserverBoxOptions){em_Val_from_string("content-box")}; }
ResizeObserverBoxOptions ResizeObserverBoxOptions_device_pixel_content_box() { return (ResizeObserverBoxOptions){em_Val_from_string("device-pixel-content-box")}; }
DEFINE_EMLITE_TYPE(RenderBlockingStatusType, em_Val);
RenderBlockingStatusType RenderBlockingStatusType_blocking() { return (RenderBlockingStatusType){em_Val_from_string("blocking")}; }
RenderBlockingStatusType RenderBlockingStatusType_non_blocking() { return (RenderBlockingStatusType){em_Val_from_string("non-blocking")}; }
DEFINE_EMLITE_TYPE(SameSiteCookiesType, em_Val);
SameSiteCookiesType SameSiteCookiesType_all() { return (SameSiteCookiesType){em_Val_from_string("all")}; }
SameSiteCookiesType SameSiteCookiesType_none() { return (SameSiteCookiesType){em_Val_from_string("none")}; }
DEFINE_EMLITE_TYPE(SanitizerPresets, em_Val);
SanitizerPresets SanitizerPresets_default_() { return (SanitizerPresets){em_Val_from_string("default")}; }
DEFINE_EMLITE_TYPE(TaskPriority, em_Val);
TaskPriority TaskPriority_user_blocking() { return (TaskPriority){em_Val_from_string("user-blocking")}; }
TaskPriority TaskPriority_user_visible() { return (TaskPriority){em_Val_from_string("user-visible")}; }
TaskPriority TaskPriority_background() { return (TaskPriority){em_Val_from_string("background")}; }
DEFINE_EMLITE_TYPE(CaptureStartFocusBehavior, em_Val);
CaptureStartFocusBehavior CaptureStartFocusBehavior_focus_capturing_application() { return (CaptureStartFocusBehavior){em_Val_from_string("focus-capturing-application")}; }
CaptureStartFocusBehavior CaptureStartFocusBehavior_focus_captured_surface() { return (CaptureStartFocusBehavior){em_Val_from_string("focus-captured-surface")}; }
CaptureStartFocusBehavior CaptureStartFocusBehavior_no_focus_change() { return (CaptureStartFocusBehavior){em_Val_from_string("no-focus-change")}; }
DEFINE_EMLITE_TYPE(SelfCapturePreferenceEnum, em_Val);
SelfCapturePreferenceEnum SelfCapturePreferenceEnum_include() { return (SelfCapturePreferenceEnum){em_Val_from_string("include")}; }
SelfCapturePreferenceEnum SelfCapturePreferenceEnum_exclude() { return (SelfCapturePreferenceEnum){em_Val_from_string("exclude")}; }
DEFINE_EMLITE_TYPE(SystemAudioPreferenceEnum, em_Val);
SystemAudioPreferenceEnum SystemAudioPreferenceEnum_include() { return (SystemAudioPreferenceEnum){em_Val_from_string("include")}; }
SystemAudioPreferenceEnum SystemAudioPreferenceEnum_exclude() { return (SystemAudioPreferenceEnum){em_Val_from_string("exclude")}; }
DEFINE_EMLITE_TYPE(WindowAudioPreferenceEnum, em_Val);
WindowAudioPreferenceEnum WindowAudioPreferenceEnum_system() { return (WindowAudioPreferenceEnum){em_Val_from_string("system")}; }
WindowAudioPreferenceEnum WindowAudioPreferenceEnum_window() { return (WindowAudioPreferenceEnum){em_Val_from_string("window")}; }
WindowAudioPreferenceEnum WindowAudioPreferenceEnum_exclude() { return (WindowAudioPreferenceEnum){em_Val_from_string("exclude")}; }
DEFINE_EMLITE_TYPE(SurfaceSwitchingPreferenceEnum, em_Val);
SurfaceSwitchingPreferenceEnum SurfaceSwitchingPreferenceEnum_include() { return (SurfaceSwitchingPreferenceEnum){em_Val_from_string("include")}; }
SurfaceSwitchingPreferenceEnum SurfaceSwitchingPreferenceEnum_exclude() { return (SurfaceSwitchingPreferenceEnum){em_Val_from_string("exclude")}; }
DEFINE_EMLITE_TYPE(MonitorTypeSurfacesEnum, em_Val);
MonitorTypeSurfacesEnum MonitorTypeSurfacesEnum_include() { return (MonitorTypeSurfacesEnum){em_Val_from_string("include")}; }
MonitorTypeSurfacesEnum MonitorTypeSurfacesEnum_exclude() { return (MonitorTypeSurfacesEnum){em_Val_from_string("exclude")}; }
DEFINE_EMLITE_TYPE(DisplayCaptureSurfaceType, em_Val);
DisplayCaptureSurfaceType DisplayCaptureSurfaceType_monitor() { return (DisplayCaptureSurfaceType){em_Val_from_string("monitor")}; }
DisplayCaptureSurfaceType DisplayCaptureSurfaceType_window() { return (DisplayCaptureSurfaceType){em_Val_from_string("window")}; }
DisplayCaptureSurfaceType DisplayCaptureSurfaceType_browser() { return (DisplayCaptureSurfaceType){em_Val_from_string("browser")}; }
DEFINE_EMLITE_TYPE(CursorCaptureConstraint, em_Val);
CursorCaptureConstraint CursorCaptureConstraint_never() { return (CursorCaptureConstraint){em_Val_from_string("never")}; }
CursorCaptureConstraint CursorCaptureConstraint_always() { return (CursorCaptureConstraint){em_Val_from_string("always")}; }
CursorCaptureConstraint CursorCaptureConstraint_motion() { return (CursorCaptureConstraint){em_Val_from_string("motion")}; }
DEFINE_EMLITE_TYPE(OrientationLockType, em_Val);
OrientationLockType OrientationLockType_any() { return (OrientationLockType){em_Val_from_string("any")}; }
OrientationLockType OrientationLockType_natural() { return (OrientationLockType){em_Val_from_string("natural")}; }
OrientationLockType OrientationLockType_landscape() { return (OrientationLockType){em_Val_from_string("landscape")}; }
OrientationLockType OrientationLockType_portrait() { return (OrientationLockType){em_Val_from_string("portrait")}; }
OrientationLockType OrientationLockType_portrait_primary() { return (OrientationLockType){em_Val_from_string("portrait-primary")}; }
OrientationLockType OrientationLockType_portrait_secondary() { return (OrientationLockType){em_Val_from_string("portrait-secondary")}; }
OrientationLockType OrientationLockType_landscape_primary() { return (OrientationLockType){em_Val_from_string("landscape-primary")}; }
OrientationLockType OrientationLockType_landscape_secondary() { return (OrientationLockType){em_Val_from_string("landscape-secondary")}; }
DEFINE_EMLITE_TYPE(OrientationType, em_Val);
OrientationType OrientationType_portrait_primary() { return (OrientationType){em_Val_from_string("portrait-primary")}; }
OrientationType OrientationType_portrait_secondary() { return (OrientationType){em_Val_from_string("portrait-secondary")}; }
OrientationType OrientationType_landscape_primary() { return (OrientationType){em_Val_from_string("landscape-primary")}; }
OrientationType OrientationType_landscape_secondary() { return (OrientationType){em_Val_from_string("landscape-secondary")}; }
DEFINE_EMLITE_TYPE(WakeLockType, em_Val);
WakeLockType WakeLockType_screen() { return (WakeLockType){em_Val_from_string("screen")}; }
DEFINE_EMLITE_TYPE(ScrollAxis, em_Val);
ScrollAxis ScrollAxis_block() { return (ScrollAxis){em_Val_from_string("block")}; }
ScrollAxis ScrollAxis_inline_() { return (ScrollAxis){em_Val_from_string("inline")}; }
ScrollAxis ScrollAxis_x() { return (ScrollAxis){em_Val_from_string("x")}; }
ScrollAxis ScrollAxis_y() { return (ScrollAxis){em_Val_from_string("y")}; }
DEFINE_EMLITE_TYPE(SecurePaymentConfirmationAvailability, em_Val);
SecurePaymentConfirmationAvailability SecurePaymentConfirmationAvailability_available() { return (SecurePaymentConfirmationAvailability){em_Val_from_string("available")}; }
SecurePaymentConfirmationAvailability SecurePaymentConfirmationAvailability_unavailable_unknown_reason() { return (SecurePaymentConfirmationAvailability){em_Val_from_string("unavailable-unknown-reason")}; }
SecurePaymentConfirmationAvailability SecurePaymentConfirmationAvailability_unavailable_feature_not_enabled() { return (SecurePaymentConfirmationAvailability){em_Val_from_string("unavailable-feature-not-enabled")}; }
SecurePaymentConfirmationAvailability SecurePaymentConfirmationAvailability_unavailable_no_permission_policy() { return (SecurePaymentConfirmationAvailability){em_Val_from_string("unavailable-no-permission-policy")}; }
SecurePaymentConfirmationAvailability SecurePaymentConfirmationAvailability_unavailable_no_user_verifying_platform_authenticator() { return (SecurePaymentConfirmationAvailability){em_Val_from_string("unavailable-no-user-verifying-platform-authenticator")}; }
DEFINE_EMLITE_TYPE(ParityType, em_Val);
ParityType ParityType_none() { return (ParityType){em_Val_from_string("none")}; }
ParityType ParityType_even() { return (ParityType){em_Val_from_string("even")}; }
ParityType ParityType_odd() { return (ParityType){em_Val_from_string("odd")}; }
DEFINE_EMLITE_TYPE(FlowControlType, em_Val);
FlowControlType FlowControlType_none() { return (FlowControlType){em_Val_from_string("none")}; }
FlowControlType FlowControlType_hardware() { return (FlowControlType){em_Val_from_string("hardware")}; }
DEFINE_EMLITE_TYPE(ServiceWorkerState, em_Val);
ServiceWorkerState ServiceWorkerState_parsed() { return (ServiceWorkerState){em_Val_from_string("parsed")}; }
ServiceWorkerState ServiceWorkerState_installing() { return (ServiceWorkerState){em_Val_from_string("installing")}; }
ServiceWorkerState ServiceWorkerState_installed() { return (ServiceWorkerState){em_Val_from_string("installed")}; }
ServiceWorkerState ServiceWorkerState_activating() { return (ServiceWorkerState){em_Val_from_string("activating")}; }
ServiceWorkerState ServiceWorkerState_activated() { return (ServiceWorkerState){em_Val_from_string("activated")}; }
ServiceWorkerState ServiceWorkerState_redundant() { return (ServiceWorkerState){em_Val_from_string("redundant")}; }
DEFINE_EMLITE_TYPE(ServiceWorkerUpdateViaCache, em_Val);
ServiceWorkerUpdateViaCache ServiceWorkerUpdateViaCache_imports() { return (ServiceWorkerUpdateViaCache){em_Val_from_string("imports")}; }
ServiceWorkerUpdateViaCache ServiceWorkerUpdateViaCache_all() { return (ServiceWorkerUpdateViaCache){em_Val_from_string("all")}; }
ServiceWorkerUpdateViaCache ServiceWorkerUpdateViaCache_none() { return (ServiceWorkerUpdateViaCache){em_Val_from_string("none")}; }
DEFINE_EMLITE_TYPE(FrameType, em_Val);
FrameType FrameType_auxiliary() { return (FrameType){em_Val_from_string("auxiliary")}; }
FrameType FrameType_top_level() { return (FrameType){em_Val_from_string("top-level")}; }
FrameType FrameType_nested() { return (FrameType){em_Val_from_string("nested")}; }
FrameType FrameType_none() { return (FrameType){em_Val_from_string("none")}; }
DEFINE_EMLITE_TYPE(ClientType, em_Val);
ClientType ClientType_window() { return (ClientType){em_Val_from_string("window")}; }
ClientType ClientType_worker() { return (ClientType){em_Val_from_string("worker")}; }
ClientType ClientType_sharedworker() { return (ClientType){em_Val_from_string("sharedworker")}; }
ClientType ClientType_all() { return (ClientType){em_Val_from_string("all")}; }
DEFINE_EMLITE_TYPE(RunningStatus, em_Val);
RunningStatus RunningStatus_running() { return (RunningStatus){em_Val_from_string("running")}; }
RunningStatus RunningStatus_not_running() { return (RunningStatus){em_Val_from_string("not-running")}; }
DEFINE_EMLITE_TYPE(RouterSourceEnum, em_Val);
RouterSourceEnum RouterSourceEnum_cache() { return (RouterSourceEnum){em_Val_from_string("cache")}; }
RouterSourceEnum RouterSourceEnum_fetch_event() { return (RouterSourceEnum){em_Val_from_string("fetch-event")}; }
RouterSourceEnum RouterSourceEnum_network() { return (RouterSourceEnum){em_Val_from_string("network")}; }
RouterSourceEnum RouterSourceEnum_race_network_and_fetch_handler() { return (RouterSourceEnum){em_Val_from_string("race-network-and-fetch-handler")}; }
DEFINE_EMLITE_TYPE(LandmarkType, em_Val);
LandmarkType LandmarkType_mouth() { return (LandmarkType){em_Val_from_string("mouth")}; }
LandmarkType LandmarkType_eye() { return (LandmarkType){em_Val_from_string("eye")}; }
LandmarkType LandmarkType_nose() { return (LandmarkType){em_Val_from_string("nose")}; }
DEFINE_EMLITE_TYPE(BarcodeFormat, em_Val);
BarcodeFormat BarcodeFormat_aztec() { return (BarcodeFormat){em_Val_from_string("aztec")}; }
BarcodeFormat BarcodeFormat_code_128() { return (BarcodeFormat){em_Val_from_string("code_128")}; }
BarcodeFormat BarcodeFormat_code_39() { return (BarcodeFormat){em_Val_from_string("code_39")}; }
BarcodeFormat BarcodeFormat_code_93() { return (BarcodeFormat){em_Val_from_string("code_93")}; }
BarcodeFormat BarcodeFormat_codabar() { return (BarcodeFormat){em_Val_from_string("codabar")}; }
BarcodeFormat BarcodeFormat_data_matrix() { return (BarcodeFormat){em_Val_from_string("data_matrix")}; }
BarcodeFormat BarcodeFormat_ean_13() { return (BarcodeFormat){em_Val_from_string("ean_13")}; }
BarcodeFormat BarcodeFormat_ean_8() { return (BarcodeFormat){em_Val_from_string("ean_8")}; }
BarcodeFormat BarcodeFormat_itf() { return (BarcodeFormat){em_Val_from_string("itf")}; }
BarcodeFormat BarcodeFormat_pdf417() { return (BarcodeFormat){em_Val_from_string("pdf417")}; }
BarcodeFormat BarcodeFormat_qr_code() { return (BarcodeFormat){em_Val_from_string("qr_code")}; }
BarcodeFormat BarcodeFormat_unknown() { return (BarcodeFormat){em_Val_from_string("unknown")}; }
BarcodeFormat BarcodeFormat_upc_a() { return (BarcodeFormat){em_Val_from_string("upc_a")}; }
BarcodeFormat BarcodeFormat_upc_e() { return (BarcodeFormat){em_Val_from_string("upc_e")}; }
DEFINE_EMLITE_TYPE(SpeechRecognitionErrorCode, em_Val);
SpeechRecognitionErrorCode SpeechRecognitionErrorCode_no_speech() { return (SpeechRecognitionErrorCode){em_Val_from_string("no-speech")}; }
SpeechRecognitionErrorCode SpeechRecognitionErrorCode_aborted() { return (SpeechRecognitionErrorCode){em_Val_from_string("aborted")}; }
SpeechRecognitionErrorCode SpeechRecognitionErrorCode_audio_capture() { return (SpeechRecognitionErrorCode){em_Val_from_string("audio-capture")}; }
SpeechRecognitionErrorCode SpeechRecognitionErrorCode_network() { return (SpeechRecognitionErrorCode){em_Val_from_string("network")}; }
SpeechRecognitionErrorCode SpeechRecognitionErrorCode_not_allowed() { return (SpeechRecognitionErrorCode){em_Val_from_string("not-allowed")}; }
SpeechRecognitionErrorCode SpeechRecognitionErrorCode_service_not_allowed() { return (SpeechRecognitionErrorCode){em_Val_from_string("service-not-allowed")}; }
SpeechRecognitionErrorCode SpeechRecognitionErrorCode_language_not_supported() { return (SpeechRecognitionErrorCode){em_Val_from_string("language-not-supported")}; }
SpeechRecognitionErrorCode SpeechRecognitionErrorCode_phrases_not_supported() { return (SpeechRecognitionErrorCode){em_Val_from_string("phrases-not-supported")}; }
DEFINE_EMLITE_TYPE(AvailabilityStatus, em_Val);
AvailabilityStatus AvailabilityStatus_unavailable() { return (AvailabilityStatus){em_Val_from_string("unavailable")}; }
AvailabilityStatus AvailabilityStatus_downloadable() { return (AvailabilityStatus){em_Val_from_string("downloadable")}; }
AvailabilityStatus AvailabilityStatus_downloading() { return (AvailabilityStatus){em_Val_from_string("downloading")}; }
AvailabilityStatus AvailabilityStatus_available() { return (AvailabilityStatus){em_Val_from_string("available")}; }
DEFINE_EMLITE_TYPE(SpeechSynthesisErrorCode, em_Val);
SpeechSynthesisErrorCode SpeechSynthesisErrorCode_canceled() { return (SpeechSynthesisErrorCode){em_Val_from_string("canceled")}; }
SpeechSynthesisErrorCode SpeechSynthesisErrorCode_interrupted() { return (SpeechSynthesisErrorCode){em_Val_from_string("interrupted")}; }
SpeechSynthesisErrorCode SpeechSynthesisErrorCode_audio_busy() { return (SpeechSynthesisErrorCode){em_Val_from_string("audio-busy")}; }
SpeechSynthesisErrorCode SpeechSynthesisErrorCode_audio_hardware() { return (SpeechSynthesisErrorCode){em_Val_from_string("audio-hardware")}; }
SpeechSynthesisErrorCode SpeechSynthesisErrorCode_network() { return (SpeechSynthesisErrorCode){em_Val_from_string("network")}; }
SpeechSynthesisErrorCode SpeechSynthesisErrorCode_synthesis_unavailable() { return (SpeechSynthesisErrorCode){em_Val_from_string("synthesis-unavailable")}; }
SpeechSynthesisErrorCode SpeechSynthesisErrorCode_synthesis_failed() { return (SpeechSynthesisErrorCode){em_Val_from_string("synthesis-failed")}; }
SpeechSynthesisErrorCode SpeechSynthesisErrorCode_language_unavailable() { return (SpeechSynthesisErrorCode){em_Val_from_string("language-unavailable")}; }
SpeechSynthesisErrorCode SpeechSynthesisErrorCode_voice_unavailable() { return (SpeechSynthesisErrorCode){em_Val_from_string("voice-unavailable")}; }
SpeechSynthesisErrorCode SpeechSynthesisErrorCode_text_too_long() { return (SpeechSynthesisErrorCode){em_Val_from_string("text-too-long")}; }
SpeechSynthesisErrorCode SpeechSynthesisErrorCode_invalid_argument() { return (SpeechSynthesisErrorCode){em_Val_from_string("invalid-argument")}; }
SpeechSynthesisErrorCode SpeechSynthesisErrorCode_not_allowed() { return (SpeechSynthesisErrorCode){em_Val_from_string("not-allowed")}; }
DEFINE_EMLITE_TYPE(ReadableStreamReaderMode, em_Val);
ReadableStreamReaderMode ReadableStreamReaderMode_byob() { return (ReadableStreamReaderMode){em_Val_from_string("byob")}; }
DEFINE_EMLITE_TYPE(ReadableStreamType, em_Val);
ReadableStreamType ReadableStreamType_bytes() { return (ReadableStreamType){em_Val_from_string("bytes")}; }
DEFINE_EMLITE_TYPE(TouchType, em_Val);
TouchType TouchType_direct() { return (TouchType){em_Val_from_string("direct")}; }
TouchType TouchType_stylus() { return (TouchType){em_Val_from_string("stylus")}; }
DEFINE_EMLITE_TYPE(RefreshPolicy, em_Val);
RefreshPolicy RefreshPolicy_none() { return (RefreshPolicy){em_Val_from_string("none")}; }
RefreshPolicy RefreshPolicy_refresh() { return (RefreshPolicy){em_Val_from_string("refresh")}; }
DEFINE_EMLITE_TYPE(TokenVersion, em_Val);
TokenVersion TokenVersion__1() { return (TokenVersion){em_Val_from_string("1")}; }
DEFINE_EMLITE_TYPE(OperationType, em_Val);
OperationType OperationType_token_request() { return (OperationType){em_Val_from_string("token-request")}; }
OperationType OperationType_send_redemption_record() { return (OperationType){em_Val_from_string("send-redemption-record")}; }
OperationType OperationType_token_redemption() { return (OperationType){em_Val_from_string("token-redemption")}; }
DEFINE_EMLITE_TYPE(KAnonStatus, em_Val);
KAnonStatus KAnonStatus_passedAndEnforced() { return (KAnonStatus){em_Val_from_string("passedAndEnforced")}; }
KAnonStatus KAnonStatus_passedNotEnforced() { return (KAnonStatus){em_Val_from_string("passedNotEnforced")}; }
KAnonStatus KAnonStatus_belowThreshold() { return (KAnonStatus){em_Val_from_string("belowThreshold")}; }
KAnonStatus KAnonStatus_notCalculated() { return (KAnonStatus){em_Val_from_string("notCalculated")}; }
DEFINE_EMLITE_TYPE(ImportExportKind, em_Val);
ImportExportKind ImportExportKind_function() { return (ImportExportKind){em_Val_from_string("function")}; }
ImportExportKind ImportExportKind_table() { return (ImportExportKind){em_Val_from_string("table")}; }
ImportExportKind ImportExportKind_memory() { return (ImportExportKind){em_Val_from_string("memory")}; }
ImportExportKind ImportExportKind_global() { return (ImportExportKind){em_Val_from_string("global")}; }
DEFINE_EMLITE_TYPE(TableKind, em_Val);
TableKind TableKind_externref() { return (TableKind){em_Val_from_string("externref")}; }
TableKind TableKind_anyfunc() { return (TableKind){em_Val_from_string("anyfunc")}; }
DEFINE_EMLITE_TYPE(ValueType, em_Val);
ValueType ValueType_i32() { return (ValueType){em_Val_from_string("i32")}; }
ValueType ValueType_i64() { return (ValueType){em_Val_from_string("i64")}; }
ValueType ValueType_f32() { return (ValueType){em_Val_from_string("f32")}; }
ValueType ValueType_f64() { return (ValueType){em_Val_from_string("f64")}; }
ValueType ValueType_v128() { return (ValueType){em_Val_from_string("v128")}; }
ValueType ValueType_externref() { return (ValueType){em_Val_from_string("externref")}; }
ValueType ValueType_anyfunc() { return (ValueType){em_Val_from_string("anyfunc")}; }
DEFINE_EMLITE_TYPE(IterationCompositeOperation, em_Val);
IterationCompositeOperation IterationCompositeOperation_replace() { return (IterationCompositeOperation){em_Val_from_string("replace")}; }
IterationCompositeOperation IterationCompositeOperation_accumulate() { return (IterationCompositeOperation){em_Val_from_string("accumulate")}; }
DEFINE_EMLITE_TYPE(AnimationTriggerBehavior, em_Val);
AnimationTriggerBehavior AnimationTriggerBehavior_once() { return (AnimationTriggerBehavior){em_Val_from_string("once")}; }
AnimationTriggerBehavior AnimationTriggerBehavior_repeat() { return (AnimationTriggerBehavior){em_Val_from_string("repeat")}; }
AnimationTriggerBehavior AnimationTriggerBehavior_alternate() { return (AnimationTriggerBehavior){em_Val_from_string("alternate")}; }
AnimationTriggerBehavior AnimationTriggerBehavior_state() { return (AnimationTriggerBehavior){em_Val_from_string("state")}; }
DEFINE_EMLITE_TYPE(AnimationPlayState, em_Val);
AnimationPlayState AnimationPlayState_idle() { return (AnimationPlayState){em_Val_from_string("idle")}; }
AnimationPlayState AnimationPlayState_running() { return (AnimationPlayState){em_Val_from_string("running")}; }
AnimationPlayState AnimationPlayState_paused() { return (AnimationPlayState){em_Val_from_string("paused")}; }
AnimationPlayState AnimationPlayState_finished() { return (AnimationPlayState){em_Val_from_string("finished")}; }
DEFINE_EMLITE_TYPE(AnimationReplaceState, em_Val);
AnimationReplaceState AnimationReplaceState_active() { return (AnimationReplaceState){em_Val_from_string("active")}; }
AnimationReplaceState AnimationReplaceState_removed() { return (AnimationReplaceState){em_Val_from_string("removed")}; }
AnimationReplaceState AnimationReplaceState_persisted() { return (AnimationReplaceState){em_Val_from_string("persisted")}; }
DEFINE_EMLITE_TYPE(FillMode, em_Val);
FillMode FillMode_none() { return (FillMode){em_Val_from_string("none")}; }
FillMode FillMode_forwards() { return (FillMode){em_Val_from_string("forwards")}; }
FillMode FillMode_backwards() { return (FillMode){em_Val_from_string("backwards")}; }
FillMode FillMode_both() { return (FillMode){em_Val_from_string("both")}; }
FillMode FillMode_auto_() { return (FillMode){em_Val_from_string("auto")}; }
DEFINE_EMLITE_TYPE(PlaybackDirection, em_Val);
PlaybackDirection PlaybackDirection_normal() { return (PlaybackDirection){em_Val_from_string("normal")}; }
PlaybackDirection PlaybackDirection_reverse() { return (PlaybackDirection){em_Val_from_string("reverse")}; }
PlaybackDirection PlaybackDirection_alternate() { return (PlaybackDirection){em_Val_from_string("alternate")}; }
PlaybackDirection PlaybackDirection_alternate_reverse() { return (PlaybackDirection){em_Val_from_string("alternate-reverse")}; }
DEFINE_EMLITE_TYPE(CompositeOperation, em_Val);
CompositeOperation CompositeOperation_replace() { return (CompositeOperation){em_Val_from_string("replace")}; }
CompositeOperation CompositeOperation_add() { return (CompositeOperation){em_Val_from_string("add")}; }
CompositeOperation CompositeOperation_accumulate() { return (CompositeOperation){em_Val_from_string("accumulate")}; }
DEFINE_EMLITE_TYPE(CompositeOperationOrAuto, em_Val);
CompositeOperationOrAuto CompositeOperationOrAuto_replace() { return (CompositeOperationOrAuto){em_Val_from_string("replace")}; }
CompositeOperationOrAuto CompositeOperationOrAuto_add() { return (CompositeOperationOrAuto){em_Val_from_string("add")}; }
CompositeOperationOrAuto CompositeOperationOrAuto_accumulate() { return (CompositeOperationOrAuto){em_Val_from_string("accumulate")}; }
CompositeOperationOrAuto CompositeOperationOrAuto_auto_() { return (CompositeOperationOrAuto){em_Val_from_string("auto")}; }
DEFINE_EMLITE_TYPE(LockMode, em_Val);
LockMode LockMode_shared() { return (LockMode){em_Val_from_string("shared")}; }
LockMode LockMode_exclusive() { return (LockMode){em_Val_from_string("exclusive")}; }
DEFINE_EMLITE_TYPE(OTPCredentialTransportType, em_Val);
OTPCredentialTransportType OTPCredentialTransportType_sms() { return (OTPCredentialTransportType){em_Val_from_string("sms")}; }
DEFINE_EMLITE_TYPE(AudioContextState, em_Val);
AudioContextState AudioContextState_suspended() { return (AudioContextState){em_Val_from_string("suspended")}; }
AudioContextState AudioContextState_running() { return (AudioContextState){em_Val_from_string("running")}; }
AudioContextState AudioContextState_closed() { return (AudioContextState){em_Val_from_string("closed")}; }
AudioContextState AudioContextState_interrupted() { return (AudioContextState){em_Val_from_string("interrupted")}; }
DEFINE_EMLITE_TYPE(AudioContextRenderSizeCategory, em_Val);
AudioContextRenderSizeCategory AudioContextRenderSizeCategory_default_() { return (AudioContextRenderSizeCategory){em_Val_from_string("default")}; }
AudioContextRenderSizeCategory AudioContextRenderSizeCategory_hardware() { return (AudioContextRenderSizeCategory){em_Val_from_string("hardware")}; }
DEFINE_EMLITE_TYPE(AudioContextLatencyCategory, em_Val);
AudioContextLatencyCategory AudioContextLatencyCategory_balanced() { return (AudioContextLatencyCategory){em_Val_from_string("balanced")}; }
AudioContextLatencyCategory AudioContextLatencyCategory_interactive() { return (AudioContextLatencyCategory){em_Val_from_string("interactive")}; }
AudioContextLatencyCategory AudioContextLatencyCategory_playback() { return (AudioContextLatencyCategory){em_Val_from_string("playback")}; }
DEFINE_EMLITE_TYPE(AudioSinkType, em_Val);
AudioSinkType AudioSinkType_none() { return (AudioSinkType){em_Val_from_string("none")}; }
DEFINE_EMLITE_TYPE(ChannelCountMode, em_Val);
ChannelCountMode ChannelCountMode_max() { return (ChannelCountMode){em_Val_from_string("max")}; }
ChannelCountMode ChannelCountMode_clamped_max() { return (ChannelCountMode){em_Val_from_string("clamped-max")}; }
ChannelCountMode ChannelCountMode_explicit_() { return (ChannelCountMode){em_Val_from_string("explicit")}; }
DEFINE_EMLITE_TYPE(ChannelInterpretation, em_Val);
ChannelInterpretation ChannelInterpretation_speakers() { return (ChannelInterpretation){em_Val_from_string("speakers")}; }
ChannelInterpretation ChannelInterpretation_discrete() { return (ChannelInterpretation){em_Val_from_string("discrete")}; }
DEFINE_EMLITE_TYPE(AutomationRate, em_Val);
AutomationRate AutomationRate_a_rate() { return (AutomationRate){em_Val_from_string("a-rate")}; }
AutomationRate AutomationRate_k_rate() { return (AutomationRate){em_Val_from_string("k-rate")}; }
DEFINE_EMLITE_TYPE(BiquadFilterType, em_Val);
BiquadFilterType BiquadFilterType_lowpass() { return (BiquadFilterType){em_Val_from_string("lowpass")}; }
BiquadFilterType BiquadFilterType_highpass() { return (BiquadFilterType){em_Val_from_string("highpass")}; }
BiquadFilterType BiquadFilterType_bandpass() { return (BiquadFilterType){em_Val_from_string("bandpass")}; }
BiquadFilterType BiquadFilterType_lowshelf() { return (BiquadFilterType){em_Val_from_string("lowshelf")}; }
BiquadFilterType BiquadFilterType_highshelf() { return (BiquadFilterType){em_Val_from_string("highshelf")}; }
BiquadFilterType BiquadFilterType_peaking() { return (BiquadFilterType){em_Val_from_string("peaking")}; }
BiquadFilterType BiquadFilterType_notch() { return (BiquadFilterType){em_Val_from_string("notch")}; }
BiquadFilterType BiquadFilterType_allpass() { return (BiquadFilterType){em_Val_from_string("allpass")}; }
DEFINE_EMLITE_TYPE(OscillatorType, em_Val);
OscillatorType OscillatorType_sine() { return (OscillatorType){em_Val_from_string("sine")}; }
OscillatorType OscillatorType_square() { return (OscillatorType){em_Val_from_string("square")}; }
OscillatorType OscillatorType_sawtooth() { return (OscillatorType){em_Val_from_string("sawtooth")}; }
OscillatorType OscillatorType_triangle() { return (OscillatorType){em_Val_from_string("triangle")}; }
OscillatorType OscillatorType_custom() { return (OscillatorType){em_Val_from_string("custom")}; }
DEFINE_EMLITE_TYPE(PanningModelType, em_Val);
PanningModelType PanningModelType_equalpower() { return (PanningModelType){em_Val_from_string("equalpower")}; }
PanningModelType PanningModelType_HRTF() { return (PanningModelType){em_Val_from_string("HRTF")}; }
DEFINE_EMLITE_TYPE(DistanceModelType, em_Val);
DistanceModelType DistanceModelType_linear() { return (DistanceModelType){em_Val_from_string("linear")}; }
DistanceModelType DistanceModelType_inverse() { return (DistanceModelType){em_Val_from_string("inverse")}; }
DistanceModelType DistanceModelType_exponential() { return (DistanceModelType){em_Val_from_string("exponential")}; }
DEFINE_EMLITE_TYPE(OverSampleType, em_Val);
OverSampleType OverSampleType_none() { return (OverSampleType){em_Val_from_string("none")}; }
OverSampleType OverSampleType__2x() { return (OverSampleType){em_Val_from_string("2x")}; }
OverSampleType OverSampleType__4x() { return (OverSampleType){em_Val_from_string("4x")}; }
DEFINE_EMLITE_TYPE(AuthenticatorAttachment, em_Val);
AuthenticatorAttachment AuthenticatorAttachment_platform() { return (AuthenticatorAttachment){em_Val_from_string("platform")}; }
AuthenticatorAttachment AuthenticatorAttachment_cross_platform() { return (AuthenticatorAttachment){em_Val_from_string("cross-platform")}; }
DEFINE_EMLITE_TYPE(ResidentKeyRequirement, em_Val);
ResidentKeyRequirement ResidentKeyRequirement_discouraged() { return (ResidentKeyRequirement){em_Val_from_string("discouraged")}; }
ResidentKeyRequirement ResidentKeyRequirement_preferred() { return (ResidentKeyRequirement){em_Val_from_string("preferred")}; }
ResidentKeyRequirement ResidentKeyRequirement_required() { return (ResidentKeyRequirement){em_Val_from_string("required")}; }
DEFINE_EMLITE_TYPE(AttestationConveyancePreference, em_Val);
AttestationConveyancePreference AttestationConveyancePreference_none() { return (AttestationConveyancePreference){em_Val_from_string("none")}; }
AttestationConveyancePreference AttestationConveyancePreference_indirect() { return (AttestationConveyancePreference){em_Val_from_string("indirect")}; }
AttestationConveyancePreference AttestationConveyancePreference_direct() { return (AttestationConveyancePreference){em_Val_from_string("direct")}; }
AttestationConveyancePreference AttestationConveyancePreference_enterprise() { return (AttestationConveyancePreference){em_Val_from_string("enterprise")}; }
DEFINE_EMLITE_TYPE(TokenBindingStatus, em_Val);
TokenBindingStatus TokenBindingStatus_present() { return (TokenBindingStatus){em_Val_from_string("present")}; }
TokenBindingStatus TokenBindingStatus_supported() { return (TokenBindingStatus){em_Val_from_string("supported")}; }
DEFINE_EMLITE_TYPE(PublicKeyCredentialType, em_Val);
PublicKeyCredentialType PublicKeyCredentialType_public_key() { return (PublicKeyCredentialType){em_Val_from_string("public-key")}; }
DEFINE_EMLITE_TYPE(AuthenticatorTransport, em_Val);
AuthenticatorTransport AuthenticatorTransport_usb() { return (AuthenticatorTransport){em_Val_from_string("usb")}; }
AuthenticatorTransport AuthenticatorTransport_nfc() { return (AuthenticatorTransport){em_Val_from_string("nfc")}; }
AuthenticatorTransport AuthenticatorTransport_ble() { return (AuthenticatorTransport){em_Val_from_string("ble")}; }
AuthenticatorTransport AuthenticatorTransport_smart_card() { return (AuthenticatorTransport){em_Val_from_string("smart-card")}; }
AuthenticatorTransport AuthenticatorTransport_hybrid() { return (AuthenticatorTransport){em_Val_from_string("hybrid")}; }
AuthenticatorTransport AuthenticatorTransport_internal() { return (AuthenticatorTransport){em_Val_from_string("internal")}; }
DEFINE_EMLITE_TYPE(UserVerificationRequirement, em_Val);
UserVerificationRequirement UserVerificationRequirement_required() { return (UserVerificationRequirement){em_Val_from_string("required")}; }
UserVerificationRequirement UserVerificationRequirement_preferred() { return (UserVerificationRequirement){em_Val_from_string("preferred")}; }
UserVerificationRequirement UserVerificationRequirement_discouraged() { return (UserVerificationRequirement){em_Val_from_string("discouraged")}; }
DEFINE_EMLITE_TYPE(ClientCapability, em_Val);
ClientCapability ClientCapability_conditionalCreate() { return (ClientCapability){em_Val_from_string("conditionalCreate")}; }
ClientCapability ClientCapability_conditionalGet() { return (ClientCapability){em_Val_from_string("conditionalGet")}; }
ClientCapability ClientCapability_hybridTransport() { return (ClientCapability){em_Val_from_string("hybridTransport")}; }
ClientCapability ClientCapability_passkeyPlatformAuthenticator() { return (ClientCapability){em_Val_from_string("passkeyPlatformAuthenticator")}; }
ClientCapability ClientCapability_userVerifyingPlatformAuthenticator() { return (ClientCapability){em_Val_from_string("userVerifyingPlatformAuthenticator")}; }
ClientCapability ClientCapability_relatedOrigins() { return (ClientCapability){em_Val_from_string("relatedOrigins")}; }
ClientCapability ClientCapability_signalAllAcceptedCredentials() { return (ClientCapability){em_Val_from_string("signalAllAcceptedCredentials")}; }
ClientCapability ClientCapability_signalCurrentUserDetails() { return (ClientCapability){em_Val_from_string("signalCurrentUserDetails")}; }
ClientCapability ClientCapability_signalUnknownCredential() { return (ClientCapability){em_Val_from_string("signalUnknownCredential")}; }
DEFINE_EMLITE_TYPE(PublicKeyCredentialHint, em_Val);
PublicKeyCredentialHint PublicKeyCredentialHint_security_key() { return (PublicKeyCredentialHint){em_Val_from_string("security-key")}; }
PublicKeyCredentialHint PublicKeyCredentialHint_client_device() { return (PublicKeyCredentialHint){em_Val_from_string("client-device")}; }
PublicKeyCredentialHint PublicKeyCredentialHint_hybrid() { return (PublicKeyCredentialHint){em_Val_from_string("hybrid")}; }
DEFINE_EMLITE_TYPE(LargeBlobSupport, em_Val);
LargeBlobSupport LargeBlobSupport_required() { return (LargeBlobSupport){em_Val_from_string("required")}; }
LargeBlobSupport LargeBlobSupport_preferred() { return (LargeBlobSupport){em_Val_from_string("preferred")}; }
DEFINE_EMLITE_TYPE(AacBitstreamFormat, em_Val);
AacBitstreamFormat AacBitstreamFormat_aac() { return (AacBitstreamFormat){em_Val_from_string("aac")}; }
AacBitstreamFormat AacBitstreamFormat_adts() { return (AacBitstreamFormat){em_Val_from_string("adts")}; }
DEFINE_EMLITE_TYPE(AvcBitstreamFormat, em_Val);
AvcBitstreamFormat AvcBitstreamFormat_annexb() { return (AvcBitstreamFormat){em_Val_from_string("annexb")}; }
AvcBitstreamFormat AvcBitstreamFormat_avc() { return (AvcBitstreamFormat){em_Val_from_string("avc")}; }
DEFINE_EMLITE_TYPE(HevcBitstreamFormat, em_Val);
HevcBitstreamFormat HevcBitstreamFormat_annexb() { return (HevcBitstreamFormat){em_Val_from_string("annexb")}; }
HevcBitstreamFormat HevcBitstreamFormat_hevc() { return (HevcBitstreamFormat){em_Val_from_string("hevc")}; }
DEFINE_EMLITE_TYPE(OpusBitstreamFormat, em_Val);
OpusBitstreamFormat OpusBitstreamFormat_opus() { return (OpusBitstreamFormat){em_Val_from_string("opus")}; }
OpusBitstreamFormat OpusBitstreamFormat_ogg() { return (OpusBitstreamFormat){em_Val_from_string("ogg")}; }
DEFINE_EMLITE_TYPE(OpusSignal, em_Val);
OpusSignal OpusSignal_auto_() { return (OpusSignal){em_Val_from_string("auto")}; }
OpusSignal OpusSignal_music() { return (OpusSignal){em_Val_from_string("music")}; }
OpusSignal OpusSignal_voice() { return (OpusSignal){em_Val_from_string("voice")}; }
DEFINE_EMLITE_TYPE(OpusApplication, em_Val);
OpusApplication OpusApplication_voip() { return (OpusApplication){em_Val_from_string("voip")}; }
OpusApplication OpusApplication_audio() { return (OpusApplication){em_Val_from_string("audio")}; }
OpusApplication OpusApplication_lowdelay() { return (OpusApplication){em_Val_from_string("lowdelay")}; }
DEFINE_EMLITE_TYPE(HardwareAcceleration, em_Val);
HardwareAcceleration HardwareAcceleration_no_preference() { return (HardwareAcceleration){em_Val_from_string("no-preference")}; }
HardwareAcceleration HardwareAcceleration_prefer_hardware() { return (HardwareAcceleration){em_Val_from_string("prefer-hardware")}; }
HardwareAcceleration HardwareAcceleration_prefer_software() { return (HardwareAcceleration){em_Val_from_string("prefer-software")}; }
DEFINE_EMLITE_TYPE(AlphaOption, em_Val);
AlphaOption AlphaOption_keep() { return (AlphaOption){em_Val_from_string("keep")}; }
AlphaOption AlphaOption_discard() { return (AlphaOption){em_Val_from_string("discard")}; }
DEFINE_EMLITE_TYPE(LatencyMode, em_Val);
LatencyMode LatencyMode_quality() { return (LatencyMode){em_Val_from_string("quality")}; }
LatencyMode LatencyMode_realtime() { return (LatencyMode){em_Val_from_string("realtime")}; }
DEFINE_EMLITE_TYPE(VideoEncoderBitrateMode, em_Val);
VideoEncoderBitrateMode VideoEncoderBitrateMode_constant() { return (VideoEncoderBitrateMode){em_Val_from_string("constant")}; }
VideoEncoderBitrateMode VideoEncoderBitrateMode_variable() { return (VideoEncoderBitrateMode){em_Val_from_string("variable")}; }
VideoEncoderBitrateMode VideoEncoderBitrateMode_quantizer() { return (VideoEncoderBitrateMode){em_Val_from_string("quantizer")}; }
DEFINE_EMLITE_TYPE(CodecState, em_Val);
CodecState CodecState_unconfigured() { return (CodecState){em_Val_from_string("unconfigured")}; }
CodecState CodecState_configured() { return (CodecState){em_Val_from_string("configured")}; }
CodecState CodecState_closed() { return (CodecState){em_Val_from_string("closed")}; }
DEFINE_EMLITE_TYPE(EncodedAudioChunkType, em_Val);
EncodedAudioChunkType EncodedAudioChunkType_key() { return (EncodedAudioChunkType){em_Val_from_string("key")}; }
EncodedAudioChunkType EncodedAudioChunkType_delta() { return (EncodedAudioChunkType){em_Val_from_string("delta")}; }
DEFINE_EMLITE_TYPE(EncodedVideoChunkType, em_Val);
EncodedVideoChunkType EncodedVideoChunkType_key() { return (EncodedVideoChunkType){em_Val_from_string("key")}; }
EncodedVideoChunkType EncodedVideoChunkType_delta() { return (EncodedVideoChunkType){em_Val_from_string("delta")}; }
DEFINE_EMLITE_TYPE(AudioSampleFormat, em_Val);
AudioSampleFormat AudioSampleFormat_u8() { return (AudioSampleFormat){em_Val_from_string("u8")}; }
AudioSampleFormat AudioSampleFormat_s16() { return (AudioSampleFormat){em_Val_from_string("s16")}; }
AudioSampleFormat AudioSampleFormat_s32() { return (AudioSampleFormat){em_Val_from_string("s32")}; }
AudioSampleFormat AudioSampleFormat_f32() { return (AudioSampleFormat){em_Val_from_string("f32")}; }
AudioSampleFormat AudioSampleFormat_u8_planar() { return (AudioSampleFormat){em_Val_from_string("u8-planar")}; }
AudioSampleFormat AudioSampleFormat_s16_planar() { return (AudioSampleFormat){em_Val_from_string("s16-planar")}; }
AudioSampleFormat AudioSampleFormat_s32_planar() { return (AudioSampleFormat){em_Val_from_string("s32-planar")}; }
AudioSampleFormat AudioSampleFormat_f32_planar() { return (AudioSampleFormat){em_Val_from_string("f32-planar")}; }
DEFINE_EMLITE_TYPE(VideoPixelFormat, em_Val);
VideoPixelFormat VideoPixelFormat_I420() { return (VideoPixelFormat){em_Val_from_string("I420")}; }
VideoPixelFormat VideoPixelFormat_I420P10() { return (VideoPixelFormat){em_Val_from_string("I420P10")}; }
VideoPixelFormat VideoPixelFormat_I420P12() { return (VideoPixelFormat){em_Val_from_string("I420P12")}; }
VideoPixelFormat VideoPixelFormat_I420A() { return (VideoPixelFormat){em_Val_from_string("I420A")}; }
VideoPixelFormat VideoPixelFormat_I420AP10() { return (VideoPixelFormat){em_Val_from_string("I420AP10")}; }
VideoPixelFormat VideoPixelFormat_I420AP12() { return (VideoPixelFormat){em_Val_from_string("I420AP12")}; }
VideoPixelFormat VideoPixelFormat_I422() { return (VideoPixelFormat){em_Val_from_string("I422")}; }
VideoPixelFormat VideoPixelFormat_I422P10() { return (VideoPixelFormat){em_Val_from_string("I422P10")}; }
VideoPixelFormat VideoPixelFormat_I422P12() { return (VideoPixelFormat){em_Val_from_string("I422P12")}; }
VideoPixelFormat VideoPixelFormat_I422A() { return (VideoPixelFormat){em_Val_from_string("I422A")}; }
VideoPixelFormat VideoPixelFormat_I422AP10() { return (VideoPixelFormat){em_Val_from_string("I422AP10")}; }
VideoPixelFormat VideoPixelFormat_I422AP12() { return (VideoPixelFormat){em_Val_from_string("I422AP12")}; }
VideoPixelFormat VideoPixelFormat_I444() { return (VideoPixelFormat){em_Val_from_string("I444")}; }
VideoPixelFormat VideoPixelFormat_I444P10() { return (VideoPixelFormat){em_Val_from_string("I444P10")}; }
VideoPixelFormat VideoPixelFormat_I444P12() { return (VideoPixelFormat){em_Val_from_string("I444P12")}; }
VideoPixelFormat VideoPixelFormat_I444A() { return (VideoPixelFormat){em_Val_from_string("I444A")}; }
VideoPixelFormat VideoPixelFormat_I444AP10() { return (VideoPixelFormat){em_Val_from_string("I444AP10")}; }
VideoPixelFormat VideoPixelFormat_I444AP12() { return (VideoPixelFormat){em_Val_from_string("I444AP12")}; }
VideoPixelFormat VideoPixelFormat_NV12() { return (VideoPixelFormat){em_Val_from_string("NV12")}; }
VideoPixelFormat VideoPixelFormat_RGBA() { return (VideoPixelFormat){em_Val_from_string("RGBA")}; }
VideoPixelFormat VideoPixelFormat_RGBX() { return (VideoPixelFormat){em_Val_from_string("RGBX")}; }
VideoPixelFormat VideoPixelFormat_BGRA() { return (VideoPixelFormat){em_Val_from_string("BGRA")}; }
VideoPixelFormat VideoPixelFormat_BGRX() { return (VideoPixelFormat){em_Val_from_string("BGRX")}; }
DEFINE_EMLITE_TYPE(VideoColorPrimaries, em_Val);
VideoColorPrimaries VideoColorPrimaries_bt709() { return (VideoColorPrimaries){em_Val_from_string("bt709")}; }
VideoColorPrimaries VideoColorPrimaries_bt470bg() { return (VideoColorPrimaries){em_Val_from_string("bt470bg")}; }
VideoColorPrimaries VideoColorPrimaries_smpte170m() { return (VideoColorPrimaries){em_Val_from_string("smpte170m")}; }
VideoColorPrimaries VideoColorPrimaries_bt2020() { return (VideoColorPrimaries){em_Val_from_string("bt2020")}; }
VideoColorPrimaries VideoColorPrimaries_smpte432() { return (VideoColorPrimaries){em_Val_from_string("smpte432")}; }
DEFINE_EMLITE_TYPE(VideoTransferCharacteristics, em_Val);
VideoTransferCharacteristics VideoTransferCharacteristics_bt709() { return (VideoTransferCharacteristics){em_Val_from_string("bt709")}; }
VideoTransferCharacteristics VideoTransferCharacteristics_smpte170m() { return (VideoTransferCharacteristics){em_Val_from_string("smpte170m")}; }
VideoTransferCharacteristics VideoTransferCharacteristics_iec61966_2_1() { return (VideoTransferCharacteristics){em_Val_from_string("iec61966-2-1")}; }
VideoTransferCharacteristics VideoTransferCharacteristics_linear() { return (VideoTransferCharacteristics){em_Val_from_string("linear")}; }
VideoTransferCharacteristics VideoTransferCharacteristics_pq() { return (VideoTransferCharacteristics){em_Val_from_string("pq")}; }
VideoTransferCharacteristics VideoTransferCharacteristics_hlg() { return (VideoTransferCharacteristics){em_Val_from_string("hlg")}; }
DEFINE_EMLITE_TYPE(VideoMatrixCoefficients, em_Val);
VideoMatrixCoefficients VideoMatrixCoefficients_rgb() { return (VideoMatrixCoefficients){em_Val_from_string("rgb")}; }
VideoMatrixCoefficients VideoMatrixCoefficients_bt709() { return (VideoMatrixCoefficients){em_Val_from_string("bt709")}; }
VideoMatrixCoefficients VideoMatrixCoefficients_bt470bg() { return (VideoMatrixCoefficients){em_Val_from_string("bt470bg")}; }
VideoMatrixCoefficients VideoMatrixCoefficients_smpte170m() { return (VideoMatrixCoefficients){em_Val_from_string("smpte170m")}; }
VideoMatrixCoefficients VideoMatrixCoefficients_bt2020_ncl() { return (VideoMatrixCoefficients){em_Val_from_string("bt2020-ncl")}; }
DEFINE_EMLITE_TYPE(KeyType, em_Val);
KeyType KeyType_public_() { return (KeyType){em_Val_from_string("public")}; }
KeyType KeyType_private_() { return (KeyType){em_Val_from_string("private")}; }
KeyType KeyType_secret() { return (KeyType){em_Val_from_string("secret")}; }
DEFINE_EMLITE_TYPE(KeyUsage, em_Val);
KeyUsage KeyUsage_encrypt() { return (KeyUsage){em_Val_from_string("encrypt")}; }
KeyUsage KeyUsage_decrypt() { return (KeyUsage){em_Val_from_string("decrypt")}; }
KeyUsage KeyUsage_sign() { return (KeyUsage){em_Val_from_string("sign")}; }
KeyUsage KeyUsage_verify() { return (KeyUsage){em_Val_from_string("verify")}; }
KeyUsage KeyUsage_deriveKey() { return (KeyUsage){em_Val_from_string("deriveKey")}; }
KeyUsage KeyUsage_deriveBits() { return (KeyUsage){em_Val_from_string("deriveBits")}; }
KeyUsage KeyUsage_wrapKey() { return (KeyUsage){em_Val_from_string("wrapKey")}; }
KeyUsage KeyUsage_unwrapKey() { return (KeyUsage){em_Val_from_string("unwrapKey")}; }
DEFINE_EMLITE_TYPE(KeyFormat, em_Val);
KeyFormat KeyFormat_raw() { return (KeyFormat){em_Val_from_string("raw")}; }
KeyFormat KeyFormat_spki() { return (KeyFormat){em_Val_from_string("spki")}; }
KeyFormat KeyFormat_pkcs8() { return (KeyFormat){em_Val_from_string("pkcs8")}; }
KeyFormat KeyFormat_jwk() { return (KeyFormat){em_Val_from_string("jwk")}; }
DEFINE_EMLITE_TYPE(WebGLPowerPreference, em_Val);
WebGLPowerPreference WebGLPowerPreference_default_() { return (WebGLPowerPreference){em_Val_from_string("default")}; }
WebGLPowerPreference WebGLPowerPreference_low_power() { return (WebGLPowerPreference){em_Val_from_string("low-power")}; }
WebGLPowerPreference WebGLPowerPreference_high_performance() { return (WebGLPowerPreference){em_Val_from_string("high-performance")}; }
DEFINE_EMLITE_TYPE(GPUPowerPreference, em_Val);
GPUPowerPreference GPUPowerPreference_low_power() { return (GPUPowerPreference){em_Val_from_string("low-power")}; }
GPUPowerPreference GPUPowerPreference_high_performance() { return (GPUPowerPreference){em_Val_from_string("high-performance")}; }
DEFINE_EMLITE_TYPE(GPUFeatureName, em_Val);
GPUFeatureName GPUFeatureName_core_features_and_limits() { return (GPUFeatureName){em_Val_from_string("core-features-and-limits")}; }
GPUFeatureName GPUFeatureName_depth_clip_control() { return (GPUFeatureName){em_Val_from_string("depth-clip-control")}; }
GPUFeatureName GPUFeatureName_depth32float_stencil8() { return (GPUFeatureName){em_Val_from_string("depth32float-stencil8")}; }
GPUFeatureName GPUFeatureName_texture_compression_bc() { return (GPUFeatureName){em_Val_from_string("texture-compression-bc")}; }
GPUFeatureName GPUFeatureName_texture_compression_bc_sliced_3d() { return (GPUFeatureName){em_Val_from_string("texture-compression-bc-sliced-3d")}; }
GPUFeatureName GPUFeatureName_texture_compression_etc2() { return (GPUFeatureName){em_Val_from_string("texture-compression-etc2")}; }
GPUFeatureName GPUFeatureName_texture_compression_astc() { return (GPUFeatureName){em_Val_from_string("texture-compression-astc")}; }
GPUFeatureName GPUFeatureName_texture_compression_astc_sliced_3d() { return (GPUFeatureName){em_Val_from_string("texture-compression-astc-sliced-3d")}; }
GPUFeatureName GPUFeatureName_timestamp_query() { return (GPUFeatureName){em_Val_from_string("timestamp-query")}; }
GPUFeatureName GPUFeatureName_indirect_first_instance() { return (GPUFeatureName){em_Val_from_string("indirect-first-instance")}; }
GPUFeatureName GPUFeatureName_shader_f16() { return (GPUFeatureName){em_Val_from_string("shader-f16")}; }
GPUFeatureName GPUFeatureName_rg11b10ufloat_renderable() { return (GPUFeatureName){em_Val_from_string("rg11b10ufloat-renderable")}; }
GPUFeatureName GPUFeatureName_bgra8unorm_storage() { return (GPUFeatureName){em_Val_from_string("bgra8unorm-storage")}; }
GPUFeatureName GPUFeatureName_float32_filterable() { return (GPUFeatureName){em_Val_from_string("float32-filterable")}; }
GPUFeatureName GPUFeatureName_float32_blendable() { return (GPUFeatureName){em_Val_from_string("float32-blendable")}; }
GPUFeatureName GPUFeatureName_clip_distances() { return (GPUFeatureName){em_Val_from_string("clip-distances")}; }
GPUFeatureName GPUFeatureName_dual_source_blending() { return (GPUFeatureName){em_Val_from_string("dual-source-blending")}; }
GPUFeatureName GPUFeatureName_subgroups() { return (GPUFeatureName){em_Val_from_string("subgroups")}; }
GPUFeatureName GPUFeatureName_texture_formats_tier1() { return (GPUFeatureName){em_Val_from_string("texture-formats-tier1")}; }
GPUFeatureName GPUFeatureName_texture_formats_tier2() { return (GPUFeatureName){em_Val_from_string("texture-formats-tier2")}; }
DEFINE_EMLITE_TYPE(GPUBufferMapState, em_Val);
GPUBufferMapState GPUBufferMapState_unmapped() { return (GPUBufferMapState){em_Val_from_string("unmapped")}; }
GPUBufferMapState GPUBufferMapState_pending() { return (GPUBufferMapState){em_Val_from_string("pending")}; }
GPUBufferMapState GPUBufferMapState_mapped() { return (GPUBufferMapState){em_Val_from_string("mapped")}; }
DEFINE_EMLITE_TYPE(GPUTextureDimension, em_Val);
GPUTextureDimension GPUTextureDimension__1d() { return (GPUTextureDimension){em_Val_from_string("1d")}; }
GPUTextureDimension GPUTextureDimension__2d() { return (GPUTextureDimension){em_Val_from_string("2d")}; }
GPUTextureDimension GPUTextureDimension__3d() { return (GPUTextureDimension){em_Val_from_string("3d")}; }
DEFINE_EMLITE_TYPE(GPUTextureViewDimension, em_Val);
GPUTextureViewDimension GPUTextureViewDimension__1d() { return (GPUTextureViewDimension){em_Val_from_string("1d")}; }
GPUTextureViewDimension GPUTextureViewDimension__2d() { return (GPUTextureViewDimension){em_Val_from_string("2d")}; }
GPUTextureViewDimension GPUTextureViewDimension__2d_array() { return (GPUTextureViewDimension){em_Val_from_string("2d-array")}; }
GPUTextureViewDimension GPUTextureViewDimension_cube() { return (GPUTextureViewDimension){em_Val_from_string("cube")}; }
GPUTextureViewDimension GPUTextureViewDimension_cube_array() { return (GPUTextureViewDimension){em_Val_from_string("cube-array")}; }
GPUTextureViewDimension GPUTextureViewDimension__3d() { return (GPUTextureViewDimension){em_Val_from_string("3d")}; }
DEFINE_EMLITE_TYPE(GPUTextureAspect, em_Val);
GPUTextureAspect GPUTextureAspect_all() { return (GPUTextureAspect){em_Val_from_string("all")}; }
GPUTextureAspect GPUTextureAspect_stencil_only() { return (GPUTextureAspect){em_Val_from_string("stencil-only")}; }
GPUTextureAspect GPUTextureAspect_depth_only() { return (GPUTextureAspect){em_Val_from_string("depth-only")}; }
DEFINE_EMLITE_TYPE(GPUTextureFormat, em_Val);
GPUTextureFormat GPUTextureFormat_r8unorm() { return (GPUTextureFormat){em_Val_from_string("r8unorm")}; }
GPUTextureFormat GPUTextureFormat_r8snorm() { return (GPUTextureFormat){em_Val_from_string("r8snorm")}; }
GPUTextureFormat GPUTextureFormat_r8uint() { return (GPUTextureFormat){em_Val_from_string("r8uint")}; }
GPUTextureFormat GPUTextureFormat_r8sint() { return (GPUTextureFormat){em_Val_from_string("r8sint")}; }
GPUTextureFormat GPUTextureFormat_r16unorm() { return (GPUTextureFormat){em_Val_from_string("r16unorm")}; }
GPUTextureFormat GPUTextureFormat_r16snorm() { return (GPUTextureFormat){em_Val_from_string("r16snorm")}; }
GPUTextureFormat GPUTextureFormat_r16uint() { return (GPUTextureFormat){em_Val_from_string("r16uint")}; }
GPUTextureFormat GPUTextureFormat_r16sint() { return (GPUTextureFormat){em_Val_from_string("r16sint")}; }
GPUTextureFormat GPUTextureFormat_r16float() { return (GPUTextureFormat){em_Val_from_string("r16float")}; }
GPUTextureFormat GPUTextureFormat_rg8unorm() { return (GPUTextureFormat){em_Val_from_string("rg8unorm")}; }
GPUTextureFormat GPUTextureFormat_rg8snorm() { return (GPUTextureFormat){em_Val_from_string("rg8snorm")}; }
GPUTextureFormat GPUTextureFormat_rg8uint() { return (GPUTextureFormat){em_Val_from_string("rg8uint")}; }
GPUTextureFormat GPUTextureFormat_rg8sint() { return (GPUTextureFormat){em_Val_from_string("rg8sint")}; }
GPUTextureFormat GPUTextureFormat_r32uint() { return (GPUTextureFormat){em_Val_from_string("r32uint")}; }
GPUTextureFormat GPUTextureFormat_r32sint() { return (GPUTextureFormat){em_Val_from_string("r32sint")}; }
GPUTextureFormat GPUTextureFormat_r32float() { return (GPUTextureFormat){em_Val_from_string("r32float")}; }
GPUTextureFormat GPUTextureFormat_rg16unorm() { return (GPUTextureFormat){em_Val_from_string("rg16unorm")}; }
GPUTextureFormat GPUTextureFormat_rg16snorm() { return (GPUTextureFormat){em_Val_from_string("rg16snorm")}; }
GPUTextureFormat GPUTextureFormat_rg16uint() { return (GPUTextureFormat){em_Val_from_string("rg16uint")}; }
GPUTextureFormat GPUTextureFormat_rg16sint() { return (GPUTextureFormat){em_Val_from_string("rg16sint")}; }
GPUTextureFormat GPUTextureFormat_rg16float() { return (GPUTextureFormat){em_Val_from_string("rg16float")}; }
GPUTextureFormat GPUTextureFormat_rgba8unorm() { return (GPUTextureFormat){em_Val_from_string("rgba8unorm")}; }
GPUTextureFormat GPUTextureFormat_rgba8unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("rgba8unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_rgba8snorm() { return (GPUTextureFormat){em_Val_from_string("rgba8snorm")}; }
GPUTextureFormat GPUTextureFormat_rgba8uint() { return (GPUTextureFormat){em_Val_from_string("rgba8uint")}; }
GPUTextureFormat GPUTextureFormat_rgba8sint() { return (GPUTextureFormat){em_Val_from_string("rgba8sint")}; }
GPUTextureFormat GPUTextureFormat_bgra8unorm() { return (GPUTextureFormat){em_Val_from_string("bgra8unorm")}; }
GPUTextureFormat GPUTextureFormat_bgra8unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("bgra8unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_rgb9e5ufloat() { return (GPUTextureFormat){em_Val_from_string("rgb9e5ufloat")}; }
GPUTextureFormat GPUTextureFormat_rgb10a2uint() { return (GPUTextureFormat){em_Val_from_string("rgb10a2uint")}; }
GPUTextureFormat GPUTextureFormat_rgb10a2unorm() { return (GPUTextureFormat){em_Val_from_string("rgb10a2unorm")}; }
GPUTextureFormat GPUTextureFormat_rg11b10ufloat() { return (GPUTextureFormat){em_Val_from_string("rg11b10ufloat")}; }
GPUTextureFormat GPUTextureFormat_rg32uint() { return (GPUTextureFormat){em_Val_from_string("rg32uint")}; }
GPUTextureFormat GPUTextureFormat_rg32sint() { return (GPUTextureFormat){em_Val_from_string("rg32sint")}; }
GPUTextureFormat GPUTextureFormat_rg32float() { return (GPUTextureFormat){em_Val_from_string("rg32float")}; }
GPUTextureFormat GPUTextureFormat_rgba16unorm() { return (GPUTextureFormat){em_Val_from_string("rgba16unorm")}; }
GPUTextureFormat GPUTextureFormat_rgba16snorm() { return (GPUTextureFormat){em_Val_from_string("rgba16snorm")}; }
GPUTextureFormat GPUTextureFormat_rgba16uint() { return (GPUTextureFormat){em_Val_from_string("rgba16uint")}; }
GPUTextureFormat GPUTextureFormat_rgba16sint() { return (GPUTextureFormat){em_Val_from_string("rgba16sint")}; }
GPUTextureFormat GPUTextureFormat_rgba16float() { return (GPUTextureFormat){em_Val_from_string("rgba16float")}; }
GPUTextureFormat GPUTextureFormat_rgba32uint() { return (GPUTextureFormat){em_Val_from_string("rgba32uint")}; }
GPUTextureFormat GPUTextureFormat_rgba32sint() { return (GPUTextureFormat){em_Val_from_string("rgba32sint")}; }
GPUTextureFormat GPUTextureFormat_rgba32float() { return (GPUTextureFormat){em_Val_from_string("rgba32float")}; }
GPUTextureFormat GPUTextureFormat_stencil8() { return (GPUTextureFormat){em_Val_from_string("stencil8")}; }
GPUTextureFormat GPUTextureFormat_depth16unorm() { return (GPUTextureFormat){em_Val_from_string("depth16unorm")}; }
GPUTextureFormat GPUTextureFormat_depth24plus() { return (GPUTextureFormat){em_Val_from_string("depth24plus")}; }
GPUTextureFormat GPUTextureFormat_depth24plus_stencil8() { return (GPUTextureFormat){em_Val_from_string("depth24plus-stencil8")}; }
GPUTextureFormat GPUTextureFormat_depth32float() { return (GPUTextureFormat){em_Val_from_string("depth32float")}; }
GPUTextureFormat GPUTextureFormat_depth32float_stencil8() { return (GPUTextureFormat){em_Val_from_string("depth32float-stencil8")}; }
GPUTextureFormat GPUTextureFormat_bc1_rgba_unorm() { return (GPUTextureFormat){em_Val_from_string("bc1-rgba-unorm")}; }
GPUTextureFormat GPUTextureFormat_bc1_rgba_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("bc1-rgba-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_bc2_rgba_unorm() { return (GPUTextureFormat){em_Val_from_string("bc2-rgba-unorm")}; }
GPUTextureFormat GPUTextureFormat_bc2_rgba_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("bc2-rgba-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_bc3_rgba_unorm() { return (GPUTextureFormat){em_Val_from_string("bc3-rgba-unorm")}; }
GPUTextureFormat GPUTextureFormat_bc3_rgba_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("bc3-rgba-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_bc4_r_unorm() { return (GPUTextureFormat){em_Val_from_string("bc4-r-unorm")}; }
GPUTextureFormat GPUTextureFormat_bc4_r_snorm() { return (GPUTextureFormat){em_Val_from_string("bc4-r-snorm")}; }
GPUTextureFormat GPUTextureFormat_bc5_rg_unorm() { return (GPUTextureFormat){em_Val_from_string("bc5-rg-unorm")}; }
GPUTextureFormat GPUTextureFormat_bc5_rg_snorm() { return (GPUTextureFormat){em_Val_from_string("bc5-rg-snorm")}; }
GPUTextureFormat GPUTextureFormat_bc6h_rgb_ufloat() { return (GPUTextureFormat){em_Val_from_string("bc6h-rgb-ufloat")}; }
GPUTextureFormat GPUTextureFormat_bc6h_rgb_float() { return (GPUTextureFormat){em_Val_from_string("bc6h-rgb-float")}; }
GPUTextureFormat GPUTextureFormat_bc7_rgba_unorm() { return (GPUTextureFormat){em_Val_from_string("bc7-rgba-unorm")}; }
GPUTextureFormat GPUTextureFormat_bc7_rgba_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("bc7-rgba-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_etc2_rgb8unorm() { return (GPUTextureFormat){em_Val_from_string("etc2-rgb8unorm")}; }
GPUTextureFormat GPUTextureFormat_etc2_rgb8unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("etc2-rgb8unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_etc2_rgb8a1unorm() { return (GPUTextureFormat){em_Val_from_string("etc2-rgb8a1unorm")}; }
GPUTextureFormat GPUTextureFormat_etc2_rgb8a1unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("etc2-rgb8a1unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_etc2_rgba8unorm() { return (GPUTextureFormat){em_Val_from_string("etc2-rgba8unorm")}; }
GPUTextureFormat GPUTextureFormat_etc2_rgba8unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("etc2-rgba8unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_eac_r11unorm() { return (GPUTextureFormat){em_Val_from_string("eac-r11unorm")}; }
GPUTextureFormat GPUTextureFormat_eac_r11snorm() { return (GPUTextureFormat){em_Val_from_string("eac-r11snorm")}; }
GPUTextureFormat GPUTextureFormat_eac_rg11unorm() { return (GPUTextureFormat){em_Val_from_string("eac-rg11unorm")}; }
GPUTextureFormat GPUTextureFormat_eac_rg11snorm() { return (GPUTextureFormat){em_Val_from_string("eac-rg11snorm")}; }
GPUTextureFormat GPUTextureFormat_astc_4x4_unorm() { return (GPUTextureFormat){em_Val_from_string("astc-4x4-unorm")}; }
GPUTextureFormat GPUTextureFormat_astc_4x4_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("astc-4x4-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_astc_5x4_unorm() { return (GPUTextureFormat){em_Val_from_string("astc-5x4-unorm")}; }
GPUTextureFormat GPUTextureFormat_astc_5x4_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("astc-5x4-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_astc_5x5_unorm() { return (GPUTextureFormat){em_Val_from_string("astc-5x5-unorm")}; }
GPUTextureFormat GPUTextureFormat_astc_5x5_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("astc-5x5-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_astc_6x5_unorm() { return (GPUTextureFormat){em_Val_from_string("astc-6x5-unorm")}; }
GPUTextureFormat GPUTextureFormat_astc_6x5_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("astc-6x5-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_astc_6x6_unorm() { return (GPUTextureFormat){em_Val_from_string("astc-6x6-unorm")}; }
GPUTextureFormat GPUTextureFormat_astc_6x6_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("astc-6x6-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_astc_8x5_unorm() { return (GPUTextureFormat){em_Val_from_string("astc-8x5-unorm")}; }
GPUTextureFormat GPUTextureFormat_astc_8x5_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("astc-8x5-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_astc_8x6_unorm() { return (GPUTextureFormat){em_Val_from_string("astc-8x6-unorm")}; }
GPUTextureFormat GPUTextureFormat_astc_8x6_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("astc-8x6-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_astc_8x8_unorm() { return (GPUTextureFormat){em_Val_from_string("astc-8x8-unorm")}; }
GPUTextureFormat GPUTextureFormat_astc_8x8_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("astc-8x8-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_astc_10x5_unorm() { return (GPUTextureFormat){em_Val_from_string("astc-10x5-unorm")}; }
GPUTextureFormat GPUTextureFormat_astc_10x5_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("astc-10x5-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_astc_10x6_unorm() { return (GPUTextureFormat){em_Val_from_string("astc-10x6-unorm")}; }
GPUTextureFormat GPUTextureFormat_astc_10x6_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("astc-10x6-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_astc_10x8_unorm() { return (GPUTextureFormat){em_Val_from_string("astc-10x8-unorm")}; }
GPUTextureFormat GPUTextureFormat_astc_10x8_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("astc-10x8-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_astc_10x10_unorm() { return (GPUTextureFormat){em_Val_from_string("astc-10x10-unorm")}; }
GPUTextureFormat GPUTextureFormat_astc_10x10_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("astc-10x10-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_astc_12x10_unorm() { return (GPUTextureFormat){em_Val_from_string("astc-12x10-unorm")}; }
GPUTextureFormat GPUTextureFormat_astc_12x10_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("astc-12x10-unorm-srgb")}; }
GPUTextureFormat GPUTextureFormat_astc_12x12_unorm() { return (GPUTextureFormat){em_Val_from_string("astc-12x12-unorm")}; }
GPUTextureFormat GPUTextureFormat_astc_12x12_unorm_srgb() { return (GPUTextureFormat){em_Val_from_string("astc-12x12-unorm-srgb")}; }
DEFINE_EMLITE_TYPE(GPUAddressMode, em_Val);
GPUAddressMode GPUAddressMode_clamp_to_edge() { return (GPUAddressMode){em_Val_from_string("clamp-to-edge")}; }
GPUAddressMode GPUAddressMode_repeat() { return (GPUAddressMode){em_Val_from_string("repeat")}; }
GPUAddressMode GPUAddressMode_mirror_repeat() { return (GPUAddressMode){em_Val_from_string("mirror-repeat")}; }
DEFINE_EMLITE_TYPE(GPUFilterMode, em_Val);
GPUFilterMode GPUFilterMode_nearest() { return (GPUFilterMode){em_Val_from_string("nearest")}; }
GPUFilterMode GPUFilterMode_linear() { return (GPUFilterMode){em_Val_from_string("linear")}; }
DEFINE_EMLITE_TYPE(GPUMipmapFilterMode, em_Val);
GPUMipmapFilterMode GPUMipmapFilterMode_nearest() { return (GPUMipmapFilterMode){em_Val_from_string("nearest")}; }
GPUMipmapFilterMode GPUMipmapFilterMode_linear() { return (GPUMipmapFilterMode){em_Val_from_string("linear")}; }
DEFINE_EMLITE_TYPE(GPUCompareFunction, em_Val);
GPUCompareFunction GPUCompareFunction_never() { return (GPUCompareFunction){em_Val_from_string("never")}; }
GPUCompareFunction GPUCompareFunction_less() { return (GPUCompareFunction){em_Val_from_string("less")}; }
GPUCompareFunction GPUCompareFunction_equal() { return (GPUCompareFunction){em_Val_from_string("equal")}; }
GPUCompareFunction GPUCompareFunction_less_equal() { return (GPUCompareFunction){em_Val_from_string("less-equal")}; }
GPUCompareFunction GPUCompareFunction_greater() { return (GPUCompareFunction){em_Val_from_string("greater")}; }
GPUCompareFunction GPUCompareFunction_not_equal() { return (GPUCompareFunction){em_Val_from_string("not-equal")}; }
GPUCompareFunction GPUCompareFunction_greater_equal() { return (GPUCompareFunction){em_Val_from_string("greater-equal")}; }
GPUCompareFunction GPUCompareFunction_always() { return (GPUCompareFunction){em_Val_from_string("always")}; }
DEFINE_EMLITE_TYPE(GPUBufferBindingType, em_Val);
GPUBufferBindingType GPUBufferBindingType_uniform() { return (GPUBufferBindingType){em_Val_from_string("uniform")}; }
GPUBufferBindingType GPUBufferBindingType_storage() { return (GPUBufferBindingType){em_Val_from_string("storage")}; }
GPUBufferBindingType GPUBufferBindingType_read_only_storage() { return (GPUBufferBindingType){em_Val_from_string("read-only-storage")}; }
DEFINE_EMLITE_TYPE(GPUSamplerBindingType, em_Val);
GPUSamplerBindingType GPUSamplerBindingType_filtering() { return (GPUSamplerBindingType){em_Val_from_string("filtering")}; }
GPUSamplerBindingType GPUSamplerBindingType_non_filtering() { return (GPUSamplerBindingType){em_Val_from_string("non-filtering")}; }
GPUSamplerBindingType GPUSamplerBindingType_comparison() { return (GPUSamplerBindingType){em_Val_from_string("comparison")}; }
DEFINE_EMLITE_TYPE(GPUTextureSampleType, em_Val);
GPUTextureSampleType GPUTextureSampleType_float_() { return (GPUTextureSampleType){em_Val_from_string("float")}; }
GPUTextureSampleType GPUTextureSampleType_unfilterable_float() { return (GPUTextureSampleType){em_Val_from_string("unfilterable-float")}; }
GPUTextureSampleType GPUTextureSampleType_depth() { return (GPUTextureSampleType){em_Val_from_string("depth")}; }
GPUTextureSampleType GPUTextureSampleType_sint() { return (GPUTextureSampleType){em_Val_from_string("sint")}; }
GPUTextureSampleType GPUTextureSampleType_uint() { return (GPUTextureSampleType){em_Val_from_string("uint")}; }
DEFINE_EMLITE_TYPE(GPUStorageTextureAccess, em_Val);
GPUStorageTextureAccess GPUStorageTextureAccess_write_only() { return (GPUStorageTextureAccess){em_Val_from_string("write-only")}; }
GPUStorageTextureAccess GPUStorageTextureAccess_read_only() { return (GPUStorageTextureAccess){em_Val_from_string("read-only")}; }
GPUStorageTextureAccess GPUStorageTextureAccess_read_write() { return (GPUStorageTextureAccess){em_Val_from_string("read-write")}; }
DEFINE_EMLITE_TYPE(GPUCompilationMessageType, em_Val);
GPUCompilationMessageType GPUCompilationMessageType_error() { return (GPUCompilationMessageType){em_Val_from_string("error")}; }
GPUCompilationMessageType GPUCompilationMessageType_warning() { return (GPUCompilationMessageType){em_Val_from_string("warning")}; }
GPUCompilationMessageType GPUCompilationMessageType_info() { return (GPUCompilationMessageType){em_Val_from_string("info")}; }
DEFINE_EMLITE_TYPE(GPUPipelineErrorReason, em_Val);
GPUPipelineErrorReason GPUPipelineErrorReason_validation() { return (GPUPipelineErrorReason){em_Val_from_string("validation")}; }
GPUPipelineErrorReason GPUPipelineErrorReason_internal() { return (GPUPipelineErrorReason){em_Val_from_string("internal")}; }
DEFINE_EMLITE_TYPE(GPUAutoLayoutMode, em_Val);
GPUAutoLayoutMode GPUAutoLayoutMode_auto_() { return (GPUAutoLayoutMode){em_Val_from_string("auto")}; }
DEFINE_EMLITE_TYPE(GPUPrimitiveTopology, em_Val);
GPUPrimitiveTopology GPUPrimitiveTopology_point_list() { return (GPUPrimitiveTopology){em_Val_from_string("point-list")}; }
GPUPrimitiveTopology GPUPrimitiveTopology_line_list() { return (GPUPrimitiveTopology){em_Val_from_string("line-list")}; }
GPUPrimitiveTopology GPUPrimitiveTopology_line_strip() { return (GPUPrimitiveTopology){em_Val_from_string("line-strip")}; }
GPUPrimitiveTopology GPUPrimitiveTopology_triangle_list() { return (GPUPrimitiveTopology){em_Val_from_string("triangle-list")}; }
GPUPrimitiveTopology GPUPrimitiveTopology_triangle_strip() { return (GPUPrimitiveTopology){em_Val_from_string("triangle-strip")}; }
DEFINE_EMLITE_TYPE(GPUFrontFace, em_Val);
GPUFrontFace GPUFrontFace_ccw() { return (GPUFrontFace){em_Val_from_string("ccw")}; }
GPUFrontFace GPUFrontFace_cw() { return (GPUFrontFace){em_Val_from_string("cw")}; }
DEFINE_EMLITE_TYPE(GPUCullMode, em_Val);
GPUCullMode GPUCullMode_none() { return (GPUCullMode){em_Val_from_string("none")}; }
GPUCullMode GPUCullMode_front() { return (GPUCullMode){em_Val_from_string("front")}; }
GPUCullMode GPUCullMode_back() { return (GPUCullMode){em_Val_from_string("back")}; }
DEFINE_EMLITE_TYPE(GPUBlendFactor, em_Val);
GPUBlendFactor GPUBlendFactor_zero() { return (GPUBlendFactor){em_Val_from_string("zero")}; }
GPUBlendFactor GPUBlendFactor_one() { return (GPUBlendFactor){em_Val_from_string("one")}; }
GPUBlendFactor GPUBlendFactor_src() { return (GPUBlendFactor){em_Val_from_string("src")}; }
GPUBlendFactor GPUBlendFactor_one_minus_src() { return (GPUBlendFactor){em_Val_from_string("one-minus-src")}; }
GPUBlendFactor GPUBlendFactor_src_alpha() { return (GPUBlendFactor){em_Val_from_string("src-alpha")}; }
GPUBlendFactor GPUBlendFactor_one_minus_src_alpha() { return (GPUBlendFactor){em_Val_from_string("one-minus-src-alpha")}; }
GPUBlendFactor GPUBlendFactor_dst() { return (GPUBlendFactor){em_Val_from_string("dst")}; }
GPUBlendFactor GPUBlendFactor_one_minus_dst() { return (GPUBlendFactor){em_Val_from_string("one-minus-dst")}; }
GPUBlendFactor GPUBlendFactor_dst_alpha() { return (GPUBlendFactor){em_Val_from_string("dst-alpha")}; }
GPUBlendFactor GPUBlendFactor_one_minus_dst_alpha() { return (GPUBlendFactor){em_Val_from_string("one-minus-dst-alpha")}; }
GPUBlendFactor GPUBlendFactor_src_alpha_saturated() { return (GPUBlendFactor){em_Val_from_string("src-alpha-saturated")}; }
GPUBlendFactor GPUBlendFactor_constant() { return (GPUBlendFactor){em_Val_from_string("constant")}; }
GPUBlendFactor GPUBlendFactor_one_minus_constant() { return (GPUBlendFactor){em_Val_from_string("one-minus-constant")}; }
GPUBlendFactor GPUBlendFactor_src1() { return (GPUBlendFactor){em_Val_from_string("src1")}; }
GPUBlendFactor GPUBlendFactor_one_minus_src1() { return (GPUBlendFactor){em_Val_from_string("one-minus-src1")}; }
GPUBlendFactor GPUBlendFactor_src1_alpha() { return (GPUBlendFactor){em_Val_from_string("src1-alpha")}; }
GPUBlendFactor GPUBlendFactor_one_minus_src1_alpha() { return (GPUBlendFactor){em_Val_from_string("one-minus-src1-alpha")}; }
DEFINE_EMLITE_TYPE(GPUBlendOperation, em_Val);
GPUBlendOperation GPUBlendOperation_add() { return (GPUBlendOperation){em_Val_from_string("add")}; }
GPUBlendOperation GPUBlendOperation_subtract() { return (GPUBlendOperation){em_Val_from_string("subtract")}; }
GPUBlendOperation GPUBlendOperation_reverse_subtract() { return (GPUBlendOperation){em_Val_from_string("reverse-subtract")}; }
GPUBlendOperation GPUBlendOperation_min() { return (GPUBlendOperation){em_Val_from_string("min")}; }
GPUBlendOperation GPUBlendOperation_max() { return (GPUBlendOperation){em_Val_from_string("max")}; }
DEFINE_EMLITE_TYPE(GPUStencilOperation, em_Val);
GPUStencilOperation GPUStencilOperation_keep() { return (GPUStencilOperation){em_Val_from_string("keep")}; }
GPUStencilOperation GPUStencilOperation_zero() { return (GPUStencilOperation){em_Val_from_string("zero")}; }
GPUStencilOperation GPUStencilOperation_replace() { return (GPUStencilOperation){em_Val_from_string("replace")}; }
GPUStencilOperation GPUStencilOperation_invert() { return (GPUStencilOperation){em_Val_from_string("invert")}; }
GPUStencilOperation GPUStencilOperation_increment_clamp() { return (GPUStencilOperation){em_Val_from_string("increment-clamp")}; }
GPUStencilOperation GPUStencilOperation_decrement_clamp() { return (GPUStencilOperation){em_Val_from_string("decrement-clamp")}; }
GPUStencilOperation GPUStencilOperation_increment_wrap() { return (GPUStencilOperation){em_Val_from_string("increment-wrap")}; }
GPUStencilOperation GPUStencilOperation_decrement_wrap() { return (GPUStencilOperation){em_Val_from_string("decrement-wrap")}; }
DEFINE_EMLITE_TYPE(GPUIndexFormat, em_Val);
GPUIndexFormat GPUIndexFormat_uint16() { return (GPUIndexFormat){em_Val_from_string("uint16")}; }
GPUIndexFormat GPUIndexFormat_uint32() { return (GPUIndexFormat){em_Val_from_string("uint32")}; }
DEFINE_EMLITE_TYPE(GPUVertexFormat, em_Val);
GPUVertexFormat GPUVertexFormat_uint8() { return (GPUVertexFormat){em_Val_from_string("uint8")}; }
GPUVertexFormat GPUVertexFormat_uint8x2() { return (GPUVertexFormat){em_Val_from_string("uint8x2")}; }
GPUVertexFormat GPUVertexFormat_uint8x4() { return (GPUVertexFormat){em_Val_from_string("uint8x4")}; }
GPUVertexFormat GPUVertexFormat_sint8() { return (GPUVertexFormat){em_Val_from_string("sint8")}; }
GPUVertexFormat GPUVertexFormat_sint8x2() { return (GPUVertexFormat){em_Val_from_string("sint8x2")}; }
GPUVertexFormat GPUVertexFormat_sint8x4() { return (GPUVertexFormat){em_Val_from_string("sint8x4")}; }
GPUVertexFormat GPUVertexFormat_unorm8() { return (GPUVertexFormat){em_Val_from_string("unorm8")}; }
GPUVertexFormat GPUVertexFormat_unorm8x2() { return (GPUVertexFormat){em_Val_from_string("unorm8x2")}; }
GPUVertexFormat GPUVertexFormat_unorm8x4() { return (GPUVertexFormat){em_Val_from_string("unorm8x4")}; }
GPUVertexFormat GPUVertexFormat_snorm8() { return (GPUVertexFormat){em_Val_from_string("snorm8")}; }
GPUVertexFormat GPUVertexFormat_snorm8x2() { return (GPUVertexFormat){em_Val_from_string("snorm8x2")}; }
GPUVertexFormat GPUVertexFormat_snorm8x4() { return (GPUVertexFormat){em_Val_from_string("snorm8x4")}; }
GPUVertexFormat GPUVertexFormat_uint16() { return (GPUVertexFormat){em_Val_from_string("uint16")}; }
GPUVertexFormat GPUVertexFormat_uint16x2() { return (GPUVertexFormat){em_Val_from_string("uint16x2")}; }
GPUVertexFormat GPUVertexFormat_uint16x4() { return (GPUVertexFormat){em_Val_from_string("uint16x4")}; }
GPUVertexFormat GPUVertexFormat_sint16() { return (GPUVertexFormat){em_Val_from_string("sint16")}; }
GPUVertexFormat GPUVertexFormat_sint16x2() { return (GPUVertexFormat){em_Val_from_string("sint16x2")}; }
GPUVertexFormat GPUVertexFormat_sint16x4() { return (GPUVertexFormat){em_Val_from_string("sint16x4")}; }
GPUVertexFormat GPUVertexFormat_unorm16() { return (GPUVertexFormat){em_Val_from_string("unorm16")}; }
GPUVertexFormat GPUVertexFormat_unorm16x2() { return (GPUVertexFormat){em_Val_from_string("unorm16x2")}; }
GPUVertexFormat GPUVertexFormat_unorm16x4() { return (GPUVertexFormat){em_Val_from_string("unorm16x4")}; }
GPUVertexFormat GPUVertexFormat_snorm16() { return (GPUVertexFormat){em_Val_from_string("snorm16")}; }
GPUVertexFormat GPUVertexFormat_snorm16x2() { return (GPUVertexFormat){em_Val_from_string("snorm16x2")}; }
GPUVertexFormat GPUVertexFormat_snorm16x4() { return (GPUVertexFormat){em_Val_from_string("snorm16x4")}; }
GPUVertexFormat GPUVertexFormat_float16() { return (GPUVertexFormat){em_Val_from_string("float16")}; }
GPUVertexFormat GPUVertexFormat_float16x2() { return (GPUVertexFormat){em_Val_from_string("float16x2")}; }
GPUVertexFormat GPUVertexFormat_float16x4() { return (GPUVertexFormat){em_Val_from_string("float16x4")}; }
GPUVertexFormat GPUVertexFormat_float32() { return (GPUVertexFormat){em_Val_from_string("float32")}; }
GPUVertexFormat GPUVertexFormat_float32x2() { return (GPUVertexFormat){em_Val_from_string("float32x2")}; }
GPUVertexFormat GPUVertexFormat_float32x3() { return (GPUVertexFormat){em_Val_from_string("float32x3")}; }
GPUVertexFormat GPUVertexFormat_float32x4() { return (GPUVertexFormat){em_Val_from_string("float32x4")}; }
GPUVertexFormat GPUVertexFormat_uint32() { return (GPUVertexFormat){em_Val_from_string("uint32")}; }
GPUVertexFormat GPUVertexFormat_uint32x2() { return (GPUVertexFormat){em_Val_from_string("uint32x2")}; }
GPUVertexFormat GPUVertexFormat_uint32x3() { return (GPUVertexFormat){em_Val_from_string("uint32x3")}; }
GPUVertexFormat GPUVertexFormat_uint32x4() { return (GPUVertexFormat){em_Val_from_string("uint32x4")}; }
GPUVertexFormat GPUVertexFormat_sint32() { return (GPUVertexFormat){em_Val_from_string("sint32")}; }
GPUVertexFormat GPUVertexFormat_sint32x2() { return (GPUVertexFormat){em_Val_from_string("sint32x2")}; }
GPUVertexFormat GPUVertexFormat_sint32x3() { return (GPUVertexFormat){em_Val_from_string("sint32x3")}; }
GPUVertexFormat GPUVertexFormat_sint32x4() { return (GPUVertexFormat){em_Val_from_string("sint32x4")}; }
GPUVertexFormat GPUVertexFormat_unorm10_10_10_2() { return (GPUVertexFormat){em_Val_from_string("unorm10-10-10-2")}; }
GPUVertexFormat GPUVertexFormat_unorm8x4_bgra() { return (GPUVertexFormat){em_Val_from_string("unorm8x4-bgra")}; }
DEFINE_EMLITE_TYPE(GPUVertexStepMode, em_Val);
GPUVertexStepMode GPUVertexStepMode_vertex() { return (GPUVertexStepMode){em_Val_from_string("vertex")}; }
GPUVertexStepMode GPUVertexStepMode_instance() { return (GPUVertexStepMode){em_Val_from_string("instance")}; }
DEFINE_EMLITE_TYPE(GPULoadOp, em_Val);
GPULoadOp GPULoadOp_load() { return (GPULoadOp){em_Val_from_string("load")}; }
GPULoadOp GPULoadOp_clear() { return (GPULoadOp){em_Val_from_string("clear")}; }
DEFINE_EMLITE_TYPE(GPUStoreOp, em_Val);
GPUStoreOp GPUStoreOp_store() { return (GPUStoreOp){em_Val_from_string("store")}; }
GPUStoreOp GPUStoreOp_discard() { return (GPUStoreOp){em_Val_from_string("discard")}; }
DEFINE_EMLITE_TYPE(GPUQueryType, em_Val);
GPUQueryType GPUQueryType_occlusion() { return (GPUQueryType){em_Val_from_string("occlusion")}; }
GPUQueryType GPUQueryType_timestamp() { return (GPUQueryType){em_Val_from_string("timestamp")}; }
DEFINE_EMLITE_TYPE(GPUCanvasAlphaMode, em_Val);
GPUCanvasAlphaMode GPUCanvasAlphaMode_opaque() { return (GPUCanvasAlphaMode){em_Val_from_string("opaque")}; }
GPUCanvasAlphaMode GPUCanvasAlphaMode_premultiplied() { return (GPUCanvasAlphaMode){em_Val_from_string("premultiplied")}; }
DEFINE_EMLITE_TYPE(GPUCanvasToneMappingMode, em_Val);
GPUCanvasToneMappingMode GPUCanvasToneMappingMode_standard() { return (GPUCanvasToneMappingMode){em_Val_from_string("standard")}; }
GPUCanvasToneMappingMode GPUCanvasToneMappingMode_extended() { return (GPUCanvasToneMappingMode){em_Val_from_string("extended")}; }
DEFINE_EMLITE_TYPE(GPUDeviceLostReason, em_Val);
GPUDeviceLostReason GPUDeviceLostReason_unknown() { return (GPUDeviceLostReason){em_Val_from_string("unknown")}; }
GPUDeviceLostReason GPUDeviceLostReason_destroyed() { return (GPUDeviceLostReason){em_Val_from_string("destroyed")}; }
DEFINE_EMLITE_TYPE(GPUErrorFilter, em_Val);
GPUErrorFilter GPUErrorFilter_validation() { return (GPUErrorFilter){em_Val_from_string("validation")}; }
GPUErrorFilter GPUErrorFilter_out_of_memory() { return (GPUErrorFilter){em_Val_from_string("out-of-memory")}; }
GPUErrorFilter GPUErrorFilter_internal() { return (GPUErrorFilter){em_Val_from_string("internal")}; }
DEFINE_EMLITE_TYPE(HIDUnitSystem, em_Val);
HIDUnitSystem HIDUnitSystem_none() { return (HIDUnitSystem){em_Val_from_string("none")}; }
HIDUnitSystem HIDUnitSystem_si_linear() { return (HIDUnitSystem){em_Val_from_string("si-linear")}; }
HIDUnitSystem HIDUnitSystem_si_rotation() { return (HIDUnitSystem){em_Val_from_string("si-rotation")}; }
HIDUnitSystem HIDUnitSystem_english_linear() { return (HIDUnitSystem){em_Val_from_string("english-linear")}; }
HIDUnitSystem HIDUnitSystem_english_rotation() { return (HIDUnitSystem){em_Val_from_string("english-rotation")}; }
HIDUnitSystem HIDUnitSystem_vendor_defined() { return (HIDUnitSystem){em_Val_from_string("vendor-defined")}; }
HIDUnitSystem HIDUnitSystem_reserved() { return (HIDUnitSystem){em_Val_from_string("reserved")}; }
DEFINE_EMLITE_TYPE(MIDIPortType, em_Val);
MIDIPortType MIDIPortType_input() { return (MIDIPortType){em_Val_from_string("input")}; }
MIDIPortType MIDIPortType_output() { return (MIDIPortType){em_Val_from_string("output")}; }
DEFINE_EMLITE_TYPE(MIDIPortDeviceState, em_Val);
MIDIPortDeviceState MIDIPortDeviceState_disconnected() { return (MIDIPortDeviceState){em_Val_from_string("disconnected")}; }
MIDIPortDeviceState MIDIPortDeviceState_connected() { return (MIDIPortDeviceState){em_Val_from_string("connected")}; }
DEFINE_EMLITE_TYPE(MIDIPortConnectionState, em_Val);
MIDIPortConnectionState MIDIPortConnectionState_open() { return (MIDIPortConnectionState){em_Val_from_string("open")}; }
MIDIPortConnectionState MIDIPortConnectionState_closed() { return (MIDIPortConnectionState){em_Val_from_string("closed")}; }
MIDIPortConnectionState MIDIPortConnectionState_pending() { return (MIDIPortConnectionState){em_Val_from_string("pending")}; }
DEFINE_EMLITE_TYPE(MLPowerPreference, em_Val);
MLPowerPreference MLPowerPreference_default_() { return (MLPowerPreference){em_Val_from_string("default")}; }
MLPowerPreference MLPowerPreference_high_performance() { return (MLPowerPreference){em_Val_from_string("high-performance")}; }
MLPowerPreference MLPowerPreference_low_power() { return (MLPowerPreference){em_Val_from_string("low-power")}; }
DEFINE_EMLITE_TYPE(MLInputOperandLayout, em_Val);
MLInputOperandLayout MLInputOperandLayout_nchw() { return (MLInputOperandLayout){em_Val_from_string("nchw")}; }
MLInputOperandLayout MLInputOperandLayout_nhwc() { return (MLInputOperandLayout){em_Val_from_string("nhwc")}; }
DEFINE_EMLITE_TYPE(MLOperandDataType, em_Val);
MLOperandDataType MLOperandDataType_float32() { return (MLOperandDataType){em_Val_from_string("float32")}; }
MLOperandDataType MLOperandDataType_float16() { return (MLOperandDataType){em_Val_from_string("float16")}; }
MLOperandDataType MLOperandDataType_int32() { return (MLOperandDataType){em_Val_from_string("int32")}; }
MLOperandDataType MLOperandDataType_uint32() { return (MLOperandDataType){em_Val_from_string("uint32")}; }
MLOperandDataType MLOperandDataType_int64() { return (MLOperandDataType){em_Val_from_string("int64")}; }
MLOperandDataType MLOperandDataType_uint64() { return (MLOperandDataType){em_Val_from_string("uint64")}; }
MLOperandDataType MLOperandDataType_int8() { return (MLOperandDataType){em_Val_from_string("int8")}; }
MLOperandDataType MLOperandDataType_uint8() { return (MLOperandDataType){em_Val_from_string("uint8")}; }
DEFINE_EMLITE_TYPE(MLConv2dFilterOperandLayout, em_Val);
MLConv2dFilterOperandLayout MLConv2dFilterOperandLayout_oihw() { return (MLConv2dFilterOperandLayout){em_Val_from_string("oihw")}; }
MLConv2dFilterOperandLayout MLConv2dFilterOperandLayout_hwio() { return (MLConv2dFilterOperandLayout){em_Val_from_string("hwio")}; }
MLConv2dFilterOperandLayout MLConv2dFilterOperandLayout_ohwi() { return (MLConv2dFilterOperandLayout){em_Val_from_string("ohwi")}; }
MLConv2dFilterOperandLayout MLConv2dFilterOperandLayout_ihwo() { return (MLConv2dFilterOperandLayout){em_Val_from_string("ihwo")}; }
DEFINE_EMLITE_TYPE(MLConvTranspose2dFilterOperandLayout, em_Val);
MLConvTranspose2dFilterOperandLayout MLConvTranspose2dFilterOperandLayout_iohw() { return (MLConvTranspose2dFilterOperandLayout){em_Val_from_string("iohw")}; }
MLConvTranspose2dFilterOperandLayout MLConvTranspose2dFilterOperandLayout_hwoi() { return (MLConvTranspose2dFilterOperandLayout){em_Val_from_string("hwoi")}; }
MLConvTranspose2dFilterOperandLayout MLConvTranspose2dFilterOperandLayout_ohwi() { return (MLConvTranspose2dFilterOperandLayout){em_Val_from_string("ohwi")}; }
DEFINE_EMLITE_TYPE(MLGruWeightLayout, em_Val);
MLGruWeightLayout MLGruWeightLayout_zrn() { return (MLGruWeightLayout){em_Val_from_string("zrn")}; }
MLGruWeightLayout MLGruWeightLayout_rzn() { return (MLGruWeightLayout){em_Val_from_string("rzn")}; }
DEFINE_EMLITE_TYPE(MLRecurrentNetworkActivation, em_Val);
MLRecurrentNetworkActivation MLRecurrentNetworkActivation_relu() { return (MLRecurrentNetworkActivation){em_Val_from_string("relu")}; }
MLRecurrentNetworkActivation MLRecurrentNetworkActivation_sigmoid() { return (MLRecurrentNetworkActivation){em_Val_from_string("sigmoid")}; }
MLRecurrentNetworkActivation MLRecurrentNetworkActivation_tanh() { return (MLRecurrentNetworkActivation){em_Val_from_string("tanh")}; }
DEFINE_EMLITE_TYPE(MLRecurrentNetworkDirection, em_Val);
MLRecurrentNetworkDirection MLRecurrentNetworkDirection_forward() { return (MLRecurrentNetworkDirection){em_Val_from_string("forward")}; }
MLRecurrentNetworkDirection MLRecurrentNetworkDirection_backward() { return (MLRecurrentNetworkDirection){em_Val_from_string("backward")}; }
MLRecurrentNetworkDirection MLRecurrentNetworkDirection_both() { return (MLRecurrentNetworkDirection){em_Val_from_string("both")}; }
DEFINE_EMLITE_TYPE(MLLstmWeightLayout, em_Val);
MLLstmWeightLayout MLLstmWeightLayout_iofg() { return (MLLstmWeightLayout){em_Val_from_string("iofg")}; }
MLLstmWeightLayout MLLstmWeightLayout_ifgo() { return (MLLstmWeightLayout){em_Val_from_string("ifgo")}; }
DEFINE_EMLITE_TYPE(MLPaddingMode, em_Val);
MLPaddingMode MLPaddingMode_constant() { return (MLPaddingMode){em_Val_from_string("constant")}; }
MLPaddingMode MLPaddingMode_edge() { return (MLPaddingMode){em_Val_from_string("edge")}; }
MLPaddingMode MLPaddingMode_reflection() { return (MLPaddingMode){em_Val_from_string("reflection")}; }
DEFINE_EMLITE_TYPE(MLRoundingType, em_Val);
MLRoundingType MLRoundingType_floor() { return (MLRoundingType){em_Val_from_string("floor")}; }
MLRoundingType MLRoundingType_ceil() { return (MLRoundingType){em_Val_from_string("ceil")}; }
DEFINE_EMLITE_TYPE(MLInterpolationMode, em_Val);
MLInterpolationMode MLInterpolationMode_nearest_neighbor() { return (MLInterpolationMode){em_Val_from_string("nearest-neighbor")}; }
MLInterpolationMode MLInterpolationMode_linear() { return (MLInterpolationMode){em_Val_from_string("linear")}; }
DEFINE_EMLITE_TYPE(SFrameTransformRole, em_Val);
SFrameTransformRole SFrameTransformRole_encrypt() { return (SFrameTransformRole){em_Val_from_string("encrypt")}; }
SFrameTransformRole SFrameTransformRole_decrypt() { return (SFrameTransformRole){em_Val_from_string("decrypt")}; }
DEFINE_EMLITE_TYPE(SFrameCipherSuite, em_Val);
SFrameCipherSuite SFrameCipherSuite_AES_128_CTR_HMAC_SHA256_80() { return (SFrameCipherSuite){em_Val_from_string("AES_128_CTR_HMAC_SHA256_80")}; }
SFrameCipherSuite SFrameCipherSuite_AES_128_CTR_HMAC_SHA256_64() { return (SFrameCipherSuite){em_Val_from_string("AES_128_CTR_HMAC_SHA256_64")}; }
SFrameCipherSuite SFrameCipherSuite_AES_128_CTR_HMAC_SHA256_32() { return (SFrameCipherSuite){em_Val_from_string("AES_128_CTR_HMAC_SHA256_32")}; }
SFrameCipherSuite SFrameCipherSuite_AES_128_GCM_SHA256_128() { return (SFrameCipherSuite){em_Val_from_string("AES_128_GCM_SHA256_128")}; }
SFrameCipherSuite SFrameCipherSuite_AES_256_GCM_SHA512_128() { return (SFrameCipherSuite){em_Val_from_string("AES_256_GCM_SHA512_128")}; }
DEFINE_EMLITE_TYPE(SFrameTransformErrorEventType, em_Val);
SFrameTransformErrorEventType SFrameTransformErrorEventType_authentication() { return (SFrameTransformErrorEventType){em_Val_from_string("authentication")}; }
SFrameTransformErrorEventType SFrameTransformErrorEventType_keyID() { return (SFrameTransformErrorEventType){em_Val_from_string("keyID")}; }
SFrameTransformErrorEventType SFrameTransformErrorEventType_syntax() { return (SFrameTransformErrorEventType){em_Val_from_string("syntax")}; }
DEFINE_EMLITE_TYPE(RTCEncodedVideoFrameType, em_Val);
RTCEncodedVideoFrameType RTCEncodedVideoFrameType_empty() { return (RTCEncodedVideoFrameType){em_Val_from_string("empty")}; }
RTCEncodedVideoFrameType RTCEncodedVideoFrameType_key() { return (RTCEncodedVideoFrameType){em_Val_from_string("key")}; }
RTCEncodedVideoFrameType RTCEncodedVideoFrameType_delta() { return (RTCEncodedVideoFrameType){em_Val_from_string("delta")}; }
DEFINE_EMLITE_TYPE(RTCErrorDetailTypeIdp, em_Val);
RTCErrorDetailTypeIdp RTCErrorDetailTypeIdp_idp_bad_script_failure() { return (RTCErrorDetailTypeIdp){em_Val_from_string("idp-bad-script-failure")}; }
RTCErrorDetailTypeIdp RTCErrorDetailTypeIdp_idp_execution_failure() { return (RTCErrorDetailTypeIdp){em_Val_from_string("idp-execution-failure")}; }
RTCErrorDetailTypeIdp RTCErrorDetailTypeIdp_idp_load_failure() { return (RTCErrorDetailTypeIdp){em_Val_from_string("idp-load-failure")}; }
RTCErrorDetailTypeIdp RTCErrorDetailTypeIdp_idp_need_login() { return (RTCErrorDetailTypeIdp){em_Val_from_string("idp-need-login")}; }
RTCErrorDetailTypeIdp RTCErrorDetailTypeIdp_idp_timeout() { return (RTCErrorDetailTypeIdp){em_Val_from_string("idp-timeout")}; }
RTCErrorDetailTypeIdp RTCErrorDetailTypeIdp_idp_tls_failure() { return (RTCErrorDetailTypeIdp){em_Val_from_string("idp-tls-failure")}; }
RTCErrorDetailTypeIdp RTCErrorDetailTypeIdp_idp_token_expired() { return (RTCErrorDetailTypeIdp){em_Val_from_string("idp-token-expired")}; }
RTCErrorDetailTypeIdp RTCErrorDetailTypeIdp_idp_token_invalid() { return (RTCErrorDetailTypeIdp){em_Val_from_string("idp-token-invalid")}; }
DEFINE_EMLITE_TYPE(RTCPriorityType, em_Val);
RTCPriorityType RTCPriorityType_very_low() { return (RTCPriorityType){em_Val_from_string("very-low")}; }
RTCPriorityType RTCPriorityType_low() { return (RTCPriorityType){em_Val_from_string("low")}; }
RTCPriorityType RTCPriorityType_medium() { return (RTCPriorityType){em_Val_from_string("medium")}; }
RTCPriorityType RTCPriorityType_high() { return (RTCPriorityType){em_Val_from_string("high")}; }
DEFINE_EMLITE_TYPE(RTCStatsType, em_Val);
RTCStatsType RTCStatsType_codec() { return (RTCStatsType){em_Val_from_string("codec")}; }
RTCStatsType RTCStatsType_inbound_rtp() { return (RTCStatsType){em_Val_from_string("inbound-rtp")}; }
RTCStatsType RTCStatsType_outbound_rtp() { return (RTCStatsType){em_Val_from_string("outbound-rtp")}; }
RTCStatsType RTCStatsType_remote_inbound_rtp() { return (RTCStatsType){em_Val_from_string("remote-inbound-rtp")}; }
RTCStatsType RTCStatsType_remote_outbound_rtp() { return (RTCStatsType){em_Val_from_string("remote-outbound-rtp")}; }
RTCStatsType RTCStatsType_media_source() { return (RTCStatsType){em_Val_from_string("media-source")}; }
RTCStatsType RTCStatsType_media_playout() { return (RTCStatsType){em_Val_from_string("media-playout")}; }
RTCStatsType RTCStatsType_peer_connection() { return (RTCStatsType){em_Val_from_string("peer-connection")}; }
RTCStatsType RTCStatsType_data_channel() { return (RTCStatsType){em_Val_from_string("data-channel")}; }
RTCStatsType RTCStatsType_transport() { return (RTCStatsType){em_Val_from_string("transport")}; }
RTCStatsType RTCStatsType_candidate_pair() { return (RTCStatsType){em_Val_from_string("candidate-pair")}; }
RTCStatsType RTCStatsType_local_candidate() { return (RTCStatsType){em_Val_from_string("local-candidate")}; }
RTCStatsType RTCStatsType_remote_candidate() { return (RTCStatsType){em_Val_from_string("remote-candidate")}; }
RTCStatsType RTCStatsType_certificate() { return (RTCStatsType){em_Val_from_string("certificate")}; }
DEFINE_EMLITE_TYPE(RTCQualityLimitationReason, em_Val);
RTCQualityLimitationReason RTCQualityLimitationReason_none() { return (RTCQualityLimitationReason){em_Val_from_string("none")}; }
RTCQualityLimitationReason RTCQualityLimitationReason_cpu() { return (RTCQualityLimitationReason){em_Val_from_string("cpu")}; }
RTCQualityLimitationReason RTCQualityLimitationReason_bandwidth() { return (RTCQualityLimitationReason){em_Val_from_string("bandwidth")}; }
RTCQualityLimitationReason RTCQualityLimitationReason_other() { return (RTCQualityLimitationReason){em_Val_from_string("other")}; }
DEFINE_EMLITE_TYPE(RTCDtlsRole, em_Val);
RTCDtlsRole RTCDtlsRole_client() { return (RTCDtlsRole){em_Val_from_string("client")}; }
RTCDtlsRole RTCDtlsRole_server() { return (RTCDtlsRole){em_Val_from_string("server")}; }
RTCDtlsRole RTCDtlsRole_unknown() { return (RTCDtlsRole){em_Val_from_string("unknown")}; }
DEFINE_EMLITE_TYPE(RTCStatsIceCandidatePairState, em_Val);
RTCStatsIceCandidatePairState RTCStatsIceCandidatePairState_frozen() { return (RTCStatsIceCandidatePairState){em_Val_from_string("frozen")}; }
RTCStatsIceCandidatePairState RTCStatsIceCandidatePairState_waiting() { return (RTCStatsIceCandidatePairState){em_Val_from_string("waiting")}; }
RTCStatsIceCandidatePairState RTCStatsIceCandidatePairState_in_progress() { return (RTCStatsIceCandidatePairState){em_Val_from_string("in-progress")}; }
RTCStatsIceCandidatePairState RTCStatsIceCandidatePairState_failed() { return (RTCStatsIceCandidatePairState){em_Val_from_string("failed")}; }
RTCStatsIceCandidatePairState RTCStatsIceCandidatePairState_succeeded() { return (RTCStatsIceCandidatePairState){em_Val_from_string("succeeded")}; }
DEFINE_EMLITE_TYPE(RTCIceTransportPolicy, em_Val);
RTCIceTransportPolicy RTCIceTransportPolicy_relay() { return (RTCIceTransportPolicy){em_Val_from_string("relay")}; }
RTCIceTransportPolicy RTCIceTransportPolicy_all() { return (RTCIceTransportPolicy){em_Val_from_string("all")}; }
DEFINE_EMLITE_TYPE(RTCBundlePolicy, em_Val);
RTCBundlePolicy RTCBundlePolicy_balanced() { return (RTCBundlePolicy){em_Val_from_string("balanced")}; }
RTCBundlePolicy RTCBundlePolicy_max_compat() { return (RTCBundlePolicy){em_Val_from_string("max-compat")}; }
RTCBundlePolicy RTCBundlePolicy_max_bundle() { return (RTCBundlePolicy){em_Val_from_string("max-bundle")}; }
DEFINE_EMLITE_TYPE(RTCRtcpMuxPolicy, em_Val);
RTCRtcpMuxPolicy RTCRtcpMuxPolicy_require() { return (RTCRtcpMuxPolicy){em_Val_from_string("require")}; }
DEFINE_EMLITE_TYPE(RTCSignalingState, em_Val);
RTCSignalingState RTCSignalingState_stable() { return (RTCSignalingState){em_Val_from_string("stable")}; }
RTCSignalingState RTCSignalingState_have_local_offer() { return (RTCSignalingState){em_Val_from_string("have-local-offer")}; }
RTCSignalingState RTCSignalingState_have_remote_offer() { return (RTCSignalingState){em_Val_from_string("have-remote-offer")}; }
RTCSignalingState RTCSignalingState_have_local_pranswer() { return (RTCSignalingState){em_Val_from_string("have-local-pranswer")}; }
RTCSignalingState RTCSignalingState_have_remote_pranswer() { return (RTCSignalingState){em_Val_from_string("have-remote-pranswer")}; }
RTCSignalingState RTCSignalingState_closed() { return (RTCSignalingState){em_Val_from_string("closed")}; }
DEFINE_EMLITE_TYPE(RTCIceGatheringState, em_Val);
RTCIceGatheringState RTCIceGatheringState_new_() { return (RTCIceGatheringState){em_Val_from_string("new")}; }
RTCIceGatheringState RTCIceGatheringState_gathering() { return (RTCIceGatheringState){em_Val_from_string("gathering")}; }
RTCIceGatheringState RTCIceGatheringState_complete() { return (RTCIceGatheringState){em_Val_from_string("complete")}; }
DEFINE_EMLITE_TYPE(RTCPeerConnectionState, em_Val);
RTCPeerConnectionState RTCPeerConnectionState_closed() { return (RTCPeerConnectionState){em_Val_from_string("closed")}; }
RTCPeerConnectionState RTCPeerConnectionState_failed() { return (RTCPeerConnectionState){em_Val_from_string("failed")}; }
RTCPeerConnectionState RTCPeerConnectionState_disconnected() { return (RTCPeerConnectionState){em_Val_from_string("disconnected")}; }
RTCPeerConnectionState RTCPeerConnectionState_new_() { return (RTCPeerConnectionState){em_Val_from_string("new")}; }
RTCPeerConnectionState RTCPeerConnectionState_connecting() { return (RTCPeerConnectionState){em_Val_from_string("connecting")}; }
RTCPeerConnectionState RTCPeerConnectionState_connected() { return (RTCPeerConnectionState){em_Val_from_string("connected")}; }
DEFINE_EMLITE_TYPE(RTCIceConnectionState, em_Val);
RTCIceConnectionState RTCIceConnectionState_closed() { return (RTCIceConnectionState){em_Val_from_string("closed")}; }
RTCIceConnectionState RTCIceConnectionState_failed() { return (RTCIceConnectionState){em_Val_from_string("failed")}; }
RTCIceConnectionState RTCIceConnectionState_disconnected() { return (RTCIceConnectionState){em_Val_from_string("disconnected")}; }
RTCIceConnectionState RTCIceConnectionState_new_() { return (RTCIceConnectionState){em_Val_from_string("new")}; }
RTCIceConnectionState RTCIceConnectionState_checking() { return (RTCIceConnectionState){em_Val_from_string("checking")}; }
RTCIceConnectionState RTCIceConnectionState_completed() { return (RTCIceConnectionState){em_Val_from_string("completed")}; }
RTCIceConnectionState RTCIceConnectionState_connected() { return (RTCIceConnectionState){em_Val_from_string("connected")}; }
DEFINE_EMLITE_TYPE(RTCSdpType, em_Val);
RTCSdpType RTCSdpType_offer() { return (RTCSdpType){em_Val_from_string("offer")}; }
RTCSdpType RTCSdpType_pranswer() { return (RTCSdpType){em_Val_from_string("pranswer")}; }
RTCSdpType RTCSdpType_answer() { return (RTCSdpType){em_Val_from_string("answer")}; }
RTCSdpType RTCSdpType_rollback() { return (RTCSdpType){em_Val_from_string("rollback")}; }
DEFINE_EMLITE_TYPE(RTCIceProtocol, em_Val);
RTCIceProtocol RTCIceProtocol_udp() { return (RTCIceProtocol){em_Val_from_string("udp")}; }
RTCIceProtocol RTCIceProtocol_tcp() { return (RTCIceProtocol){em_Val_from_string("tcp")}; }
DEFINE_EMLITE_TYPE(RTCIceTcpCandidateType, em_Val);
RTCIceTcpCandidateType RTCIceTcpCandidateType_active() { return (RTCIceTcpCandidateType){em_Val_from_string("active")}; }
RTCIceTcpCandidateType RTCIceTcpCandidateType_passive() { return (RTCIceTcpCandidateType){em_Val_from_string("passive")}; }
RTCIceTcpCandidateType RTCIceTcpCandidateType_so() { return (RTCIceTcpCandidateType){em_Val_from_string("so")}; }
DEFINE_EMLITE_TYPE(RTCIceCandidateType, em_Val);
RTCIceCandidateType RTCIceCandidateType_host() { return (RTCIceCandidateType){em_Val_from_string("host")}; }
RTCIceCandidateType RTCIceCandidateType_srflx() { return (RTCIceCandidateType){em_Val_from_string("srflx")}; }
RTCIceCandidateType RTCIceCandidateType_prflx() { return (RTCIceCandidateType){em_Val_from_string("prflx")}; }
RTCIceCandidateType RTCIceCandidateType_relay() { return (RTCIceCandidateType){em_Val_from_string("relay")}; }
DEFINE_EMLITE_TYPE(RTCIceServerTransportProtocol, em_Val);
RTCIceServerTransportProtocol RTCIceServerTransportProtocol_udp() { return (RTCIceServerTransportProtocol){em_Val_from_string("udp")}; }
RTCIceServerTransportProtocol RTCIceServerTransportProtocol_tcp() { return (RTCIceServerTransportProtocol){em_Val_from_string("tcp")}; }
RTCIceServerTransportProtocol RTCIceServerTransportProtocol_tls() { return (RTCIceServerTransportProtocol){em_Val_from_string("tls")}; }
DEFINE_EMLITE_TYPE(RTCRtpTransceiverDirection, em_Val);
RTCRtpTransceiverDirection RTCRtpTransceiverDirection_sendrecv() { return (RTCRtpTransceiverDirection){em_Val_from_string("sendrecv")}; }
RTCRtpTransceiverDirection RTCRtpTransceiverDirection_sendonly() { return (RTCRtpTransceiverDirection){em_Val_from_string("sendonly")}; }
RTCRtpTransceiverDirection RTCRtpTransceiverDirection_recvonly() { return (RTCRtpTransceiverDirection){em_Val_from_string("recvonly")}; }
RTCRtpTransceiverDirection RTCRtpTransceiverDirection_inactive() { return (RTCRtpTransceiverDirection){em_Val_from_string("inactive")}; }
RTCRtpTransceiverDirection RTCRtpTransceiverDirection_stopped() { return (RTCRtpTransceiverDirection){em_Val_from_string("stopped")}; }
DEFINE_EMLITE_TYPE(RTCDtlsTransportState, em_Val);
RTCDtlsTransportState RTCDtlsTransportState_new_() { return (RTCDtlsTransportState){em_Val_from_string("new")}; }
RTCDtlsTransportState RTCDtlsTransportState_connecting() { return (RTCDtlsTransportState){em_Val_from_string("connecting")}; }
RTCDtlsTransportState RTCDtlsTransportState_connected() { return (RTCDtlsTransportState){em_Val_from_string("connected")}; }
RTCDtlsTransportState RTCDtlsTransportState_closed() { return (RTCDtlsTransportState){em_Val_from_string("closed")}; }
RTCDtlsTransportState RTCDtlsTransportState_failed() { return (RTCDtlsTransportState){em_Val_from_string("failed")}; }
DEFINE_EMLITE_TYPE(RTCIceGathererState, em_Val);
RTCIceGathererState RTCIceGathererState_new_() { return (RTCIceGathererState){em_Val_from_string("new")}; }
RTCIceGathererState RTCIceGathererState_gathering() { return (RTCIceGathererState){em_Val_from_string("gathering")}; }
RTCIceGathererState RTCIceGathererState_complete() { return (RTCIceGathererState){em_Val_from_string("complete")}; }
DEFINE_EMLITE_TYPE(RTCIceTransportState, em_Val);
RTCIceTransportState RTCIceTransportState_closed() { return (RTCIceTransportState){em_Val_from_string("closed")}; }
RTCIceTransportState RTCIceTransportState_failed() { return (RTCIceTransportState){em_Val_from_string("failed")}; }
RTCIceTransportState RTCIceTransportState_disconnected() { return (RTCIceTransportState){em_Val_from_string("disconnected")}; }
RTCIceTransportState RTCIceTransportState_new_() { return (RTCIceTransportState){em_Val_from_string("new")}; }
RTCIceTransportState RTCIceTransportState_checking() { return (RTCIceTransportState){em_Val_from_string("checking")}; }
RTCIceTransportState RTCIceTransportState_completed() { return (RTCIceTransportState){em_Val_from_string("completed")}; }
RTCIceTransportState RTCIceTransportState_connected() { return (RTCIceTransportState){em_Val_from_string("connected")}; }
DEFINE_EMLITE_TYPE(RTCIceRole, em_Val);
RTCIceRole RTCIceRole_unknown() { return (RTCIceRole){em_Val_from_string("unknown")}; }
RTCIceRole RTCIceRole_controlling() { return (RTCIceRole){em_Val_from_string("controlling")}; }
RTCIceRole RTCIceRole_controlled() { return (RTCIceRole){em_Val_from_string("controlled")}; }
DEFINE_EMLITE_TYPE(RTCIceComponent, em_Val);
RTCIceComponent RTCIceComponent_rtp() { return (RTCIceComponent){em_Val_from_string("rtp")}; }
RTCIceComponent RTCIceComponent_rtcp() { return (RTCIceComponent){em_Val_from_string("rtcp")}; }
DEFINE_EMLITE_TYPE(RTCSctpTransportState, em_Val);
RTCSctpTransportState RTCSctpTransportState_connecting() { return (RTCSctpTransportState){em_Val_from_string("connecting")}; }
RTCSctpTransportState RTCSctpTransportState_connected() { return (RTCSctpTransportState){em_Val_from_string("connected")}; }
RTCSctpTransportState RTCSctpTransportState_closed() { return (RTCSctpTransportState){em_Val_from_string("closed")}; }
DEFINE_EMLITE_TYPE(RTCDataChannelState, em_Val);
RTCDataChannelState RTCDataChannelState_connecting() { return (RTCDataChannelState){em_Val_from_string("connecting")}; }
RTCDataChannelState RTCDataChannelState_open() { return (RTCDataChannelState){em_Val_from_string("open")}; }
RTCDataChannelState RTCDataChannelState_closing() { return (RTCDataChannelState){em_Val_from_string("closing")}; }
RTCDataChannelState RTCDataChannelState_closed() { return (RTCDataChannelState){em_Val_from_string("closed")}; }
DEFINE_EMLITE_TYPE(RTCErrorDetailType, em_Val);
RTCErrorDetailType RTCErrorDetailType_data_channel_failure() { return (RTCErrorDetailType){em_Val_from_string("data-channel-failure")}; }
RTCErrorDetailType RTCErrorDetailType_dtls_failure() { return (RTCErrorDetailType){em_Val_from_string("dtls-failure")}; }
RTCErrorDetailType RTCErrorDetailType_fingerprint_failure() { return (RTCErrorDetailType){em_Val_from_string("fingerprint-failure")}; }
RTCErrorDetailType RTCErrorDetailType_sctp_failure() { return (RTCErrorDetailType){em_Val_from_string("sctp-failure")}; }
RTCErrorDetailType RTCErrorDetailType_sdp_syntax_error() { return (RTCErrorDetailType){em_Val_from_string("sdp-syntax-error")}; }
RTCErrorDetailType RTCErrorDetailType_hardware_encoder_not_available() { return (RTCErrorDetailType){em_Val_from_string("hardware-encoder-not-available")}; }
RTCErrorDetailType RTCErrorDetailType_hardware_encoder_error() { return (RTCErrorDetailType){em_Val_from_string("hardware-encoder-error")}; }
DEFINE_EMLITE_TYPE(BinaryType, em_Val);
BinaryType BinaryType_blob() { return (BinaryType){em_Val_from_string("blob")}; }
BinaryType BinaryType_arraybuffer() { return (BinaryType){em_Val_from_string("arraybuffer")}; }
DEFINE_EMLITE_TYPE(WebTransportReliabilityMode, em_Val);
WebTransportReliabilityMode WebTransportReliabilityMode_pending() { return (WebTransportReliabilityMode){em_Val_from_string("pending")}; }
WebTransportReliabilityMode WebTransportReliabilityMode_reliable_only() { return (WebTransportReliabilityMode){em_Val_from_string("reliable-only")}; }
WebTransportReliabilityMode WebTransportReliabilityMode_supports_unreliable() { return (WebTransportReliabilityMode){em_Val_from_string("supports-unreliable")}; }
DEFINE_EMLITE_TYPE(WebTransportCongestionControl, em_Val);
WebTransportCongestionControl WebTransportCongestionControl_default_() { return (WebTransportCongestionControl){em_Val_from_string("default")}; }
WebTransportCongestionControl WebTransportCongestionControl_throughput() { return (WebTransportCongestionControl){em_Val_from_string("throughput")}; }
WebTransportCongestionControl WebTransportCongestionControl_low_latency() { return (WebTransportCongestionControl){em_Val_from_string("low-latency")}; }
DEFINE_EMLITE_TYPE(DatagramsReadableMode, em_Val);
DatagramsReadableMode DatagramsReadableMode_bytes() { return (DatagramsReadableMode){em_Val_from_string("bytes")}; }
DEFINE_EMLITE_TYPE(WebTransportErrorSource, em_Val);
WebTransportErrorSource WebTransportErrorSource_stream() { return (WebTransportErrorSource){em_Val_from_string("stream")}; }
WebTransportErrorSource WebTransportErrorSource_session() { return (WebTransportErrorSource){em_Val_from_string("session")}; }
DEFINE_EMLITE_TYPE(USBTransferStatus, em_Val);
USBTransferStatus USBTransferStatus_ok() { return (USBTransferStatus){em_Val_from_string("ok")}; }
USBTransferStatus USBTransferStatus_stall() { return (USBTransferStatus){em_Val_from_string("stall")}; }
USBTransferStatus USBTransferStatus_babble() { return (USBTransferStatus){em_Val_from_string("babble")}; }
DEFINE_EMLITE_TYPE(USBRequestType, em_Val);
USBRequestType USBRequestType_standard() { return (USBRequestType){em_Val_from_string("standard")}; }
USBRequestType USBRequestType_class_() { return (USBRequestType){em_Val_from_string("class")}; }
USBRequestType USBRequestType_vendor() { return (USBRequestType){em_Val_from_string("vendor")}; }
DEFINE_EMLITE_TYPE(USBRecipient, em_Val);
USBRecipient USBRecipient_device() { return (USBRecipient){em_Val_from_string("device")}; }
USBRecipient USBRecipient_interface() { return (USBRecipient){em_Val_from_string("interface")}; }
USBRecipient USBRecipient_endpoint() { return (USBRecipient){em_Val_from_string("endpoint")}; }
USBRecipient USBRecipient_other() { return (USBRecipient){em_Val_from_string("other")}; }
DEFINE_EMLITE_TYPE(USBDirection, em_Val);
USBDirection USBDirection_in() { return (USBDirection){em_Val_from_string("in")}; }
USBDirection USBDirection_out() { return (USBDirection){em_Val_from_string("out")}; }
DEFINE_EMLITE_TYPE(USBEndpointType, em_Val);
USBEndpointType USBEndpointType_bulk() { return (USBEndpointType){em_Val_from_string("bulk")}; }
USBEndpointType USBEndpointType_interrupt() { return (USBEndpointType){em_Val_from_string("interrupt")}; }
USBEndpointType USBEndpointType_isochronous() { return (USBEndpointType){em_Val_from_string("isochronous")}; }
DEFINE_EMLITE_TYPE(AutoKeyword, em_Val);
AutoKeyword AutoKeyword_auto_() { return (AutoKeyword){em_Val_from_string("auto")}; }
DEFINE_EMLITE_TYPE(DirectionSetting, em_Val);
DirectionSetting DirectionSetting_none() { return (DirectionSetting){em_Val_from_string("")}; }
DirectionSetting DirectionSetting_rl() { return (DirectionSetting){em_Val_from_string("rl")}; }
DirectionSetting DirectionSetting_lr() { return (DirectionSetting){em_Val_from_string("lr")}; }
DEFINE_EMLITE_TYPE(LineAlignSetting, em_Val);
LineAlignSetting LineAlignSetting_start() { return (LineAlignSetting){em_Val_from_string("start")}; }
LineAlignSetting LineAlignSetting_center() { return (LineAlignSetting){em_Val_from_string("center")}; }
LineAlignSetting LineAlignSetting_end() { return (LineAlignSetting){em_Val_from_string("end")}; }
DEFINE_EMLITE_TYPE(PositionAlignSetting, em_Val);
PositionAlignSetting PositionAlignSetting_line_left() { return (PositionAlignSetting){em_Val_from_string("line-left")}; }
PositionAlignSetting PositionAlignSetting_center() { return (PositionAlignSetting){em_Val_from_string("center")}; }
PositionAlignSetting PositionAlignSetting_line_right() { return (PositionAlignSetting){em_Val_from_string("line-right")}; }
PositionAlignSetting PositionAlignSetting_auto_() { return (PositionAlignSetting){em_Val_from_string("auto")}; }
DEFINE_EMLITE_TYPE(AlignSetting, em_Val);
AlignSetting AlignSetting_start() { return (AlignSetting){em_Val_from_string("start")}; }
AlignSetting AlignSetting_center() { return (AlignSetting){em_Val_from_string("center")}; }
AlignSetting AlignSetting_end() { return (AlignSetting){em_Val_from_string("end")}; }
AlignSetting AlignSetting_left() { return (AlignSetting){em_Val_from_string("left")}; }
AlignSetting AlignSetting_right() { return (AlignSetting){em_Val_from_string("right")}; }
DEFINE_EMLITE_TYPE(ScrollSetting, em_Val);
ScrollSetting ScrollSetting_none() { return (ScrollSetting){em_Val_from_string("")}; }
ScrollSetting ScrollSetting_up() { return (ScrollSetting){em_Val_from_string("up")}; }
DEFINE_EMLITE_TYPE(XREnvironmentBlendMode, em_Val);
XREnvironmentBlendMode XREnvironmentBlendMode_opaque() { return (XREnvironmentBlendMode){em_Val_from_string("opaque")}; }
XREnvironmentBlendMode XREnvironmentBlendMode_alpha_blend() { return (XREnvironmentBlendMode){em_Val_from_string("alpha-blend")}; }
XREnvironmentBlendMode XREnvironmentBlendMode_additive() { return (XREnvironmentBlendMode){em_Val_from_string("additive")}; }
DEFINE_EMLITE_TYPE(XRInteractionMode, em_Val);
XRInteractionMode XRInteractionMode_screen_space() { return (XRInteractionMode){em_Val_from_string("screen-space")}; }
XRInteractionMode XRInteractionMode_world_space() { return (XRInteractionMode){em_Val_from_string("world-space")}; }
DEFINE_EMLITE_TYPE(XRDepthType, em_Val);
XRDepthType XRDepthType_raw() { return (XRDepthType){em_Val_from_string("raw")}; }
XRDepthType XRDepthType_smooth() { return (XRDepthType){em_Val_from_string("smooth")}; }
DEFINE_EMLITE_TYPE(XRDepthUsage, em_Val);
XRDepthUsage XRDepthUsage_cpu_optimized() { return (XRDepthUsage){em_Val_from_string("cpu-optimized")}; }
XRDepthUsage XRDepthUsage_gpu_optimized() { return (XRDepthUsage){em_Val_from_string("gpu-optimized")}; }
DEFINE_EMLITE_TYPE(XRDepthDataFormat, em_Val);
XRDepthDataFormat XRDepthDataFormat_luminance_alpha() { return (XRDepthDataFormat){em_Val_from_string("luminance-alpha")}; }
XRDepthDataFormat XRDepthDataFormat_float32() { return (XRDepthDataFormat){em_Val_from_string("float32")}; }
XRDepthDataFormat XRDepthDataFormat_unsigned_short() { return (XRDepthDataFormat){em_Val_from_string("unsigned-short")}; }
DEFINE_EMLITE_TYPE(XRDOMOverlayType, em_Val);
XRDOMOverlayType XRDOMOverlayType_screen() { return (XRDOMOverlayType){em_Val_from_string("screen")}; }
XRDOMOverlayType XRDOMOverlayType_floating() { return (XRDOMOverlayType){em_Val_from_string("floating")}; }
XRDOMOverlayType XRDOMOverlayType_head_locked() { return (XRDOMOverlayType){em_Val_from_string("head-locked")}; }
DEFINE_EMLITE_TYPE(XRHandJoint, em_Val);
XRHandJoint XRHandJoint_wrist() { return (XRHandJoint){em_Val_from_string("wrist")}; }
XRHandJoint XRHandJoint_thumb_metacarpal() { return (XRHandJoint){em_Val_from_string("thumb-metacarpal")}; }
XRHandJoint XRHandJoint_thumb_phalanx_proximal() { return (XRHandJoint){em_Val_from_string("thumb-phalanx-proximal")}; }
XRHandJoint XRHandJoint_thumb_phalanx_distal() { return (XRHandJoint){em_Val_from_string("thumb-phalanx-distal")}; }
XRHandJoint XRHandJoint_thumb_tip() { return (XRHandJoint){em_Val_from_string("thumb-tip")}; }
XRHandJoint XRHandJoint_index_finger_metacarpal() { return (XRHandJoint){em_Val_from_string("index-finger-metacarpal")}; }
XRHandJoint XRHandJoint_index_finger_phalanx_proximal() { return (XRHandJoint){em_Val_from_string("index-finger-phalanx-proximal")}; }
XRHandJoint XRHandJoint_index_finger_phalanx_intermediate() { return (XRHandJoint){em_Val_from_string("index-finger-phalanx-intermediate")}; }
XRHandJoint XRHandJoint_index_finger_phalanx_distal() { return (XRHandJoint){em_Val_from_string("index-finger-phalanx-distal")}; }
XRHandJoint XRHandJoint_index_finger_tip() { return (XRHandJoint){em_Val_from_string("index-finger-tip")}; }
XRHandJoint XRHandJoint_middle_finger_metacarpal() { return (XRHandJoint){em_Val_from_string("middle-finger-metacarpal")}; }
XRHandJoint XRHandJoint_middle_finger_phalanx_proximal() { return (XRHandJoint){em_Val_from_string("middle-finger-phalanx-proximal")}; }
XRHandJoint XRHandJoint_middle_finger_phalanx_intermediate() { return (XRHandJoint){em_Val_from_string("middle-finger-phalanx-intermediate")}; }
XRHandJoint XRHandJoint_middle_finger_phalanx_distal() { return (XRHandJoint){em_Val_from_string("middle-finger-phalanx-distal")}; }
XRHandJoint XRHandJoint_middle_finger_tip() { return (XRHandJoint){em_Val_from_string("middle-finger-tip")}; }
XRHandJoint XRHandJoint_ring_finger_metacarpal() { return (XRHandJoint){em_Val_from_string("ring-finger-metacarpal")}; }
XRHandJoint XRHandJoint_ring_finger_phalanx_proximal() { return (XRHandJoint){em_Val_from_string("ring-finger-phalanx-proximal")}; }
XRHandJoint XRHandJoint_ring_finger_phalanx_intermediate() { return (XRHandJoint){em_Val_from_string("ring-finger-phalanx-intermediate")}; }
XRHandJoint XRHandJoint_ring_finger_phalanx_distal() { return (XRHandJoint){em_Val_from_string("ring-finger-phalanx-distal")}; }
XRHandJoint XRHandJoint_ring_finger_tip() { return (XRHandJoint){em_Val_from_string("ring-finger-tip")}; }
XRHandJoint XRHandJoint_pinky_finger_metacarpal() { return (XRHandJoint){em_Val_from_string("pinky-finger-metacarpal")}; }
XRHandJoint XRHandJoint_pinky_finger_phalanx_proximal() { return (XRHandJoint){em_Val_from_string("pinky-finger-phalanx-proximal")}; }
XRHandJoint XRHandJoint_pinky_finger_phalanx_intermediate() { return (XRHandJoint){em_Val_from_string("pinky-finger-phalanx-intermediate")}; }
XRHandJoint XRHandJoint_pinky_finger_phalanx_distal() { return (XRHandJoint){em_Val_from_string("pinky-finger-phalanx-distal")}; }
XRHandJoint XRHandJoint_pinky_finger_tip() { return (XRHandJoint){em_Val_from_string("pinky-finger-tip")}; }
DEFINE_EMLITE_TYPE(XRHitTestTrackableType, em_Val);
XRHitTestTrackableType XRHitTestTrackableType_point() { return (XRHitTestTrackableType){em_Val_from_string("point")}; }
XRHitTestTrackableType XRHitTestTrackableType_plane() { return (XRHitTestTrackableType){em_Val_from_string("plane")}; }
XRHitTestTrackableType XRHitTestTrackableType_mesh() { return (XRHitTestTrackableType){em_Val_from_string("mesh")}; }
DEFINE_EMLITE_TYPE(XRReflectionFormat, em_Val);
XRReflectionFormat XRReflectionFormat_srgba8() { return (XRReflectionFormat){em_Val_from_string("srgba8")}; }
XRReflectionFormat XRReflectionFormat_rgba16f() { return (XRReflectionFormat){em_Val_from_string("rgba16f")}; }
DEFINE_EMLITE_TYPE(XRPlaneOrientation, em_Val);
XRPlaneOrientation XRPlaneOrientation_horizontal() { return (XRPlaneOrientation){em_Val_from_string("horizontal")}; }
XRPlaneOrientation XRPlaneOrientation_vertical() { return (XRPlaneOrientation){em_Val_from_string("vertical")}; }
DEFINE_EMLITE_TYPE(XRSessionMode, em_Val);
XRSessionMode XRSessionMode_inline_() { return (XRSessionMode){em_Val_from_string("inline")}; }
XRSessionMode XRSessionMode_immersive_vr() { return (XRSessionMode){em_Val_from_string("immersive-vr")}; }
XRSessionMode XRSessionMode_immersive_ar() { return (XRSessionMode){em_Val_from_string("immersive-ar")}; }
DEFINE_EMLITE_TYPE(XRVisibilityState, em_Val);
XRVisibilityState XRVisibilityState_visible() { return (XRVisibilityState){em_Val_from_string("visible")}; }
XRVisibilityState XRVisibilityState_visible_blurred() { return (XRVisibilityState){em_Val_from_string("visible-blurred")}; }
XRVisibilityState XRVisibilityState_hidden() { return (XRVisibilityState){em_Val_from_string("hidden")}; }
DEFINE_EMLITE_TYPE(XRReferenceSpaceType, em_Val);
XRReferenceSpaceType XRReferenceSpaceType_viewer() { return (XRReferenceSpaceType){em_Val_from_string("viewer")}; }
XRReferenceSpaceType XRReferenceSpaceType_local() { return (XRReferenceSpaceType){em_Val_from_string("local")}; }
XRReferenceSpaceType XRReferenceSpaceType_local_floor() { return (XRReferenceSpaceType){em_Val_from_string("local-floor")}; }
XRReferenceSpaceType XRReferenceSpaceType_bounded_floor() { return (XRReferenceSpaceType){em_Val_from_string("bounded-floor")}; }
XRReferenceSpaceType XRReferenceSpaceType_unbounded() { return (XRReferenceSpaceType){em_Val_from_string("unbounded")}; }
DEFINE_EMLITE_TYPE(XREye, em_Val);
XREye XREye_none() { return (XREye){em_Val_from_string("none")}; }
XREye XREye_left() { return (XREye){em_Val_from_string("left")}; }
XREye XREye_right() { return (XREye){em_Val_from_string("right")}; }
DEFINE_EMLITE_TYPE(XRHandedness, em_Val);
XRHandedness XRHandedness_none() { return (XRHandedness){em_Val_from_string("none")}; }
XRHandedness XRHandedness_left() { return (XRHandedness){em_Val_from_string("left")}; }
XRHandedness XRHandedness_right() { return (XRHandedness){em_Val_from_string("right")}; }
DEFINE_EMLITE_TYPE(XRTargetRayMode, em_Val);
XRTargetRayMode XRTargetRayMode_gaze() { return (XRTargetRayMode){em_Val_from_string("gaze")}; }
XRTargetRayMode XRTargetRayMode_tracked_pointer() { return (XRTargetRayMode){em_Val_from_string("tracked-pointer")}; }
XRTargetRayMode XRTargetRayMode_screen() { return (XRTargetRayMode){em_Val_from_string("screen")}; }
XRTargetRayMode XRTargetRayMode_transient_pointer() { return (XRTargetRayMode){em_Val_from_string("transient-pointer")}; }
DEFINE_EMLITE_TYPE(XRLayerLayout, em_Val);
XRLayerLayout XRLayerLayout_default_() { return (XRLayerLayout){em_Val_from_string("default")}; }
XRLayerLayout XRLayerLayout_mono() { return (XRLayerLayout){em_Val_from_string("mono")}; }
XRLayerLayout XRLayerLayout_stereo() { return (XRLayerLayout){em_Val_from_string("stereo")}; }
XRLayerLayout XRLayerLayout_stereo_left_right() { return (XRLayerLayout){em_Val_from_string("stereo-left-right")}; }
XRLayerLayout XRLayerLayout_stereo_top_bottom() { return (XRLayerLayout){em_Val_from_string("stereo-top-bottom")}; }
DEFINE_EMLITE_TYPE(XRLayerQuality, em_Val);
XRLayerQuality XRLayerQuality_default_() { return (XRLayerQuality){em_Val_from_string("default")}; }
XRLayerQuality XRLayerQuality_text_optimized() { return (XRLayerQuality){em_Val_from_string("text-optimized")}; }
XRLayerQuality XRLayerQuality_graphics_optimized() { return (XRLayerQuality){em_Val_from_string("graphics-optimized")}; }
DEFINE_EMLITE_TYPE(XRTextureType, em_Val);
XRTextureType XRTextureType_texture() { return (XRTextureType){em_Val_from_string("texture")}; }
XRTextureType XRTextureType_texture_array() { return (XRTextureType){em_Val_from_string("texture-array")}; }
DEFINE_EMLITE_TYPE(SummarizerType, em_Val);
SummarizerType SummarizerType_tldr() { return (SummarizerType){em_Val_from_string("tldr")}; }
SummarizerType SummarizerType_teaser() { return (SummarizerType){em_Val_from_string("teaser")}; }
SummarizerType SummarizerType_key_points() { return (SummarizerType){em_Val_from_string("key-points")}; }
SummarizerType SummarizerType_headline() { return (SummarizerType){em_Val_from_string("headline")}; }
DEFINE_EMLITE_TYPE(SummarizerFormat, em_Val);
SummarizerFormat SummarizerFormat_plain_text() { return (SummarizerFormat){em_Val_from_string("plain-text")}; }
SummarizerFormat SummarizerFormat_markdown() { return (SummarizerFormat){em_Val_from_string("markdown")}; }
DEFINE_EMLITE_TYPE(SummarizerLength, em_Val);
SummarizerLength SummarizerLength_short_() { return (SummarizerLength){em_Val_from_string("short")}; }
SummarizerLength SummarizerLength_medium() { return (SummarizerLength){em_Val_from_string("medium")}; }
SummarizerLength SummarizerLength_long_() { return (SummarizerLength){em_Val_from_string("long")}; }
DEFINE_EMLITE_TYPE(WriterTone, em_Val);
WriterTone WriterTone_formal() { return (WriterTone){em_Val_from_string("formal")}; }
WriterTone WriterTone_neutral() { return (WriterTone){em_Val_from_string("neutral")}; }
WriterTone WriterTone_casual() { return (WriterTone){em_Val_from_string("casual")}; }
DEFINE_EMLITE_TYPE(WriterFormat, em_Val);
WriterFormat WriterFormat_plain_text() { return (WriterFormat){em_Val_from_string("plain-text")}; }
WriterFormat WriterFormat_markdown() { return (WriterFormat){em_Val_from_string("markdown")}; }
DEFINE_EMLITE_TYPE(WriterLength, em_Val);
WriterLength WriterLength_short_() { return (WriterLength){em_Val_from_string("short")}; }
WriterLength WriterLength_medium() { return (WriterLength){em_Val_from_string("medium")}; }
WriterLength WriterLength_long_() { return (WriterLength){em_Val_from_string("long")}; }
DEFINE_EMLITE_TYPE(RewriterTone, em_Val);
RewriterTone RewriterTone_as_is() { return (RewriterTone){em_Val_from_string("as-is")}; }
RewriterTone RewriterTone_more_formal() { return (RewriterTone){em_Val_from_string("more-formal")}; }
RewriterTone RewriterTone_more_casual() { return (RewriterTone){em_Val_from_string("more-casual")}; }
DEFINE_EMLITE_TYPE(RewriterFormat, em_Val);
RewriterFormat RewriterFormat_as_is() { return (RewriterFormat){em_Val_from_string("as-is")}; }
RewriterFormat RewriterFormat_plain_text() { return (RewriterFormat){em_Val_from_string("plain-text")}; }
RewriterFormat RewriterFormat_markdown() { return (RewriterFormat){em_Val_from_string("markdown")}; }
DEFINE_EMLITE_TYPE(RewriterLength, em_Val);
RewriterLength RewriterLength_as_is() { return (RewriterLength){em_Val_from_string("as-is")}; }
RewriterLength RewriterLength_shorter() { return (RewriterLength){em_Val_from_string("shorter")}; }
RewriterLength RewriterLength_longer() { return (RewriterLength){em_Val_from_string("longer")}; }
DEFINE_EMLITE_TYPE(Availability, em_Val);
Availability Availability_unavailable() { return (Availability){em_Val_from_string("unavailable")}; }
Availability Availability_downloadable() { return (Availability){em_Val_from_string("downloadable")}; }
Availability Availability_downloading() { return (Availability){em_Val_from_string("downloading")}; }
Availability Availability_available() { return (Availability){em_Val_from_string("available")}; }
DEFINE_EMLITE_TYPE(XMLHttpRequestResponseType, em_Val);
XMLHttpRequestResponseType XMLHttpRequestResponseType_none() { return (XMLHttpRequestResponseType){em_Val_from_string("")}; }
XMLHttpRequestResponseType XMLHttpRequestResponseType_arraybuffer() { return (XMLHttpRequestResponseType){em_Val_from_string("arraybuffer")}; }
XMLHttpRequestResponseType XMLHttpRequestResponseType_blob() { return (XMLHttpRequestResponseType){em_Val_from_string("blob")}; }
XMLHttpRequestResponseType XMLHttpRequestResponseType_document() { return (XMLHttpRequestResponseType){em_Val_from_string("document")}; }
XMLHttpRequestResponseType XMLHttpRequestResponseType_json() { return (XMLHttpRequestResponseType){em_Val_from_string("json")}; }
XMLHttpRequestResponseType XMLHttpRequestResponseType_text() { return (XMLHttpRequestResponseType){em_Val_from_string("text")}; }
