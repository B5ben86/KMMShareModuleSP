#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KmmprotocolmoduleHexToolKitCompanion, KmmprotocolmoduleMeasureTimeKitCompanion, KmmprotocolmoduleUtilityToolKitCompanion, KmmprotocolmoduleKMMLoggerCompanion, KmmprotocolmoduleCommandResponseCallbackCache, KmmprotocolmoduleCmd, KmmprotocolmoduleParserResult, KmmprotocolmoduleBase64, KmmprotocolmoduleBase64Decoder, KmmprotocolmoduleBase64Encoder, KmmprotocolmoduleBase64DecoderCompanion, KmmprotocolmoduleKotlinByteArray, KmmprotocolmoduleBase64EncoderCompanion, KmmprotocolmoduleKotlinCharArray, KmmprotocolmoduleSha256Properties, KmmprotocolmoduleSha256PureCompanion, KmmprotocolmoduleKotlinArray<T>, KmmprotocolmoduleSha512Properties, KmmprotocolmoduleSha512PureCompanion, KmmprotocolmoduleL1DataCryptorCompanion, KmmprotocolmoduleKotlinx_serialization_jsonJsonElement, KmmprotocolmoduleL1DataCryptorL1CmdCompanion, KmmprotocolmoduleL1DataCryptorL1Cmd, KmmprotocolmoduleL2DataCryptorCompanion, KmmprotocolmoduleL2DataCryptorL2CmdCompanion, KmmprotocolmoduleL2DataCryptorL2Cmd, KmmprotocolmoduleUserPwdGeneratorCompanion, KmmprotocolmoduleKotlinEnumCompanion, KmmprotocolmoduleKotlinEnum<E>, KmmprotocolmoduleCmdTypeCompanion, KmmprotocolmoduleCmdType, KmmprotocolmoduleProtocolParserCompanion, KmmprotocolmoduleProtocolContent, KmmprotocolmoduleProtocolContentCompanion, KmmprotocolmoduleProtocolContentBaseContent, KmmprotocolmoduleProtocolContentInputDevContent, KmmprotocolmoduleProtocolContentOutputDevContent, KmmprotocolmoduleProtocolContentTimerContent, KmmprotocolmoduleProtocolContentBaseContentCompanion, KmmprotocolmoduleFactoryID, KmmprotocolmoduleFirmwareVersion, KmmprotocolmoduleProductionID, KmmprotocolmoduleProtocolVersion, KmmprotocolmoduleProtocolContentInputDevContentCompanion, KmmprotocolmoduleTriggerPara, KmmprotocolmoduleUserActionPara, KmmprotocolmoduleProtocolContentOutputDevContentCompanion, KmmprotocolmoduleDeviceTypeSet, KmmprotocolmoduleDevicePara, KmmprotocolmoduleProtocolContentTimerContentCompanion, KmmprotocolmoduleTimerParaV1, KmmprotocolmoduleTimerParaV2, KmmprotocolmoduleDeviceParaCompanion, KmmprotocolmoduleOnOffStatus, KmmprotocolmoduleFirmwareVersionCompanion, KmmprotocolmoduleParaStructureCompanion, KmmprotocolmoduleParaStructureRgbwType, KmmprotocolmoduleParaStructureIrValueType, KmmprotocolmoduleParaStructureRgbwAction, KmmprotocolmoduleParaStructureCurtainAction, KmmprotocolmoduleParaStructureCurtainWithLocAction, KmmprotocolmoduleParaStructureIrCmd, KmmprotocolmoduleParaStructureParaAction, KmmprotocolmoduleParaStructureRgbwActionCompanion, KmmprotocolmoduleTimerParaV1Companion, KmmprotocolmoduleTimerParaV1TimerBasePara, KmmprotocolmoduleTimerParaV1TimerBaseParaCompanion, KmmprotocolmoduleWeekMask, KmmprotocolmoduleTimerParaV2Companion, KmmprotocolmoduleTriggerParaCompanion, KmmprotocolmoduleUserActionParaCompanion, KmmprotocolmoduleParaStructure, KmmprotocolmoduleWeekMaskCompanion, KmmprotocolmoduleWeekMaskIndex, KmmprotocolmoduleWeekMaskIndexCompanion, KmmprotocolmoduleCmdCompanion, KmmprotocolmoduleFactoryIDCompanion, KmmprotocolmoduleOnOffStatusCompanion, KmmprotocolmoduleProductionIDCompanion, KmmprotocolmoduleProtocolComm, KmmprotocolmoduleProtocolKey, KmmprotocolmoduleProtocolVersionCompanion, KmmprotocolmoduleDeviceTypeClassifyCompanion, KmmprotocolmoduleDeviceTypeSetCompanion, KmmprotocolmoduleDeviceTypeUtilCompanion, KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanion, KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanionAddRF433DeviceParaCompanion, KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanionAddRF433DevicePara, KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanionDeviceScanParaCompanion, KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanionDeviceScanPara, KmmprotocolmoduleConfigCmdCreatorCompanion, KmmprotocolmoduleControlCmdCreatorCompanion, KmmprotocolmoduleControlCmdCreatorCompanionActivateTriggerParaCompanion, KmmprotocolmoduleControlCmdCreatorCompanionActivateTriggerPara, KmmprotocolmoduleGatewayCmdCreatorCompanion, KmmprotocolmoduleGetInfoCmdCreatorCompanion, KmmprotocolmoduleLinkageCmdCreatorCompanion, KmmprotocolmoduleLinkageCmdCreatorCompanionAddActionCmdReturnType, KmmprotocolmoduleLinkageCmdCreatorCompanionAddActionParaCompanion, KmmprotocolmoduleLinkageCmdCreatorCompanionAddActionPara, KmmprotocolmoduleLinkageCmdCreatorCompanionSetEmergencyTriggerParaCompanion, KmmprotocolmoduleLinkageCmdCreatorCompanionSetEmergencyTriggerPara, KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerActionParaCompanion, KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerActionPara, KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerDefaultActionParaCompanion, KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerDefaultActionPara, KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerDelayParaCompanion, KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerDelayPara, KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerStatusParaCompanion, KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerStatusPara, KmmprotocolmoduleTimerCmdCreatorCompanion, KmmprotocolmoduleTimerCmdCreatorCompanionAddOrModifyTimerV1ParaCompanion, KmmprotocolmoduleTimerCmdCreatorCompanionAddOrModifyTimerV1Para, KmmprotocolmoduleTimerCmdCreatorCompanionAddOrModifyTimerV2ParaCompanion, KmmprotocolmoduleTimerCmdCreatorCompanionAddOrModifyTimerV2Para, KmmprotocolmoduleTimerCmdCreatorCompanionDelTimerV1ParaCompanion, KmmprotocolmoduleTimerCmdCreatorCompanionDelTimerV1Para, KmmprotocolmoduleTimerCmdCreatorCompanionDelTimerV2ParaCompanion, KmmprotocolmoduleTimerCmdCreatorCompanionDelTimerV2Para, KmmprotocolmoduleUtilCompanion, KmmprotocolmoduleCommandAddAndDelDeviceCmdCompanion, KmmprotocolmoduleCommandConfigureCmdCompanion, KmmprotocolmoduleControllableApplianceInfo, KmmprotocolmoduleCommandControlCmdCompanion, KmmprotocolmoduleDetectableApplianceInfo, KmmprotocolmoduleCommandControlCmdControlAction, KmmprotocolmoduleCommandGatewayCmdCompanion, KmmprotocolmoduleCommandGetInfoCmdCompanion, KmmprotocolmoduleCommandLinkageCmdCompanion, KmmprotocolmoduleCommandLinkageCmdAddUserActionListCmdReturnType, KmmprotocolmoduleCommandLinkageCmdUserActionInfoNew, KmmprotocolmoduleDetectableApplianceStatus, KmmprotocolmoduleCommandTimerCmdCompanion, KmmprotocolmoduleParser, KmmprotocolmoduleBaseInfoCompanion, KmmprotocolmoduleErrorCode, KmmprotocolmoduleControllableApplianceInfoCompanion, KmmprotocolmoduleControllableApplianceInfoAirQualityInfo, KmmprotocolmoduleControllableApplianceInfoAirQualityPlusInfo, KmmprotocolmoduleControllableApplianceInfoConfInfo, KmmprotocolmoduleControllableApplianceInfoIrInfo, KmmprotocolmoduleControllableApplianceInfoAirQualityInfoCompanion, KmmprotocolmoduleControllableApplianceInfoAirQualityPlusInfoCompanion, KmmprotocolmoduleControllableApplianceInfoConfInfoCompanion, KmmprotocolmoduleControllableApplianceInfoConfInfoTurnOnMode, KmmprotocolmoduleControllableApplianceInfoConfInfoTurnOnModeCompanion, KmmprotocolmoduleControllableApplianceInfoIrInfoCompanion, KmmprotocolmoduleControllableDeviceInfoCompanion, KmmprotocolmoduleDefaultActionCompanion, KmmprotocolmoduleDefaultAction, KmmprotocolmoduleDetectableApplianceInfoCompanion, KmmprotocolmoduleDetectableApplianceStatusCompanion, KmmprotocolmoduleDetectableDeviceInfoCompanion, KmmprotocolmoduleUserAction, KmmprotocolmoduleErrorCodeCompanion, KmmprotocolmoduleParserResultCompanion, KmmprotocolmoduleBaseInfo, KmmprotocolmoduleControllableDeviceInfo, KmmprotocolmoduleDetectableDeviceInfo, KmmprotocolmoduleTimerInfo, KmmprotocolmoduleTimerInfoCompanion, KmmprotocolmoduleTimerV1Para, KmmprotocolmoduleTimerV2Para, KmmprotocolmoduleTimerV1ApplianceActionCompanion, KmmprotocolmoduleTimerV1ApplianceAction, KmmprotocolmoduleTimerV1ParaCompanion, KmmprotocolmoduleTimerV2ParaCompanion, KmmprotocolmoduleUserActionCompanion, KmmprotocolmoduleUserActionAppliancePara, KmmprotocolmoduleUserActionApplianceParaCompanion, KmmprotocolmoduleKotlinByteIterator, KmmprotocolmoduleKotlinCharIterator, KmmprotocolmoduleKotlinx_serialization_jsonJsonElementCompanion, KmmprotocolmoduleKotlinx_serialization_coreSerializersModule, KmmprotocolmoduleKotlinx_serialization_coreSerialKind, KmmprotocolmoduleKotlinNothing;

@protocol KmmprotocolmoduleHashFunction, KmmprotocolmoduleMultipartHash, KmmprotocolmoduleSha256, KmmprotocolmoduleHash, KmmprotocolmoduleStatelessSha256, KmmprotocolmoduleSha512Multipart, KmmprotocolmoduleSha512, KmmprotocolmoduleKotlinx_serialization_coreKSerializer, KmmprotocolmoduleKotlinComparable, KmmprotocolmoduleKotlinIterator, KmmprotocolmoduleKotlinx_serialization_coreEncoder, KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor, KmmprotocolmoduleKotlinx_serialization_coreSerializationStrategy, KmmprotocolmoduleKotlinx_serialization_coreDecoder, KmmprotocolmoduleKotlinx_serialization_coreDeserializationStrategy, KmmprotocolmoduleKotlinx_serialization_coreCompositeEncoder, KmmprotocolmoduleKotlinAnnotation, KmmprotocolmoduleKotlinx_serialization_coreCompositeDecoder, KmmprotocolmoduleKotlinx_serialization_coreSerializersModuleCollector, KmmprotocolmoduleKotlinKClass, KmmprotocolmoduleKotlinKDeclarationContainer, KmmprotocolmoduleKotlinKAnnotatedElement, KmmprotocolmoduleKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KmmprotocolmoduleBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KmmprotocolmoduleBase (KmmprotocolmoduleBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface KmmprotocolmoduleMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KmmprotocolmoduleMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKmmprotocolmoduleKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface KmmprotocolmoduleNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface KmmprotocolmoduleByte : KmmprotocolmoduleNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface KmmprotocolmoduleUByte : KmmprotocolmoduleNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface KmmprotocolmoduleShort : KmmprotocolmoduleNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface KmmprotocolmoduleUShort : KmmprotocolmoduleNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface KmmprotocolmoduleInt : KmmprotocolmoduleNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface KmmprotocolmoduleUInt : KmmprotocolmoduleNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface KmmprotocolmoduleLong : KmmprotocolmoduleNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface KmmprotocolmoduleULong : KmmprotocolmoduleNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface KmmprotocolmoduleFloat : KmmprotocolmoduleNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface KmmprotocolmoduleDouble : KmmprotocolmoduleNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface KmmprotocolmoduleBoolean : KmmprotocolmoduleNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataTypeExtension")))
@interface KmmprotocolmoduleDataTypeExtension : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexToolKit")))
@interface KmmprotocolmoduleHexToolKit : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleHexToolKitCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexToolKit.Companion")))
@interface KmmprotocolmoduleHexToolKitCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleHexToolKitCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)boolListToBitStringBoolList:(NSArray<KmmprotocolmoduleBoolean *> *)boolList __attribute__((swift_name("boolListToBitString(boolList:)")));
- (NSString *)boolListToHexStringBoolList:(NSArray<KmmprotocolmoduleBoolean *> *)boolList __attribute__((swift_name("boolListToHexString(boolList:)")));
- (uint64_t)boolListToLongBoolList:(NSArray<KmmprotocolmoduleBoolean *> *)boolList __attribute__((swift_name("boolListToLong(boolList:)")));
- (NSArray<KmmprotocolmoduleBoolean *> * _Nullable)hexStringToBoolListHexString:(NSString *)hexString expectLength:(int32_t)expectLength __attribute__((swift_name("hexStringToBoolList(hexString:expectLength:)")));
- (KmmprotocolmoduleULong * _Nullable)hexStringToULongHexString:(NSString *)hexString __attribute__((swift_name("hexStringToULong(hexString:)")));
- (NSArray<KmmprotocolmoduleBoolean *> *)indexListToBoolListIndexList:(NSArray<KmmprotocolmoduleInt *> *)indexList __attribute__((swift_name("indexListToBoolList(indexList:)")));
- (NSString *)indexListToHexStringIndexList:(NSArray<KmmprotocolmoduleInt *> *)indexList __attribute__((swift_name("indexListToHexString(indexList:)")));
- (NSArray<KmmprotocolmoduleBoolean *> *)indexToBoolListIndex:(int32_t)index __attribute__((swift_name("indexToBoolList(index:)")));
- (NSString *)indexToHexStringIndex:(int32_t)index __attribute__((swift_name("indexToHexString(index:)")));
- (NSArray<KmmprotocolmoduleBoolean *> *)longToBoolListNumber:(uint64_t)number expectLength:(int32_t)expectLength __attribute__((swift_name("longToBoolList(number:expectLength:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeasureTimeKit")))
@interface KmmprotocolmoduleMeasureTimeKit : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleMeasureTimeKitCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeasureTimeKit.Companion")))
@interface KmmprotocolmoduleMeasureTimeKitCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleMeasureTimeKitCompanion *shared __attribute__((swift_name("shared")));
- (void)measureRunnable:(void (^)(void))runnable tag:(NSString *)tag __attribute__((swift_name("measure(runnable:tag:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilityToolKit")))
@interface KmmprotocolmoduleUtilityToolKit : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleUtilityToolKitCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilityToolKit.Companion")))
@interface KmmprotocolmoduleUtilityToolKitCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleUtilityToolKitCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMLogger")))
@interface KmmprotocolmoduleKMMLogger : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleKMMLoggerCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMLogger.Companion")))
@interface KmmprotocolmoduleKMMLoggerCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleKMMLoggerCompanion *shared __attribute__((swift_name("shared")));
- (void)dMessage:(id _Nullable)message __attribute__((swift_name("d(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseCallbackCache")))
@interface KmmprotocolmoduleCommandResponseCallbackCache : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)commandResponseCallbackCache __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleCommandResponseCallbackCache *shared __attribute__((swift_name("shared")));
- (void)insertCallbackSn:(NSString *)sn cmd:(KmmprotocolmoduleCmd *)cmd seq:(int64_t)seq callback:(void (^)(NSString *, KmmprotocolmoduleCmd *, KmmprotocolmoduleLong *, KmmprotocolmoduleParserResult *))callback __attribute__((swift_name("insertCallback(sn:cmd:seq:callback:)")));
- (void)invokeCallbackParseResult:(KmmprotocolmoduleParserResult *)parseResult __attribute__((swift_name("invokeCallback(parseResult:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64")))
@interface KmmprotocolmoduleBase64 : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)base64 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleBase64 *shared __attribute__((swift_name("shared")));
- (NSString *)decodeString:(NSString *)string __attribute__((swift_name("decode(string:)")));
- (NSString *)encodeString:(NSString *)string __attribute__((swift_name("encode(string:)")));
@property (readonly) KmmprotocolmoduleBase64Decoder *decoder __attribute__((swift_name("decoder")));
@property (readonly) KmmprotocolmoduleBase64Encoder *encoder __attribute__((swift_name("encoder")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64.Decoder")))
@interface KmmprotocolmoduleBase64Decoder : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleBase64DecoderCompanion *companion __attribute__((swift_name("companion")));
- (KmmprotocolmoduleKotlinByteArray *)decodeSrc:(KmmprotocolmoduleKotlinByteArray *)src __attribute__((swift_name("decode(src:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64.DecoderCompanion")))
@interface KmmprotocolmoduleBase64DecoderCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleBase64DecoderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64.Encoder")))
@interface KmmprotocolmoduleBase64Encoder : KmmprotocolmoduleBase
@property (class, readonly, getter=companion) KmmprotocolmoduleBase64EncoderCompanion *companion __attribute__((swift_name("companion")));
- (KmmprotocolmoduleKotlinByteArray *)encodeSrc:(KmmprotocolmoduleKotlinByteArray *)src __attribute__((swift_name("encode(src:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64.EncoderCompanion")))
@interface KmmprotocolmoduleBase64EncoderCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleBase64EncoderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KmmprotocolmoduleKotlinCharArray *toBase64 __attribute__((swift_name("toBase64")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RC4Encoder")))
@interface KmmprotocolmoduleRC4Encoder : KmmprotocolmoduleBase
- (instancetype)initWithKey:(KmmprotocolmoduleKotlinByteArray *)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
- (KmmprotocolmoduleKotlinByteArray *)decodeData:(KmmprotocolmoduleKotlinByteArray *)data offset:(int32_t)offset len:(int32_t)len __attribute__((swift_name("decode(data:offset:len:)")));
- (KmmprotocolmoduleKotlinByteArray *)encodeData:(KmmprotocolmoduleKotlinByteArray *)data offset:(int32_t)offset len:(int32_t)len __attribute__((swift_name("encode(data:offset:len:)")));
@end;

__attribute__((swift_name("HashFunction")))
@protocol KmmprotocolmoduleHashFunction
@required
@property (readonly) int32_t MAX_HASH_BYTES __attribute__((swift_name("MAX_HASH_BYTES")));
@end;

__attribute__((swift_name("Hash")))
@protocol KmmprotocolmoduleHash <KmmprotocolmoduleHashFunction>
@required
@end;

__attribute__((swift_name("MultipartHash")))
@protocol KmmprotocolmoduleMultipartHash <KmmprotocolmoduleHashFunction>
@required
- (id)digest __attribute__((swift_name("digest()")));
- (void)updateData:(id)data __attribute__((swift_name("update(data:)")));
@end;

__attribute__((swift_name("Sha256")))
@protocol KmmprotocolmoduleSha256 <KmmprotocolmoduleMultipartHash>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sha256Properties")))
@interface KmmprotocolmoduleSha256Properties : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sha256Properties __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleSha256Properties *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_HASH_BYTES __attribute__((swift_name("MAX_HASH_BYTES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sha256Pure")))
@interface KmmprotocolmoduleSha256Pure : KmmprotocolmoduleBase <KmmprotocolmoduleSha256>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleSha256PureCompanion *companion __attribute__((swift_name("companion")));
- (id)digest __attribute__((swift_name("digest()")));
- (void)updateData_:(NSString *)data __attribute__((swift_name("update(data_:)")));
- (void)updateData:(id)data __attribute__((swift_name("update(data:)")));
@property (readonly) int32_t MAX_HASH_BYTES __attribute__((swift_name("MAX_HASH_BYTES")));
@property id buffer __attribute__((swift_name("buffer")));
@property int32_t bufferCounter __attribute__((swift_name("bufferCounter")));
@property int64_t counter __attribute__((swift_name("counter")));
@property BOOL digested __attribute__((swift_name("digested")));
@property KmmprotocolmoduleKotlinArray<KmmprotocolmoduleUInt *> *h __attribute__((swift_name("h")));
@end;

__attribute__((swift_name("StatelessSha256")))
@protocol KmmprotocolmoduleStatelessSha256 <KmmprotocolmoduleHash>
@required
- (id)digestInputMessage:(id)inputMessage __attribute__((swift_name("digest(inputMessage:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sha256Pure.Companion")))
@interface KmmprotocolmoduleSha256PureCompanion : KmmprotocolmoduleBase <KmmprotocolmoduleStatelessSha256>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleSha256PureCompanion *shared __attribute__((swift_name("shared")));
- (id)createExpansionArrayOriginalSizeInBytes:(int64_t)originalSizeInBytes __attribute__((swift_name("createExpansionArray(originalSizeInBytes:)")));
- (id)digestInputMessage:(id)inputMessage __attribute__((swift_name("digest(inputMessage:)")));
@property (readonly) int32_t BLOCK_SIZE __attribute__((swift_name("BLOCK_SIZE")));
@property (readonly) int32_t BLOCK_SIZE_IN_BYTES __attribute__((swift_name("BLOCK_SIZE_IN_BYTES")));
@property (readonly) uint32_t BYTE_MASK_FROM_UINT __attribute__((swift_name("BYTE_MASK_FROM_UINT")));
@property (readonly) uint64_t BYTE_MASK_FROM_ULONG __attribute__((swift_name("BYTE_MASK_FROM_ULONG")));
@property (readonly) int32_t MAX_HASH_BYTES __attribute__((swift_name("MAX_HASH_BYTES")));
@property (readonly) uint32_t UINT_MASK __attribute__((swift_name("UINT_MASK")));
@property (readonly) KmmprotocolmoduleKotlinArray<KmmprotocolmoduleUInt *> *iv __attribute__((swift_name("iv")));
@property (readonly) KmmprotocolmoduleKotlinArray<KmmprotocolmoduleUInt *> *k __attribute__((swift_name("k")));
@end;

__attribute__((swift_name("Sha512")))
@protocol KmmprotocolmoduleSha512 <KmmprotocolmoduleHash>
@required
- (id)digestInputMessage:(id)inputMessage __attribute__((swift_name("digest(inputMessage:)")));
@end;

__attribute__((swift_name("Sha512Multipart")))
@protocol KmmprotocolmoduleSha512Multipart <KmmprotocolmoduleMultipartHash>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sha512Properties")))
@interface KmmprotocolmoduleSha512Properties : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sha512Properties __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleSha512Properties *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_HASH_BYTES __attribute__((swift_name("MAX_HASH_BYTES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sha512Pure")))
@interface KmmprotocolmoduleSha512Pure : KmmprotocolmoduleBase <KmmprotocolmoduleSha512Multipart>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleSha512PureCompanion *companion __attribute__((swift_name("companion")));
- (id)digest __attribute__((swift_name("digest()")));
- (void)updateData_:(NSString *)data __attribute__((swift_name("update(data_:)")));
- (void)updateData:(id)data __attribute__((swift_name("update(data:)")));
@property (readonly) int32_t MAX_HASH_BYTES __attribute__((swift_name("MAX_HASH_BYTES")));
@property id buffer __attribute__((swift_name("buffer")));
@property int32_t bufferCounter __attribute__((swift_name("bufferCounter")));
@property int64_t counter __attribute__((swift_name("counter")));
@property BOOL digested __attribute__((swift_name("digested")));
@property KmmprotocolmoduleKotlinArray<KmmprotocolmoduleULong *> *h __attribute__((swift_name("h")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sha512Pure.Companion")))
@interface KmmprotocolmoduleSha512PureCompanion : KmmprotocolmoduleBase <KmmprotocolmoduleSha512>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleSha512PureCompanion *shared __attribute__((swift_name("shared")));
- (id)createExpansionArrayOriginalSizeInBytes:(int64_t)originalSizeInBytes __attribute__((swift_name("createExpansionArray(originalSizeInBytes:)")));
- (id)digestInputMessage:(id)inputMessage __attribute__((swift_name("digest(inputMessage:)")));
@property (readonly) int32_t BLOCK_SIZE __attribute__((swift_name("BLOCK_SIZE")));
@property (readonly) int32_t BLOCK_SIZE_IN_BYTES __attribute__((swift_name("BLOCK_SIZE_IN_BYTES")));
@property (readonly) int32_t CHUNK_SIZE __attribute__((swift_name("CHUNK_SIZE")));
@property (readonly) int32_t MAX_HASH_BYTES __attribute__((swift_name("MAX_HASH_BYTES")));
@property (readonly) uint64_t ULONG_MASK __attribute__((swift_name("ULONG_MASK")));
@property (readonly) KmmprotocolmoduleKotlinArray<KmmprotocolmoduleULong *> *iv __attribute__((swift_name("iv")));
@property (readonly) KmmprotocolmoduleKotlinArray<KmmprotocolmoduleULong *> *k __attribute__((swift_name("k")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L1DataCryptor")))
@interface KmmprotocolmoduleL1DataCryptor : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleL1DataCryptorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L1DataCryptor.Companion")))
@interface KmmprotocolmoduleL1DataCryptorCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleL1DataCryptorCompanion *shared __attribute__((swift_name("shared")));
- (NSString * _Nullable)decodeJsonString:(NSString *)jsonString __attribute__((swift_name("decode(jsonString:)")));
- (NSString * _Nullable)decodeJsonObject:(NSDictionary<NSString *, KmmprotocolmoduleKotlinx_serialization_jsonJsonElement *> *)jsonObject __attribute__((swift_name("decode(jsonObject:)")));
- (NSString * _Nullable)encodeL1DataRaw:(NSString *)l1DataRaw __attribute__((swift_name("encode(l1DataRaw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L1DataCryptor.L1Cmd")))
@interface KmmprotocolmoduleL1DataCryptorL1Cmd : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn seq:(int64_t)seq protocolVersion:(int32_t)protocolVersion cmdType:(int32_t)cmdType l1Data:(NSString *)l1Data __attribute__((swift_name("init(sn:seq:protocolVersion:cmdType:l1Data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleL1DataCryptorL1CmdCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (KmmprotocolmoduleL1DataCryptorL1Cmd *)doCopySn:(NSString *)sn seq:(int64_t)seq protocolVersion:(int32_t)protocolVersion cmdType:(int32_t)cmdType l1Data:(NSString *)l1Data __attribute__((swift_name("doCopy(sn:seq:protocolVersion:cmdType:l1Data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t cmdType __attribute__((swift_name("cmdType")));
@property (readonly) NSString *l1Data __attribute__((swift_name("l1Data")));
@property (readonly) int32_t protocolVersion __attribute__((swift_name("protocolVersion")));
@property (readonly) int64_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L1DataCryptor.L1CmdCompanion")))
@interface KmmprotocolmoduleL1DataCryptorL1CmdCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleL1DataCryptorL1CmdCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L2DataCryptor")))
@interface KmmprotocolmoduleL2DataCryptor : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleL2DataCryptorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L2DataCryptor.Companion")))
@interface KmmprotocolmoduleL2DataCryptorCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleL2DataCryptorCompanion *shared __attribute__((swift_name("shared")));
- (NSString * _Nullable)decodeHttpSource:(NSString *)source __attribute__((swift_name("decodeHttp(source:)")));
- (NSString * _Nullable)decodeTcpJsonString:(NSString *)jsonString __attribute__((swift_name("decodeTcp(jsonString:)")));
- (NSString *)encodeHttpSource:(NSString *)source __attribute__((swift_name("encodeHttp(source:)")));
- (NSString * _Nullable)encodeTcpL2DataRaw:(NSString *)l2DataRaw __attribute__((swift_name("encodeTcp(l2DataRaw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L2DataCryptor.L2Cmd")))
@interface KmmprotocolmoduleL2DataCryptorL2Cmd : KmmprotocolmoduleBase
- (instancetype)initWithSeq:(int64_t)seq protocolVersion:(int32_t)protocolVersion cmdType:(int32_t)cmdType l2Data:(NSString *)l2Data __attribute__((swift_name("init(seq:protocolVersion:cmdType:l2Data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleL2DataCryptorL2CmdCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (KmmprotocolmoduleL2DataCryptorL2Cmd *)doCopySeq:(int64_t)seq protocolVersion:(int32_t)protocolVersion cmdType:(int32_t)cmdType l2Data:(NSString *)l2Data __attribute__((swift_name("doCopy(seq:protocolVersion:cmdType:l2Data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t cmdType __attribute__((swift_name("cmdType")));
@property (readonly) NSString *l2Data __attribute__((swift_name("l2Data")));
@property (readonly) int32_t protocolVersion __attribute__((swift_name("protocolVersion")));
@property (readonly) int64_t seq __attribute__((swift_name("seq")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L2DataCryptor.L2CmdCompanion")))
@interface KmmprotocolmoduleL2DataCryptorL2CmdCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleL2DataCryptorL2CmdCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPwdGenerator")))
@interface KmmprotocolmoduleUserPwdGenerator : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleUserPwdGeneratorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPwdGenerator.Companion")))
@interface KmmprotocolmoduleUserPwdGeneratorCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleUserPwdGeneratorCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)pwdGeneratorUserPwdRaw:(NSString *)userPwdRaw __attribute__((swift_name("pwdGenerator(userPwdRaw:)")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol KmmprotocolmoduleKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface KmmprotocolmoduleKotlinEnum<E> : KmmprotocolmoduleBase <KmmprotocolmoduleKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CmdType")))
@interface KmmprotocolmoduleCmdType : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleCmdType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmprotocolmoduleCmdTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmmprotocolmoduleCmdType *controllertoserver __attribute__((swift_name("controllertoserver")));
@property (class, readonly) KmmprotocolmoduleCmdType *controllertoapp __attribute__((swift_name("controllertoapp")));
@property (class, readonly) KmmprotocolmoduleCmdType *apptocontroller __attribute__((swift_name("apptocontroller")));
@property (class, readonly) KmmprotocolmoduleCmdType *apptoserver __attribute__((swift_name("apptoserver")));
@property (class, readonly) KmmprotocolmoduleCmdType *servertocontroller __attribute__((swift_name("servertocontroller")));
@property (class, readonly) KmmprotocolmoduleCmdType *servertoapp __attribute__((swift_name("servertoapp")));
@property (class, readonly) KmmprotocolmoduleCmdType *login __attribute__((swift_name("login")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleCmdType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CmdType.Companion")))
@interface KmmprotocolmoduleCmdTypeCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleCmdTypeCompanion *shared __attribute__((swift_name("shared")));
- (KmmprotocolmoduleCmdType *)getCmdTypeCmd:(KmmprotocolmoduleCmd *)cmd __attribute__((swift_name("getCmdType(cmd:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolParser")))
@interface KmmprotocolmoduleProtocolParser : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleProtocolParserCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolParser.Companion")))
@interface KmmprotocolmoduleProtocolParserCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleProtocolParserCompanion *shared __attribute__((swift_name("shared")));
- (KmmprotocolmoduleProtocolContent *)parseJsonObject:(NSDictionary<NSString *, KmmprotocolmoduleKotlinx_serialization_jsonJsonElement *> *)jsonObject __attribute__((swift_name("parse(jsonObject:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent")))
@interface KmmprotocolmoduleProtocolContent : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleProtocolContentCompanion *companion __attribute__((swift_name("companion")));
@property KmmprotocolmoduleProtocolContentBaseContent * _Nullable baseContent __attribute__((swift_name("baseContent")));
@property KmmprotocolmoduleProtocolContentInputDevContent * _Nullable inputDevContent __attribute__((swift_name("inputDevContent")));
@property KmmprotocolmoduleProtocolContentOutputDevContent * _Nullable outputDevContent __attribute__((swift_name("outputDevContent")));
@property KmmprotocolmoduleProtocolContentTimerContent * _Nullable timerContent __attribute__((swift_name("timerContent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.BaseContent")))
@interface KmmprotocolmoduleProtocolContentBaseContent : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleProtocolContentBaseContentCompanion *companion __attribute__((swift_name("companion")));
@property KmmprotocolmoduleCmd * _Nullable cmd __attribute__((swift_name("cmd")));
@property KmmprotocolmoduleInt * _Nullable confVer __attribute__((swift_name("confVer")));
@property KmmprotocolmoduleFactoryID * _Nullable factoryID __attribute__((swift_name("factoryID")));
@property KmmprotocolmoduleInt * _Nullable failure __attribute__((swift_name("failure")));
@property NSString * _Nullable fwPath __attribute__((swift_name("fwPath")));
@property KmmprotocolmoduleFirmwareVersion * _Nullable fwVersion __attribute__((swift_name("fwVersion")));
@property KmmprotocolmoduleInt * _Nullable hardwareID __attribute__((swift_name("hardwareID")));
@property KmmprotocolmoduleProductionID * _Nullable productionID __attribute__((swift_name("productionID")));
@property KmmprotocolmoduleProtocolVersion * _Nullable protocolVersion __attribute__((swift_name("protocolVersion")));
@property KmmprotocolmoduleLong * _Nullable seq __attribute__((swift_name("seq")));
@property NSString * _Nullable serviceDomain __attribute__((swift_name("serviceDomain")));
@property NSString * _Nullable sn __attribute__((swift_name("sn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.BaseContentCompanion")))
@interface KmmprotocolmoduleProtocolContentBaseContentCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleProtocolContentBaseContentCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.Companion")))
@interface KmmprotocolmoduleProtocolContentCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleProtocolContentCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.InputDevContent")))
@interface KmmprotocolmoduleProtocolContentInputDevContent : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleProtocolContentInputDevContentCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable actionInstalled __attribute__((swift_name("actionInstalled")));
@property KmmprotocolmoduleInt * _Nullable inputDeviceIndex __attribute__((swift_name("inputDeviceIndex")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable inputDeviceInstalled __attribute__((swift_name("inputDeviceInstalled")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable noDisableTrigger __attribute__((swift_name("noDisableTrigger")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable triggerInstalled __attribute__((swift_name("triggerInstalled")));
@property NSArray<KmmprotocolmoduleTriggerPara *> * _Nullable triggerParaList __attribute__((swift_name("triggerParaList")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable triggerStatus __attribute__((swift_name("triggerStatus")));
@property NSArray<KmmprotocolmoduleUserActionPara *> * _Nullable userActionParaList __attribute__((swift_name("userActionParaList")));
@property KmmprotocolmoduleFirmwareVersion * _Nullable ver __attribute__((swift_name("ver")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.InputDevContentCompanion")))
@interface KmmprotocolmoduleProtocolContentInputDevContentCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleProtocolContentInputDevContentCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.OutputDevContent")))
@interface KmmprotocolmoduleProtocolContentOutputDevContent : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleProtocolContentOutputDevContentCompanion *companion __attribute__((swift_name("companion")));
@property KmmprotocolmoduleMutableDictionary<KmmprotocolmoduleDeviceTypeSet *, KmmprotocolmoduleDevicePara *> * _Nullable devParaMap __attribute__((swift_name("devParaMap")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable outputDeviceInstalled __attribute__((swift_name("outputDeviceInstalled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.OutputDevContentCompanion")))
@interface KmmprotocolmoduleProtocolContentOutputDevContentCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleProtocolContentOutputDevContentCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.TimerContent")))
@interface KmmprotocolmoduleProtocolContentTimerContent : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleProtocolContentTimerContentCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable timerInstalled __attribute__((swift_name("timerInstalled")));
@property NSArray<KmmprotocolmoduleTimerParaV1 *> * _Nullable timerParaV1List __attribute__((swift_name("timerParaV1List")));
@property NSArray<KmmprotocolmoduleTimerParaV2 *> * _Nullable timerParaV2List __attribute__((swift_name("timerParaV2List")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.TimerContentCompanion")))
@interface KmmprotocolmoduleProtocolContentTimerContentCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleProtocolContentTimerContentCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DevicePara")))
@interface KmmprotocolmoduleDevicePara : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleDeviceParaCompanion *companion __attribute__((swift_name("companion")));
- (void)initialFromRawJsonObject:(NSDictionary<NSString *, KmmprotocolmoduleKotlinx_serialization_jsonJsonElement *> *)jsonObject devType:(KmmprotocolmoduleDeviceTypeSet *)devType __attribute__((swift_name("initialFromRaw(jsonObject:devType:)")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable brightAction __attribute__((swift_name("brightAction")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable brightAdjSpeed __attribute__((swift_name("brightAdjSpeed")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable brightMask __attribute__((swift_name("brightMask")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable brightPercent __attribute__((swift_name("brightPercent")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable brightPercentMask __attribute__((swift_name("brightPercentMask")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable confMask __attribute__((swift_name("confMask")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable curtainAction __attribute__((swift_name("curtainAction")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable curtainMask __attribute__((swift_name("curtainMask")));
@property KmmprotocolmoduleDeviceTypeSet * _Nullable devType __attribute__((swift_name("devType")));
@property KmmprotocolmoduleInt * _Nullable functionCode __attribute__((swift_name("functionCode")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable functionCodeMask __attribute__((swift_name("functionCodeMask")));
@property KmmprotocolmoduleInt * _Nullable index __attribute__((swift_name("index")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable ledMask __attribute__((swift_name("ledMask")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable ledStatus __attribute__((swift_name("ledStatus")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable minBrightPercent __attribute__((swift_name("minBrightPercent")));
@property KmmprotocolmoduleInt * _Nullable needAck __attribute__((swift_name("needAck")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable onOffBrightAdjSpeed __attribute__((swift_name("onOffBrightAdjSpeed")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable onOffRlyMask __attribute__((swift_name("onOffRlyMask")));
@property NSArray<KmmprotocolmoduleOnOffStatus *> * _Nullable onOffStatus __attribute__((swift_name("onOffStatus")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable onlineStatus __attribute__((swift_name("onlineStatus")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable panelAction __attribute__((swift_name("panelAction")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable panelAddr __attribute__((swift_name("panelAddr")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable para __attribute__((swift_name("para")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable paraMask __attribute__((swift_name("paraMask")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable power __attribute__((swift_name("power")));
@property NSArray<KmmprotocolmoduleOnOffStatus *> * _Nullable powerOnStatus __attribute__((swift_name("powerOnStatus")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable rfInstall __attribute__((swift_name("rfInstall")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable rlyAction __attribute__((swift_name("rlyAction")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable rlyMask __attribute__((swift_name("rlyMask")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable rlyStatus __attribute__((swift_name("rlyStatus")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable slowRlyAction __attribute__((swift_name("slowRlyAction")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable slowlyOffBrightAdjSpeed __attribute__((swift_name("slowlyOffBrightAdjSpeed")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable slowlyOnBrightAdjSpeed __attribute__((swift_name("slowlyOnBrightAdjSpeed")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable tempAction __attribute__((swift_name("tempAction")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable tempMask __attribute__((swift_name("tempMask")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable turnOnBrightPercent __attribute__((swift_name("turnOnBrightPercent")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable turnOnMode __attribute__((swift_name("turnOnMode")));
@property KmmprotocolmoduleFirmwareVersion * _Nullable ver __attribute__((swift_name("ver")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DevicePara.Companion")))
@interface KmmprotocolmoduleDeviceParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleDeviceParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirmwareVersion")))
@interface KmmprotocolmoduleFirmwareVersion : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleFirmwareVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)getString __attribute__((swift_name("getString()")));
- (void)initialFromStringFwVersionString:(NSString *)fwVersionString __attribute__((swift_name("initialFromString(fwVersionString:)")));
- (BOOL)isNewerThanFwVersionToCompare:(KmmprotocolmoduleFirmwareVersion *)fwVersionToCompare __attribute__((swift_name("isNewerThan(fwVersionToCompare:)")));
@property int32_t build __attribute__((swift_name("build")));
@property int32_t major __attribute__((swift_name("major")));
@property int32_t minor __attribute__((swift_name("minor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirmwareVersion.Companion")))
@interface KmmprotocolmoduleFirmwareVersionCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleFirmwareVersionCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure")))
@interface KmmprotocolmoduleParaStructure : KmmprotocolmoduleBase
- (instancetype)initWithRaw:(uint64_t)raw __attribute__((swift_name("init(raw:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleParaStructureCompanion *companion __attribute__((swift_name("companion")));
- (uint64_t)getColorRgbw:(KmmprotocolmoduleParaStructureRgbwType *)rgbw __attribute__((swift_name("getColor(rgbw:)")));
- (uint64_t)getIRParaIr:(KmmprotocolmoduleParaStructureIrValueType *)ir __attribute__((swift_name("getIRPara(ir:)")));
- (KmmprotocolmoduleParaStructureRgbwAction * _Nullable)getRGBWAction __attribute__((swift_name("getRGBWAction()")));
- (uint64_t)getRawValue __attribute__((swift_name("getRawValue()")));
- (uint64_t)getTemperatureLampBright __attribute__((swift_name("getTemperatureLampBright()")));
- (uint64_t)getTemperatureLampTemp __attribute__((swift_name("getTemperatureLampTemp()")));
- (void)setColorRgbw:(KmmprotocolmoduleParaStructureRgbwType *)rgbw value:(uint64_t)value __attribute__((swift_name("setColor(rgbw:value:)")));
- (void)setIRParaIr:(KmmprotocolmoduleParaStructureIrValueType *)ir value:(uint64_t)value __attribute__((swift_name("setIRPara(ir:value:)")));
- (void)setRGBWActionRgbwAction:(KmmprotocolmoduleParaStructureRgbwAction *)rgbwAction __attribute__((swift_name("setRGBWAction(rgbwAction:)")));
- (void)setTemperatureLampBrightValue:(uint64_t)value __attribute__((swift_name("setTemperatureLampBright(value:)")));
- (void)setTemperatureLampTempValue:(uint64_t)value __attribute__((swift_name("setTemperatureLampTemp(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.Companion")))
@interface KmmprotocolmoduleParaStructureCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleParaStructureCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.CurtainAction")))
@interface KmmprotocolmoduleParaStructureCurtainAction : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleParaStructureCurtainAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmmprotocolmoduleParaStructureCurtainAction *stop __attribute__((swift_name("stop")));
@property (class, readonly) KmmprotocolmoduleParaStructureCurtainAction *close __attribute__((swift_name("close")));
@property (class, readonly) KmmprotocolmoduleParaStructureCurtainAction *open __attribute__((swift_name("open")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleParaStructureCurtainAction *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.CurtainWithLocAction")))
@interface KmmprotocolmoduleParaStructureCurtainWithLocAction : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleParaStructureCurtainWithLocAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmmprotocolmoduleParaStructureCurtainWithLocAction *close __attribute__((swift_name("close")));
@property (class, readonly) KmmprotocolmoduleParaStructureCurtainWithLocAction *open __attribute__((swift_name("open")));
@property (class, readonly) KmmprotocolmoduleParaStructureCurtainWithLocAction *initial __attribute__((swift_name("initial")));
@property (class, readonly) KmmprotocolmoduleParaStructureCurtainWithLocAction *changedirection __attribute__((swift_name("changedirection")));
@property (class, readonly) KmmprotocolmoduleParaStructureCurtainWithLocAction *stop __attribute__((swift_name("stop")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleParaStructureCurtainWithLocAction *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.IrCmd")))
@interface KmmprotocolmoduleParaStructureIrCmd : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleParaStructureIrCmd *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmmprotocolmoduleParaStructureIrCmd *send __attribute__((swift_name("send")));
@property (class, readonly) KmmprotocolmoduleParaStructureIrCmd *learn __attribute__((swift_name("learn")));
@property (class, readonly) KmmprotocolmoduleParaStructureIrCmd *delete_ __attribute__((swift_name("delete_")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleParaStructureIrCmd *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.IrValueType")))
@interface KmmprotocolmoduleParaStructureIrValueType : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleParaStructureIrValueType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmmprotocolmoduleParaStructureIrValueType *cmd __attribute__((swift_name("cmd")));
@property (class, readonly) KmmprotocolmoduleParaStructureIrValueType *index __attribute__((swift_name("index")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleParaStructureIrValueType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.ParaAction")))
@interface KmmprotocolmoduleParaStructureParaAction : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleParaStructureParaAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmmprotocolmoduleParaStructureParaAction *onoff __attribute__((swift_name("onoff")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleParaStructureParaAction *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.RgbwAction")))
@interface KmmprotocolmoduleParaStructureRgbwAction : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleParaStructureRgbwAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmprotocolmoduleParaStructureRgbwActionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmmprotocolmoduleParaStructureRgbwAction *rgbwmoderandomquick __attribute__((swift_name("rgbwmoderandomquick")));
@property (class, readonly) KmmprotocolmoduleParaStructureRgbwAction *rgbwmodeswitchslow __attribute__((swift_name("rgbwmodeswitchslow")));
@property (class, readonly) KmmprotocolmoduleParaStructureRgbwAction *rgbwmodeswitchquick __attribute__((swift_name("rgbwmodeswitchquick")));
@property (class, readonly) KmmprotocolmoduleParaStructureRgbwAction *rgbwmoderandomslow __attribute__((swift_name("rgbwmoderandomslow")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleParaStructureRgbwAction *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.RgbwActionCompanion")))
@interface KmmprotocolmoduleParaStructureRgbwActionCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleParaStructureRgbwActionCompanion *shared __attribute__((swift_name("shared")));
- (KmmprotocolmoduleParaStructureRgbwAction * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.RgbwType")))
@interface KmmprotocolmoduleParaStructureRgbwType : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleParaStructureRgbwType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmmprotocolmoduleParaStructureRgbwType *red __attribute__((swift_name("red")));
@property (class, readonly) KmmprotocolmoduleParaStructureRgbwType *green __attribute__((swift_name("green")));
@property (class, readonly) KmmprotocolmoduleParaStructureRgbwType *blue __attribute__((swift_name("blue")));
@property (class, readonly) KmmprotocolmoduleParaStructureRgbwType *bright __attribute__((swift_name("bright")));
@property (class, readonly) KmmprotocolmoduleParaStructureRgbwType *w __attribute__((swift_name("w")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleParaStructureRgbwType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerParaV1")))
@interface KmmprotocolmoduleTimerParaV1 : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleTimerParaV1Companion *companion __attribute__((swift_name("companion")));
- (void)initialFromRawTimerParaV1String:(NSString *)timerParaV1String __attribute__((swift_name("initialFromRaw(timerParaV1String:)")));
- (NSString *)toTimerParaV1String __attribute__((swift_name("toTimerParaV1String()")));
@property NSArray<KmmprotocolmoduleBoolean *> *actionMask __attribute__((swift_name("actionMask")));
@property NSArray<KmmprotocolmoduleBoolean *> *rlyMask __attribute__((swift_name("rlyMask")));
@property KmmprotocolmoduleTimerParaV1TimerBasePara *timerBasePara __attribute__((swift_name("timerBasePara")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerParaV1.Companion")))
@interface KmmprotocolmoduleTimerParaV1Companion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleTimerParaV1Companion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerParaV1.TimerBasePara")))
@interface KmmprotocolmoduleTimerParaV1TimerBasePara : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleTimerParaV1TimerBaseParaCompanion *companion __attribute__((swift_name("companion")));
- (KmmprotocolmoduleWeekMask *)getWeekMaskForUTC0 __attribute__((swift_name("getWeekMaskForUTC0()")));
- (KmmprotocolmoduleWeekMask *)getWeekMaskForUserTimeZone __attribute__((swift_name("getWeekMaskForUserTimeZone()")));
- (void)setWeekMaskForUTC0WeekMaskFromUserTimeZone:(KmmprotocolmoduleWeekMask *)weekMaskFromUserTimeZone __attribute__((swift_name("setWeekMaskForUTC0(weekMaskFromUserTimeZone:)")));
- (void)setWeekMaskUTC0FromProtocolBoolList:(NSArray<KmmprotocolmoduleBoolean *> *)boolList __attribute__((swift_name("setWeekMaskUTC0FromProtocol(boolList:)")));
@property KmmprotocolmoduleDeviceTypeSet *devType __attribute__((swift_name("devType")));
@property BOOL enable __attribute__((swift_name("enable")));
@property int64_t posix __attribute__((swift_name("posix")));
@property int32_t timerIndex __attribute__((swift_name("timerIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerParaV1.TimerBaseParaCompanion")))
@interface KmmprotocolmoduleTimerParaV1TimerBaseParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleTimerParaV1TimerBaseParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerParaV2")))
@interface KmmprotocolmoduleTimerParaV2 : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleTimerParaV2Companion *companion __attribute__((swift_name("companion")));
- (void)initialFromRawListTimerParaV2List:(NSArray<KmmprotocolmoduleLong *> *)timerParaV2List __attribute__((swift_name("initialFromRawList(timerParaV2List:)")));
- (NSArray<KmmprotocolmoduleLong *> *)toParaList __attribute__((swift_name("toParaList()")));
@property KmmprotocolmoduleTimerParaV1TimerBasePara *timerBasePara __attribute__((swift_name("timerBasePara")));
@property NSArray<KmmprotocolmoduleBoolean *> *triggerMask __attribute__((swift_name("triggerMask")));
@property NSArray<KmmprotocolmoduleBoolean *> *triggerStatus __attribute__((swift_name("triggerStatus")));
@property NSArray<KmmprotocolmoduleBoolean *> *userActionMask __attribute__((swift_name("userActionMask")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerParaV2.Companion")))
@interface KmmprotocolmoduleTimerParaV2Companion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleTimerParaV2Companion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TriggerPara")))
@interface KmmprotocolmoduleTriggerPara : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleTriggerParaCompanion *companion __attribute__((swift_name("companion")));
- (void)initialFromRawJsonObjectJsonObject:(NSDictionary<NSString *, KmmprotocolmoduleKotlinx_serialization_jsonJsonElement *> *)jsonObject __attribute__((swift_name("initialFromRawJsonObject(jsonObject:)")));
- (void)initialFromRawListTriggerParaRawList:(NSArray<KmmprotocolmoduleLong *> *)triggerParaRawList __attribute__((swift_name("initialFromRawList(triggerParaRawList:)")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable defaultActionMask __attribute__((swift_name("defaultActionMask")));
@property KmmprotocolmoduleInt * _Nullable delay __attribute__((swift_name("delay")));
@property KmmprotocolmoduleInt * _Nullable inputDeviceIndex __attribute__((swift_name("inputDeviceIndex")));
@property KmmprotocolmoduleDeviceTypeSet * _Nullable inputDeviceType __attribute__((swift_name("inputDeviceType")));
@property KmmprotocolmoduleInt * _Nullable subIndex __attribute__((swift_name("subIndex")));
@property KmmprotocolmoduleInt * _Nullable triggerIndex __attribute__((swift_name("triggerIndex")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable triggerMask __attribute__((swift_name("triggerMask")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable triggerStatus __attribute__((swift_name("triggerStatus")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable userActionMask __attribute__((swift_name("userActionMask")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TriggerPara.Companion")))
@interface KmmprotocolmoduleTriggerParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleTriggerParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserActionPara")))
@interface KmmprotocolmoduleUserActionPara : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleUserActionParaCompanion *companion __attribute__((swift_name("companion")));
- (void)initialFromRawJsonObjectJsonObject:(NSDictionary<NSString *, KmmprotocolmoduleKotlinx_serialization_jsonJsonElement *> *)jsonObject __attribute__((swift_name("initialFromRawJsonObject(jsonObject:)")));
- (void)initialFromRawListUserActionParaRawList:(NSArray<KmmprotocolmoduleLong *> *)userActionParaRawList __attribute__((swift_name("initialFromRawList(userActionParaRawList:)")));
@property int32_t actionIndex __attribute__((swift_name("actionIndex")));
@property KmmprotocolmoduleDeviceTypeSet *devType __attribute__((swift_name("devType")));
@property NSArray<KmmprotocolmoduleParaStructure *> * _Nullable paraList __attribute__((swift_name("paraList")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable paraMask __attribute__((swift_name("paraMask")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable rlyAction __attribute__((swift_name("rlyAction")));
@property NSArray<KmmprotocolmoduleBoolean *> * _Nullable rlyMask __attribute__((swift_name("rlyMask")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserActionPara.Companion")))
@interface KmmprotocolmoduleUserActionParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleUserActionParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeekMask")))
@interface KmmprotocolmoduleWeekMask : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleWeekMaskCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)getWeekMaskBitWeekMaskIndex:(KmmprotocolmoduleWeekMaskIndex *)weekMaskIndex __attribute__((swift_name("getWeekMaskBit(weekMaskIndex:)")));
- (void)initialFromBoolListBoolList:(NSArray<KmmprotocolmoduleBoolean *> *)boolList __attribute__((swift_name("initialFromBoolList(boolList:)")));
- (void)initialFromWeekMaskWeekMask:(KmmprotocolmoduleWeekMask *)weekMask __attribute__((swift_name("initialFromWeekMask(weekMask:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (void)setWeekMaskBitWeekMaskIndex:(KmmprotocolmoduleWeekMaskIndex *)weekMaskIndex bitValue:(BOOL)bitValue __attribute__((swift_name("setWeekMaskBit(weekMaskIndex:bitValue:)")));
- (NSString *)toHexString __attribute__((swift_name("toHexString()")));
- (uint64_t)toULong __attribute__((swift_name("toULong()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeekMask.Companion")))
@interface KmmprotocolmoduleWeekMaskCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleWeekMaskCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeekMaskIndex")))
@interface KmmprotocolmoduleWeekMaskIndex : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleWeekMaskIndex *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmprotocolmoduleWeekMaskIndexCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmmprotocolmoduleWeekMaskIndex *sunday __attribute__((swift_name("sunday")));
@property (class, readonly) KmmprotocolmoduleWeekMaskIndex *monday __attribute__((swift_name("monday")));
@property (class, readonly) KmmprotocolmoduleWeekMaskIndex *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) KmmprotocolmoduleWeekMaskIndex *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) KmmprotocolmoduleWeekMaskIndex *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) KmmprotocolmoduleWeekMaskIndex *friday __attribute__((swift_name("friday")));
@property (class, readonly) KmmprotocolmoduleWeekMaskIndex *saturday __attribute__((swift_name("saturday")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleWeekMaskIndex *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeekMaskIndex.Companion")))
@interface KmmprotocolmoduleWeekMaskIndexCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleWeekMaskIndexCompanion *shared __attribute__((swift_name("shared")));
- (KmmprotocolmoduleWeekMaskIndex * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Cmd")))
@interface KmmprotocolmoduleCmd : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleCmd *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmprotocolmoduleCmdCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmmprotocolmoduleCmd *get __attribute__((swift_name("get")));
@property (class, readonly) KmmprotocolmoduleCmd *getstatus __attribute__((swift_name("getstatus")));
@property (class, readonly) KmmprotocolmoduleCmd *set __attribute__((swift_name("set")));
@property (class, readonly) KmmprotocolmoduleCmd *addtimer __attribute__((swift_name("addtimer")));
@property (class, readonly) KmmprotocolmoduleCmd *deltimer __attribute__((swift_name("deltimer")));
@property (class, readonly) KmmprotocolmoduleCmd *modifytimer __attribute__((swift_name("modifytimer")));
@property (class, readonly) KmmprotocolmoduleCmd *peektimer __attribute__((swift_name("peektimer")));
@property (class, readonly) KmmprotocolmoduleCmd *rfscan __attribute__((swift_name("rfscan")));
@property (class, readonly) KmmprotocolmoduleCmd *rflearn __attribute__((swift_name("rflearn")));
@property (class, readonly) KmmprotocolmoduleCmd *rfcancel __attribute__((swift_name("rfcancel")));
@property (class, readonly) KmmprotocolmoduleCmd *rfsend __attribute__((swift_name("rfsend")));
@property (class, readonly) KmmprotocolmoduleCmd *rfdel __attribute__((swift_name("rfdel")));
@property (class, readonly) KmmprotocolmoduleCmd *fwupgrade __attribute__((swift_name("fwupgrade")));
@property (class, readonly) KmmprotocolmoduleCmd *updateurl __attribute__((swift_name("updateurl")));
@property (class, readonly) KmmprotocolmoduleCmd *updateport __attribute__((swift_name("updateport")));
@property (class, readonly) KmmprotocolmoduleCmd *panellearn __attribute__((swift_name("panellearn")));
@property (class, readonly) KmmprotocolmoduleCmd *getpanel __attribute__((swift_name("getpanel")));
@property (class, readonly) KmmprotocolmoduleCmd *setpanel __attribute__((swift_name("setpanel")));
@property (class, readonly) KmmprotocolmoduleCmd *delpanel __attribute__((swift_name("delpanel")));
@property (class, readonly) KmmprotocolmoduleCmd *doaction __attribute__((swift_name("doaction")));
@property (class, readonly) KmmprotocolmoduleCmd *dotrigger __attribute__((swift_name("dotrigger")));
@property (class, readonly) KmmprotocolmoduleCmd *inputdevicelearn __attribute__((swift_name("inputdevicelearn")));
@property (class, readonly) KmmprotocolmoduleCmd *delinputdevice __attribute__((swift_name("delinputdevice")));
@property (class, readonly) KmmprotocolmoduleCmd *addaction __attribute__((swift_name("addaction")));
@property (class, readonly) KmmprotocolmoduleCmd *settriggeraction __attribute__((swift_name("settriggeraction")));
@property (class, readonly) KmmprotocolmoduleCmd *settriggerdefaultaction __attribute__((swift_name("settriggerdefaultaction")));
@property (class, readonly) KmmprotocolmoduleCmd *settriggerdelay __attribute__((swift_name("settriggerdelay")));
@property (class, readonly) KmmprotocolmoduleCmd *gettriggerstatus __attribute__((swift_name("gettriggerstatus")));
@property (class, readonly) KmmprotocolmoduleCmd *settriggerstatus __attribute__((swift_name("settriggerstatus")));
@property (class, readonly) KmmprotocolmoduleCmd *setnodisabletrigger __attribute__((swift_name("setnodisabletrigger")));
@property (class, readonly) KmmprotocolmoduleCmd *addtimer2 __attribute__((swift_name("addtimer2")));
@property (class, readonly) KmmprotocolmoduleCmd *deltimer2 __attribute__((swift_name("deltimer2")));
@property (class, readonly) KmmprotocolmoduleCmd *modifytimer2 __attribute__((swift_name("modifytimer2")));
@property (class, readonly) KmmprotocolmoduleCmd *login __attribute__((swift_name("login")));
@property (class, readonly) KmmprotocolmoduleCmd *getack __attribute__((swift_name("getack")));
@property (class, readonly) KmmprotocolmoduleCmd *setack __attribute__((swift_name("setack")));
@property (class, readonly) KmmprotocolmoduleCmd *timeout __attribute__((swift_name("timeout")));
@property (class, readonly) KmmprotocolmoduleCmd *addtimerack __attribute__((swift_name("addtimerack")));
@property (class, readonly) KmmprotocolmoduleCmd *deltimerack __attribute__((swift_name("deltimerack")));
@property (class, readonly) KmmprotocolmoduleCmd *modifytimerack __attribute__((swift_name("modifytimerack")));
@property (class, readonly) KmmprotocolmoduleCmd *peektimerack __attribute__((swift_name("peektimerack")));
@property (class, readonly) KmmprotocolmoduleCmd *rflearnack __attribute__((swift_name("rflearnack")));
@property (class, readonly) KmmprotocolmoduleCmd *rfcancelack __attribute__((swift_name("rfcancelack")));
@property (class, readonly) KmmprotocolmoduleCmd *rfsendack __attribute__((swift_name("rfsendack")));
@property (class, readonly) KmmprotocolmoduleCmd *rfdelack __attribute__((swift_name("rfdelack")));
@property (class, readonly) KmmprotocolmoduleCmd *fwupgradeack __attribute__((swift_name("fwupgradeack")));
@property (class, readonly) KmmprotocolmoduleCmd *panellearnack __attribute__((swift_name("panellearnack")));
@property (class, readonly) KmmprotocolmoduleCmd *panelack __attribute__((swift_name("panelack")));
@property (class, readonly) KmmprotocolmoduleCmd *dotriggerack __attribute__((swift_name("dotriggerack")));
@property (class, readonly) KmmprotocolmoduleCmd *gettriggerack __attribute__((swift_name("gettriggerack")));
@property (class, readonly) KmmprotocolmoduleCmd *getactionack __attribute__((swift_name("getactionack")));
@property (class, readonly) KmmprotocolmoduleCmd *inputdevicelearnack __attribute__((swift_name("inputdevicelearnack")));
@property (class, readonly) KmmprotocolmoduleCmd *delinputdeviceack __attribute__((swift_name("delinputdeviceack")));
@property (class, readonly) KmmprotocolmoduleCmd *addactionack __attribute__((swift_name("addactionack")));
@property (class, readonly) KmmprotocolmoduleCmd *settriggeractionack __attribute__((swift_name("settriggeractionack")));
@property (class, readonly) KmmprotocolmoduleCmd *settriggerdefaultactionack __attribute__((swift_name("settriggerdefaultactionack")));
@property (class, readonly) KmmprotocolmoduleCmd *settriggerdelayack __attribute__((swift_name("settriggerdelayack")));
@property (class, readonly) KmmprotocolmoduleCmd *triggerstatusack __attribute__((swift_name("triggerstatusack")));
@property (class, readonly) KmmprotocolmoduleCmd *nodisabletriggerack __attribute__((swift_name("nodisabletriggerack")));
@property (class, readonly) KmmprotocolmoduleCmd *addtimer2ack __attribute__((swift_name("addtimer2ack")));
@property (class, readonly) KmmprotocolmoduleCmd *gettimerack __attribute__((swift_name("gettimerack")));
@property (class, readonly) KmmprotocolmoduleCmd *deltimer2ack __attribute__((swift_name("deltimer2ack")));
@property (class, readonly) KmmprotocolmoduleCmd *modifytimer2ack __attribute__((swift_name("modifytimer2ack")));
@property (class, readonly) KmmprotocolmoduleCmd *loginack __attribute__((swift_name("loginack")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleCmd *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Cmd.Companion")))
@interface KmmprotocolmoduleCmdCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleCmdCompanion *shared __attribute__((swift_name("shared")));
- (KmmprotocolmoduleCmd * _Nullable)fromRawRaw:(NSString *)raw __attribute__((swift_name("fromRaw(raw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FactoryID")))
@interface KmmprotocolmoduleFactoryID : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleFactoryID *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmprotocolmoduleFactoryIDCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmmprotocolmoduleFactoryID *wilink __attribute__((swift_name("wilink")));
@property (class, readonly) KmmprotocolmoduleFactoryID *wilinkNeutral __attribute__((swift_name("wilinkNeutral")));
@property (class, readonly) KmmprotocolmoduleFactoryID *yushenghong __attribute__((swift_name("yushenghong")));
@property (class, readonly) KmmprotocolmoduleFactoryID *ttk __attribute__((swift_name("ttk")));
@property (class, readonly) KmmprotocolmoduleFactoryID *luxcon __attribute__((swift_name("luxcon")));
@property (class, readonly) KmmprotocolmoduleFactoryID *simart __attribute__((swift_name("simart")));
@property (class, readonly) KmmprotocolmoduleFactoryID *keey __attribute__((swift_name("keey")));
@property (class, readonly) KmmprotocolmoduleFactoryID *vrunique __attribute__((swift_name("vrunique")));
@property (class, readonly) KmmprotocolmoduleFactoryID *orico __attribute__((swift_name("orico")));
@property (class, readonly) KmmprotocolmoduleFactoryID *sombor __attribute__((swift_name("sombor")));
@property (class, readonly) KmmprotocolmoduleFactoryID *shanfeng __attribute__((swift_name("shanfeng")));
@property (class, readonly) KmmprotocolmoduleFactoryID *xiamenhuating __attribute__((swift_name("xiamenhuating")));
@property (class, readonly) KmmprotocolmoduleFactoryID *wanwusmart __attribute__((swift_name("wanwusmart")));
@property (class, readonly) KmmprotocolmoduleFactoryID *wiking __attribute__((swift_name("wiking")));
@property (class, readonly) KmmprotocolmoduleFactoryID *jiwu __attribute__((swift_name("jiwu")));
@property (class, readonly) KmmprotocolmoduleFactoryID *ety __attribute__((swift_name("ety")));
@property (class, readonly) KmmprotocolmoduleFactoryID *zhexi __attribute__((swift_name("zhexi")));
@property (class, readonly) KmmprotocolmoduleFactoryID *dingyi __attribute__((swift_name("dingyi")));
@property (class, readonly) KmmprotocolmoduleFactoryID *riyaa __attribute__((swift_name("riyaa")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleFactoryID *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FactoryID.Companion")))
@interface KmmprotocolmoduleFactoryIDCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleFactoryIDCompanion *shared __attribute__((swift_name("shared")));
- (KmmprotocolmoduleFactoryID * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnOffStatus")))
@interface KmmprotocolmoduleOnOffStatus : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleOnOffStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmprotocolmoduleOnOffStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmmprotocolmoduleOnOffStatus *off __attribute__((swift_name("off")));
@property (class, readonly) KmmprotocolmoduleOnOffStatus *on __attribute__((swift_name("on")));
@property (class, readonly) KmmprotocolmoduleOnOffStatus *follow __attribute__((swift_name("follow")));
@property (class, readonly) KmmprotocolmoduleOnOffStatus *reserve __attribute__((swift_name("reserve")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleOnOffStatus *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnOffStatus.Companion")))
@interface KmmprotocolmoduleOnOffStatusCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleOnOffStatusCompanion *shared __attribute__((swift_name("shared")));
- (KmmprotocolmoduleOnOffStatus * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductionID")))
@interface KmmprotocolmoduleProductionID : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleProductionID *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmprotocolmoduleProductionIDCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmmprotocolmoduleProductionID *none __attribute__((swift_name("none")));
@property (class, readonly) KmmprotocolmoduleProductionID *wilinkmom __attribute__((swift_name("wilinkmom")));
@property (class, readonly) KmmprotocolmoduleProductionID *wilinkMomBox __attribute__((swift_name("wilinkMomBox")));
@property (class, readonly) KmmprotocolmoduleProductionID *somborMomBox __attribute__((swift_name("somborMomBox")));
@property (class, readonly) KmmprotocolmoduleProductionID *shanfengMomBox __attribute__((swift_name("shanfengMomBox")));
@property (class, readonly) KmmprotocolmoduleProductionID *neutralMomBox __attribute__((swift_name("neutralMomBox")));
@property (class, readonly) KmmprotocolmoduleProductionID *wanwusmartMomBox __attribute__((swift_name("wanwusmartMomBox")));
@property (class, readonly) KmmprotocolmoduleProductionID *zigbeeMomSocket __attribute__((swift_name("zigbeeMomSocket")));
@property (class, readonly) KmmprotocolmoduleProductionID *zigbeeMomBox __attribute__((swift_name("zigbeeMomBox")));
@property (class, readonly) KmmprotocolmoduleProductionID *envMonitorW __attribute__((swift_name("envMonitorW")));
@property (class, readonly) KmmprotocolmoduleProductionID *envMonitorPlusW __attribute__((swift_name("envMonitorPlusW")));
@property (class, readonly) KmmprotocolmoduleProductionID *vrunique102MomPcba __attribute__((swift_name("vrunique102MomPcba")));
@property (class, readonly) KmmprotocolmoduleProductionID *vrunique103MomDoorbell __attribute__((swift_name("vrunique103MomDoorbell")));
@property (class, readonly) KmmprotocolmoduleProductionID *keeyMomBox __attribute__((swift_name("keeyMomBox")));
@property (class, readonly) KmmprotocolmoduleProductionID *yushenghongMom __attribute__((swift_name("yushenghongMom")));
@property (class, readonly) KmmprotocolmoduleProductionID *oricoWifiMom2Socket __attribute__((swift_name("oricoWifiMom2Socket")));
@property (class, readonly) KmmprotocolmoduleProductionID *oricoWifiMom1Socket __attribute__((swift_name("oricoWifiMom1Socket")));
@property (class, readonly) KmmprotocolmoduleProductionID *simartMomBox __attribute__((swift_name("simartMomBox")));
@property (class, readonly) KmmprotocolmoduleProductionID *xiamenhuatingMomBox __attribute__((swift_name("xiamenhuatingMomBox")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleProductionID *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductionID.Companion")))
@interface KmmprotocolmoduleProductionIDCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleProductionIDCompanion *shared __attribute__((swift_name("shared")));
- (KmmprotocolmoduleProductionID * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolComm")))
@interface KmmprotocolmoduleProtocolComm : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleProtocolComm *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmmprotocolmoduleProtocolComm *lanprefix __attribute__((swift_name("lanprefix")));
@property (class, readonly) KmmprotocolmoduleProtocolComm *wanprefix __attribute__((swift_name("wanprefix")));
@property (class, readonly) KmmprotocolmoduleProtocolComm *suffix __attribute__((swift_name("suffix")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleProtocolComm *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolKey")))
@interface KmmprotocolmoduleProtocolKey : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleProtocolKey *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmmprotocolmoduleProtocolKey *sn __attribute__((swift_name("sn")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *seq __attribute__((swift_name("seq")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *cmd __attribute__((swift_name("cmd")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *field __attribute__((swift_name("field")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *servicedomain __attribute__((swift_name("servicedomain")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *protocolversion __attribute__((swift_name("protocolversion")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *factoryid __attribute__((swift_name("factoryid")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *productionid __attribute__((swift_name("productionid")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *hardwareid __attribute__((swift_name("hardwareid")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *fwpath __attribute__((swift_name("fwpath")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *fwversion __attribute__((swift_name("fwversion")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *outputdeviceinstalled __attribute__((swift_name("outputdeviceinstalled")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *timer __attribute__((swift_name("timer")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *timerinstalled __attribute__((swift_name("timerinstalled")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *rfinstall __attribute__((swift_name("rfinstall")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *index __attribute__((swift_name("index")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *onlinestatus __attribute__((swift_name("onlinestatus")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *rlystatus __attribute__((swift_name("rlystatus")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *rlyaction __attribute__((swift_name("rlyaction")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *rlymask __attribute__((swift_name("rlymask")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *needack __attribute__((swift_name("needack")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *ledstatus __attribute__((swift_name("ledstatus")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *ledmask __attribute__((swift_name("ledmask")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *onoffstatus __attribute__((swift_name("onoffstatus")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *onoffrlymask __attribute__((swift_name("onoffrlymask")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *brightaction __attribute__((swift_name("brightaction")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *brightmask __attribute__((swift_name("brightmask")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *tempaction __attribute__((swift_name("tempaction")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *tempmask __attribute__((swift_name("tempmask")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *functioncode __attribute__((swift_name("functioncode")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *functioncodemask __attribute__((swift_name("functioncodemask")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *failure __attribute__((swift_name("failure")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *slavetype __attribute__((swift_name("slavetype")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *time __attribute__((swift_name("time")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *timestamp __attribute__((swift_name("timestamp")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *cmdtype __attribute__((swift_name("cmdtype")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *l1data __attribute__((swift_name("l1data")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *l2data __attribute__((swift_name("l2data")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *userid __attribute__((swift_name("userid")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *username __attribute__((swift_name("username")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *userpwd __attribute__((swift_name("userpwd")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *randompwd __attribute__((swift_name("randompwd")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *errorcode __attribute__((swift_name("errorcode")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *devicetoken __attribute__((swift_name("devicetoken")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *appfactoryid __attribute__((swift_name("appfactoryid")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *nickname __attribute__((swift_name("nickname")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *avatarspath __attribute__((swift_name("avatarspath")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *l1failurecode __attribute__((swift_name("l1failurecode")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *brightpercent __attribute__((swift_name("brightpercent")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *brightpercentmask __attribute__((swift_name("brightpercentmask")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *saveaction __attribute__((swift_name("saveaction")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *slowrlyaction __attribute__((swift_name("slowrlyaction")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *confmask __attribute__((swift_name("confmask")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *turnonbrightpercent __attribute__((swift_name("turnonbrightpercent")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *turnonmode __attribute__((swift_name("turnonmode")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *minbrightpercent __attribute__((swift_name("minbrightpercent")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *brightadjspeed __attribute__((swift_name("brightadjspeed")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *onoffbrightadjspeed __attribute__((swift_name("onoffbrightadjspeed")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *slowlyonbrightadjspeed __attribute__((swift_name("slowlyonbrightadjspeed")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *slowlyoffbrightadjspeed __attribute__((swift_name("slowlyoffbrightadjspeed")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *poweronstatus __attribute__((swift_name("poweronstatus")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *ver __attribute__((swift_name("ver")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *curtainaction __attribute__((swift_name("curtainaction")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *curtainmask __attribute__((swift_name("curtainmask")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *confver __attribute__((swift_name("confver")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *paneladdr __attribute__((swift_name("paneladdr")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *panelaction __attribute__((swift_name("panelaction")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *timerpara __attribute__((swift_name("timerpara")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *inputdeviceinstalled __attribute__((swift_name("inputdeviceinstalled")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *triggerinstalled __attribute__((swift_name("triggerinstalled")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *trigger __attribute__((swift_name("trigger")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *actioninstalled __attribute__((swift_name("actioninstalled")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *useraction __attribute__((swift_name("useraction")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *defaultactionmask __attribute__((swift_name("defaultactionmask")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *triggerindex __attribute__((swift_name("triggerindex")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *actionmask __attribute__((swift_name("actionmask")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *triggerstatus __attribute__((swift_name("triggerstatus")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *triggermask __attribute__((swift_name("triggermask")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *nodisabletrigger __attribute__((swift_name("nodisabletrigger")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *delay __attribute__((swift_name("delay")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *inputdevicetype __attribute__((swift_name("inputdevicetype")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *devtype __attribute__((swift_name("devtype")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *inputdeviceindex __attribute__((swift_name("inputdeviceindex")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *para __attribute__((swift_name("para")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *paramask __attribute__((swift_name("paramask")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *actionindex __attribute__((swift_name("actionindex")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *energy __attribute__((swift_name("energy")));
@property (class, readonly) KmmprotocolmoduleProtocolKey *power __attribute__((swift_name("power")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleProtocolKey *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolVersion")))
@interface KmmprotocolmoduleProtocolVersion : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleProtocolVersion *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmprotocolmoduleProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmmprotocolmoduleProtocolVersion *v0 __attribute__((swift_name("v0")));
@property (class, readonly) KmmprotocolmoduleProtocolVersion *v1 __attribute__((swift_name("v1")));
@property (class, readonly) KmmprotocolmoduleProtocolVersion *v2 __attribute__((swift_name("v2")));
@property (class, readonly) KmmprotocolmoduleProtocolVersion *v3 __attribute__((swift_name("v3")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleProtocolVersion *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolVersion.Companion")))
@interface KmmprotocolmoduleProtocolVersionCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (KmmprotocolmoduleProtocolVersion * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceTypeClassify")))
@interface KmmprotocolmoduleDeviceTypeClassify : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleDeviceTypeClassifyCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceTypeClassify.Companion")))
@interface KmmprotocolmoduleDeviceTypeClassifyCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleDeviceTypeClassifyCompanion *shared __attribute__((swift_name("shared")));
- (BOOL)is1SocketDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("is1SocketDevice(deviceTypeSet:)")));
- (BOOL)is2SocketDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("is2SocketDevice(deviceTypeSet:)")));
- (BOOL)is3SocketDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("is3SocketDevice(deviceTypeSet:)")));
- (BOOL)is4SocketDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("is4SocketDevice(deviceTypeSet:)")));
- (BOOL)isBoxSW1DDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isBoxSW1D(deviceTypeSet:)")));
- (BOOL)isBoxSW2DDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isBoxSW2D(deviceTypeSet:)")));
- (BOOL)isBoxSW3DDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isBoxSW3D(deviceTypeSet:)")));
- (BOOL)isControllableDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isControllableDevice(deviceTypeSet:)")));
- (BOOL)isCurtainWithLocationDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isCurtainWithLocationDevice(deviceTypeSet:)")));
- (BOOL)isCurtainWithoutLocationDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isCurtainWithoutLocationDevice(deviceTypeSet:)")));
- (BOOL)isDimmer1DDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isDimmer1D(deviceTypeSet:)")));
- (BOOL)isDimmer2DDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isDimmer2D(deviceTypeSet:)")));
- (BOOL)isDimmer3DDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isDimmer3D(deviceTypeSet:)")));
- (BOOL)isDimmerDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isDimmerDevice(deviceTypeSet:)")));
- (BOOL)isDimmerPowerStatisticsDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isDimmerPowerStatisticsDevice(deviceTypeSet:)")));
- (BOOL)isDimmerSW1DDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isDimmerSW1D(deviceTypeSet:)")));
- (BOOL)isDimmerSW2DDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isDimmerSW2D(deviceTypeSet:)")));
- (BOOL)isDimmerSW3DDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isDimmerSW3D(deviceTypeSet:)")));
- (BOOL)isEnvMonitorDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isEnvMonitorDevice(deviceTypeSet:)")));
- (BOOL)isGatewayDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isGatewayDevice(deviceTypeSet:)")));
- (BOOL)isIRDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isIRDevice(deviceTypeSet:)")));
- (BOOL)isInputDetectDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isInputDetectDevice(deviceTypeSet:)")));
- (BOOL)isNoResponseDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isNoResponseDevice(deviceTypeSet:)")));
- (BOOL)isPowerStatisticsDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isPowerStatisticsDevice(deviceTypeSet:)")));
- (BOOL)isRGBLampDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isRGBLampDevice(deviceTypeSet:)")));
- (BOOL)isRGBWLampDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isRGBWLampDevice(deviceTypeSet:)")));
- (BOOL)isScenePanelDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isScenePanelDevice(deviceTypeSet:)")));
- (BOOL)isSocketPowerStatisticsDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isSocketPowerStatisticsDevice(deviceTypeSet:)")));
- (BOOL)isTemperatureLampDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isTemperatureLampDevice(deviceTypeSet:)")));
- (BOOL)isTouchSW1DDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isTouchSW1D(deviceTypeSet:)")));
- (BOOL)isTouchSW2DDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isTouchSW2D(deviceTypeSet:)")));
- (BOOL)isTouchSW3DDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isTouchSW3D(deviceTypeSet:)")));
- (BOOL)isTwoSocketDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isTwoSocketDevice(deviceTypeSet:)")));
- (BOOL)isWifiOnlyDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isWifiOnlyDevice(deviceTypeSet:)")));
- (BOOL)isWithResponseDeviceDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isWithResponseDevice(deviceTypeSet:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceTypeSet")))
@interface KmmprotocolmoduleDeviceTypeSet : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleDeviceTypeSet *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmprotocolmoduleDeviceTypeSetCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *momson __attribute__((swift_name("momson")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonalarm __attribute__((swift_name("sonalarm")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *son861s __attribute__((swift_name("son861s")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonsw1d __attribute__((swift_name("sonsw1d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonsw1s __attribute__((swift_name("sonsw1s")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonsw2d __attribute__((swift_name("sonsw2d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonsw2s __attribute__((swift_name("sonsw2s")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonsw3d __attribute__((swift_name("sonsw3d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonsw3s __attribute__((swift_name("sonsw3s")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *son861s3152262Sc __attribute__((swift_name("son861s3152262Sc")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonsw1s4332262 __attribute__((swift_name("sonsw1s4332262")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonlight1s4331527Sc __attribute__((swift_name("sonlight1s4331527Sc")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonplug1s4331527 __attribute__((swift_name("sonplug1s4331527")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonled1s __attribute__((swift_name("sonled1s")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sondimmer1d __attribute__((swift_name("sondimmer1d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sondimmer2d __attribute__((swift_name("sondimmer2d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sondimmer3d __attribute__((swift_name("sondimmer3d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sondimmersw1d __attribute__((swift_name("sondimmersw1d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sondimmersw2d __attribute__((swift_name("sondimmersw2d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sondimmersw3d __attribute__((swift_name("sondimmersw3d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sontouchsw1d __attribute__((swift_name("sontouchsw1d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sontouchsw2d __attribute__((swift_name("sontouchsw2d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sontouchsw3d __attribute__((swift_name("sontouchsw3d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonboxsw1d __attribute__((swift_name("sonboxsw1d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonboxsw2d __attribute__((swift_name("sonboxsw2d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonboxsw3d __attribute__((swift_name("sonboxsw3d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sondimmerpwm1d __attribute__((swift_name("sondimmerpwm1d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sondimmerpwm2d __attribute__((swift_name("sondimmerpwm2d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sondimmerpwm3d __attribute__((swift_name("sondimmerpwm3d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonplug1d __attribute__((swift_name("sonplug1d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonplug2d __attribute__((swift_name("sonplug2d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonplug3d __attribute__((swift_name("sonplug3d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonplug1dx2 __attribute__((swift_name("sonplug1dx2")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonplug2dx2 __attribute__((swift_name("sonplug2dx2")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonplug3dx2 __attribute__((swift_name("sonplug3dx2")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *soncurtain1d __attribute__((swift_name("soncurtain1d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *soncurtain2d __attribute__((swift_name("soncurtain2d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sontempled __attribute__((swift_name("sontempled")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonrgbled __attribute__((swift_name("sonrgbled")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonrgbwled __attribute__((swift_name("sonrgbwled")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonoutlet1d __attribute__((swift_name("sonoutlet1d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonir __attribute__((swift_name("sonir")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonlock __attribute__((swift_name("sonlock")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *soncamera __attribute__((swift_name("soncamera")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *soncurtainloc __attribute__((swift_name("soncurtainloc")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sondimmer4dELms __attribute__((swift_name("sondimmer4dELms")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonoutlet1dE __attribute__((swift_name("sonoutlet1dE")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sondimmer2d1 __attribute__((swift_name("sondimmer2d1")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sondimmer3d1 __attribute__((swift_name("sondimmer3d1")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sondimmer3d2 __attribute__((swift_name("sondimmer3d2")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sondimmersw2d1 __attribute__((swift_name("sondimmersw2d1")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sondimmersw3d1 __attribute__((swift_name("sondimmersw3d1")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sondimmersw3d2 __attribute__((swift_name("sondimmersw3d2")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sontouchsw2d1 __attribute__((swift_name("sontouchsw2d1")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sontouchsw3d1 __attribute__((swift_name("sontouchsw3d1")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sontouchsw3d2 __attribute__((swift_name("sontouchsw3d2")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonboxsw2d1 __attribute__((swift_name("sonboxsw2d1")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonboxsw3d1 __attribute__((swift_name("sonboxsw3d1")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *sonboxsw3d2 __attribute__((swift_name("sonboxsw3d2")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *remotecontroller __attribute__((swift_name("remotecontroller")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *securitycontroller __attribute__((swift_name("securitycontroller")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *entranceguard __attribute__((swift_name("entranceguard")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *infraredwarning __attribute__((swift_name("infraredwarning")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *fuelgaswarning __attribute__((swift_name("fuelgaswarning")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *scenepanel2d __attribute__((swift_name("scenepanel2d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *scenepanel6d __attribute__((swift_name("scenepanel6d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *scenepanel3d __attribute__((swift_name("scenepanel3d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *scenepanel1d __attribute__((swift_name("scenepanel1d")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *envmonitorW __attribute__((swift_name("envmonitorW")));
@property (class, readonly) KmmprotocolmoduleDeviceTypeSet *envmonitorplusW __attribute__((swift_name("envmonitorplusW")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleDeviceTypeSet *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceTypeSet.Companion")))
@interface KmmprotocolmoduleDeviceTypeSetCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleDeviceTypeSetCompanion *shared __attribute__((swift_name("shared")));
- (KmmprotocolmoduleDeviceTypeSet * _Nullable)fromRawRaw:(NSString *)raw __attribute__((swift_name("fromRaw(raw:)")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceTypeUtil")))
@interface KmmprotocolmoduleDeviceTypeUtil : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleDeviceTypeUtilCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceTypeUtil.Companion")))
@interface KmmprotocolmoduleDeviceTypeUtilCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleDeviceTypeUtilCompanion *shared __attribute__((swift_name("shared")));
- (KmmprotocolmoduleInt * _Nullable)findDeviceTypeNumberDeviceTypeString:(NSString *)deviceTypeString __attribute__((swift_name("findDeviceTypeNumber(deviceTypeString:)")));
- (NSString * _Nullable)findDeviceTypeStringDeviceTypeNumber:(int32_t)deviceTypeNumber __attribute__((swift_name("findDeviceTypeString(deviceTypeNumber:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionsAndDeletionsCmdCreator")))
@interface KmmprotocolmoduleAdditionsAndDeletionsCmdCreator : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionsAndDeletionsCmdCreator.Companion")))
@interface KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)addRF433DeviceSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("addRF433Device(sn:deviceTypeSet:factoryID:protocolVersion:)")));
- (NSString *)deleteDeviceSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet deviceIndex:(int32_t)deviceIndex factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("deleteDevice(sn:deviceTypeSet:deviceIndex:factoryID:protocolVersion:)")));
- (NSString *)startDeviceScanSn:(NSString *)sn factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("startDeviceScan(sn:factoryID:protocolVersion:)")));
- (NSString *)stopDeviceScanSn:(NSString *)sn factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("stopDeviceScan(sn:factoryID:protocolVersion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionsAndDeletionsCmdCreator.CompanionAddRF433DevicePara")))
@interface KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanionAddRF433DevicePara : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd slaveType:(NSString *)slaveType __attribute__((swift_name("init(sn:seq:factoryID:cmd:slaveType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanionAddRF433DeviceParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanionAddRF433DevicePara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd slaveType:(NSString *)slaveType __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:slaveType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *slaveType __attribute__((swift_name("slaveType")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionsAndDeletionsCmdCreator.CompanionAddRF433DeviceParaCompanion")))
@interface KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanionAddRF433DeviceParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanionAddRF433DeviceParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionsAndDeletionsCmdCreator.CompanionDeviceScanPara")))
@interface KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanionDeviceScanPara : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd __attribute__((swift_name("init(sn:seq:factoryID:cmd:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanionDeviceScanParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanionDeviceScanPara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionsAndDeletionsCmdCreator.CompanionDeviceScanParaCompanion")))
@interface KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanionDeviceScanParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleAdditionsAndDeletionsCmdCreatorCompanionDeviceScanParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigCmdCreator")))
@interface KmmprotocolmoduleConfigCmdCreator : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleConfigCmdCreatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigCmdCreator.Companion")))
@interface KmmprotocolmoduleConfigCmdCreatorCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleConfigCmdCreatorCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)modifyApplianceOnOffStatusSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex onOffStatus:(KmmprotocolmoduleOnOffStatus *)onOffStatus factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("modifyApplianceOnOffStatus(sn:deviceTypeSet:applianceIndex:onOffStatus:factoryID:protocolVersion:)")));
- (NSString *)setMinBrightPercentSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex minBrightPercent:(int32_t)minBrightPercent factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("setMinBrightPercent(sn:deviceTypeSet:applianceIndex:minBrightPercent:factoryID:protocolVersion:)")));
- (NSString *)setOnOffBrightAdjustSpeedSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex adjustSpeed:(int32_t)adjustSpeed factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("setOnOffBrightAdjustSpeed(sn:deviceTypeSet:applianceIndex:adjustSpeed:factoryID:protocolVersion:)")));
- (NSString *)setRGBWTurnOnColorSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex para:(KmmprotocolmoduleParaStructure *)para factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("setRGBWTurnOnColor(sn:deviceTypeSet:applianceIndex:para:factoryID:protocolVersion:)")));
- (NSString *)setTurnOnBrightPercentSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex turnOnBrightPercent:(int32_t)turnOnBrightPercent factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("setTurnOnBrightPercent(sn:deviceTypeSet:applianceIndex:turnOnBrightPercent:factoryID:protocolVersion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControlCmdCreator")))
@interface KmmprotocolmoduleControlCmdCreator : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleControlCmdCreatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControlCmdCreator.Companion")))
@interface KmmprotocolmoduleControlCmdCreatorCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleControlCmdCreatorCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)activateTriggerSn:(NSString *)sn triggerIndex:(int32_t)triggerIndex factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("activateTrigger(sn:triggerIndex:factoryID:protocolVersion:)")));
- (NSString *)brightAdjustSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex brightPercent:(int32_t)brightPercent factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("brightAdjust(sn:deviceTypeSet:applianceIndex:brightPercent:factoryID:protocolVersion:)")));
- (NSString *)controlApplianceGroupOnOffSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndexList:(NSArray<KmmprotocolmoduleInt *> *)applianceIndexList action:(BOOL)action factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("controlApplianceGroupOnOff(sn:deviceTypeSet:applianceIndexList:action:factoryID:protocolVersion:)")));
- (NSString *)controlApplianceOnOffSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex action:(BOOL)action factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("controlApplianceOnOff(sn:deviceTypeSet:applianceIndex:action:factoryID:protocolVersion:)")));
- (NSString *)curtainControlSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex curtainAction:(KmmprotocolmoduleParaStructureCurtainAction *)curtainAction factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("curtainControl(sn:deviceTypeSet:applianceIndex:curtainAction:factoryID:protocolVersion:)")));
- (NSString *)curtainWithLocationControlSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex para:(KmmprotocolmoduleParaStructure *)para factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("curtainWithLocationControl(sn:deviceTypeSet:applianceIndex:para:factoryID:protocolVersion:)")));
- (NSString *)irControlSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex irCmd:(KmmprotocolmoduleParaStructureIrCmd *)irCmd irIndex:(int32_t)irIndex factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("irControl(sn:deviceTypeSet:applianceIndex:irCmd:irIndex:factoryID:protocolVersion:)")));
- (NSString *)rgbwParaAdjustSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex para:(KmmprotocolmoduleParaStructure *)para factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("rgbwParaAdjust(sn:deviceTypeSet:applianceIndex:para:factoryID:protocolVersion:)")));
- (NSString *)temperatureParaAdjustSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex brightPercent:(int32_t)brightPercent temperaturePercent:(int32_t)temperaturePercent factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("temperatureParaAdjust(sn:deviceTypeSet:applianceIndex:brightPercent:temperaturePercent:factoryID:protocolVersion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControlCmdCreator.CompanionActivateTriggerPara")))
@interface KmmprotocolmoduleControlCmdCreatorCompanionActivateTriggerPara : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerIndex:(int32_t)triggerIndex __attribute__((swift_name("init(sn:seq:factoryID:cmd:triggerIndex:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleControlCmdCreatorCompanionActivateTriggerParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (KmmprotocolmoduleControlCmdCreatorCompanionActivateTriggerPara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerIndex:(int32_t)triggerIndex __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:triggerIndex:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@property (readonly) int32_t triggerIndex __attribute__((swift_name("triggerIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControlCmdCreator.CompanionActivateTriggerParaCompanion")))
@interface KmmprotocolmoduleControlCmdCreatorCompanionActivateTriggerParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleControlCmdCreatorCompanionActivateTriggerParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GatewayCmdCreator")))
@interface KmmprotocolmoduleGatewayCmdCreator : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleGatewayCmdCreatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GatewayCmdCreator.Companion")))
@interface KmmprotocolmoduleGatewayCmdCreatorCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleGatewayCmdCreatorCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)getGatewayFirmwareVersionSn:(NSString *)sn factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("getGatewayFirmwareVersion(sn:factoryID:protocolVersion:)")));
- (NSString *)startGatewayFirmwareUpgradeSn:(NSString *)sn factoryID:(KmmprotocolmoduleFactoryID *)factoryID updateUrl:(NSString *)updateUrl updatePort:(int32_t)updatePort firmwarePath:(NSString *)firmwarePath protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("startGatewayFirmwareUpgrade(sn:factoryID:updateUrl:updatePort:firmwarePath:protocolVersion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetInfoCmdCreator")))
@interface KmmprotocolmoduleGetInfoCmdCreator : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleGetInfoCmdCreatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetInfoCmdCreator.Companion")))
@interface KmmprotocolmoduleGetInfoCmdCreatorCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleGetInfoCmdCreatorCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)getAllInfoSn:(NSString *)sn factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("getAllInfo(sn:factoryID:protocolVersion:)")));
- (NSString *)getApplianceStatusSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("getApplianceStatus(sn:deviceTypeSet:applianceIndex:factoryID:protocolVersion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator")))
@interface KmmprotocolmoduleLinkageCmdCreator : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleLinkageCmdCreatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.Companion")))
@interface KmmprotocolmoduleLinkageCmdCreatorCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleLinkageCmdCreatorCompanion *shared __attribute__((swift_name("shared")));
- (KmmprotocolmoduleLinkageCmdCreatorCompanionAddActionCmdReturnType *)addActionSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceActionList:(NSArray<KmmprotocolmoduleBoolean *> *)applianceActionList applianceMaskList:(NSArray<KmmprotocolmoduleBoolean *> *)applianceMaskList paraList:(NSArray<KmmprotocolmoduleLong *> *)paraList paraMaskList:(NSArray<KmmprotocolmoduleBoolean *> *)paraMaskList factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("addAction(sn:deviceTypeSet:applianceActionList:applianceMaskList:paraList:paraMaskList:factoryID:protocolVersion:)")));
- (NSString *)setEmergencyTriggerSn:(NSString *)sn emergencyTriggerList:(NSArray<KmmprotocolmoduleBoolean *> *)emergencyTriggerList triggerMaskList:(NSArray<KmmprotocolmoduleBoolean *> *)triggerMaskList factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("setEmergencyTrigger(sn:emergencyTriggerList:triggerMaskList:factoryID:protocolVersion:)")));
- (NSString *)setTriggerActionSn:(NSString *)sn triggerIndex:(int32_t)triggerIndex userActionMaskList:(NSArray<KmmprotocolmoduleBoolean *> *)userActionMaskList triggerStatusList:(NSArray<KmmprotocolmoduleBoolean *> *)triggerStatusList triggerMaskList:(NSArray<KmmprotocolmoduleBoolean *> *)triggerMaskList factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("setTriggerAction(sn:triggerIndex:userActionMaskList:triggerStatusList:triggerMaskList:factoryID:protocolVersion:)")));
- (NSString *)setTriggerDefaultActionSn:(NSString *)sn triggerIndex:(int32_t)triggerIndex defaultActionMaskList:(NSArray<KmmprotocolmoduleBoolean *> *)defaultActionMaskList factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("setTriggerDefaultAction(sn:triggerIndex:defaultActionMaskList:factoryID:protocolVersion:)")));
- (NSString *)setTriggerDelaySn:(NSString *)sn triggerIndex:(int32_t)triggerIndex delaySecond:(int32_t)delaySecond factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("setTriggerDelay(sn:triggerIndex:delaySecond:factoryID:protocolVersion:)")));
- (NSString *)setTriggerStatusSn:(NSString *)sn triggerStatusList:(NSArray<KmmprotocolmoduleBoolean *> *)triggerStatusList triggerMaskList:(NSArray<KmmprotocolmoduleBoolean *> *)triggerMaskList factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("setTriggerStatus(sn:triggerStatusList:triggerMaskList:factoryID:protocolVersion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionAddActionCmdReturnType")))
@interface KmmprotocolmoduleLinkageCmdCreatorCompanionAddActionCmdReturnType : KmmprotocolmoduleBase
- (instancetype)initWithSeq:(int64_t)seq cmd:(NSString *)cmd __attribute__((swift_name("init(seq:cmd:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (KmmprotocolmoduleLinkageCmdCreatorCompanionAddActionCmdReturnType *)doCopySeq:(int64_t)seq cmd:(NSString *)cmd __attribute__((swift_name("doCopy(seq:cmd:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int64_t seq __attribute__((swift_name("seq")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionAddActionPara")))
@interface KmmprotocolmoduleLinkageCmdCreatorCompanionAddActionPara : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd devType:(int32_t)devType rlyAction:(NSString *)rlyAction rlyMask:(NSString *)rlyMask para:(NSArray<KmmprotocolmoduleLong *> *)para paraMask:(NSString *)paraMask __attribute__((swift_name("init(sn:seq:factoryID:cmd:devType:rlyAction:rlyMask:para:paraMask:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleLinkageCmdCreatorCompanionAddActionParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSArray<KmmprotocolmoduleLong *> *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (KmmprotocolmoduleLinkageCmdCreatorCompanionAddActionPara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd devType:(int32_t)devType rlyAction:(NSString *)rlyAction rlyMask:(NSString *)rlyMask para:(NSArray<KmmprotocolmoduleLong *> *)para paraMask:(NSString *)paraMask __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:devType:rlyAction:rlyMask:para:paraMask:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int32_t devType __attribute__((swift_name("devType")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) NSArray<KmmprotocolmoduleLong *> *para __attribute__((swift_name("para")));
@property (readonly) NSString *paraMask __attribute__((swift_name("paraMask")));
@property (readonly) NSString *rlyAction __attribute__((swift_name("rlyAction")));
@property (readonly) NSString *rlyMask __attribute__((swift_name("rlyMask")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionAddActionParaCompanion")))
@interface KmmprotocolmoduleLinkageCmdCreatorCompanionAddActionParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleLinkageCmdCreatorCompanionAddActionParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionSetEmergencyTriggerPara")))
@interface KmmprotocolmoduleLinkageCmdCreatorCompanionSetEmergencyTriggerPara : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd noDisableTrigger:(NSString *)noDisableTrigger triggerMask:(NSString *)triggerMask __attribute__((swift_name("init(sn:seq:factoryID:cmd:noDisableTrigger:triggerMask:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleLinkageCmdCreatorCompanionSetEmergencyTriggerParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (KmmprotocolmoduleLinkageCmdCreatorCompanionSetEmergencyTriggerPara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd noDisableTrigger:(NSString *)noDisableTrigger triggerMask:(NSString *)triggerMask __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:noDisableTrigger:triggerMask:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) NSString *noDisableTrigger __attribute__((swift_name("noDisableTrigger")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@property (readonly) NSString *triggerMask __attribute__((swift_name("triggerMask")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionSetEmergencyTriggerParaCompanion")))
@interface KmmprotocolmoduleLinkageCmdCreatorCompanionSetEmergencyTriggerParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleLinkageCmdCreatorCompanionSetEmergencyTriggerParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionSetTriggerActionPara")))
@interface KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerActionPara : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerIndex:(int32_t)triggerIndex actionMask:(NSString *)actionMask triggerStatus:(NSString *)triggerStatus triggerMask:(NSString *)triggerMask __attribute__((swift_name("init(sn:seq:factoryID:cmd:triggerIndex:actionMask:triggerStatus:triggerMask:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerActionParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerActionPara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerIndex:(int32_t)triggerIndex actionMask:(NSString *)actionMask triggerStatus:(NSString *)triggerStatus triggerMask:(NSString *)triggerMask __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:triggerIndex:actionMask:triggerStatus:triggerMask:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *actionMask __attribute__((swift_name("actionMask")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@property (readonly) int32_t triggerIndex __attribute__((swift_name("triggerIndex")));
@property (readonly) NSString *triggerMask __attribute__((swift_name("triggerMask")));
@property (readonly) NSString *triggerStatus __attribute__((swift_name("triggerStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionSetTriggerActionParaCompanion")))
@interface KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerActionParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerActionParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionSetTriggerDefaultActionPara")))
@interface KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerDefaultActionPara : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerIndex:(int32_t)triggerIndex defaultActionMask:(NSString *)defaultActionMask __attribute__((swift_name("init(sn:seq:factoryID:cmd:triggerIndex:defaultActionMask:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerDefaultActionParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerDefaultActionPara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerIndex:(int32_t)triggerIndex defaultActionMask:(NSString *)defaultActionMask __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:triggerIndex:defaultActionMask:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) NSString *defaultActionMask __attribute__((swift_name("defaultActionMask")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@property (readonly) int32_t triggerIndex __attribute__((swift_name("triggerIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionSetTriggerDefaultActionParaCompanion")))
@interface KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerDefaultActionParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerDefaultActionParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionSetTriggerDelayPara")))
@interface KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerDelayPara : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerIndex:(int32_t)triggerIndex delay:(int32_t)delay __attribute__((swift_name("init(sn:seq:factoryID:cmd:triggerIndex:delay:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerDelayParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerDelayPara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerIndex:(int32_t)triggerIndex delay:(int32_t)delay __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:triggerIndex:delay:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int32_t delay __attribute__((swift_name("delay")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@property (readonly) int32_t triggerIndex __attribute__((swift_name("triggerIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionSetTriggerDelayParaCompanion")))
@interface KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerDelayParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerDelayParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionSetTriggerStatusPara")))
@interface KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerStatusPara : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerStatus:(NSString *)triggerStatus triggerMask:(NSString *)triggerMask __attribute__((swift_name("init(sn:seq:factoryID:cmd:triggerStatus:triggerMask:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerStatusParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerStatusPara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerStatus:(NSString *)triggerStatus triggerMask:(NSString *)triggerMask __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:triggerStatus:triggerMask:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@property (readonly) NSString *triggerMask __attribute__((swift_name("triggerMask")));
@property (readonly) NSString *triggerStatus __attribute__((swift_name("triggerStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionSetTriggerStatusParaCompanion")))
@interface KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerStatusParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleLinkageCmdCreatorCompanionSetTriggerStatusParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator")))
@interface KmmprotocolmoduleTimerCmdCreator : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleTimerCmdCreatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.Companion")))
@interface KmmprotocolmoduleTimerCmdCreatorCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleTimerCmdCreatorCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)addTimerV1Sn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex action:(BOOL)action enable:(BOOL)enable timestamp:(int64_t)timestamp weekMaskFromUserTimezone:(KmmprotocolmoduleWeekMask *)weekMaskFromUserTimezone factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("addTimerV1(sn:deviceTypeSet:applianceIndex:action:enable:timestamp:weekMaskFromUserTimezone:factoryID:protocolVersion:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (NSString *)addTimerV2Sn:(NSString *)sn actionMaskList:(NSArray<KmmprotocolmoduleBoolean *> *)actionMaskList triggerStatusList:(NSArray<KmmprotocolmoduleBoolean *> *)triggerStatusList triggerMaskList:(NSArray<KmmprotocolmoduleBoolean *> *)triggerMaskList enable:(BOOL)enable timestamp:(int64_t)timestamp weekMaskFromUserTimezone:(KmmprotocolmoduleWeekMask *)weekMaskFromUserTimezone factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("addTimerV2(sn:actionMaskList:triggerStatusList:triggerMaskList:enable:timestamp:weekMaskFromUserTimezone:factoryID:protocolVersion:)")));
- (NSString *)delTimerV2Sn:(NSString *)sn timerIndex:(int32_t)timerIndex factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("delTimerV2(sn:timerIndex:factoryID:protocolVersion:)")));
- (NSString *)deleteTimerV1Sn:(NSString *)sn timerIndex:(int32_t)timerIndex factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("deleteTimerV1(sn:timerIndex:factoryID:protocolVersion:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (NSString *)getTimerV1Sn:(NSString *)sn factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("getTimerV1(sn:factoryID:protocolVersion:)")));
- (NSString *)modifyTimerV1Sn:(NSString *)sn timerIndex:(int32_t)timerIndex deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex action:(BOOL)action enable:(BOOL)enable timestamp:(int64_t)timestamp weekMaskFromUserTimezone:(KmmprotocolmoduleWeekMask *)weekMaskFromUserTimezone factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("modifyTimerV1(sn:timerIndex:deviceTypeSet:applianceIndex:action:enable:timestamp:weekMaskFromUserTimezone:factoryID:protocolVersion:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (NSString *)modifyTimerV2Sn:(NSString *)sn timerIndex:(int32_t)timerIndex actionMaskList:(NSArray<KmmprotocolmoduleBoolean *> *)actionMaskList triggerStatusList:(NSArray<KmmprotocolmoduleBoolean *> *)triggerStatusList triggerMaskList:(NSArray<KmmprotocolmoduleBoolean *> *)triggerMaskList enable:(BOOL)enable timestamp:(int64_t)timestamp weekMaskFromUserTimezone:(KmmprotocolmoduleWeekMask *)weekMaskFromUserTimezone factoryID:(KmmprotocolmoduleFactoryID *)factoryID protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("modifyTimerV2(sn:timerIndex:actionMaskList:triggerStatusList:triggerMaskList:enable:timestamp:weekMaskFromUserTimezone:factoryID:protocolVersion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.CompanionAddOrModifyTimerV1Para")))
@interface KmmprotocolmoduleTimerCmdCreatorCompanionAddOrModifyTimerV1Para : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd timer:(NSArray<NSString *> *)timer __attribute__((swift_name("init(sn:seq:factoryID:cmd:timer:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleTimerCmdCreatorCompanionAddOrModifyTimerV1ParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSArray<NSString *> *)component5 __attribute__((swift_name("component5()")));
- (KmmprotocolmoduleTimerCmdCreatorCompanionAddOrModifyTimerV1Para *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd timer:(NSArray<NSString *> *)timer __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:timer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@property (readonly) NSArray<NSString *> *timer __attribute__((swift_name("timer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.CompanionAddOrModifyTimerV1ParaCompanion")))
@interface KmmprotocolmoduleTimerCmdCreatorCompanionAddOrModifyTimerV1ParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleTimerCmdCreatorCompanionAddOrModifyTimerV1ParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.CompanionAddOrModifyTimerV2Para")))
@interface KmmprotocolmoduleTimerCmdCreatorCompanionAddOrModifyTimerV2Para : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd timerPara:(NSArray<KmmprotocolmoduleLong *> *)timerPara __attribute__((swift_name("init(sn:seq:factoryID:cmd:timerPara:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleTimerCmdCreatorCompanionAddOrModifyTimerV2ParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSArray<KmmprotocolmoduleLong *> *)component5 __attribute__((swift_name("component5()")));
- (KmmprotocolmoduleTimerCmdCreatorCompanionAddOrModifyTimerV2Para *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd timerPara:(NSArray<KmmprotocolmoduleLong *> *)timerPara __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:timerPara:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@property (readonly) NSArray<KmmprotocolmoduleLong *> *timerPara __attribute__((swift_name("timerPara")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.CompanionAddOrModifyTimerV2ParaCompanion")))
@interface KmmprotocolmoduleTimerCmdCreatorCompanionAddOrModifyTimerV2ParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleTimerCmdCreatorCompanionAddOrModifyTimerV2ParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.CompanionDelTimerV1Para")))
@interface KmmprotocolmoduleTimerCmdCreatorCompanionDelTimerV1Para : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd timer:(NSArray<KmmprotocolmoduleInt *> *)timer __attribute__((swift_name("init(sn:seq:factoryID:cmd:timer:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleTimerCmdCreatorCompanionDelTimerV1ParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSArray<KmmprotocolmoduleInt *> *)component5 __attribute__((swift_name("component5()")));
- (KmmprotocolmoduleTimerCmdCreatorCompanionDelTimerV1Para *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd timer:(NSArray<KmmprotocolmoduleInt *> *)timer __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:timer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@property (readonly) NSArray<KmmprotocolmoduleInt *> *timer __attribute__((swift_name("timer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.CompanionDelTimerV1ParaCompanion")))
@interface KmmprotocolmoduleTimerCmdCreatorCompanionDelTimerV1ParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleTimerCmdCreatorCompanionDelTimerV1ParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.CompanionDelTimerV2Para")))
@interface KmmprotocolmoduleTimerCmdCreatorCompanionDelTimerV2Para : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd timerPara:(NSArray<KmmprotocolmoduleInt *> *)timerPara __attribute__((swift_name("init(sn:seq:factoryID:cmd:timerPara:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleTimerCmdCreatorCompanionDelTimerV2ParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSArray<KmmprotocolmoduleInt *> *)component5 __attribute__((swift_name("component5()")));
- (KmmprotocolmoduleTimerCmdCreatorCompanionDelTimerV2Para *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd timerPara:(NSArray<KmmprotocolmoduleInt *> *)timerPara __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:timerPara:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@property (readonly) NSArray<KmmprotocolmoduleInt *> *timerPara __attribute__((swift_name("timerPara")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.CompanionDelTimerV2ParaCompanion")))
@interface KmmprotocolmoduleTimerCmdCreatorCompanionDelTimerV2ParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleTimerCmdCreatorCompanionDelTimerV2ParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Util")))
@interface KmmprotocolmoduleUtil : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleUtilCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Util.Companion")))
@interface KmmprotocolmoduleUtilCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleUtilCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)encodeCmdRaw:(NSString *)cmdRaw protocolVersion:(KmmprotocolmoduleProtocolVersion *)protocolVersion __attribute__((swift_name("encode(cmdRaw:protocolVersion:)")));
- (int32_t)getApplianceAmountDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("getApplianceAmount(deviceTypeSet:)")));
- (int32_t)getDeviceIndexDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex __attribute__((swift_name("getDeviceIndex(deviceTypeSet:applianceIndex:)")));
- (int32_t)randomSeq __attribute__((swift_name("randomSeq()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command")))
@interface KmmprotocolmoduleCommand : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.AddAndDelDeviceCmd")))
@interface KmmprotocolmoduleCommandAddAndDelDeviceCmd : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleCommandAddAndDelDeviceCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.AddAndDelDeviceCmdCompanion")))
@interface KmmprotocolmoduleCommandAddAndDelDeviceCmdCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleCommandAddAndDelDeviceCmdCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)addRF433DeviceSn:(NSString *)sn devTypeSet:(KmmprotocolmoduleDeviceTypeSet *)devTypeSet __attribute__((swift_name("addRF433Device(sn:devTypeSet:)")));
- (NSString *)deleteDeviceSn:(NSString *)sn devTypeSet:(KmmprotocolmoduleDeviceTypeSet *)devTypeSet applianceIndex:(int32_t)applianceIndex __attribute__((swift_name("deleteDevice(sn:devTypeSet:applianceIndex:)")));
- (NSString *)startScanSn:(NSString *)sn __attribute__((swift_name("startScan(sn:)")));
- (NSString *)stopScanSn:(NSString *)sn __attribute__((swift_name("stopScan(sn:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.ConfigureCmd")))
@interface KmmprotocolmoduleCommandConfigureCmd : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleCommandConfigureCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.ConfigureCmdCompanion")))
@interface KmmprotocolmoduleCommandConfigureCmdCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleCommandConfigureCmdCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)modifyApplianceOnOffStatusControllableApplianceInfo:(KmmprotocolmoduleControllableApplianceInfo *)controllableApplianceInfo onOffStatus:(KmmprotocolmoduleOnOffStatus *)onOffStatus __attribute__((swift_name("modifyApplianceOnOffStatus(controllableApplianceInfo:onOffStatus:)")));
- (NSString * _Nullable)modifyMinimumBrightPercentControllableApplianceInfo:(KmmprotocolmoduleControllableApplianceInfo *)controllableApplianceInfo minBrightPercent:(int32_t)minBrightPercent __attribute__((swift_name("modifyMinimumBrightPercent(controllableApplianceInfo:minBrightPercent:)")));
- (NSString * _Nullable)modifyOnOffBrightAdjustSpeedControllableApplianceInfo:(KmmprotocolmoduleControllableApplianceInfo *)controllableApplianceInfo adjustSpeed:(int32_t)adjustSpeed __attribute__((swift_name("modifyOnOffBrightAdjustSpeed(controllableApplianceInfo:adjustSpeed:)")));
- (NSString * _Nullable)modifyRGBDeviceTurnOnParaControllableApplianceInfo:(KmmprotocolmoduleControllableApplianceInfo *)controllableApplianceInfo para:(KmmprotocolmoduleParaStructure *)para __attribute__((swift_name("modifyRGBDeviceTurnOnPara(controllableApplianceInfo:para:)")));
- (NSString * _Nullable)modifyTurnOnBrightPercentControllableApplianceInfo:(KmmprotocolmoduleControllableApplianceInfo *)controllableApplianceInfo turnOnBrightPercent:(int32_t)turnOnBrightPercent __attribute__((swift_name("modifyTurnOnBrightPercent(controllableApplianceInfo:turnOnBrightPercent:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.ControlCmd")))
@interface KmmprotocolmoduleCommandControlCmd : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleCommandControlCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.ControlCmdCompanion")))
@interface KmmprotocolmoduleCommandControlCmdCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleCommandControlCmdCompanion *shared __attribute__((swift_name("shared")));
- (NSString * _Nullable)activateDetectableApplianceCmdDetectableApplianceInfo:(KmmprotocolmoduleDetectableApplianceInfo *)detectableApplianceInfo __attribute__((swift_name("activateDetectableApplianceCmd(detectableApplianceInfo:)")));
- (NSString * _Nullable)adjustableLightControlCmdControllableApplianceInfo:(KmmprotocolmoduleControllableApplianceInfo *)controllableApplianceInfo para:(KmmprotocolmoduleParaStructure *)para __attribute__((swift_name("adjustableLightControlCmd(controllableApplianceInfo:para:)")));
- (NSString * _Nullable)controlApplianceCmdControllableApplianceInfo:(KmmprotocolmoduleControllableApplianceInfo *)controllableApplianceInfo controlAction:(KmmprotocolmoduleCommandControlCmdControlAction *)controlAction __attribute__((swift_name("controlApplianceCmd(controllableApplianceInfo:controlAction:)")));
- (NSArray<NSString *> *)controlApplianceGroupCmdControllableApplianceInfoList:(NSArray<KmmprotocolmoduleControllableApplianceInfo *> *)controllableApplianceInfoList controlAction:(KmmprotocolmoduleCommandControlCmdControlAction *)controlAction __attribute__((swift_name("controlApplianceGroupCmd(controllableApplianceInfoList:controlAction:)")));
- (NSString * _Nullable)curtainControlCmdControllableApplianceInfo:(KmmprotocolmoduleControllableApplianceInfo *)controllableApplianceInfo curtainAction:(KmmprotocolmoduleParaStructureCurtainAction *)curtainAction __attribute__((swift_name("curtainControlCmd(controllableApplianceInfo:curtainAction:)")));
- (NSString * _Nullable)curtainWithLocationControlCmdControllableApplianceInfo:(KmmprotocolmoduleControllableApplianceInfo *)controllableApplianceInfo curtainLocationPercentage:(int32_t)curtainLocationPercentage __attribute__((swift_name("curtainWithLocationControlCmd(controllableApplianceInfo:curtainLocationPercentage:)")));
- (NSString * _Nullable)irControlCmdControllableApplianceInfo:(KmmprotocolmoduleControllableApplianceInfo *)controllableApplianceInfo irCmd:(KmmprotocolmoduleParaStructureIrCmd *)irCmd irIndex:(int32_t)irIndex __attribute__((swift_name("irControlCmd(controllableApplianceInfo:irCmd:irIndex:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.ControlCmdControlAction")))
@interface KmmprotocolmoduleCommandControlCmdControlAction : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleCommandControlCmdControlAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmmprotocolmoduleCommandControlCmdControlAction *on __attribute__((swift_name("on")));
@property (class, readonly) KmmprotocolmoduleCommandControlCmdControlAction *off __attribute__((swift_name("off")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleCommandControlCmdControlAction *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.GatewayCmd")))
@interface KmmprotocolmoduleCommandGatewayCmd : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleCommandGatewayCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.GatewayCmdCompanion")))
@interface KmmprotocolmoduleCommandGatewayCmdCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleCommandGatewayCmdCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)getGatewayFirmwareVersionCmdSn:(NSString *)sn __attribute__((swift_name("getGatewayFirmwareVersionCmd(sn:)")));
- (NSString *)startGatewayFirmwareUpgrade __attribute__((swift_name("startGatewayFirmwareUpgrade()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.GetInfoCmd")))
@interface KmmprotocolmoduleCommandGetInfoCmd : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleCommandGetInfoCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.GetInfoCmdCompanion")))
@interface KmmprotocolmoduleCommandGetInfoCmdCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleCommandGetInfoCmdCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)getAllInfoCmdSn:(NSString *)sn __attribute__((swift_name("getAllInfoCmd(sn:)")));
- (NSString *)getApplianceStatusCmdSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex __attribute__((swift_name("getApplianceStatusCmd(sn:deviceTypeSet:applianceIndex:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.LinkageCmd")))
@interface KmmprotocolmoduleCommandLinkageCmd : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleCommandLinkageCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.LinkageCmdAddUserActionListCmdReturnType")))
@interface KmmprotocolmoduleCommandLinkageCmdAddUserActionListCmdReturnType : KmmprotocolmoduleBase
- (instancetype)initWithSeq:(int64_t)seq cmd:(NSString *)cmd __attribute__((swift_name("init(seq:cmd:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (KmmprotocolmoduleCommandLinkageCmdAddUserActionListCmdReturnType *)doCopySeq:(int64_t)seq cmd:(NSString *)cmd __attribute__((swift_name("doCopy(seq:cmd:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int64_t seq __attribute__((swift_name("seq")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.LinkageCmdCompanion")))
@interface KmmprotocolmoduleCommandLinkageCmdCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleCommandLinkageCmdCompanion *shared __attribute__((swift_name("shared")));
- (NSArray<KmmprotocolmoduleCommandLinkageCmdAddUserActionListCmdReturnType *> *)addUserActionListCmdDetectableApplianceInfo:(KmmprotocolmoduleDetectableApplianceInfo *)detectableApplianceInfo bindApplianceInfoList:(NSArray<KmmprotocolmoduleCommandLinkageCmdUserActionInfoNew *> *)bindApplianceInfoList __attribute__((swift_name("addUserActionListCmd(detectableApplianceInfo:bindApplianceInfoList:)")));
- (NSString * _Nullable)bindUserActionListAndDetectableApplianceStatusListCmdDetectableApplianceInfo:(KmmprotocolmoduleDetectableApplianceInfo *)detectableApplianceInfo userActionIndexList:(NSArray<KmmprotocolmoduleInt *> *)userActionIndexList detectableApplianceStatusList:(NSArray<KmmprotocolmoduleDetectableApplianceStatus *> *)detectableApplianceStatusList __attribute__((swift_name("bindUserActionListAndDetectableApplianceStatusListCmd(detectableApplianceInfo:userActionIndexList:detectableApplianceStatusList:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.LinkageCmdUserActionInfoNew")))
@interface KmmprotocolmoduleCommandLinkageCmdUserActionInfoNew : KmmprotocolmoduleBase
- (instancetype)initWithDevTypeSet:(KmmprotocolmoduleDeviceTypeSet *)devTypeSet applianceIndex:(int32_t)applianceIndex action:(BOOL)action para:(KmmprotocolmoduleParaStructure *)para __attribute__((swift_name("init(devTypeSet:applianceIndex:action:para:)"))) __attribute__((objc_designated_initializer));
- (KmmprotocolmoduleDeviceTypeSet *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (KmmprotocolmoduleParaStructure *)component4 __attribute__((swift_name("component4()")));
- (KmmprotocolmoduleCommandLinkageCmdUserActionInfoNew *)doCopyDevTypeSet:(KmmprotocolmoduleDeviceTypeSet *)devTypeSet applianceIndex:(int32_t)applianceIndex action:(BOOL)action para:(KmmprotocolmoduleParaStructure *)para __attribute__((swift_name("doCopy(devTypeSet:applianceIndex:action:para:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL action __attribute__((swift_name("action")));
@property (readonly) int32_t applianceIndex __attribute__((swift_name("applianceIndex")));
@property (readonly) KmmprotocolmoduleDeviceTypeSet *devTypeSet __attribute__((swift_name("devTypeSet")));
@property (readonly) KmmprotocolmoduleParaStructure *para __attribute__((swift_name("para")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.TimerCmd")))
@interface KmmprotocolmoduleCommandTimerCmd : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleCommandTimerCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.TimerCmdCompanion")))
@interface KmmprotocolmoduleCommandTimerCmdCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleCommandTimerCmdCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)addTimerV1CmdControllableApplianceInfo:(KmmprotocolmoduleControllableApplianceInfo *)controllableApplianceInfo timestamp:(int64_t)timestamp enable:(BOOL)enable action:(BOOL)action weekMaskFromUserTimezone:(KmmprotocolmoduleWeekMask *)weekMaskFromUserTimezone __attribute__((swift_name("addTimerV1Cmd(controllableApplianceInfo:timestamp:enable:action:weekMaskFromUserTimezone:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (NSString *)addTimerV2CmdSn:(NSString *)sn userActionIndexList:(NSArray<KmmprotocolmoduleInt *> *)userActionIndexList detectableApplianceStatusList:(NSArray<KmmprotocolmoduleDetectableApplianceStatus *> *)detectableApplianceStatusList timestamp:(int64_t)timestamp enable:(BOOL)enable weekMaskFromUserTimezone:(KmmprotocolmoduleWeekMask *)weekMaskFromUserTimezone __attribute__((swift_name("addTimerV2Cmd(sn:userActionIndexList:detectableApplianceStatusList:timestamp:enable:weekMaskFromUserTimezone:)")));
- (NSString *)deleteTimerV1CmdSn:(NSString *)sn timerIndex:(int32_t)timerIndex __attribute__((swift_name("deleteTimerV1Cmd(sn:timerIndex:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (NSString *)deleteTimerV2CmdSn:(NSString *)sn timerIndex:(int32_t)timerIndex __attribute__((swift_name("deleteTimerV2Cmd(sn:timerIndex:)")));
- (NSString *)getTimerV1CmdSn:(NSString *)sn __attribute__((swift_name("getTimerV1Cmd(sn:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (NSString *)modifyTimerV1CmdTimerIndex:(int32_t)timerIndex controllableApplianceInfo:(KmmprotocolmoduleControllableApplianceInfo *)controllableApplianceInfo timestamp:(int64_t)timestamp enable:(BOOL)enable action:(BOOL)action weekMaskFromUserTimezone:(KmmprotocolmoduleWeekMask *)weekMaskFromUserTimezone __attribute__((swift_name("modifyTimerV1Cmd(timerIndex:controllableApplianceInfo:timestamp:enable:action:weekMaskFromUserTimezone:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (NSString *)modifyTimerV2CmdSn:(NSString *)sn timerIndex:(int32_t)timerIndex userActionIndexList:(NSArray<KmmprotocolmoduleInt *> *)userActionIndexList detectableApplianceStatusList:(NSArray<KmmprotocolmoduleDetectableApplianceStatus *> *)detectableApplianceStatusList timestamp:(int64_t)timestamp enable:(BOOL)enable weekMaskFromUserTimezone:(KmmprotocolmoduleWeekMask *)weekMaskFromUserTimezone __attribute__((swift_name("modifyTimerV2Cmd(sn:timerIndex:userActionIndexList:detectableApplianceStatusList:timestamp:enable:weekMaskFromUserTimezone:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Parser")))
@interface KmmprotocolmoduleParser : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)parser __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleParser *shared __attribute__((swift_name("shared")));
- (KmmprotocolmoduleParserResult * _Nullable)parseMessage:(NSString *)message __attribute__((swift_name("parse(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseInfo")))
@interface KmmprotocolmoduleBaseInfo : KmmprotocolmoduleBase
- (instancetype)initWithBaseContent:(KmmprotocolmoduleProtocolContentBaseContent *)baseContent __attribute__((swift_name("init(baseContent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleBaseInfoCompanion *companion __attribute__((swift_name("companion")));
@property KmmprotocolmoduleCmd * _Nullable cmd __attribute__((swift_name("cmd")));
@property KmmprotocolmoduleErrorCode *errorCode __attribute__((swift_name("errorCode")));
@property KmmprotocolmoduleFirmwareVersion * _Nullable fwVersion __attribute__((swift_name("fwVersion")));
@property KmmprotocolmoduleLong * _Nullable seq __attribute__((swift_name("seq")));
@property NSString * _Nullable sn __attribute__((swift_name("sn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseInfo.Companion")))
@interface KmmprotocolmoduleBaseInfoCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleBaseInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo")))
@interface KmmprotocolmoduleControllableApplianceInfo : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn devType:(KmmprotocolmoduleDeviceTypeSet *)devType applianceIndex:(int32_t)applianceIndex __attribute__((swift_name("init(sn:devType:applianceIndex:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleControllableApplianceInfoCompanion *companion __attribute__((swift_name("companion")));
@property KmmprotocolmoduleControllableApplianceInfoAirQualityInfo * _Nullable airQualityInfo __attribute__((swift_name("airQualityInfo")));
@property KmmprotocolmoduleControllableApplianceInfoAirQualityPlusInfo * _Nullable airQualityPlusInfo __attribute__((swift_name("airQualityPlusInfo")));
@property int32_t applianceIndex __attribute__((swift_name("applianceIndex")));
@property KmmprotocolmoduleControllableApplianceInfoConfInfo * _Nullable confInfo __attribute__((swift_name("confInfo")));
@property KmmprotocolmoduleDeviceTypeSet *devType __attribute__((swift_name("devType")));
@property KmmprotocolmoduleInt * _Nullable deviceIndex __attribute__((swift_name("deviceIndex")));
@property KmmprotocolmoduleFirmwareVersion * _Nullable fwVersion __attribute__((swift_name("fwVersion")));
@property NSArray<KmmprotocolmoduleControllableApplianceInfoIrInfo *> * _Nullable irInfoList __attribute__((swift_name("irInfoList")));
@property KmmprotocolmoduleBoolean * _Nullable ledStatus __attribute__((swift_name("ledStatus")));
@property KmmprotocolmoduleBoolean * _Nullable onlineStatus __attribute__((swift_name("onlineStatus")));
@property KmmprotocolmoduleParaStructure * _Nullable para __attribute__((swift_name("para")));
@property KmmprotocolmoduleOnOffStatus * _Nullable powerOnStatus __attribute__((swift_name("powerOnStatus")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@property KmmprotocolmoduleBoolean * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.AirQualityInfo")))
@interface KmmprotocolmoduleControllableApplianceInfoAirQualityInfo : KmmprotocolmoduleBase
- (instancetype)initWithPm1_0Raw:(int32_t)pm1_0Raw pm2_5Raw:(int32_t)pm2_5Raw pm10Raw:(int32_t)pm10Raw hchoRaw:(int32_t)hchoRaw tvocRaw:(int32_t)tvocRaw temperatureRaw:(int32_t)temperatureRaw humidityRaw:(int32_t)humidityRaw aqiRaw:(int32_t)aqiRaw sn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex subDevType:(int32_t)subDevType __attribute__((swift_name("init(pm1_0Raw:pm2_5Raw:pm10Raw:hchoRaw:tvocRaw:temperatureRaw:humidityRaw:aqiRaw:sn:deviceTypeSet:applianceIndex:subDevType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleControllableApplianceInfoAirQualityInfoCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.AirQualityInfoCompanion")))
@interface KmmprotocolmoduleControllableApplianceInfoAirQualityInfoCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleControllableApplianceInfoAirQualityInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.AirQualityPlusInfo")))
@interface KmmprotocolmoduleControllableApplianceInfoAirQualityPlusInfo : KmmprotocolmoduleBase
- (instancetype)initWithSubDevType:(int32_t)subDevType pm1_0Raw:(int32_t)pm1_0Raw pm2_5Raw:(int32_t)pm2_5Raw pm10Raw:(int32_t)pm10Raw hchoRaw:(int32_t)hchoRaw tvocRaw:(int32_t)tvocRaw temperatureRaw:(int32_t)temperatureRaw humidityRaw:(int32_t)humidityRaw co2Raw:(int32_t)co2Raw luxRaw:(int32_t)luxRaw aqiRaw:(int32_t)aqiRaw battRaw:(int32_t)battRaw sn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex __attribute__((swift_name("init(subDevType:pm1_0Raw:pm2_5Raw:pm10Raw:hchoRaw:tvocRaw:temperatureRaw:humidityRaw:co2Raw:luxRaw:aqiRaw:battRaw:sn:deviceTypeSet:applianceIndex:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleControllableApplianceInfoAirQualityPlusInfoCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.AirQualityPlusInfoCompanion")))
@interface KmmprotocolmoduleControllableApplianceInfoAirQualityPlusInfoCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleControllableApplianceInfoAirQualityPlusInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.Companion")))
@interface KmmprotocolmoduleControllableApplianceInfoCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleControllableApplianceInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.ConfInfo")))
@interface KmmprotocolmoduleControllableApplianceInfoConfInfo : KmmprotocolmoduleBase
- (instancetype)initWithDeviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet turnOnModeRaw:(int32_t)turnOnModeRaw turnOnBrightPercentRaw:(int32_t)turnOnBrightPercentRaw minBrightPercentRaw:(int32_t)minBrightPercentRaw brightAdjSpeedRaw:(int32_t)brightAdjSpeedRaw onOffBrightAdjSpeedRaw:(int32_t)onOffBrightAdjSpeedRaw slowlyOnBrightAdjSpeedRaw:(int32_t)slowlyOnBrightAdjSpeedRaw slowlyOffBrightAdjSpeedRaw:(int32_t)slowlyOffBrightAdjSpeedRaw turnOnBrightPercentRawList:(NSArray<KmmprotocolmoduleInt *> *)turnOnBrightPercentRawList __attribute__((swift_name("init(deviceTypeSet:turnOnModeRaw:turnOnBrightPercentRaw:minBrightPercentRaw:brightAdjSpeedRaw:onOffBrightAdjSpeedRaw:slowlyOnBrightAdjSpeedRaw:slowlyOffBrightAdjSpeedRaw:turnOnBrightPercentRawList:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleControllableApplianceInfoConfInfoCompanion *companion __attribute__((swift_name("companion")));
@property int32_t brightAdjSpeed __attribute__((swift_name("brightAdjSpeed")));
@property KmmprotocolmoduleParaStructure *minBrightPercent __attribute__((swift_name("minBrightPercent")));
@property int32_t onOffBrightAdjSpeed __attribute__((swift_name("onOffBrightAdjSpeed")));
@property int32_t slowlyOffBrightAdjSpeed __attribute__((swift_name("slowlyOffBrightAdjSpeed")));
@property int32_t slowlyOnBrightAdjSpeed __attribute__((swift_name("slowlyOnBrightAdjSpeed")));
@property KmmprotocolmoduleParaStructure *turnOnBrightPercent __attribute__((swift_name("turnOnBrightPercent")));
@property KmmprotocolmoduleControllableApplianceInfoConfInfoTurnOnMode *turnOnMode __attribute__((swift_name("turnOnMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.ConfInfoCompanion")))
@interface KmmprotocolmoduleControllableApplianceInfoConfInfoCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleControllableApplianceInfoConfInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.ConfInfoTurnOnMode")))
@interface KmmprotocolmoduleControllableApplianceInfoConfInfoTurnOnMode : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleControllableApplianceInfoConfInfoTurnOnMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmprotocolmoduleControllableApplianceInfoConfInfoTurnOnModeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmmprotocolmoduleControllableApplianceInfoConfInfoTurnOnMode *userdefault __attribute__((swift_name("userdefault")));
@property (class, readonly) KmmprotocolmoduleControllableApplianceInfoConfInfoTurnOnMode *turnoffvalue __attribute__((swift_name("turnoffvalue")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleControllableApplianceInfoConfInfoTurnOnMode *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.ConfInfoTurnOnModeCompanion")))
@interface KmmprotocolmoduleControllableApplianceInfoConfInfoTurnOnModeCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleControllableApplianceInfoConfInfoTurnOnModeCompanion *shared __attribute__((swift_name("shared")));
- (KmmprotocolmoduleControllableApplianceInfoConfInfoTurnOnMode * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.IrInfo")))
@interface KmmprotocolmoduleControllableApplianceInfoIrInfo : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn deviceTypeSet:(KmmprotocolmoduleDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex para:(KmmprotocolmoduleParaStructure *)para __attribute__((swift_name("init(sn:deviceTypeSet:applianceIndex:para:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleControllableApplianceInfoIrInfoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t applianceIndex __attribute__((swift_name("applianceIndex")));
@property (readonly) KmmprotocolmoduleDeviceTypeSet *deviceTypeSet __attribute__((swift_name("deviceTypeSet")));
@property (readonly) KmmprotocolmoduleParaStructure *para __attribute__((swift_name("para")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.IrInfoCompanion")))
@interface KmmprotocolmoduleControllableApplianceInfoIrInfoCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleControllableApplianceInfoIrInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableDeviceInfo")))
@interface KmmprotocolmoduleControllableDeviceInfo : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn outputDevContent:(KmmprotocolmoduleProtocolContentOutputDevContent *)outputDevContent __attribute__((swift_name("init(sn:outputDevContent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleControllableDeviceInfoCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<KmmprotocolmoduleDeviceTypeSet *> * _Nullable installedControllableDeviceTypeList __attribute__((swift_name("installedControllableDeviceTypeList")));
@property NSArray<KmmprotocolmoduleControllableApplianceInfoAirQualityInfo *> * _Nullable updatedAirQualityInfoList __attribute__((swift_name("updatedAirQualityInfoList")));
@property NSArray<KmmprotocolmoduleControllableApplianceInfoAirQualityPlusInfo *> * _Nullable updatedAirQualityPlusInfoList __attribute__((swift_name("updatedAirQualityPlusInfoList")));
@property NSArray<KmmprotocolmoduleControllableApplianceInfo *> * _Nullable updatedControllableApplianceInfoList __attribute__((swift_name("updatedControllableApplianceInfoList")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableDeviceInfo.Companion")))
@interface KmmprotocolmoduleControllableDeviceInfoCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleControllableDeviceInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultAction")))
@interface KmmprotocolmoduleDefaultAction : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleDefaultAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmprotocolmoduleDefaultActionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmmprotocolmoduleDefaultAction *alarm __attribute__((swift_name("alarm")));
@property (class, readonly) KmmprotocolmoduleDefaultAction *apppushnotification __attribute__((swift_name("apppushnotification")));
@property (class, readonly) KmmprotocolmoduleDefaultAction *phonemessage __attribute__((swift_name("phonemessage")));
@property (class, readonly) KmmprotocolmoduleDefaultAction *phonecall __attribute__((swift_name("phonecall")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleDefaultAction *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultAction.Companion")))
@interface KmmprotocolmoduleDefaultActionCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleDefaultActionCompanion *shared __attribute__((swift_name("shared")));
- (KmmprotocolmoduleDefaultAction * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectableApplianceInfo")))
@interface KmmprotocolmoduleDetectableApplianceInfo : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn triggerPara:(KmmprotocolmoduleTriggerPara *)triggerPara triggerStatus:(NSArray<KmmprotocolmoduleBoolean *> * _Nullable)triggerStatus noDisableTrigger:(NSArray<KmmprotocolmoduleBoolean *> * _Nullable)noDisableTrigger fwVersion:(KmmprotocolmoduleFirmwareVersion * _Nullable)fwVersion __attribute__((swift_name("init(sn:triggerPara:triggerStatus:noDisableTrigger:fwVersion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleDetectableApplianceInfoCompanion *companion __attribute__((swift_name("companion")));
@property int32_t activateDelay __attribute__((swift_name("activateDelay")));
@property KmmprotocolmoduleInt * _Nullable applianceIndex __attribute__((swift_name("applianceIndex")));
@property NSArray<KmmprotocolmoduleDetectableApplianceStatus *> * _Nullable bindDetectableApplianceStatusList __attribute__((swift_name("bindDetectableApplianceStatusList")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable bindUserActionIndexList __attribute__((swift_name("bindUserActionIndexList")));
@property NSArray<KmmprotocolmoduleDefaultAction *> * _Nullable defaultActionList __attribute__((swift_name("defaultActionList"))) __attribute__((deprecated("defaultActionList 已弃用")));
@property KmmprotocolmoduleDeviceTypeSet * _Nullable devType __attribute__((swift_name("devType")));
@property KmmprotocolmoduleInt * _Nullable deviceIndex __attribute__((swift_name("deviceIndex")));
@property KmmprotocolmoduleFirmwareVersion * _Nullable fwVersion __attribute__((swift_name("fwVersion")));
@property BOOL isEmergency __attribute__((swift_name("isEmergency")));
@property NSString *sn __attribute__((swift_name("sn")));
@property BOOL status __attribute__((swift_name("status")));
@property KmmprotocolmoduleInt * _Nullable subIndex __attribute__((swift_name("subIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectableApplianceInfo.Companion")))
@interface KmmprotocolmoduleDetectableApplianceInfoCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleDetectableApplianceInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectableApplianceStatus")))
@interface KmmprotocolmoduleDetectableApplianceStatus : KmmprotocolmoduleBase
- (instancetype)initWithApplianceIndex:(int32_t)applianceIndex status:(BOOL)status __attribute__((swift_name("init(applianceIndex:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleDetectableApplianceStatusCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (KmmprotocolmoduleDetectableApplianceStatus *)doCopyApplianceIndex:(int32_t)applianceIndex status:(BOOL)status __attribute__((swift_name("doCopy(applianceIndex:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t applianceIndex __attribute__((swift_name("applianceIndex")));
@property (readonly) BOOL status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectableApplianceStatus.Companion")))
@interface KmmprotocolmoduleDetectableApplianceStatusCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleDetectableApplianceStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectableDeviceInfo")))
@interface KmmprotocolmoduleDetectableDeviceInfo : KmmprotocolmoduleBase
- (instancetype)initWithSn:(NSString *)sn inputDevContent:(KmmprotocolmoduleProtocolContentInputDevContent *)inputDevContent __attribute__((swift_name("init(sn:inputDevContent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleDetectableDeviceInfoCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable installedDetectableApplianceIndexList __attribute__((swift_name("installedDetectableApplianceIndexList")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable installedUserActionIndexList __attribute__((swift_name("installedUserActionIndexList")));
@property NSArray<KmmprotocolmoduleDetectableApplianceInfo *> * _Nullable updatedDetectableApplianceInfoList __attribute__((swift_name("updatedDetectableApplianceInfoList")));
@property NSArray<KmmprotocolmoduleUserAction *> * _Nullable updatedUserActionList __attribute__((swift_name("updatedUserActionList")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectableDeviceInfo.Companion")))
@interface KmmprotocolmoduleDetectableDeviceInfoCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleDetectableDeviceInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode")))
@interface KmmprotocolmoduleErrorCode : KmmprotocolmoduleKotlinEnum<KmmprotocolmoduleErrorCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmmprotocolmoduleErrorCodeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmmprotocolmoduleErrorCode *noerror __attribute__((swift_name("noerror")));
@property (class, readonly) KmmprotocolmoduleErrorCode *timerreachmax __attribute__((swift_name("timerreachmax")));
@property (class, readonly) KmmprotocolmoduleErrorCode *timernotexist __attribute__((swift_name("timernotexist")));
@property (class, readonly) KmmprotocolmoduleErrorCode *deviceamountreachmax __attribute__((swift_name("deviceamountreachmax")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleErrorCode *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.Companion")))
@interface KmmprotocolmoduleErrorCodeCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleErrorCodeCompanion *shared __attribute__((swift_name("shared")));
- (KmmprotocolmoduleErrorCode * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParserResult")))
@interface KmmprotocolmoduleParserResult : KmmprotocolmoduleBase
- (instancetype)initWithParaContent:(KmmprotocolmoduleProtocolContent *)paraContent __attribute__((swift_name("init(paraContent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleParserResultCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)stringify __attribute__((swift_name("stringify()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KmmprotocolmoduleBaseInfo * _Nullable baseInfo __attribute__((swift_name("baseInfo")));
@property KmmprotocolmoduleControllableDeviceInfo * _Nullable controllableDeviceInfo __attribute__((swift_name("controllableDeviceInfo")));
@property KmmprotocolmoduleDetectableDeviceInfo * _Nullable detectableDeviceInfo __attribute__((swift_name("detectableDeviceInfo")));
@property KmmprotocolmoduleTimerInfo * _Nullable timerInfo __attribute__((swift_name("timerInfo")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParserResult.Companion")))
@interface KmmprotocolmoduleParserResultCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleParserResultCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerInfo")))
@interface KmmprotocolmoduleTimerInfo : KmmprotocolmoduleBase
- (instancetype)initWithTimerContent:(KmmprotocolmoduleProtocolContentTimerContent *)timerContent __attribute__((swift_name("init(timerContent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleTimerInfoCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable installedTimerIndexList __attribute__((swift_name("installedTimerIndexList")));
@property NSArray<KmmprotocolmoduleTimerV1Para *> * _Nullable timerV1ParaList __attribute__((swift_name("timerV1ParaList"))) __attribute__((deprecated("timerV1 已弃用")));
@property NSArray<KmmprotocolmoduleTimerV2Para *> * _Nullable timerV2ParaList __attribute__((swift_name("timerV2ParaList")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerInfo.Companion")))
@interface KmmprotocolmoduleTimerInfoCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleTimerInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerV1ApplianceAction")))
@interface KmmprotocolmoduleTimerV1ApplianceAction : KmmprotocolmoduleBase
- (instancetype)initWithApplianceIndex:(int32_t)applianceIndex action:(BOOL)action __attribute__((swift_name("init(applianceIndex:action:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleTimerV1ApplianceActionCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (KmmprotocolmoduleTimerV1ApplianceAction *)doCopyApplianceIndex:(int32_t)applianceIndex action:(BOOL)action __attribute__((swift_name("doCopy(applianceIndex:action:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL action __attribute__((swift_name("action")));
@property int32_t applianceIndex __attribute__((swift_name("applianceIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerV1ApplianceAction.Companion")))
@interface KmmprotocolmoduleTimerV1ApplianceActionCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleTimerV1ApplianceActionCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerV1Para")))
@interface KmmprotocolmoduleTimerV1Para : KmmprotocolmoduleBase
- (instancetype)initWithTimerParaV1:(KmmprotocolmoduleTimerParaV1 *)timerParaV1 __attribute__((swift_name("init(timerParaV1:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleTimerV1ParaCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<KmmprotocolmoduleTimerV1ApplianceAction *> *applianceActionList __attribute__((swift_name("applianceActionList")));
@property KmmprotocolmoduleDeviceTypeSet *devType __attribute__((swift_name("devType")));
@property BOOL enable __attribute__((swift_name("enable")));
@property int64_t posix __attribute__((swift_name("posix")));
@property int32_t timerIndex __attribute__((swift_name("timerIndex")));
@property KmmprotocolmoduleWeekMask *weekMaskForUserTimeZone __attribute__((swift_name("weekMaskForUserTimeZone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerV1Para.Companion")))
@interface KmmprotocolmoduleTimerV1ParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleTimerV1ParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerV2Para")))
@interface KmmprotocolmoduleTimerV2Para : KmmprotocolmoduleBase
- (instancetype)initWithTimerParaV2:(KmmprotocolmoduleTimerParaV2 *)timerParaV2 __attribute__((swift_name("init(timerParaV2:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleTimerV2ParaCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<KmmprotocolmoduleInt *> * _Nullable bindActionIndexList __attribute__((swift_name("bindActionIndexList")));
@property NSArray<KmmprotocolmoduleDetectableApplianceStatus *> * _Nullable bindDetectableApplianceStatusList __attribute__((swift_name("bindDetectableApplianceStatusList")));
@property BOOL enable __attribute__((swift_name("enable")));
@property int64_t posix __attribute__((swift_name("posix")));
@property int32_t timerIndex __attribute__((swift_name("timerIndex")));
@property KmmprotocolmoduleWeekMask *weekMaskForUserTimeZone __attribute__((swift_name("weekMaskForUserTimeZone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerV2Para.Companion")))
@interface KmmprotocolmoduleTimerV2ParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleTimerV2ParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserAction")))
@interface KmmprotocolmoduleUserAction : KmmprotocolmoduleBase
- (instancetype)initWithUserActionPara:(KmmprotocolmoduleUserActionPara *)userActionPara __attribute__((swift_name("init(userActionPara:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmmprotocolmoduleUserActionCompanion *companion __attribute__((swift_name("companion")));
@property int32_t actionIndex __attribute__((swift_name("actionIndex")));
@property NSArray<KmmprotocolmoduleUserActionAppliancePara *> * _Nullable applianceParaList __attribute__((swift_name("applianceParaList")));
@property KmmprotocolmoduleDeviceTypeSet *devType __attribute__((swift_name("devType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserAction.Companion")))
@interface KmmprotocolmoduleUserActionCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleUserActionCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserActionAppliancePara")))
@interface KmmprotocolmoduleUserActionAppliancePara : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleUserActionApplianceParaCompanion *companion __attribute__((swift_name("companion")));
@property BOOL action __attribute__((swift_name("action")));
@property int32_t applianceIndex __attribute__((swift_name("applianceIndex")));
@property KmmprotocolmoduleParaStructure *para __attribute__((swift_name("para")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserActionAppliancePara.Companion")))
@interface KmmprotocolmoduleUserActionApplianceParaCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleUserActionApplianceParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KmmprotocolmoduleKotlinArray<T> : KmmprotocolmoduleBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KmmprotocolmoduleInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KmmprotocolmoduleKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface KmmprotocolmoduleKotlinArray (Extensions)
- (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleKotlinArray<id> *> *)chunkedSliceSize:(int32_t)sliceSize __attribute__((swift_name("chunked(sliceSize:)")));
- (uint32_t)fromBigEndianArrayToUInt __attribute__((swift_name("fromBigEndianArrayToUInt()")));
- (uint64_t)fromBigEndianArrayToULong __attribute__((swift_name("fromBigEndianArrayToULong()")));
- (uint32_t)fromLittleEndianArrayToUInt __attribute__((swift_name("fromLittleEndianArrayToUInt()")));
- (uint64_t)fromLittleEndianArrayToULong __attribute__((swift_name("fromLittleEndianArrayToULong()")));
- (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleUByte *> *)xorOther:(KmmprotocolmoduleKotlinArray<KmmprotocolmoduleUByte *> *)other __attribute__((swift_name("xor(other:)")));
@end;

@interface KmmprotocolmoduleProtocolContent (Extensions)
- (void)parseBaseInfoJsonObject:(NSDictionary<NSString *, KmmprotocolmoduleKotlinx_serialization_jsonJsonElement *> *)jsonObject __attribute__((swift_name("parseBaseInfo(jsonObject:)")));
- (void)parseInputDeviceContentJsonObject:(NSDictionary<NSString *, KmmprotocolmoduleKotlinx_serialization_jsonJsonElement *> *)jsonObject __attribute__((swift_name("parseInputDeviceContent(jsonObject:)")));
- (void)parseOutputDeviceContentJsonObject:(NSDictionary<NSString *, KmmprotocolmoduleKotlinx_serialization_jsonJsonElement *> *)jsonObject __attribute__((swift_name("parseOutputDeviceContent(jsonObject:)")));
- (void)parseTimerContentJsonObject:(NSDictionary<NSString *, KmmprotocolmoduleKotlinx_serialization_jsonJsonElement *> *)jsonObject __attribute__((swift_name("parseTimerContent(jsonObject:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataTypeExtensionKt")))
@interface KmmprotocolmoduleDataTypeExtensionKt : KmmprotocolmoduleBase
+ (int32_t)toInt:(BOOL)receiver __attribute__((swift_name("toInt(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HashFunctionKt")))
@interface KmmprotocolmoduleHashFunctionKt : KmmprotocolmoduleBase
+ (NSString *)decodeToString:(id)receiver __attribute__((swift_name("decodeToString(_:)")));
+ (id)encodeToUByteArray:(NSString *)receiver __attribute__((swift_name("encodeToUByteArray(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilKt")))
@interface KmmprotocolmoduleUtilKt : KmmprotocolmoduleBase
+ (NSArray<id> *)arrayChunked:(id)receiver sliceSize:(int32_t)sliceSize __attribute__((swift_name("arrayChunked(_:sliceSize:)")));
+ (id)flattenToUByteArray:(id)receiver __attribute__((swift_name("flattenToUByteArray(_:)")));
+ (uint32_t)fromLittleEndianArrayToUInt:(id)receiver __attribute__((swift_name("fromLittleEndianArrayToUInt(_:)")));
+ (uint64_t)fromLittleEndianArrayToULong:(id)receiver __attribute__((swift_name("fromLittleEndianArrayToULong(_:)")));
+ (id)plus:(uint32_t)receiver other:(id)other __attribute__((swift_name("plus(_:other:)")));
+ (uint32_t)rotateRight:(uint32_t)receiver places:(int32_t)places __attribute__((swift_name("rotateRight(_:places:)")));
+ (uint64_t)rotateRight:(uint64_t)receiver places_:(int32_t)places __attribute__((swift_name("rotateRight(_:places_:)")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleUByte *> *)toBigEndianUByteArray:(uint32_t)receiver __attribute__((swift_name("toBigEndianUByteArray(_:)")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleUByte *> *)toBigEndianUByteArray_:(uint64_t)receiver __attribute__((swift_name("toBigEndianUByteArray(__:)")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleUByte *> *)toLittleEndianTypedUByteArray:(uint32_t)receiver __attribute__((swift_name("toLittleEndianTypedUByteArray(_:)")));
+ (KmmprotocolmoduleKotlinArray<KmmprotocolmoduleUByte *> *)toLittleEndianTypedUByteArray_:(uint64_t)receiver __attribute__((swift_name("toLittleEndianTypedUByteArray(__:)")));
+ (id)toLittleEndianUByteArray:(uint32_t)receiver __attribute__((swift_name("toLittleEndianUByteArray(_:)")));
+ (id)toLittleEndianUByteArray_:(uint64_t)receiver __attribute__((swift_name("toLittleEndianUByteArray(__:)")));
+ (id)xor:(id)receiver other:(id)other __attribute__((swift_name("xor(_:other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParserUtilKt")))
@interface KmmprotocolmoduleParserUtilKt : KmmprotocolmoduleBase
+ (id _Nullable)value:(NSDictionary<NSString *, KmmprotocolmoduleKotlinx_serialization_jsonJsonElement *> *)receiver key:(NSString *)key __attribute__((swift_name("value(_:key:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KmmprotocolmoduleKotlinByteArray : KmmprotocolmoduleBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KmmprotocolmoduleByte *(^)(KmmprotocolmoduleInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KmmprotocolmoduleKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface KmmprotocolmoduleKotlinCharArray : KmmprotocolmoduleBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(KmmprotocolmoduleInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KmmprotocolmoduleKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface KmmprotocolmoduleKotlinx_serialization_jsonJsonElement : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmmprotocolmoduleKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KmmprotocolmoduleKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KmmprotocolmoduleKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KmmprotocolmoduleKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KmmprotocolmoduleKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KmmprotocolmoduleKotlinx_serialization_coreKSerializer <KmmprotocolmoduleKotlinx_serialization_coreSerializationStrategy, KmmprotocolmoduleKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KmmprotocolmoduleKotlinEnumCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol KmmprotocolmoduleKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface KmmprotocolmoduleKotlinByteIterator : KmmprotocolmoduleBase <KmmprotocolmoduleKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KmmprotocolmoduleByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface KmmprotocolmoduleKotlinCharIterator : KmmprotocolmoduleBase <KmmprotocolmoduleKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface KmmprotocolmoduleKotlinx_serialization_jsonJsonElementCompanion : KmmprotocolmoduleBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmmprotocolmoduleKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KmmprotocolmoduleKotlinx_serialization_coreEncoder
@required
- (id<KmmprotocolmoduleKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<KmmprotocolmoduleKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KmmprotocolmoduleKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KmmprotocolmoduleKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<KmmprotocolmoduleKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<KmmprotocolmoduleKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) KmmprotocolmoduleKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KmmprotocolmoduleKotlinx_serialization_coreDecoder
@required
- (id<KmmprotocolmoduleKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (KmmprotocolmoduleKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KmmprotocolmoduleKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KmmprotocolmoduleKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KmmprotocolmoduleKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KmmprotocolmoduleKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmmprotocolmoduleKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmmprotocolmoduleKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KmmprotocolmoduleKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KmmprotocolmoduleKotlinx_serialization_coreSerializersModule : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<KmmprotocolmoduleKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KmmprotocolmoduleKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmmprotocolmoduleKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmmprotocolmoduleKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol KmmprotocolmoduleKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KmmprotocolmoduleKotlinx_serialization_coreSerialKind : KmmprotocolmoduleBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KmmprotocolmoduleKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KmmprotocolmoduleKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmmprotocolmoduleKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmmprotocolmoduleKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KmmprotocolmoduleKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KmmprotocolmoduleKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KmmprotocolmoduleKotlinNothing : KmmprotocolmoduleBase
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KmmprotocolmoduleKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KmmprotocolmoduleKotlinKClass>)kClass provider:(id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KmmprotocolmoduleKotlinKClass>)kClass serializer:(id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KmmprotocolmoduleKotlinKClass>)baseClass actualClass:(id<KmmprotocolmoduleKotlinKClass>)actualClass actualSerializer:(id<KmmprotocolmoduleKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KmmprotocolmoduleKotlinKClass>)baseClass defaultDeserializerProvider:(id<KmmprotocolmoduleKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<KmmprotocolmoduleKotlinKClass>)baseClass defaultDeserializerProvider:(id<KmmprotocolmoduleKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<KmmprotocolmoduleKotlinKClass>)baseClass defaultSerializerProvider:(id<KmmprotocolmoduleKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KmmprotocolmoduleKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KmmprotocolmoduleKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol KmmprotocolmoduleKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol KmmprotocolmoduleKotlinKClass <KmmprotocolmoduleKotlinKDeclarationContainer, KmmprotocolmoduleKotlinKAnnotatedElement, KmmprotocolmoduleKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
