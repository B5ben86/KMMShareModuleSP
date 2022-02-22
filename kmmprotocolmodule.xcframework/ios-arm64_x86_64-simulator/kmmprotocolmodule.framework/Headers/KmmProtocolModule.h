#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KPMHexToolKitCompanion, KPMMeasureTimeKitCompanion, KPMUtilityToolKitCompanion, KPMKMMLoggerCompanion, KPMCommandResponseCallbackCache, KPMCmd, KPMParserResult, KPMBase64, KPMBase64Decoder, KPMBase64Encoder, KPMBase64DecoderCompanion, KPMKotlinByteArray, KPMBase64EncoderCompanion, KPMKotlinCharArray, KPMSha256Properties, KPMSha256PureCompanion, KPMKotlinArray<T>, KPMSha512Properties, KPMSha512PureCompanion, KPML1DataCryptorCompanion, KPMKotlinx_serialization_jsonJsonElement, KPML1DataCryptorL1CmdCompanion, KPML1DataCryptorL1Cmd, KPML2DataCryptorCompanion, KPML2DataCryptorL2CmdCompanion, KPML2DataCryptorL2Cmd, KPMUserPwdGeneratorCompanion, KPMKotlinEnumCompanion, KPMKotlinEnum<E>, KPMCmdTypeCompanion, KPMCmdType, KPMProtocolParserCompanion, KPMProtocolContent, KPMProtocolContentCompanion, KPMProtocolContentBaseContent, KPMProtocolContentInputDevContent, KPMProtocolContentOutputDevContent, KPMProtocolContentTimerContent, KPMProtocolContentBaseContentCompanion, KPMFactoryID, KPMFirmwareVersion, KPMProductionID, KPMProtocolVersion, KPMProtocolContentInputDevContentCompanion, KPMTriggerPara, KPMUserActionPara, KPMProtocolContentOutputDevContentCompanion, KPMDeviceTypeSet, KPMDevicePara, KPMProtocolContentTimerContentCompanion, KPMTimerParaV1, KPMTimerParaV2, KPMDeviceParaCompanion, KPMOnOffStatus, KPMFirmwareVersionCompanion, KPMParaStructureCompanion, KPMParaStructureRgbwType, KPMParaStructureIrValueType, KPMParaStructureRgbwAction, KPMParaStructureCurtainAction, KPMParaStructureCurtainWithLocAction, KPMParaStructureIrCmd, KPMParaStructureParaAction, KPMParaStructureRgbwActionCompanion, KPMTimerParaV1Companion, KPMTimerParaV1TimerBasePara, KPMTimerParaV1TimerBaseParaCompanion, KPMWeekMask, KPMTimerParaV2Companion, KPMTriggerParaCompanion, KPMUserActionParaCompanion, KPMParaStructure, KPMWeekMaskCompanion, KPMWeekMaskIndex, KPMWeekMaskIndexCompanion, KPMCmdCompanion, KPMFactoryIDCompanion, KPMOnOffStatusCompanion, KPMProductionIDCompanion, KPMProtocolComm, KPMProtocolKey, KPMProtocolVersionCompanion, KPMDeviceTypeClassifyCompanion, KPMDeviceTypeSetCompanion, KPMDeviceTypeUtilCompanion, KPMAdditionsAndDeletionsCmdCreatorCompanion, KPMAdditionsAndDeletionsCmdCreatorCompanionAddRF433DeviceParaCompanion, KPMAdditionsAndDeletionsCmdCreatorCompanionAddRF433DevicePara, KPMAdditionsAndDeletionsCmdCreatorCompanionDeviceScanParaCompanion, KPMAdditionsAndDeletionsCmdCreatorCompanionDeviceScanPara, KPMConfigCmdCreatorCompanion, KPMControlCmdCreatorCompanion, KPMControlCmdCreatorCompanionActivateTriggerParaCompanion, KPMControlCmdCreatorCompanionActivateTriggerPara, KPMGatewayCmdCreatorCompanion, KPMGetInfoCmdCreatorCompanion, KPMLinkageCmdCreatorCompanion, KPMLinkageCmdCreatorCompanionAddActionCmdReturnType, KPMLinkageCmdCreatorCompanionAddActionParaCompanion, KPMLinkageCmdCreatorCompanionAddActionPara, KPMLinkageCmdCreatorCompanionSetEmergencyTriggerParaCompanion, KPMLinkageCmdCreatorCompanionSetEmergencyTriggerPara, KPMLinkageCmdCreatorCompanionSetTriggerActionParaCompanion, KPMLinkageCmdCreatorCompanionSetTriggerActionPara, KPMLinkageCmdCreatorCompanionSetTriggerDefaultActionParaCompanion, KPMLinkageCmdCreatorCompanionSetTriggerDefaultActionPara, KPMLinkageCmdCreatorCompanionSetTriggerDelayParaCompanion, KPMLinkageCmdCreatorCompanionSetTriggerDelayPara, KPMLinkageCmdCreatorCompanionSetTriggerStatusParaCompanion, KPMLinkageCmdCreatorCompanionSetTriggerStatusPara, KPMTimerCmdCreatorCompanion, KPMTimerCmdCreatorCompanionAddOrModifyTimerV1ParaCompanion, KPMTimerCmdCreatorCompanionAddOrModifyTimerV1Para, KPMTimerCmdCreatorCompanionAddOrModifyTimerV2ParaCompanion, KPMTimerCmdCreatorCompanionAddOrModifyTimerV2Para, KPMTimerCmdCreatorCompanionDelTimerV1ParaCompanion, KPMTimerCmdCreatorCompanionDelTimerV1Para, KPMTimerCmdCreatorCompanionDelTimerV2ParaCompanion, KPMTimerCmdCreatorCompanionDelTimerV2Para, KPMUtilCompanion, KPMCommandAddAndDelDeviceCmdCompanion, KPMCommandConfigureCmdCompanion, KPMControllableApplianceInfo, KPMCommandControlCmdCompanion, KPMDetectableApplianceInfo, KPMCommandControlCmdControlAction, KPMCommandGatewayCmdCompanion, KPMCommandGetInfoCmdCompanion, KPMCommandLinkageCmdCompanion, KPMCommandLinkageCmdAddUserActionListCmdReturnType, KPMCommandLinkageCmdUserActionInfoNew, KPMDetectableApplianceStatus, KPMCommandTimerCmdCompanion, KPMParser, KPMBaseInfoCompanion, KPMErrorCode, KPMControllableApplianceInfoCompanion, KPMControllableApplianceInfoAirQualityInfo, KPMControllableApplianceInfoAirQualityPlusInfo, KPMControllableApplianceInfoConfInfo, KPMControllableApplianceInfoIrInfo, KPMControllableApplianceInfoAirQualityInfoCompanion, KPMControllableApplianceInfoAirQualityPlusInfoCompanion, KPMControllableApplianceInfoConfInfoCompanion, KPMControllableApplianceInfoConfInfoTurnOnMode, KPMControllableApplianceInfoConfInfoTurnOnModeCompanion, KPMControllableApplianceInfoIrInfoCompanion, KPMControllableDeviceInfoCompanion, KPMDefaultActionCompanion, KPMDefaultAction, KPMDetectableApplianceInfoCompanion, KPMDetectableApplianceStatusCompanion, KPMDetectableDeviceInfoCompanion, KPMUserAction, KPMErrorCodeCompanion, KPMParserResultCompanion, KPMBaseInfo, KPMControllableDeviceInfo, KPMDetectableDeviceInfo, KPMTimerInfo, KPMTimerInfoCompanion, KPMTimerV1Para, KPMTimerV2Para, KPMTimerV1ApplianceActionCompanion, KPMTimerV1ApplianceAction, KPMTimerV1ParaCompanion, KPMTimerV2ParaCompanion, KPMUserActionCompanion, KPMUserActionAppliancePara, KPMUserActionApplianceParaCompanion, KPMKotlinByteIterator, KPMKotlinCharIterator, KPMKotlinx_serialization_jsonJsonElementCompanion, KPMKotlinx_serialization_coreSerializersModule, KPMKotlinx_serialization_coreSerialKind, KPMKotlinNothing;

@protocol KPMHashFunction, KPMMultipartHash, KPMSha256, KPMHash, KPMStatelessSha256, KPMSha512Multipart, KPMSha512, KPMKotlinx_serialization_coreKSerializer, KPMKotlinComparable, KPMKotlinIterator, KPMKotlinx_serialization_coreEncoder, KPMKotlinx_serialization_coreSerialDescriptor, KPMKotlinx_serialization_coreSerializationStrategy, KPMKotlinx_serialization_coreDecoder, KPMKotlinx_serialization_coreDeserializationStrategy, KPMKotlinx_serialization_coreCompositeEncoder, KPMKotlinAnnotation, KPMKotlinx_serialization_coreCompositeDecoder, KPMKotlinx_serialization_coreSerializersModuleCollector, KPMKotlinKClass, KPMKotlinKDeclarationContainer, KPMKotlinKAnnotatedElement, KPMKotlinKClassifier;

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
@interface KPMBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KPMBase (KPMBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface KPMMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KPMMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKPMKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface KPMNumber : NSNumber
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
@interface KPMByte : KPMNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface KPMUByte : KPMNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface KPMShort : KPMNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface KPMUShort : KPMNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface KPMInt : KPMNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface KPMUInt : KPMNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface KPMLong : KPMNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface KPMULong : KPMNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface KPMFloat : KPMNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface KPMDouble : KPMNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface KPMBoolean : KPMNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataTypeExtension")))
@interface KPMDataTypeExtension : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexToolKit")))
@interface KPMHexToolKit : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMHexToolKitCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HexToolKit.Companion")))
@interface KPMHexToolKitCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMHexToolKitCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)boolListToBitStringBoolList:(NSArray<KPMBoolean *> *)boolList __attribute__((swift_name("boolListToBitString(boolList:)")));
- (NSString *)boolListToHexStringBoolList:(NSArray<KPMBoolean *> *)boolList __attribute__((swift_name("boolListToHexString(boolList:)")));
- (uint64_t)boolListToLongBoolList:(NSArray<KPMBoolean *> *)boolList __attribute__((swift_name("boolListToLong(boolList:)")));
- (NSArray<KPMBoolean *> * _Nullable)hexStringToBoolListHexString:(NSString *)hexString expectLength:(int32_t)expectLength __attribute__((swift_name("hexStringToBoolList(hexString:expectLength:)")));
- (KPMULong * _Nullable)hexStringToULongHexString:(NSString *)hexString __attribute__((swift_name("hexStringToULong(hexString:)")));
- (NSArray<KPMBoolean *> *)indexListToBoolListIndexList:(NSArray<KPMInt *> *)indexList __attribute__((swift_name("indexListToBoolList(indexList:)")));
- (NSString *)indexListToHexStringIndexList:(NSArray<KPMInt *> *)indexList __attribute__((swift_name("indexListToHexString(indexList:)")));
- (NSArray<KPMBoolean *> *)indexToBoolListIndex:(int32_t)index __attribute__((swift_name("indexToBoolList(index:)")));
- (NSString *)indexToHexStringIndex:(int32_t)index __attribute__((swift_name("indexToHexString(index:)")));
- (NSArray<KPMBoolean *> *)longToBoolListNumber:(uint64_t)number expectLength:(int32_t)expectLength __attribute__((swift_name("longToBoolList(number:expectLength:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeasureTimeKit")))
@interface KPMMeasureTimeKit : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMMeasureTimeKitCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeasureTimeKit.Companion")))
@interface KPMMeasureTimeKitCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMMeasureTimeKitCompanion *shared __attribute__((swift_name("shared")));
- (void)measureRunnable:(void (^)(void))runnable tag:(NSString *)tag __attribute__((swift_name("measure(runnable:tag:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilityToolKit")))
@interface KPMUtilityToolKit : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMUtilityToolKitCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilityToolKit.Companion")))
@interface KPMUtilityToolKitCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMUtilityToolKitCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMLogger")))
@interface KPMKMMLogger : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMKMMLoggerCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KMMLogger.Companion")))
@interface KPMKMMLoggerCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMKMMLoggerCompanion *shared __attribute__((swift_name("shared")));
- (void)dMessage:(id _Nullable)message __attribute__((swift_name("d(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommandResponseCallbackCache")))
@interface KPMCommandResponseCallbackCache : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)commandResponseCallbackCache __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMCommandResponseCallbackCache *shared __attribute__((swift_name("shared")));
- (void)insertCallbackSn:(NSString *)sn cmd:(KPMCmd *)cmd seq:(int64_t)seq callback:(void (^)(NSString *, KPMCmd *, KPMLong *, KPMParserResult *))callback __attribute__((swift_name("insertCallback(sn:cmd:seq:callback:)")));
- (void)invokeCallbackParseResult:(KPMParserResult *)parseResult __attribute__((swift_name("invokeCallback(parseResult:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64")))
@interface KPMBase64 : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)base64 __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMBase64 *shared __attribute__((swift_name("shared")));
- (NSString *)decodeString:(NSString *)string __attribute__((swift_name("decode(string:)")));
- (NSString *)encodeString:(NSString *)string __attribute__((swift_name("encode(string:)")));
@property (readonly) KPMBase64Decoder *decoder __attribute__((swift_name("decoder")));
@property (readonly) KPMBase64Encoder *encoder __attribute__((swift_name("encoder")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64.Decoder")))
@interface KPMBase64Decoder : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMBase64DecoderCompanion *companion __attribute__((swift_name("companion")));
- (KPMKotlinByteArray *)decodeSrc:(KPMKotlinByteArray *)src __attribute__((swift_name("decode(src:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64.DecoderCompanion")))
@interface KPMBase64DecoderCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMBase64DecoderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64.Encoder")))
@interface KPMBase64Encoder : KPMBase
@property (class, readonly, getter=companion) KPMBase64EncoderCompanion *companion __attribute__((swift_name("companion")));
- (KPMKotlinByteArray *)encodeSrc:(KPMKotlinByteArray *)src __attribute__((swift_name("encode(src:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Base64.EncoderCompanion")))
@interface KPMBase64EncoderCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMBase64EncoderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) KPMKotlinCharArray *toBase64 __attribute__((swift_name("toBase64")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RC4Encoder")))
@interface KPMRC4Encoder : KPMBase
- (instancetype)initWithKey:(KPMKotlinByteArray *)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
- (KPMKotlinByteArray *)decodeData:(KPMKotlinByteArray *)data offset:(int32_t)offset len:(int32_t)len __attribute__((swift_name("decode(data:offset:len:)")));
- (KPMKotlinByteArray *)encodeData:(KPMKotlinByteArray *)data offset:(int32_t)offset len:(int32_t)len __attribute__((swift_name("encode(data:offset:len:)")));
@end;

__attribute__((swift_name("HashFunction")))
@protocol KPMHashFunction
@required
@property (readonly) int32_t MAX_HASH_BYTES __attribute__((swift_name("MAX_HASH_BYTES")));
@end;

__attribute__((swift_name("Hash")))
@protocol KPMHash <KPMHashFunction>
@required
@end;

__attribute__((swift_name("MultipartHash")))
@protocol KPMMultipartHash <KPMHashFunction>
@required
- (id)digest __attribute__((swift_name("digest()")));
- (void)updateData:(id)data __attribute__((swift_name("update(data:)")));
@end;

__attribute__((swift_name("Sha256")))
@protocol KPMSha256 <KPMMultipartHash>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sha256Properties")))
@interface KPMSha256Properties : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sha256Properties __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMSha256Properties *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_HASH_BYTES __attribute__((swift_name("MAX_HASH_BYTES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sha256Pure")))
@interface KPMSha256Pure : KPMBase <KPMSha256>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMSha256PureCompanion *companion __attribute__((swift_name("companion")));
- (id)digest __attribute__((swift_name("digest()")));
- (void)updateData_:(NSString *)data __attribute__((swift_name("update(data_:)")));
- (void)updateData:(id)data __attribute__((swift_name("update(data:)")));
@property (readonly) int32_t MAX_HASH_BYTES __attribute__((swift_name("MAX_HASH_BYTES")));
@property id buffer __attribute__((swift_name("buffer")));
@property int32_t bufferCounter __attribute__((swift_name("bufferCounter")));
@property int64_t counter __attribute__((swift_name("counter")));
@property BOOL digested __attribute__((swift_name("digested")));
@property KPMKotlinArray<KPMUInt *> *h __attribute__((swift_name("h")));
@end;

__attribute__((swift_name("StatelessSha256")))
@protocol KPMStatelessSha256 <KPMHash>
@required
- (id)digestInputMessage:(id)inputMessage __attribute__((swift_name("digest(inputMessage:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sha256Pure.Companion")))
@interface KPMSha256PureCompanion : KPMBase <KPMStatelessSha256>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMSha256PureCompanion *shared __attribute__((swift_name("shared")));
- (id)createExpansionArrayOriginalSizeInBytes:(int64_t)originalSizeInBytes __attribute__((swift_name("createExpansionArray(originalSizeInBytes:)")));
- (id)digestInputMessage:(id)inputMessage __attribute__((swift_name("digest(inputMessage:)")));
@property (readonly) int32_t BLOCK_SIZE __attribute__((swift_name("BLOCK_SIZE")));
@property (readonly) int32_t BLOCK_SIZE_IN_BYTES __attribute__((swift_name("BLOCK_SIZE_IN_BYTES")));
@property (readonly) uint32_t BYTE_MASK_FROM_UINT __attribute__((swift_name("BYTE_MASK_FROM_UINT")));
@property (readonly) uint64_t BYTE_MASK_FROM_ULONG __attribute__((swift_name("BYTE_MASK_FROM_ULONG")));
@property (readonly) int32_t MAX_HASH_BYTES __attribute__((swift_name("MAX_HASH_BYTES")));
@property (readonly) uint32_t UINT_MASK __attribute__((swift_name("UINT_MASK")));
@property (readonly) KPMKotlinArray<KPMUInt *> *iv __attribute__((swift_name("iv")));
@property (readonly) KPMKotlinArray<KPMUInt *> *k __attribute__((swift_name("k")));
@end;

__attribute__((swift_name("Sha512")))
@protocol KPMSha512 <KPMHash>
@required
- (id)digestInputMessage:(id)inputMessage __attribute__((swift_name("digest(inputMessage:)")));
@end;

__attribute__((swift_name("Sha512Multipart")))
@protocol KPMSha512Multipart <KPMMultipartHash>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sha512Properties")))
@interface KPMSha512Properties : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sha512Properties __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMSha512Properties *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_HASH_BYTES __attribute__((swift_name("MAX_HASH_BYTES")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sha512Pure")))
@interface KPMSha512Pure : KPMBase <KPMSha512Multipart>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMSha512PureCompanion *companion __attribute__((swift_name("companion")));
- (id)digest __attribute__((swift_name("digest()")));
- (void)updateData_:(NSString *)data __attribute__((swift_name("update(data_:)")));
- (void)updateData:(id)data __attribute__((swift_name("update(data:)")));
@property (readonly) int32_t MAX_HASH_BYTES __attribute__((swift_name("MAX_HASH_BYTES")));
@property id buffer __attribute__((swift_name("buffer")));
@property int32_t bufferCounter __attribute__((swift_name("bufferCounter")));
@property int64_t counter __attribute__((swift_name("counter")));
@property BOOL digested __attribute__((swift_name("digested")));
@property KPMKotlinArray<KPMULong *> *h __attribute__((swift_name("h")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Sha512Pure.Companion")))
@interface KPMSha512PureCompanion : KPMBase <KPMSha512>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMSha512PureCompanion *shared __attribute__((swift_name("shared")));
- (id)createExpansionArrayOriginalSizeInBytes:(int64_t)originalSizeInBytes __attribute__((swift_name("createExpansionArray(originalSizeInBytes:)")));
- (id)digestInputMessage:(id)inputMessage __attribute__((swift_name("digest(inputMessage:)")));
@property (readonly) int32_t BLOCK_SIZE __attribute__((swift_name("BLOCK_SIZE")));
@property (readonly) int32_t BLOCK_SIZE_IN_BYTES __attribute__((swift_name("BLOCK_SIZE_IN_BYTES")));
@property (readonly) int32_t CHUNK_SIZE __attribute__((swift_name("CHUNK_SIZE")));
@property (readonly) int32_t MAX_HASH_BYTES __attribute__((swift_name("MAX_HASH_BYTES")));
@property (readonly) uint64_t ULONG_MASK __attribute__((swift_name("ULONG_MASK")));
@property (readonly) KPMKotlinArray<KPMULong *> *iv __attribute__((swift_name("iv")));
@property (readonly) KPMKotlinArray<KPMULong *> *k __attribute__((swift_name("k")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L1DataCryptor")))
@interface KPML1DataCryptor : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPML1DataCryptorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L1DataCryptor.Companion")))
@interface KPML1DataCryptorCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPML1DataCryptorCompanion *shared __attribute__((swift_name("shared")));
- (NSString * _Nullable)decodeJsonString:(NSString *)jsonString __attribute__((swift_name("decode(jsonString:)")));
- (NSString * _Nullable)decodeJsonObject:(NSDictionary<NSString *, KPMKotlinx_serialization_jsonJsonElement *> *)jsonObject __attribute__((swift_name("decode(jsonObject:)")));
- (NSString * _Nullable)encodeL1DataRaw:(NSString *)l1DataRaw __attribute__((swift_name("encode(l1DataRaw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L1DataCryptor.L1Cmd")))
@interface KPML1DataCryptorL1Cmd : KPMBase
- (instancetype)initWithSn:(NSString *)sn seq:(int64_t)seq protocolVersion:(int32_t)protocolVersion cmdType:(int32_t)cmdType l1Data:(NSString *)l1Data __attribute__((swift_name("init(sn:seq:protocolVersion:cmdType:l1Data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPML1DataCryptorL1CmdCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (KPML1DataCryptorL1Cmd *)doCopySn:(NSString *)sn seq:(int64_t)seq protocolVersion:(int32_t)protocolVersion cmdType:(int32_t)cmdType l1Data:(NSString *)l1Data __attribute__((swift_name("doCopy(sn:seq:protocolVersion:cmdType:l1Data:)")));
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
@interface KPML1DataCryptorL1CmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPML1DataCryptorL1CmdCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L2DataCryptor")))
@interface KPML2DataCryptor : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPML2DataCryptorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L2DataCryptor.Companion")))
@interface KPML2DataCryptorCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPML2DataCryptorCompanion *shared __attribute__((swift_name("shared")));
- (NSString * _Nullable)decodeHttpSource:(NSString *)source __attribute__((swift_name("decodeHttp(source:)")));
- (NSString * _Nullable)decodeTcpJsonString:(NSString *)jsonString __attribute__((swift_name("decodeTcp(jsonString:)")));
- (NSString *)encodeHttpSource:(NSString *)source __attribute__((swift_name("encodeHttp(source:)")));
- (NSString * _Nullable)encodeTcpL2DataRaw:(NSString *)l2DataRaw __attribute__((swift_name("encodeTcp(l2DataRaw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("L2DataCryptor.L2Cmd")))
@interface KPML2DataCryptorL2Cmd : KPMBase
- (instancetype)initWithSeq:(int64_t)seq protocolVersion:(int32_t)protocolVersion cmdType:(int32_t)cmdType l2Data:(NSString *)l2Data __attribute__((swift_name("init(seq:protocolVersion:cmdType:l2Data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPML2DataCryptorL2CmdCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (KPML2DataCryptorL2Cmd *)doCopySeq:(int64_t)seq protocolVersion:(int32_t)protocolVersion cmdType:(int32_t)cmdType l2Data:(NSString *)l2Data __attribute__((swift_name("doCopy(seq:protocolVersion:cmdType:l2Data:)")));
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
@interface KPML2DataCryptorL2CmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPML2DataCryptorL2CmdCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPwdGenerator")))
@interface KPMUserPwdGenerator : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMUserPwdGeneratorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserPwdGenerator.Companion")))
@interface KPMUserPwdGeneratorCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMUserPwdGeneratorCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)pwdGeneratorUserPwdRaw:(NSString *)userPwdRaw __attribute__((swift_name("pwdGenerator(userPwdRaw:)")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol KPMKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface KPMKotlinEnum<E> : KPMBase <KPMKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CmdType")))
@interface KPMCmdType : KPMKotlinEnum<KPMCmdType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KPMCmdTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KPMCmdType *controllertoserver __attribute__((swift_name("controllertoserver")));
@property (class, readonly) KPMCmdType *controllertoapp __attribute__((swift_name("controllertoapp")));
@property (class, readonly) KPMCmdType *apptocontroller __attribute__((swift_name("apptocontroller")));
@property (class, readonly) KPMCmdType *apptoserver __attribute__((swift_name("apptoserver")));
@property (class, readonly) KPMCmdType *servertocontroller __attribute__((swift_name("servertocontroller")));
@property (class, readonly) KPMCmdType *servertoapp __attribute__((swift_name("servertoapp")));
@property (class, readonly) KPMCmdType *login __attribute__((swift_name("login")));
+ (KPMKotlinArray<KPMCmdType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CmdType.Companion")))
@interface KPMCmdTypeCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMCmdTypeCompanion *shared __attribute__((swift_name("shared")));
- (KPMCmdType *)getCmdTypeCmd:(KPMCmd *)cmd __attribute__((swift_name("getCmdType(cmd:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolParser")))
@interface KPMProtocolParser : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMProtocolParserCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolParser.Companion")))
@interface KPMProtocolParserCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMProtocolParserCompanion *shared __attribute__((swift_name("shared")));
- (KPMProtocolContent *)parseJsonObject:(NSDictionary<NSString *, KPMKotlinx_serialization_jsonJsonElement *> *)jsonObject __attribute__((swift_name("parse(jsonObject:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent")))
@interface KPMProtocolContent : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMProtocolContentCompanion *companion __attribute__((swift_name("companion")));
@property KPMProtocolContentBaseContent * _Nullable baseContent __attribute__((swift_name("baseContent")));
@property KPMProtocolContentInputDevContent * _Nullable inputDevContent __attribute__((swift_name("inputDevContent")));
@property KPMProtocolContentOutputDevContent * _Nullable outputDevContent __attribute__((swift_name("outputDevContent")));
@property KPMProtocolContentTimerContent * _Nullable timerContent __attribute__((swift_name("timerContent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.BaseContent")))
@interface KPMProtocolContentBaseContent : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMProtocolContentBaseContentCompanion *companion __attribute__((swift_name("companion")));
@property KPMCmd * _Nullable cmd __attribute__((swift_name("cmd")));
@property KPMInt * _Nullable confVer __attribute__((swift_name("confVer")));
@property KPMFactoryID * _Nullable factoryID __attribute__((swift_name("factoryID")));
@property KPMInt * _Nullable failure __attribute__((swift_name("failure")));
@property NSString * _Nullable fwPath __attribute__((swift_name("fwPath")));
@property KPMFirmwareVersion * _Nullable fwVersion __attribute__((swift_name("fwVersion")));
@property KPMInt * _Nullable hardwareID __attribute__((swift_name("hardwareID")));
@property KPMProductionID * _Nullable productionID __attribute__((swift_name("productionID")));
@property KPMProtocolVersion * _Nullable protocolVersion __attribute__((swift_name("protocolVersion")));
@property KPMLong * _Nullable seq __attribute__((swift_name("seq")));
@property NSString * _Nullable serviceDomain __attribute__((swift_name("serviceDomain")));
@property NSString * _Nullable sn __attribute__((swift_name("sn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.BaseContentCompanion")))
@interface KPMProtocolContentBaseContentCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMProtocolContentBaseContentCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.Companion")))
@interface KPMProtocolContentCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMProtocolContentCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.InputDevContent")))
@interface KPMProtocolContentInputDevContent : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMProtocolContentInputDevContentCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<KPMBoolean *> * _Nullable actionInstalled __attribute__((swift_name("actionInstalled")));
@property KPMInt * _Nullable inputDeviceIndex __attribute__((swift_name("inputDeviceIndex")));
@property NSArray<KPMBoolean *> * _Nullable inputDeviceInstalled __attribute__((swift_name("inputDeviceInstalled")));
@property NSArray<KPMBoolean *> * _Nullable noDisableTrigger __attribute__((swift_name("noDisableTrigger")));
@property NSArray<KPMBoolean *> * _Nullable triggerInstalled __attribute__((swift_name("triggerInstalled")));
@property NSArray<KPMTriggerPara *> * _Nullable triggerParaList __attribute__((swift_name("triggerParaList")));
@property NSArray<KPMBoolean *> * _Nullable triggerStatus __attribute__((swift_name("triggerStatus")));
@property NSArray<KPMUserActionPara *> * _Nullable userActionParaList __attribute__((swift_name("userActionParaList")));
@property KPMFirmwareVersion * _Nullable ver __attribute__((swift_name("ver")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.InputDevContentCompanion")))
@interface KPMProtocolContentInputDevContentCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMProtocolContentInputDevContentCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.OutputDevContent")))
@interface KPMProtocolContentOutputDevContent : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMProtocolContentOutputDevContentCompanion *companion __attribute__((swift_name("companion")));
@property KPMMutableDictionary<KPMDeviceTypeSet *, KPMDevicePara *> * _Nullable devParaMap __attribute__((swift_name("devParaMap")));
@property NSArray<KPMBoolean *> * _Nullable outputDeviceInstalled __attribute__((swift_name("outputDeviceInstalled")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.OutputDevContentCompanion")))
@interface KPMProtocolContentOutputDevContentCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMProtocolContentOutputDevContentCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.TimerContent")))
@interface KPMProtocolContentTimerContent : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMProtocolContentTimerContentCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<KPMBoolean *> * _Nullable timerInstalled __attribute__((swift_name("timerInstalled")));
@property NSArray<KPMTimerParaV1 *> * _Nullable timerParaV1List __attribute__((swift_name("timerParaV1List")));
@property NSArray<KPMTimerParaV2 *> * _Nullable timerParaV2List __attribute__((swift_name("timerParaV2List")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolContent.TimerContentCompanion")))
@interface KPMProtocolContentTimerContentCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMProtocolContentTimerContentCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DevicePara")))
@interface KPMDevicePara : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMDeviceParaCompanion *companion __attribute__((swift_name("companion")));
- (void)initialFromRawJsonObject:(NSDictionary<NSString *, KPMKotlinx_serialization_jsonJsonElement *> *)jsonObject devType:(KPMDeviceTypeSet *)devType __attribute__((swift_name("initialFromRaw(jsonObject:devType:)")));
@property NSArray<KPMBoolean *> * _Nullable brightAction __attribute__((swift_name("brightAction")));
@property NSArray<KPMInt *> * _Nullable brightAdjSpeed __attribute__((swift_name("brightAdjSpeed")));
@property NSArray<KPMBoolean *> * _Nullable brightMask __attribute__((swift_name("brightMask")));
@property NSArray<KPMInt *> * _Nullable brightPercent __attribute__((swift_name("brightPercent")));
@property NSArray<KPMBoolean *> * _Nullable brightPercentMask __attribute__((swift_name("brightPercentMask")));
@property NSArray<KPMBoolean *> * _Nullable confMask __attribute__((swift_name("confMask")));
@property NSArray<KPMInt *> * _Nullable curtainAction __attribute__((swift_name("curtainAction")));
@property NSArray<KPMBoolean *> * _Nullable curtainMask __attribute__((swift_name("curtainMask")));
@property KPMDeviceTypeSet * _Nullable devType __attribute__((swift_name("devType")));
@property KPMInt * _Nullable functionCode __attribute__((swift_name("functionCode")));
@property NSArray<KPMBoolean *> * _Nullable functionCodeMask __attribute__((swift_name("functionCodeMask")));
@property KPMInt * _Nullable index __attribute__((swift_name("index")));
@property NSArray<KPMBoolean *> * _Nullable ledMask __attribute__((swift_name("ledMask")));
@property NSArray<KPMBoolean *> * _Nullable ledStatus __attribute__((swift_name("ledStatus")));
@property NSArray<KPMInt *> * _Nullable minBrightPercent __attribute__((swift_name("minBrightPercent")));
@property KPMInt * _Nullable needAck __attribute__((swift_name("needAck")));
@property NSArray<KPMInt *> * _Nullable onOffBrightAdjSpeed __attribute__((swift_name("onOffBrightAdjSpeed")));
@property NSArray<KPMBoolean *> * _Nullable onOffRlyMask __attribute__((swift_name("onOffRlyMask")));
@property NSArray<KPMOnOffStatus *> * _Nullable onOffStatus __attribute__((swift_name("onOffStatus")));
@property NSArray<KPMBoolean *> * _Nullable onlineStatus __attribute__((swift_name("onlineStatus")));
@property NSArray<KPMInt *> * _Nullable panelAction __attribute__((swift_name("panelAction")));
@property NSArray<KPMInt *> * _Nullable panelAddr __attribute__((swift_name("panelAddr")));
@property NSArray<KPMInt *> * _Nullable para __attribute__((swift_name("para")));
@property NSArray<KPMBoolean *> * _Nullable paraMask __attribute__((swift_name("paraMask")));
@property NSArray<KPMInt *> * _Nullable power __attribute__((swift_name("power")));
@property NSArray<KPMOnOffStatus *> * _Nullable powerOnStatus __attribute__((swift_name("powerOnStatus")));
@property NSArray<KPMBoolean *> * _Nullable rfInstall __attribute__((swift_name("rfInstall")));
@property NSArray<KPMBoolean *> * _Nullable rlyAction __attribute__((swift_name("rlyAction")));
@property NSArray<KPMBoolean *> * _Nullable rlyMask __attribute__((swift_name("rlyMask")));
@property NSArray<KPMBoolean *> * _Nullable rlyStatus __attribute__((swift_name("rlyStatus")));
@property NSArray<KPMBoolean *> * _Nullable slowRlyAction __attribute__((swift_name("slowRlyAction")));
@property NSArray<KPMInt *> * _Nullable slowlyOffBrightAdjSpeed __attribute__((swift_name("slowlyOffBrightAdjSpeed")));
@property NSArray<KPMInt *> * _Nullable slowlyOnBrightAdjSpeed __attribute__((swift_name("slowlyOnBrightAdjSpeed")));
@property NSArray<KPMBoolean *> * _Nullable tempAction __attribute__((swift_name("tempAction")));
@property NSArray<KPMBoolean *> * _Nullable tempMask __attribute__((swift_name("tempMask")));
@property NSArray<KPMInt *> * _Nullable turnOnBrightPercent __attribute__((swift_name("turnOnBrightPercent")));
@property NSArray<KPMInt *> * _Nullable turnOnMode __attribute__((swift_name("turnOnMode")));
@property KPMFirmwareVersion * _Nullable ver __attribute__((swift_name("ver")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DevicePara.Companion")))
@interface KPMDeviceParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMDeviceParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirmwareVersion")))
@interface KPMFirmwareVersion : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMFirmwareVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)getString __attribute__((swift_name("getString()")));
- (void)initialFromStringFwVersionString:(NSString *)fwVersionString __attribute__((swift_name("initialFromString(fwVersionString:)")));
- (BOOL)isNewerThanFwVersionToCompare:(KPMFirmwareVersion *)fwVersionToCompare __attribute__((swift_name("isNewerThan(fwVersionToCompare:)")));
@property int32_t build __attribute__((swift_name("build")));
@property int32_t major __attribute__((swift_name("major")));
@property int32_t minor __attribute__((swift_name("minor")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirmwareVersion.Companion")))
@interface KPMFirmwareVersionCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMFirmwareVersionCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure")))
@interface KPMParaStructure : KPMBase
- (instancetype)initWithRaw:(uint64_t)raw __attribute__((swift_name("init(raw:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMParaStructureCompanion *companion __attribute__((swift_name("companion")));
- (uint64_t)getColorRgbw:(KPMParaStructureRgbwType *)rgbw __attribute__((swift_name("getColor(rgbw:)")));
- (uint64_t)getIRParaIr:(KPMParaStructureIrValueType *)ir __attribute__((swift_name("getIRPara(ir:)")));
- (KPMParaStructureRgbwAction * _Nullable)getRGBWAction __attribute__((swift_name("getRGBWAction()")));
- (uint64_t)getRawValue __attribute__((swift_name("getRawValue()")));
- (uint64_t)getTemperatureLampBright __attribute__((swift_name("getTemperatureLampBright()")));
- (uint64_t)getTemperatureLampTemp __attribute__((swift_name("getTemperatureLampTemp()")));
- (void)setColorRgbw:(KPMParaStructureRgbwType *)rgbw value:(uint64_t)value __attribute__((swift_name("setColor(rgbw:value:)")));
- (void)setIRParaIr:(KPMParaStructureIrValueType *)ir value:(uint64_t)value __attribute__((swift_name("setIRPara(ir:value:)")));
- (void)setRGBWActionRgbwAction:(KPMParaStructureRgbwAction *)rgbwAction __attribute__((swift_name("setRGBWAction(rgbwAction:)")));
- (void)setTemperatureLampBrightValue:(uint64_t)value __attribute__((swift_name("setTemperatureLampBright(value:)")));
- (void)setTemperatureLampTempValue:(uint64_t)value __attribute__((swift_name("setTemperatureLampTemp(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.Companion")))
@interface KPMParaStructureCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMParaStructureCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.CurtainAction")))
@interface KPMParaStructureCurtainAction : KPMKotlinEnum<KPMParaStructureCurtainAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KPMParaStructureCurtainAction *stop __attribute__((swift_name("stop")));
@property (class, readonly) KPMParaStructureCurtainAction *close __attribute__((swift_name("close")));
@property (class, readonly) KPMParaStructureCurtainAction *open __attribute__((swift_name("open")));
+ (KPMKotlinArray<KPMParaStructureCurtainAction *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.CurtainWithLocAction")))
@interface KPMParaStructureCurtainWithLocAction : KPMKotlinEnum<KPMParaStructureCurtainWithLocAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KPMParaStructureCurtainWithLocAction *close __attribute__((swift_name("close")));
@property (class, readonly) KPMParaStructureCurtainWithLocAction *open __attribute__((swift_name("open")));
@property (class, readonly) KPMParaStructureCurtainWithLocAction *initial __attribute__((swift_name("initial")));
@property (class, readonly) KPMParaStructureCurtainWithLocAction *changedirection __attribute__((swift_name("changedirection")));
@property (class, readonly) KPMParaStructureCurtainWithLocAction *stop __attribute__((swift_name("stop")));
+ (KPMKotlinArray<KPMParaStructureCurtainWithLocAction *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.IrCmd")))
@interface KPMParaStructureIrCmd : KPMKotlinEnum<KPMParaStructureIrCmd *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KPMParaStructureIrCmd *send __attribute__((swift_name("send")));
@property (class, readonly) KPMParaStructureIrCmd *learn __attribute__((swift_name("learn")));
@property (class, readonly) KPMParaStructureIrCmd *delete_ __attribute__((swift_name("delete_")));
+ (KPMKotlinArray<KPMParaStructureIrCmd *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.IrValueType")))
@interface KPMParaStructureIrValueType : KPMKotlinEnum<KPMParaStructureIrValueType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KPMParaStructureIrValueType *cmd __attribute__((swift_name("cmd")));
@property (class, readonly) KPMParaStructureIrValueType *index __attribute__((swift_name("index")));
+ (KPMKotlinArray<KPMParaStructureIrValueType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.ParaAction")))
@interface KPMParaStructureParaAction : KPMKotlinEnum<KPMParaStructureParaAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KPMParaStructureParaAction *onoff __attribute__((swift_name("onoff")));
+ (KPMKotlinArray<KPMParaStructureParaAction *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.RgbwAction")))
@interface KPMParaStructureRgbwAction : KPMKotlinEnum<KPMParaStructureRgbwAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KPMParaStructureRgbwActionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KPMParaStructureRgbwAction *rgbwmoderandomquick __attribute__((swift_name("rgbwmoderandomquick")));
@property (class, readonly) KPMParaStructureRgbwAction *rgbwmodeswitchslow __attribute__((swift_name("rgbwmodeswitchslow")));
@property (class, readonly) KPMParaStructureRgbwAction *rgbwmodeswitchquick __attribute__((swift_name("rgbwmodeswitchquick")));
@property (class, readonly) KPMParaStructureRgbwAction *rgbwmoderandomslow __attribute__((swift_name("rgbwmoderandomslow")));
+ (KPMKotlinArray<KPMParaStructureRgbwAction *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.RgbwActionCompanion")))
@interface KPMParaStructureRgbwActionCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMParaStructureRgbwActionCompanion *shared __attribute__((swift_name("shared")));
- (KPMParaStructureRgbwAction * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParaStructure.RgbwType")))
@interface KPMParaStructureRgbwType : KPMKotlinEnum<KPMParaStructureRgbwType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KPMParaStructureRgbwType *red __attribute__((swift_name("red")));
@property (class, readonly) KPMParaStructureRgbwType *green __attribute__((swift_name("green")));
@property (class, readonly) KPMParaStructureRgbwType *blue __attribute__((swift_name("blue")));
@property (class, readonly) KPMParaStructureRgbwType *bright __attribute__((swift_name("bright")));
@property (class, readonly) KPMParaStructureRgbwType *w __attribute__((swift_name("w")));
+ (KPMKotlinArray<KPMParaStructureRgbwType *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerParaV1")))
@interface KPMTimerParaV1 : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMTimerParaV1Companion *companion __attribute__((swift_name("companion")));
- (void)initialFromRawTimerParaV1String:(NSString *)timerParaV1String __attribute__((swift_name("initialFromRaw(timerParaV1String:)")));
- (NSString *)toTimerParaV1String __attribute__((swift_name("toTimerParaV1String()")));
@property NSArray<KPMBoolean *> *actionMask __attribute__((swift_name("actionMask")));
@property NSArray<KPMBoolean *> *rlyMask __attribute__((swift_name("rlyMask")));
@property KPMTimerParaV1TimerBasePara *timerBasePara __attribute__((swift_name("timerBasePara")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerParaV1.Companion")))
@interface KPMTimerParaV1Companion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMTimerParaV1Companion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerParaV1.TimerBasePara")))
@interface KPMTimerParaV1TimerBasePara : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMTimerParaV1TimerBaseParaCompanion *companion __attribute__((swift_name("companion")));
- (KPMWeekMask *)getWeekMaskForUTC0 __attribute__((swift_name("getWeekMaskForUTC0()")));
- (KPMWeekMask *)getWeekMaskForUserTimeZone __attribute__((swift_name("getWeekMaskForUserTimeZone()")));
- (void)setWeekMaskForUTC0WeekMaskFromUserTimeZone:(KPMWeekMask *)weekMaskFromUserTimeZone __attribute__((swift_name("setWeekMaskForUTC0(weekMaskFromUserTimeZone:)")));
- (void)setWeekMaskUTC0FromProtocolBoolList:(NSArray<KPMBoolean *> *)boolList __attribute__((swift_name("setWeekMaskUTC0FromProtocol(boolList:)")));
@property KPMDeviceTypeSet *devType __attribute__((swift_name("devType")));
@property BOOL enable __attribute__((swift_name("enable")));
@property int64_t posix __attribute__((swift_name("posix")));
@property int32_t timerIndex __attribute__((swift_name("timerIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerParaV1.TimerBaseParaCompanion")))
@interface KPMTimerParaV1TimerBaseParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMTimerParaV1TimerBaseParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerParaV2")))
@interface KPMTimerParaV2 : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMTimerParaV2Companion *companion __attribute__((swift_name("companion")));
- (void)initialFromRawListTimerParaV2List:(NSArray<KPMLong *> *)timerParaV2List __attribute__((swift_name("initialFromRawList(timerParaV2List:)")));
- (NSArray<KPMLong *> *)toParaList __attribute__((swift_name("toParaList()")));
@property KPMTimerParaV1TimerBasePara *timerBasePara __attribute__((swift_name("timerBasePara")));
@property NSArray<KPMBoolean *> *triggerMask __attribute__((swift_name("triggerMask")));
@property NSArray<KPMBoolean *> *triggerStatus __attribute__((swift_name("triggerStatus")));
@property NSArray<KPMBoolean *> *userActionMask __attribute__((swift_name("userActionMask")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerParaV2.Companion")))
@interface KPMTimerParaV2Companion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMTimerParaV2Companion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TriggerPara")))
@interface KPMTriggerPara : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMTriggerParaCompanion *companion __attribute__((swift_name("companion")));
- (void)initialFromRawJsonObjectJsonObject:(NSDictionary<NSString *, KPMKotlinx_serialization_jsonJsonElement *> *)jsonObject __attribute__((swift_name("initialFromRawJsonObject(jsonObject:)")));
- (void)initialFromRawListTriggerParaRawList:(NSArray<KPMLong *> *)triggerParaRawList __attribute__((swift_name("initialFromRawList(triggerParaRawList:)")));
@property NSArray<KPMBoolean *> * _Nullable defaultActionMask __attribute__((swift_name("defaultActionMask")));
@property KPMInt * _Nullable delay __attribute__((swift_name("delay")));
@property KPMInt * _Nullable inputDeviceIndex __attribute__((swift_name("inputDeviceIndex")));
@property KPMDeviceTypeSet * _Nullable inputDeviceType __attribute__((swift_name("inputDeviceType")));
@property KPMInt * _Nullable subIndex __attribute__((swift_name("subIndex")));
@property KPMInt * _Nullable triggerIndex __attribute__((swift_name("triggerIndex")));
@property NSArray<KPMBoolean *> * _Nullable triggerMask __attribute__((swift_name("triggerMask")));
@property NSArray<KPMBoolean *> * _Nullable triggerStatus __attribute__((swift_name("triggerStatus")));
@property NSArray<KPMBoolean *> * _Nullable userActionMask __attribute__((swift_name("userActionMask")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TriggerPara.Companion")))
@interface KPMTriggerParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMTriggerParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserActionPara")))
@interface KPMUserActionPara : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMUserActionParaCompanion *companion __attribute__((swift_name("companion")));
- (void)initialFromRawJsonObjectJsonObject:(NSDictionary<NSString *, KPMKotlinx_serialization_jsonJsonElement *> *)jsonObject __attribute__((swift_name("initialFromRawJsonObject(jsonObject:)")));
- (void)initialFromRawListUserActionParaRawList:(NSArray<KPMLong *> *)userActionParaRawList __attribute__((swift_name("initialFromRawList(userActionParaRawList:)")));
@property int32_t actionIndex __attribute__((swift_name("actionIndex")));
@property KPMDeviceTypeSet *devType __attribute__((swift_name("devType")));
@property NSArray<KPMParaStructure *> * _Nullable paraList __attribute__((swift_name("paraList")));
@property NSArray<KPMBoolean *> * _Nullable paraMask __attribute__((swift_name("paraMask")));
@property NSArray<KPMBoolean *> * _Nullable rlyAction __attribute__((swift_name("rlyAction")));
@property NSArray<KPMBoolean *> * _Nullable rlyMask __attribute__((swift_name("rlyMask")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserActionPara.Companion")))
@interface KPMUserActionParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMUserActionParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeekMask")))
@interface KPMWeekMask : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMWeekMaskCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)getWeekMaskBitWeekMaskIndex:(KPMWeekMaskIndex *)weekMaskIndex __attribute__((swift_name("getWeekMaskBit(weekMaskIndex:)")));
- (void)initialFromBoolListBoolList:(NSArray<KPMBoolean *> *)boolList __attribute__((swift_name("initialFromBoolList(boolList:)")));
- (void)initialFromWeekMaskWeekMask:(KPMWeekMask *)weekMask __attribute__((swift_name("initialFromWeekMask(weekMask:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (void)setWeekMaskBitWeekMaskIndex:(KPMWeekMaskIndex *)weekMaskIndex bitValue:(BOOL)bitValue __attribute__((swift_name("setWeekMaskBit(weekMaskIndex:bitValue:)")));
- (NSString *)toHexString __attribute__((swift_name("toHexString()")));
- (uint64_t)toULong __attribute__((swift_name("toULong()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeekMask.Companion")))
@interface KPMWeekMaskCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMWeekMaskCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeekMaskIndex")))
@interface KPMWeekMaskIndex : KPMKotlinEnum<KPMWeekMaskIndex *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KPMWeekMaskIndexCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KPMWeekMaskIndex *sunday __attribute__((swift_name("sunday")));
@property (class, readonly) KPMWeekMaskIndex *monday __attribute__((swift_name("monday")));
@property (class, readonly) KPMWeekMaskIndex *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) KPMWeekMaskIndex *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) KPMWeekMaskIndex *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) KPMWeekMaskIndex *friday __attribute__((swift_name("friday")));
@property (class, readonly) KPMWeekMaskIndex *saturday __attribute__((swift_name("saturday")));
+ (KPMKotlinArray<KPMWeekMaskIndex *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeekMaskIndex.Companion")))
@interface KPMWeekMaskIndexCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMWeekMaskIndexCompanion *shared __attribute__((swift_name("shared")));
- (KPMWeekMaskIndex * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Cmd")))
@interface KPMCmd : KPMKotlinEnum<KPMCmd *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KPMCmdCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KPMCmd *get __attribute__((swift_name("get")));
@property (class, readonly) KPMCmd *getstatus __attribute__((swift_name("getstatus")));
@property (class, readonly) KPMCmd *set __attribute__((swift_name("set")));
@property (class, readonly) KPMCmd *addtimer __attribute__((swift_name("addtimer")));
@property (class, readonly) KPMCmd *deltimer __attribute__((swift_name("deltimer")));
@property (class, readonly) KPMCmd *modifytimer __attribute__((swift_name("modifytimer")));
@property (class, readonly) KPMCmd *peektimer __attribute__((swift_name("peektimer")));
@property (class, readonly) KPMCmd *rfscan __attribute__((swift_name("rfscan")));
@property (class, readonly) KPMCmd *rflearn __attribute__((swift_name("rflearn")));
@property (class, readonly) KPMCmd *rfcancel __attribute__((swift_name("rfcancel")));
@property (class, readonly) KPMCmd *rfsend __attribute__((swift_name("rfsend")));
@property (class, readonly) KPMCmd *rfdel __attribute__((swift_name("rfdel")));
@property (class, readonly) KPMCmd *fwupgrade __attribute__((swift_name("fwupgrade")));
@property (class, readonly) KPMCmd *updateurl __attribute__((swift_name("updateurl")));
@property (class, readonly) KPMCmd *updateport __attribute__((swift_name("updateport")));
@property (class, readonly) KPMCmd *panellearn __attribute__((swift_name("panellearn")));
@property (class, readonly) KPMCmd *getpanel __attribute__((swift_name("getpanel")));
@property (class, readonly) KPMCmd *setpanel __attribute__((swift_name("setpanel")));
@property (class, readonly) KPMCmd *delpanel __attribute__((swift_name("delpanel")));
@property (class, readonly) KPMCmd *doaction __attribute__((swift_name("doaction")));
@property (class, readonly) KPMCmd *dotrigger __attribute__((swift_name("dotrigger")));
@property (class, readonly) KPMCmd *inputdevicelearn __attribute__((swift_name("inputdevicelearn")));
@property (class, readonly) KPMCmd *delinputdevice __attribute__((swift_name("delinputdevice")));
@property (class, readonly) KPMCmd *addaction __attribute__((swift_name("addaction")));
@property (class, readonly) KPMCmd *settriggeraction __attribute__((swift_name("settriggeraction")));
@property (class, readonly) KPMCmd *settriggerdefaultaction __attribute__((swift_name("settriggerdefaultaction")));
@property (class, readonly) KPMCmd *settriggerdelay __attribute__((swift_name("settriggerdelay")));
@property (class, readonly) KPMCmd *gettriggerstatus __attribute__((swift_name("gettriggerstatus")));
@property (class, readonly) KPMCmd *settriggerstatus __attribute__((swift_name("settriggerstatus")));
@property (class, readonly) KPMCmd *setnodisabletrigger __attribute__((swift_name("setnodisabletrigger")));
@property (class, readonly) KPMCmd *addtimer2 __attribute__((swift_name("addtimer2")));
@property (class, readonly) KPMCmd *deltimer2 __attribute__((swift_name("deltimer2")));
@property (class, readonly) KPMCmd *modifytimer2 __attribute__((swift_name("modifytimer2")));
@property (class, readonly) KPMCmd *login __attribute__((swift_name("login")));
@property (class, readonly) KPMCmd *getack __attribute__((swift_name("getack")));
@property (class, readonly) KPMCmd *setack __attribute__((swift_name("setack")));
@property (class, readonly) KPMCmd *timeout __attribute__((swift_name("timeout")));
@property (class, readonly) KPMCmd *addtimerack __attribute__((swift_name("addtimerack")));
@property (class, readonly) KPMCmd *deltimerack __attribute__((swift_name("deltimerack")));
@property (class, readonly) KPMCmd *modifytimerack __attribute__((swift_name("modifytimerack")));
@property (class, readonly) KPMCmd *peektimerack __attribute__((swift_name("peektimerack")));
@property (class, readonly) KPMCmd *rflearnack __attribute__((swift_name("rflearnack")));
@property (class, readonly) KPMCmd *rfcancelack __attribute__((swift_name("rfcancelack")));
@property (class, readonly) KPMCmd *rfsendack __attribute__((swift_name("rfsendack")));
@property (class, readonly) KPMCmd *rfdelack __attribute__((swift_name("rfdelack")));
@property (class, readonly) KPMCmd *fwupgradeack __attribute__((swift_name("fwupgradeack")));
@property (class, readonly) KPMCmd *panellearnack __attribute__((swift_name("panellearnack")));
@property (class, readonly) KPMCmd *panelack __attribute__((swift_name("panelack")));
@property (class, readonly) KPMCmd *dotriggerack __attribute__((swift_name("dotriggerack")));
@property (class, readonly) KPMCmd *gettriggerack __attribute__((swift_name("gettriggerack")));
@property (class, readonly) KPMCmd *getactionack __attribute__((swift_name("getactionack")));
@property (class, readonly) KPMCmd *inputdevicelearnack __attribute__((swift_name("inputdevicelearnack")));
@property (class, readonly) KPMCmd *delinputdeviceack __attribute__((swift_name("delinputdeviceack")));
@property (class, readonly) KPMCmd *addactionack __attribute__((swift_name("addactionack")));
@property (class, readonly) KPMCmd *settriggeractionack __attribute__((swift_name("settriggeractionack")));
@property (class, readonly) KPMCmd *settriggerdefaultactionack __attribute__((swift_name("settriggerdefaultactionack")));
@property (class, readonly) KPMCmd *settriggerdelayack __attribute__((swift_name("settriggerdelayack")));
@property (class, readonly) KPMCmd *triggerstatusack __attribute__((swift_name("triggerstatusack")));
@property (class, readonly) KPMCmd *nodisabletriggerack __attribute__((swift_name("nodisabletriggerack")));
@property (class, readonly) KPMCmd *addtimer2ack __attribute__((swift_name("addtimer2ack")));
@property (class, readonly) KPMCmd *gettimerack __attribute__((swift_name("gettimerack")));
@property (class, readonly) KPMCmd *deltimer2ack __attribute__((swift_name("deltimer2ack")));
@property (class, readonly) KPMCmd *modifytimer2ack __attribute__((swift_name("modifytimer2ack")));
@property (class, readonly) KPMCmd *loginack __attribute__((swift_name("loginack")));
+ (KPMKotlinArray<KPMCmd *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Cmd.Companion")))
@interface KPMCmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMCmdCompanion *shared __attribute__((swift_name("shared")));
- (KPMCmd * _Nullable)fromRawRaw:(NSString *)raw __attribute__((swift_name("fromRaw(raw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FactoryID")))
@interface KPMFactoryID : KPMKotlinEnum<KPMFactoryID *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KPMFactoryIDCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KPMFactoryID *wilink __attribute__((swift_name("wilink")));
@property (class, readonly) KPMFactoryID *wilinkNeutral __attribute__((swift_name("wilinkNeutral")));
@property (class, readonly) KPMFactoryID *yushenghong __attribute__((swift_name("yushenghong")));
@property (class, readonly) KPMFactoryID *ttk __attribute__((swift_name("ttk")));
@property (class, readonly) KPMFactoryID *luxcon __attribute__((swift_name("luxcon")));
@property (class, readonly) KPMFactoryID *simart __attribute__((swift_name("simart")));
@property (class, readonly) KPMFactoryID *keey __attribute__((swift_name("keey")));
@property (class, readonly) KPMFactoryID *vrunique __attribute__((swift_name("vrunique")));
@property (class, readonly) KPMFactoryID *orico __attribute__((swift_name("orico")));
@property (class, readonly) KPMFactoryID *sombor __attribute__((swift_name("sombor")));
@property (class, readonly) KPMFactoryID *shanfeng __attribute__((swift_name("shanfeng")));
@property (class, readonly) KPMFactoryID *xiamenhuating __attribute__((swift_name("xiamenhuating")));
@property (class, readonly) KPMFactoryID *wanwusmart __attribute__((swift_name("wanwusmart")));
@property (class, readonly) KPMFactoryID *wiking __attribute__((swift_name("wiking")));
@property (class, readonly) KPMFactoryID *jiwu __attribute__((swift_name("jiwu")));
@property (class, readonly) KPMFactoryID *ety __attribute__((swift_name("ety")));
@property (class, readonly) KPMFactoryID *zhexi __attribute__((swift_name("zhexi")));
@property (class, readonly) KPMFactoryID *dingyi __attribute__((swift_name("dingyi")));
@property (class, readonly) KPMFactoryID *riyaa __attribute__((swift_name("riyaa")));
+ (KPMKotlinArray<KPMFactoryID *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FactoryID.Companion")))
@interface KPMFactoryIDCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMFactoryIDCompanion *shared __attribute__((swift_name("shared")));
- (KPMFactoryID * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnOffStatus")))
@interface KPMOnOffStatus : KPMKotlinEnum<KPMOnOffStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KPMOnOffStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KPMOnOffStatus *off __attribute__((swift_name("off")));
@property (class, readonly) KPMOnOffStatus *on __attribute__((swift_name("on")));
@property (class, readonly) KPMOnOffStatus *follow __attribute__((swift_name("follow")));
@property (class, readonly) KPMOnOffStatus *reserve __attribute__((swift_name("reserve")));
+ (KPMKotlinArray<KPMOnOffStatus *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnOffStatus.Companion")))
@interface KPMOnOffStatusCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMOnOffStatusCompanion *shared __attribute__((swift_name("shared")));
- (KPMOnOffStatus * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductionID")))
@interface KPMProductionID : KPMKotlinEnum<KPMProductionID *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KPMProductionIDCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KPMProductionID *none __attribute__((swift_name("none")));
@property (class, readonly) KPMProductionID *wilinkmom __attribute__((swift_name("wilinkmom")));
@property (class, readonly) KPMProductionID *wilinkMomBox __attribute__((swift_name("wilinkMomBox")));
@property (class, readonly) KPMProductionID *somborMomBox __attribute__((swift_name("somborMomBox")));
@property (class, readonly) KPMProductionID *shanfengMomBox __attribute__((swift_name("shanfengMomBox")));
@property (class, readonly) KPMProductionID *neutralMomBox __attribute__((swift_name("neutralMomBox")));
@property (class, readonly) KPMProductionID *wanwusmartMomBox __attribute__((swift_name("wanwusmartMomBox")));
@property (class, readonly) KPMProductionID *zigbeeMomSocket __attribute__((swift_name("zigbeeMomSocket")));
@property (class, readonly) KPMProductionID *zigbeeMomBox __attribute__((swift_name("zigbeeMomBox")));
@property (class, readonly) KPMProductionID *envMonitorW __attribute__((swift_name("envMonitorW")));
@property (class, readonly) KPMProductionID *envMonitorPlusW __attribute__((swift_name("envMonitorPlusW")));
@property (class, readonly) KPMProductionID *vrunique102MomPcba __attribute__((swift_name("vrunique102MomPcba")));
@property (class, readonly) KPMProductionID *vrunique103MomDoorbell __attribute__((swift_name("vrunique103MomDoorbell")));
@property (class, readonly) KPMProductionID *keeyMomBox __attribute__((swift_name("keeyMomBox")));
@property (class, readonly) KPMProductionID *yushenghongMom __attribute__((swift_name("yushenghongMom")));
@property (class, readonly) KPMProductionID *oricoWifiMom2Socket __attribute__((swift_name("oricoWifiMom2Socket")));
@property (class, readonly) KPMProductionID *oricoWifiMom1Socket __attribute__((swift_name("oricoWifiMom1Socket")));
@property (class, readonly) KPMProductionID *simartMomBox __attribute__((swift_name("simartMomBox")));
@property (class, readonly) KPMProductionID *xiamenhuatingMomBox __attribute__((swift_name("xiamenhuatingMomBox")));
+ (KPMKotlinArray<KPMProductionID *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProductionID.Companion")))
@interface KPMProductionIDCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMProductionIDCompanion *shared __attribute__((swift_name("shared")));
- (KPMProductionID * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolComm")))
@interface KPMProtocolComm : KPMKotlinEnum<KPMProtocolComm *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KPMProtocolComm *lanprefix __attribute__((swift_name("lanprefix")));
@property (class, readonly) KPMProtocolComm *wanprefix __attribute__((swift_name("wanprefix")));
@property (class, readonly) KPMProtocolComm *suffix __attribute__((swift_name("suffix")));
+ (KPMKotlinArray<KPMProtocolComm *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolKey")))
@interface KPMProtocolKey : KPMKotlinEnum<KPMProtocolKey *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KPMProtocolKey *sn __attribute__((swift_name("sn")));
@property (class, readonly) KPMProtocolKey *seq __attribute__((swift_name("seq")));
@property (class, readonly) KPMProtocolKey *cmd __attribute__((swift_name("cmd")));
@property (class, readonly) KPMProtocolKey *field __attribute__((swift_name("field")));
@property (class, readonly) KPMProtocolKey *servicedomain __attribute__((swift_name("servicedomain")));
@property (class, readonly) KPMProtocolKey *protocolversion __attribute__((swift_name("protocolversion")));
@property (class, readonly) KPMProtocolKey *factoryid __attribute__((swift_name("factoryid")));
@property (class, readonly) KPMProtocolKey *productionid __attribute__((swift_name("productionid")));
@property (class, readonly) KPMProtocolKey *hardwareid __attribute__((swift_name("hardwareid")));
@property (class, readonly) KPMProtocolKey *fwpath __attribute__((swift_name("fwpath")));
@property (class, readonly) KPMProtocolKey *fwversion __attribute__((swift_name("fwversion")));
@property (class, readonly) KPMProtocolKey *outputdeviceinstalled __attribute__((swift_name("outputdeviceinstalled")));
@property (class, readonly) KPMProtocolKey *timer __attribute__((swift_name("timer")));
@property (class, readonly) KPMProtocolKey *timerinstalled __attribute__((swift_name("timerinstalled")));
@property (class, readonly) KPMProtocolKey *rfinstall __attribute__((swift_name("rfinstall")));
@property (class, readonly) KPMProtocolKey *index __attribute__((swift_name("index")));
@property (class, readonly) KPMProtocolKey *onlinestatus __attribute__((swift_name("onlinestatus")));
@property (class, readonly) KPMProtocolKey *rlystatus __attribute__((swift_name("rlystatus")));
@property (class, readonly) KPMProtocolKey *rlyaction __attribute__((swift_name("rlyaction")));
@property (class, readonly) KPMProtocolKey *rlymask __attribute__((swift_name("rlymask")));
@property (class, readonly) KPMProtocolKey *needack __attribute__((swift_name("needack")));
@property (class, readonly) KPMProtocolKey *ledstatus __attribute__((swift_name("ledstatus")));
@property (class, readonly) KPMProtocolKey *ledmask __attribute__((swift_name("ledmask")));
@property (class, readonly) KPMProtocolKey *onoffstatus __attribute__((swift_name("onoffstatus")));
@property (class, readonly) KPMProtocolKey *onoffrlymask __attribute__((swift_name("onoffrlymask")));
@property (class, readonly) KPMProtocolKey *brightaction __attribute__((swift_name("brightaction")));
@property (class, readonly) KPMProtocolKey *brightmask __attribute__((swift_name("brightmask")));
@property (class, readonly) KPMProtocolKey *tempaction __attribute__((swift_name("tempaction")));
@property (class, readonly) KPMProtocolKey *tempmask __attribute__((swift_name("tempmask")));
@property (class, readonly) KPMProtocolKey *functioncode __attribute__((swift_name("functioncode")));
@property (class, readonly) KPMProtocolKey *functioncodemask __attribute__((swift_name("functioncodemask")));
@property (class, readonly) KPMProtocolKey *failure __attribute__((swift_name("failure")));
@property (class, readonly) KPMProtocolKey *slavetype __attribute__((swift_name("slavetype")));
@property (class, readonly) KPMProtocolKey *time __attribute__((swift_name("time")));
@property (class, readonly) KPMProtocolKey *timestamp __attribute__((swift_name("timestamp")));
@property (class, readonly) KPMProtocolKey *cmdtype __attribute__((swift_name("cmdtype")));
@property (class, readonly) KPMProtocolKey *l1data __attribute__((swift_name("l1data")));
@property (class, readonly) KPMProtocolKey *l2data __attribute__((swift_name("l2data")));
@property (class, readonly) KPMProtocolKey *userid __attribute__((swift_name("userid")));
@property (class, readonly) KPMProtocolKey *username __attribute__((swift_name("username")));
@property (class, readonly) KPMProtocolKey *userpwd __attribute__((swift_name("userpwd")));
@property (class, readonly) KPMProtocolKey *randompwd __attribute__((swift_name("randompwd")));
@property (class, readonly) KPMProtocolKey *errorcode __attribute__((swift_name("errorcode")));
@property (class, readonly) KPMProtocolKey *devicetoken __attribute__((swift_name("devicetoken")));
@property (class, readonly) KPMProtocolKey *appfactoryid __attribute__((swift_name("appfactoryid")));
@property (class, readonly) KPMProtocolKey *nickname __attribute__((swift_name("nickname")));
@property (class, readonly) KPMProtocolKey *avatarspath __attribute__((swift_name("avatarspath")));
@property (class, readonly) KPMProtocolKey *l1failurecode __attribute__((swift_name("l1failurecode")));
@property (class, readonly) KPMProtocolKey *brightpercent __attribute__((swift_name("brightpercent")));
@property (class, readonly) KPMProtocolKey *brightpercentmask __attribute__((swift_name("brightpercentmask")));
@property (class, readonly) KPMProtocolKey *saveaction __attribute__((swift_name("saveaction")));
@property (class, readonly) KPMProtocolKey *slowrlyaction __attribute__((swift_name("slowrlyaction")));
@property (class, readonly) KPMProtocolKey *confmask __attribute__((swift_name("confmask")));
@property (class, readonly) KPMProtocolKey *turnonbrightpercent __attribute__((swift_name("turnonbrightpercent")));
@property (class, readonly) KPMProtocolKey *turnonmode __attribute__((swift_name("turnonmode")));
@property (class, readonly) KPMProtocolKey *minbrightpercent __attribute__((swift_name("minbrightpercent")));
@property (class, readonly) KPMProtocolKey *brightadjspeed __attribute__((swift_name("brightadjspeed")));
@property (class, readonly) KPMProtocolKey *onoffbrightadjspeed __attribute__((swift_name("onoffbrightadjspeed")));
@property (class, readonly) KPMProtocolKey *slowlyonbrightadjspeed __attribute__((swift_name("slowlyonbrightadjspeed")));
@property (class, readonly) KPMProtocolKey *slowlyoffbrightadjspeed __attribute__((swift_name("slowlyoffbrightadjspeed")));
@property (class, readonly) KPMProtocolKey *poweronstatus __attribute__((swift_name("poweronstatus")));
@property (class, readonly) KPMProtocolKey *ver __attribute__((swift_name("ver")));
@property (class, readonly) KPMProtocolKey *curtainaction __attribute__((swift_name("curtainaction")));
@property (class, readonly) KPMProtocolKey *curtainmask __attribute__((swift_name("curtainmask")));
@property (class, readonly) KPMProtocolKey *confver __attribute__((swift_name("confver")));
@property (class, readonly) KPMProtocolKey *paneladdr __attribute__((swift_name("paneladdr")));
@property (class, readonly) KPMProtocolKey *panelaction __attribute__((swift_name("panelaction")));
@property (class, readonly) KPMProtocolKey *timerpara __attribute__((swift_name("timerpara")));
@property (class, readonly) KPMProtocolKey *inputdeviceinstalled __attribute__((swift_name("inputdeviceinstalled")));
@property (class, readonly) KPMProtocolKey *triggerinstalled __attribute__((swift_name("triggerinstalled")));
@property (class, readonly) KPMProtocolKey *trigger __attribute__((swift_name("trigger")));
@property (class, readonly) KPMProtocolKey *actioninstalled __attribute__((swift_name("actioninstalled")));
@property (class, readonly) KPMProtocolKey *useraction __attribute__((swift_name("useraction")));
@property (class, readonly) KPMProtocolKey *defaultactionmask __attribute__((swift_name("defaultactionmask")));
@property (class, readonly) KPMProtocolKey *triggerindex __attribute__((swift_name("triggerindex")));
@property (class, readonly) KPMProtocolKey *actionmask __attribute__((swift_name("actionmask")));
@property (class, readonly) KPMProtocolKey *triggerstatus __attribute__((swift_name("triggerstatus")));
@property (class, readonly) KPMProtocolKey *triggermask __attribute__((swift_name("triggermask")));
@property (class, readonly) KPMProtocolKey *nodisabletrigger __attribute__((swift_name("nodisabletrigger")));
@property (class, readonly) KPMProtocolKey *delay __attribute__((swift_name("delay")));
@property (class, readonly) KPMProtocolKey *inputdevicetype __attribute__((swift_name("inputdevicetype")));
@property (class, readonly) KPMProtocolKey *devtype __attribute__((swift_name("devtype")));
@property (class, readonly) KPMProtocolKey *inputdeviceindex __attribute__((swift_name("inputdeviceindex")));
@property (class, readonly) KPMProtocolKey *para __attribute__((swift_name("para")));
@property (class, readonly) KPMProtocolKey *paramask __attribute__((swift_name("paramask")));
@property (class, readonly) KPMProtocolKey *actionindex __attribute__((swift_name("actionindex")));
@property (class, readonly) KPMProtocolKey *energy __attribute__((swift_name("energy")));
@property (class, readonly) KPMProtocolKey *power __attribute__((swift_name("power")));
+ (KPMKotlinArray<KPMProtocolKey *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolVersion")))
@interface KPMProtocolVersion : KPMKotlinEnum<KPMProtocolVersion *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KPMProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KPMProtocolVersion *v0 __attribute__((swift_name("v0")));
@property (class, readonly) KPMProtocolVersion *v1 __attribute__((swift_name("v1")));
@property (class, readonly) KPMProtocolVersion *v2 __attribute__((swift_name("v2")));
@property (class, readonly) KPMProtocolVersion *v3 __attribute__((swift_name("v3")));
+ (KPMKotlinArray<KPMProtocolVersion *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProtocolVersion.Companion")))
@interface KPMProtocolVersionCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (KPMProtocolVersion * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceTypeClassify")))
@interface KPMDeviceTypeClassify : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMDeviceTypeClassifyCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceTypeClassify.Companion")))
@interface KPMDeviceTypeClassifyCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMDeviceTypeClassifyCompanion *shared __attribute__((swift_name("shared")));
- (BOOL)is1SocketDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("is1SocketDevice(deviceTypeSet:)")));
- (BOOL)is2SocketDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("is2SocketDevice(deviceTypeSet:)")));
- (BOOL)is3SocketDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("is3SocketDevice(deviceTypeSet:)")));
- (BOOL)is4SocketDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("is4SocketDevice(deviceTypeSet:)")));
- (BOOL)isBoxSW1DDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isBoxSW1D(deviceTypeSet:)")));
- (BOOL)isBoxSW2DDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isBoxSW2D(deviceTypeSet:)")));
- (BOOL)isBoxSW3DDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isBoxSW3D(deviceTypeSet:)")));
- (BOOL)isControllableDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isControllableDevice(deviceTypeSet:)")));
- (BOOL)isCurtainWithLocationDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isCurtainWithLocationDevice(deviceTypeSet:)")));
- (BOOL)isCurtainWithoutLocationDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isCurtainWithoutLocationDevice(deviceTypeSet:)")));
- (BOOL)isDimmer1DDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isDimmer1D(deviceTypeSet:)")));
- (BOOL)isDimmer2DDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isDimmer2D(deviceTypeSet:)")));
- (BOOL)isDimmer3DDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isDimmer3D(deviceTypeSet:)")));
- (BOOL)isDimmerDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isDimmerDevice(deviceTypeSet:)")));
- (BOOL)isDimmerPowerStatisticsDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isDimmerPowerStatisticsDevice(deviceTypeSet:)")));
- (BOOL)isDimmerSW1DDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isDimmerSW1D(deviceTypeSet:)")));
- (BOOL)isDimmerSW2DDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isDimmerSW2D(deviceTypeSet:)")));
- (BOOL)isDimmerSW3DDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isDimmerSW3D(deviceTypeSet:)")));
- (BOOL)isEnvMonitorDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isEnvMonitorDevice(deviceTypeSet:)")));
- (BOOL)isGatewayDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isGatewayDevice(deviceTypeSet:)")));
- (BOOL)isIRDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isIRDevice(deviceTypeSet:)")));
- (BOOL)isInputDetectDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isInputDetectDevice(deviceTypeSet:)")));
- (BOOL)isNoResponseDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isNoResponseDevice(deviceTypeSet:)")));
- (BOOL)isPowerStatisticsDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isPowerStatisticsDevice(deviceTypeSet:)")));
- (BOOL)isRGBLampDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isRGBLampDevice(deviceTypeSet:)")));
- (BOOL)isRGBWLampDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isRGBWLampDevice(deviceTypeSet:)")));
- (BOOL)isScenePanelDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isScenePanelDevice(deviceTypeSet:)")));
- (BOOL)isSocketPowerStatisticsDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isSocketPowerStatisticsDevice(deviceTypeSet:)")));
- (BOOL)isTemperatureLampDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isTemperatureLampDevice(deviceTypeSet:)")));
- (BOOL)isTouchSW1DDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isTouchSW1D(deviceTypeSet:)")));
- (BOOL)isTouchSW2DDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isTouchSW2D(deviceTypeSet:)")));
- (BOOL)isTouchSW3DDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isTouchSW3D(deviceTypeSet:)")));
- (BOOL)isTwoSocketDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isTwoSocketDevice(deviceTypeSet:)")));
- (BOOL)isWifiOnlyDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isWifiOnlyDevice(deviceTypeSet:)")));
- (BOOL)isWithResponseDeviceDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("isWithResponseDevice(deviceTypeSet:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceTypeSet")))
@interface KPMDeviceTypeSet : KPMKotlinEnum<KPMDeviceTypeSet *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KPMDeviceTypeSetCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KPMDeviceTypeSet *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) KPMDeviceTypeSet *momson __attribute__((swift_name("momson")));
@property (class, readonly) KPMDeviceTypeSet *sonalarm __attribute__((swift_name("sonalarm")));
@property (class, readonly) KPMDeviceTypeSet *son861s __attribute__((swift_name("son861s")));
@property (class, readonly) KPMDeviceTypeSet *sonsw1d __attribute__((swift_name("sonsw1d")));
@property (class, readonly) KPMDeviceTypeSet *sonsw1s __attribute__((swift_name("sonsw1s")));
@property (class, readonly) KPMDeviceTypeSet *sonsw2d __attribute__((swift_name("sonsw2d")));
@property (class, readonly) KPMDeviceTypeSet *sonsw2s __attribute__((swift_name("sonsw2s")));
@property (class, readonly) KPMDeviceTypeSet *sonsw3d __attribute__((swift_name("sonsw3d")));
@property (class, readonly) KPMDeviceTypeSet *sonsw3s __attribute__((swift_name("sonsw3s")));
@property (class, readonly) KPMDeviceTypeSet *son861s3152262Sc __attribute__((swift_name("son861s3152262Sc")));
@property (class, readonly) KPMDeviceTypeSet *sonsw1s4332262 __attribute__((swift_name("sonsw1s4332262")));
@property (class, readonly) KPMDeviceTypeSet *sonlight1s4331527Sc __attribute__((swift_name("sonlight1s4331527Sc")));
@property (class, readonly) KPMDeviceTypeSet *sonplug1s4331527 __attribute__((swift_name("sonplug1s4331527")));
@property (class, readonly) KPMDeviceTypeSet *sonled1s __attribute__((swift_name("sonled1s")));
@property (class, readonly) KPMDeviceTypeSet *sondimmer1d __attribute__((swift_name("sondimmer1d")));
@property (class, readonly) KPMDeviceTypeSet *sondimmer2d __attribute__((swift_name("sondimmer2d")));
@property (class, readonly) KPMDeviceTypeSet *sondimmer3d __attribute__((swift_name("sondimmer3d")));
@property (class, readonly) KPMDeviceTypeSet *sondimmersw1d __attribute__((swift_name("sondimmersw1d")));
@property (class, readonly) KPMDeviceTypeSet *sondimmersw2d __attribute__((swift_name("sondimmersw2d")));
@property (class, readonly) KPMDeviceTypeSet *sondimmersw3d __attribute__((swift_name("sondimmersw3d")));
@property (class, readonly) KPMDeviceTypeSet *sontouchsw1d __attribute__((swift_name("sontouchsw1d")));
@property (class, readonly) KPMDeviceTypeSet *sontouchsw2d __attribute__((swift_name("sontouchsw2d")));
@property (class, readonly) KPMDeviceTypeSet *sontouchsw3d __attribute__((swift_name("sontouchsw3d")));
@property (class, readonly) KPMDeviceTypeSet *sonboxsw1d __attribute__((swift_name("sonboxsw1d")));
@property (class, readonly) KPMDeviceTypeSet *sonboxsw2d __attribute__((swift_name("sonboxsw2d")));
@property (class, readonly) KPMDeviceTypeSet *sonboxsw3d __attribute__((swift_name("sonboxsw3d")));
@property (class, readonly) KPMDeviceTypeSet *sondimmerpwm1d __attribute__((swift_name("sondimmerpwm1d")));
@property (class, readonly) KPMDeviceTypeSet *sondimmerpwm2d __attribute__((swift_name("sondimmerpwm2d")));
@property (class, readonly) KPMDeviceTypeSet *sondimmerpwm3d __attribute__((swift_name("sondimmerpwm3d")));
@property (class, readonly) KPMDeviceTypeSet *sonplug1d __attribute__((swift_name("sonplug1d")));
@property (class, readonly) KPMDeviceTypeSet *sonplug2d __attribute__((swift_name("sonplug2d")));
@property (class, readonly) KPMDeviceTypeSet *sonplug3d __attribute__((swift_name("sonplug3d")));
@property (class, readonly) KPMDeviceTypeSet *sonplug1dx2 __attribute__((swift_name("sonplug1dx2")));
@property (class, readonly) KPMDeviceTypeSet *sonplug2dx2 __attribute__((swift_name("sonplug2dx2")));
@property (class, readonly) KPMDeviceTypeSet *sonplug3dx2 __attribute__((swift_name("sonplug3dx2")));
@property (class, readonly) KPMDeviceTypeSet *soncurtain1d __attribute__((swift_name("soncurtain1d")));
@property (class, readonly) KPMDeviceTypeSet *soncurtain2d __attribute__((swift_name("soncurtain2d")));
@property (class, readonly) KPMDeviceTypeSet *sontempled __attribute__((swift_name("sontempled")));
@property (class, readonly) KPMDeviceTypeSet *sonrgbled __attribute__((swift_name("sonrgbled")));
@property (class, readonly) KPMDeviceTypeSet *sonrgbwled __attribute__((swift_name("sonrgbwled")));
@property (class, readonly) KPMDeviceTypeSet *sonoutlet1d __attribute__((swift_name("sonoutlet1d")));
@property (class, readonly) KPMDeviceTypeSet *sonir __attribute__((swift_name("sonir")));
@property (class, readonly) KPMDeviceTypeSet *sonlock __attribute__((swift_name("sonlock")));
@property (class, readonly) KPMDeviceTypeSet *soncamera __attribute__((swift_name("soncamera")));
@property (class, readonly) KPMDeviceTypeSet *soncurtainloc __attribute__((swift_name("soncurtainloc")));
@property (class, readonly) KPMDeviceTypeSet *sondimmer4dELms __attribute__((swift_name("sondimmer4dELms")));
@property (class, readonly) KPMDeviceTypeSet *sonoutlet1dE __attribute__((swift_name("sonoutlet1dE")));
@property (class, readonly) KPMDeviceTypeSet *sondimmer2d1 __attribute__((swift_name("sondimmer2d1")));
@property (class, readonly) KPMDeviceTypeSet *sondimmer3d1 __attribute__((swift_name("sondimmer3d1")));
@property (class, readonly) KPMDeviceTypeSet *sondimmer3d2 __attribute__((swift_name("sondimmer3d2")));
@property (class, readonly) KPMDeviceTypeSet *sondimmersw2d1 __attribute__((swift_name("sondimmersw2d1")));
@property (class, readonly) KPMDeviceTypeSet *sondimmersw3d1 __attribute__((swift_name("sondimmersw3d1")));
@property (class, readonly) KPMDeviceTypeSet *sondimmersw3d2 __attribute__((swift_name("sondimmersw3d2")));
@property (class, readonly) KPMDeviceTypeSet *sontouchsw2d1 __attribute__((swift_name("sontouchsw2d1")));
@property (class, readonly) KPMDeviceTypeSet *sontouchsw3d1 __attribute__((swift_name("sontouchsw3d1")));
@property (class, readonly) KPMDeviceTypeSet *sontouchsw3d2 __attribute__((swift_name("sontouchsw3d2")));
@property (class, readonly) KPMDeviceTypeSet *sonboxsw2d1 __attribute__((swift_name("sonboxsw2d1")));
@property (class, readonly) KPMDeviceTypeSet *sonboxsw3d1 __attribute__((swift_name("sonboxsw3d1")));
@property (class, readonly) KPMDeviceTypeSet *sonboxsw3d2 __attribute__((swift_name("sonboxsw3d2")));
@property (class, readonly) KPMDeviceTypeSet *remotecontroller __attribute__((swift_name("remotecontroller")));
@property (class, readonly) KPMDeviceTypeSet *securitycontroller __attribute__((swift_name("securitycontroller")));
@property (class, readonly) KPMDeviceTypeSet *entranceguard __attribute__((swift_name("entranceguard")));
@property (class, readonly) KPMDeviceTypeSet *infraredwarning __attribute__((swift_name("infraredwarning")));
@property (class, readonly) KPMDeviceTypeSet *fuelgaswarning __attribute__((swift_name("fuelgaswarning")));
@property (class, readonly) KPMDeviceTypeSet *scenepanel2d __attribute__((swift_name("scenepanel2d")));
@property (class, readonly) KPMDeviceTypeSet *scenepanel6d __attribute__((swift_name("scenepanel6d")));
@property (class, readonly) KPMDeviceTypeSet *scenepanel3d __attribute__((swift_name("scenepanel3d")));
@property (class, readonly) KPMDeviceTypeSet *scenepanel1d __attribute__((swift_name("scenepanel1d")));
@property (class, readonly) KPMDeviceTypeSet *envmonitorW __attribute__((swift_name("envmonitorW")));
@property (class, readonly) KPMDeviceTypeSet *envmonitorplusW __attribute__((swift_name("envmonitorplusW")));
+ (KPMKotlinArray<KPMDeviceTypeSet *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceTypeSet.Companion")))
@interface KPMDeviceTypeSetCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMDeviceTypeSetCompanion *shared __attribute__((swift_name("shared")));
- (KPMDeviceTypeSet * _Nullable)fromRawRaw:(NSString *)raw __attribute__((swift_name("fromRaw(raw:)")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceTypeUtil")))
@interface KPMDeviceTypeUtil : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMDeviceTypeUtilCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceTypeUtil.Companion")))
@interface KPMDeviceTypeUtilCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMDeviceTypeUtilCompanion *shared __attribute__((swift_name("shared")));
- (KPMInt * _Nullable)findDeviceTypeNumberDeviceTypeString:(NSString *)deviceTypeString __attribute__((swift_name("findDeviceTypeNumber(deviceTypeString:)")));
- (NSString * _Nullable)findDeviceTypeStringDeviceTypeNumber:(int32_t)deviceTypeNumber __attribute__((swift_name("findDeviceTypeString(deviceTypeNumber:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionsAndDeletionsCmdCreator")))
@interface KPMAdditionsAndDeletionsCmdCreator : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMAdditionsAndDeletionsCmdCreatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionsAndDeletionsCmdCreator.Companion")))
@interface KPMAdditionsAndDeletionsCmdCreatorCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMAdditionsAndDeletionsCmdCreatorCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)addRF433DeviceSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("addRF433Device(sn:deviceTypeSet:factoryID:protocolVersion:)")));
- (NSString *)deleteDeviceSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet deviceIndex:(int32_t)deviceIndex factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("deleteDevice(sn:deviceTypeSet:deviceIndex:factoryID:protocolVersion:)")));
- (NSString *)startDeviceScanSn:(NSString *)sn factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("startDeviceScan(sn:factoryID:protocolVersion:)")));
- (NSString *)stopDeviceScanSn:(NSString *)sn factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("stopDeviceScan(sn:factoryID:protocolVersion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionsAndDeletionsCmdCreator.CompanionAddRF433DevicePara")))
@interface KPMAdditionsAndDeletionsCmdCreatorCompanionAddRF433DevicePara : KPMBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd slaveType:(NSString *)slaveType __attribute__((swift_name("init(sn:seq:factoryID:cmd:slaveType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMAdditionsAndDeletionsCmdCreatorCompanionAddRF433DeviceParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (KPMAdditionsAndDeletionsCmdCreatorCompanionAddRF433DevicePara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd slaveType:(NSString *)slaveType __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:slaveType:)")));
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
@interface KPMAdditionsAndDeletionsCmdCreatorCompanionAddRF433DeviceParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMAdditionsAndDeletionsCmdCreatorCompanionAddRF433DeviceParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionsAndDeletionsCmdCreator.CompanionDeviceScanPara")))
@interface KPMAdditionsAndDeletionsCmdCreatorCompanionDeviceScanPara : KPMBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd __attribute__((swift_name("init(sn:seq:factoryID:cmd:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMAdditionsAndDeletionsCmdCreatorCompanionDeviceScanParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (KPMAdditionsAndDeletionsCmdCreatorCompanionDeviceScanPara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:)")));
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
@interface KPMAdditionsAndDeletionsCmdCreatorCompanionDeviceScanParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMAdditionsAndDeletionsCmdCreatorCompanionDeviceScanParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigCmdCreator")))
@interface KPMConfigCmdCreator : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMConfigCmdCreatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigCmdCreator.Companion")))
@interface KPMConfigCmdCreatorCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMConfigCmdCreatorCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)modifyApplianceOnOffStatusSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex onOffStatus:(KPMOnOffStatus *)onOffStatus factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("modifyApplianceOnOffStatus(sn:deviceTypeSet:applianceIndex:onOffStatus:factoryID:protocolVersion:)")));
- (NSString *)setMinBrightPercentSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex minBrightPercent:(int32_t)minBrightPercent factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("setMinBrightPercent(sn:deviceTypeSet:applianceIndex:minBrightPercent:factoryID:protocolVersion:)")));
- (NSString *)setOnOffBrightAdjustSpeedSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex adjustSpeed:(int32_t)adjustSpeed factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("setOnOffBrightAdjustSpeed(sn:deviceTypeSet:applianceIndex:adjustSpeed:factoryID:protocolVersion:)")));
- (NSString *)setRGBWTurnOnColorSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex para:(KPMParaStructure *)para factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("setRGBWTurnOnColor(sn:deviceTypeSet:applianceIndex:para:factoryID:protocolVersion:)")));
- (NSString *)setTurnOnBrightPercentSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex turnOnBrightPercent:(int32_t)turnOnBrightPercent factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("setTurnOnBrightPercent(sn:deviceTypeSet:applianceIndex:turnOnBrightPercent:factoryID:protocolVersion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControlCmdCreator")))
@interface KPMControlCmdCreator : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMControlCmdCreatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControlCmdCreator.Companion")))
@interface KPMControlCmdCreatorCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMControlCmdCreatorCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)activateTriggerSn:(NSString *)sn triggerIndex:(int32_t)triggerIndex factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("activateTrigger(sn:triggerIndex:factoryID:protocolVersion:)")));
- (NSString *)brightAdjustSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex brightPercent:(int32_t)brightPercent factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("brightAdjust(sn:deviceTypeSet:applianceIndex:brightPercent:factoryID:protocolVersion:)")));
- (NSString *)controlApplianceGroupOnOffSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndexList:(NSArray<KPMInt *> *)applianceIndexList action:(BOOL)action factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("controlApplianceGroupOnOff(sn:deviceTypeSet:applianceIndexList:action:factoryID:protocolVersion:)")));
- (NSString *)controlApplianceOnOffSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex action:(BOOL)action factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("controlApplianceOnOff(sn:deviceTypeSet:applianceIndex:action:factoryID:protocolVersion:)")));
- (NSString *)curtainControlSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex curtainAction:(KPMParaStructureCurtainAction *)curtainAction factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("curtainControl(sn:deviceTypeSet:applianceIndex:curtainAction:factoryID:protocolVersion:)")));
- (NSString *)curtainWithLocationControlSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex para:(KPMParaStructure *)para factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("curtainWithLocationControl(sn:deviceTypeSet:applianceIndex:para:factoryID:protocolVersion:)")));
- (NSString *)irControlSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex irCmd:(KPMParaStructureIrCmd *)irCmd irIndex:(int32_t)irIndex factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("irControl(sn:deviceTypeSet:applianceIndex:irCmd:irIndex:factoryID:protocolVersion:)")));
- (NSString *)rgbwParaAdjustSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex para:(KPMParaStructure *)para factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("rgbwParaAdjust(sn:deviceTypeSet:applianceIndex:para:factoryID:protocolVersion:)")));
- (NSString *)temperatureParaAdjustSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex brightPercent:(int32_t)brightPercent temperaturePercent:(int32_t)temperaturePercent factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("temperatureParaAdjust(sn:deviceTypeSet:applianceIndex:brightPercent:temperaturePercent:factoryID:protocolVersion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControlCmdCreator.CompanionActivateTriggerPara")))
@interface KPMControlCmdCreatorCompanionActivateTriggerPara : KPMBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerIndex:(int32_t)triggerIndex __attribute__((swift_name("init(sn:seq:factoryID:cmd:triggerIndex:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMControlCmdCreatorCompanionActivateTriggerParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (KPMControlCmdCreatorCompanionActivateTriggerPara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerIndex:(int32_t)triggerIndex __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:triggerIndex:)")));
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
@interface KPMControlCmdCreatorCompanionActivateTriggerParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMControlCmdCreatorCompanionActivateTriggerParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GatewayCmdCreator")))
@interface KPMGatewayCmdCreator : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMGatewayCmdCreatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GatewayCmdCreator.Companion")))
@interface KPMGatewayCmdCreatorCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMGatewayCmdCreatorCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)getGatewayFirmwareVersionSn:(NSString *)sn factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("getGatewayFirmwareVersion(sn:factoryID:protocolVersion:)")));
- (NSString *)startGatewayFirmwareUpgradeSn:(NSString *)sn factoryID:(KPMFactoryID *)factoryID updateUrl:(NSString *)updateUrl updatePort:(int32_t)updatePort firmwarePath:(NSString *)firmwarePath protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("startGatewayFirmwareUpgrade(sn:factoryID:updateUrl:updatePort:firmwarePath:protocolVersion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetInfoCmdCreator")))
@interface KPMGetInfoCmdCreator : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMGetInfoCmdCreatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetInfoCmdCreator.Companion")))
@interface KPMGetInfoCmdCreatorCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMGetInfoCmdCreatorCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)getAllInfoSn:(NSString *)sn factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("getAllInfo(sn:factoryID:protocolVersion:)")));
- (NSString *)getApplianceStatusSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("getApplianceStatus(sn:deviceTypeSet:applianceIndex:factoryID:protocolVersion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator")))
@interface KPMLinkageCmdCreator : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMLinkageCmdCreatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.Companion")))
@interface KPMLinkageCmdCreatorCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMLinkageCmdCreatorCompanion *shared __attribute__((swift_name("shared")));
- (KPMLinkageCmdCreatorCompanionAddActionCmdReturnType *)addActionSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceActionList:(NSArray<KPMBoolean *> *)applianceActionList applianceMaskList:(NSArray<KPMBoolean *> *)applianceMaskList paraList:(NSArray<KPMLong *> *)paraList paraMaskList:(NSArray<KPMBoolean *> *)paraMaskList factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("addAction(sn:deviceTypeSet:applianceActionList:applianceMaskList:paraList:paraMaskList:factoryID:protocolVersion:)")));
- (NSString *)setEmergencyTriggerSn:(NSString *)sn emergencyTriggerList:(NSArray<KPMBoolean *> *)emergencyTriggerList triggerMaskList:(NSArray<KPMBoolean *> *)triggerMaskList factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("setEmergencyTrigger(sn:emergencyTriggerList:triggerMaskList:factoryID:protocolVersion:)")));
- (NSString *)setTriggerActionSn:(NSString *)sn triggerIndex:(int32_t)triggerIndex userActionMaskList:(NSArray<KPMBoolean *> *)userActionMaskList triggerStatusList:(NSArray<KPMBoolean *> *)triggerStatusList triggerMaskList:(NSArray<KPMBoolean *> *)triggerMaskList factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("setTriggerAction(sn:triggerIndex:userActionMaskList:triggerStatusList:triggerMaskList:factoryID:protocolVersion:)")));
- (NSString *)setTriggerDefaultActionSn:(NSString *)sn triggerIndex:(int32_t)triggerIndex defaultActionMaskList:(NSArray<KPMBoolean *> *)defaultActionMaskList factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("setTriggerDefaultAction(sn:triggerIndex:defaultActionMaskList:factoryID:protocolVersion:)")));
- (NSString *)setTriggerDelaySn:(NSString *)sn triggerIndex:(int32_t)triggerIndex delaySecond:(int32_t)delaySecond factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("setTriggerDelay(sn:triggerIndex:delaySecond:factoryID:protocolVersion:)")));
- (NSString *)setTriggerStatusSn:(NSString *)sn triggerStatusList:(NSArray<KPMBoolean *> *)triggerStatusList triggerMaskList:(NSArray<KPMBoolean *> *)triggerMaskList factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("setTriggerStatus(sn:triggerStatusList:triggerMaskList:factoryID:protocolVersion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionAddActionCmdReturnType")))
@interface KPMLinkageCmdCreatorCompanionAddActionCmdReturnType : KPMBase
- (instancetype)initWithSeq:(int64_t)seq cmd:(NSString *)cmd __attribute__((swift_name("init(seq:cmd:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (KPMLinkageCmdCreatorCompanionAddActionCmdReturnType *)doCopySeq:(int64_t)seq cmd:(NSString *)cmd __attribute__((swift_name("doCopy(seq:cmd:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int64_t seq __attribute__((swift_name("seq")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionAddActionPara")))
@interface KPMLinkageCmdCreatorCompanionAddActionPara : KPMBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd devType:(int32_t)devType rlyAction:(NSString *)rlyAction rlyMask:(NSString *)rlyMask para:(NSArray<KPMLong *> *)para paraMask:(NSString *)paraMask __attribute__((swift_name("init(sn:seq:factoryID:cmd:devType:rlyAction:rlyMask:para:paraMask:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMLinkageCmdCreatorCompanionAddActionParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSArray<KPMLong *> *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (KPMLinkageCmdCreatorCompanionAddActionPara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd devType:(int32_t)devType rlyAction:(NSString *)rlyAction rlyMask:(NSString *)rlyMask para:(NSArray<KPMLong *> *)para paraMask:(NSString *)paraMask __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:devType:rlyAction:rlyMask:para:paraMask:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int32_t devType __attribute__((swift_name("devType")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) NSArray<KPMLong *> *para __attribute__((swift_name("para")));
@property (readonly) NSString *paraMask __attribute__((swift_name("paraMask")));
@property (readonly) NSString *rlyAction __attribute__((swift_name("rlyAction")));
@property (readonly) NSString *rlyMask __attribute__((swift_name("rlyMask")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionAddActionParaCompanion")))
@interface KPMLinkageCmdCreatorCompanionAddActionParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMLinkageCmdCreatorCompanionAddActionParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionSetEmergencyTriggerPara")))
@interface KPMLinkageCmdCreatorCompanionSetEmergencyTriggerPara : KPMBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd noDisableTrigger:(NSString *)noDisableTrigger triggerMask:(NSString *)triggerMask __attribute__((swift_name("init(sn:seq:factoryID:cmd:noDisableTrigger:triggerMask:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMLinkageCmdCreatorCompanionSetEmergencyTriggerParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (KPMLinkageCmdCreatorCompanionSetEmergencyTriggerPara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd noDisableTrigger:(NSString *)noDisableTrigger triggerMask:(NSString *)triggerMask __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:noDisableTrigger:triggerMask:)")));
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
@interface KPMLinkageCmdCreatorCompanionSetEmergencyTriggerParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMLinkageCmdCreatorCompanionSetEmergencyTriggerParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionSetTriggerActionPara")))
@interface KPMLinkageCmdCreatorCompanionSetTriggerActionPara : KPMBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerIndex:(int32_t)triggerIndex actionMask:(NSString *)actionMask triggerStatus:(NSString *)triggerStatus triggerMask:(NSString *)triggerMask __attribute__((swift_name("init(sn:seq:factoryID:cmd:triggerIndex:actionMask:triggerStatus:triggerMask:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMLinkageCmdCreatorCompanionSetTriggerActionParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (KPMLinkageCmdCreatorCompanionSetTriggerActionPara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerIndex:(int32_t)triggerIndex actionMask:(NSString *)actionMask triggerStatus:(NSString *)triggerStatus triggerMask:(NSString *)triggerMask __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:triggerIndex:actionMask:triggerStatus:triggerMask:)")));
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
@interface KPMLinkageCmdCreatorCompanionSetTriggerActionParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMLinkageCmdCreatorCompanionSetTriggerActionParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionSetTriggerDefaultActionPara")))
@interface KPMLinkageCmdCreatorCompanionSetTriggerDefaultActionPara : KPMBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerIndex:(int32_t)triggerIndex defaultActionMask:(NSString *)defaultActionMask __attribute__((swift_name("init(sn:seq:factoryID:cmd:triggerIndex:defaultActionMask:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMLinkageCmdCreatorCompanionSetTriggerDefaultActionParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (KPMLinkageCmdCreatorCompanionSetTriggerDefaultActionPara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerIndex:(int32_t)triggerIndex defaultActionMask:(NSString *)defaultActionMask __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:triggerIndex:defaultActionMask:)")));
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
@interface KPMLinkageCmdCreatorCompanionSetTriggerDefaultActionParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMLinkageCmdCreatorCompanionSetTriggerDefaultActionParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionSetTriggerDelayPara")))
@interface KPMLinkageCmdCreatorCompanionSetTriggerDelayPara : KPMBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerIndex:(int32_t)triggerIndex delay:(int32_t)delay __attribute__((swift_name("init(sn:seq:factoryID:cmd:triggerIndex:delay:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMLinkageCmdCreatorCompanionSetTriggerDelayParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (KPMLinkageCmdCreatorCompanionSetTriggerDelayPara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerIndex:(int32_t)triggerIndex delay:(int32_t)delay __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:triggerIndex:delay:)")));
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
@interface KPMLinkageCmdCreatorCompanionSetTriggerDelayParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMLinkageCmdCreatorCompanionSetTriggerDelayParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmdCreator.CompanionSetTriggerStatusPara")))
@interface KPMLinkageCmdCreatorCompanionSetTriggerStatusPara : KPMBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerStatus:(NSString *)triggerStatus triggerMask:(NSString *)triggerMask __attribute__((swift_name("init(sn:seq:factoryID:cmd:triggerStatus:triggerMask:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMLinkageCmdCreatorCompanionSetTriggerStatusParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (KPMLinkageCmdCreatorCompanionSetTriggerStatusPara *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd triggerStatus:(NSString *)triggerStatus triggerMask:(NSString *)triggerMask __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:triggerStatus:triggerMask:)")));
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
@interface KPMLinkageCmdCreatorCompanionSetTriggerStatusParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMLinkageCmdCreatorCompanionSetTriggerStatusParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator")))
@interface KPMTimerCmdCreator : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMTimerCmdCreatorCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.Companion")))
@interface KPMTimerCmdCreatorCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMTimerCmdCreatorCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)addTimerV1Sn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex action:(BOOL)action enable:(BOOL)enable timestamp:(int64_t)timestamp weekMaskFromUserTimezone:(KPMWeekMask *)weekMaskFromUserTimezone factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("addTimerV1(sn:deviceTypeSet:applianceIndex:action:enable:timestamp:weekMaskFromUserTimezone:factoryID:protocolVersion:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (NSString *)addTimerV2Sn:(NSString *)sn actionMaskList:(NSArray<KPMBoolean *> *)actionMaskList triggerStatusList:(NSArray<KPMBoolean *> *)triggerStatusList triggerMaskList:(NSArray<KPMBoolean *> *)triggerMaskList enable:(BOOL)enable timestamp:(int64_t)timestamp weekMaskFromUserTimezone:(KPMWeekMask *)weekMaskFromUserTimezone factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("addTimerV2(sn:actionMaskList:triggerStatusList:triggerMaskList:enable:timestamp:weekMaskFromUserTimezone:factoryID:protocolVersion:)")));
- (NSString *)delTimerV2Sn:(NSString *)sn timerIndex:(int32_t)timerIndex factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("delTimerV2(sn:timerIndex:factoryID:protocolVersion:)")));
- (NSString *)deleteTimerV1Sn:(NSString *)sn timerIndex:(int32_t)timerIndex factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("deleteTimerV1(sn:timerIndex:factoryID:protocolVersion:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (NSString *)getTimerV1Sn:(NSString *)sn factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("getTimerV1(sn:factoryID:protocolVersion:)")));
- (NSString *)modifyTimerV1Sn:(NSString *)sn timerIndex:(int32_t)timerIndex deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex action:(BOOL)action enable:(BOOL)enable timestamp:(int64_t)timestamp weekMaskFromUserTimezone:(KPMWeekMask *)weekMaskFromUserTimezone factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("modifyTimerV1(sn:timerIndex:deviceTypeSet:applianceIndex:action:enable:timestamp:weekMaskFromUserTimezone:factoryID:protocolVersion:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (NSString *)modifyTimerV2Sn:(NSString *)sn timerIndex:(int32_t)timerIndex actionMaskList:(NSArray<KPMBoolean *> *)actionMaskList triggerStatusList:(NSArray<KPMBoolean *> *)triggerStatusList triggerMaskList:(NSArray<KPMBoolean *> *)triggerMaskList enable:(BOOL)enable timestamp:(int64_t)timestamp weekMaskFromUserTimezone:(KPMWeekMask *)weekMaskFromUserTimezone factoryID:(KPMFactoryID *)factoryID protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("modifyTimerV2(sn:timerIndex:actionMaskList:triggerStatusList:triggerMaskList:enable:timestamp:weekMaskFromUserTimezone:factoryID:protocolVersion:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.CompanionAddOrModifyTimerV1Para")))
@interface KPMTimerCmdCreatorCompanionAddOrModifyTimerV1Para : KPMBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd timer:(NSArray<NSString *> *)timer __attribute__((swift_name("init(sn:seq:factoryID:cmd:timer:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMTimerCmdCreatorCompanionAddOrModifyTimerV1ParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSArray<NSString *> *)component5 __attribute__((swift_name("component5()")));
- (KPMTimerCmdCreatorCompanionAddOrModifyTimerV1Para *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd timer:(NSArray<NSString *> *)timer __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:timer:)")));
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
@interface KPMTimerCmdCreatorCompanionAddOrModifyTimerV1ParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMTimerCmdCreatorCompanionAddOrModifyTimerV1ParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.CompanionAddOrModifyTimerV2Para")))
@interface KPMTimerCmdCreatorCompanionAddOrModifyTimerV2Para : KPMBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd timerPara:(NSArray<KPMLong *> *)timerPara __attribute__((swift_name("init(sn:seq:factoryID:cmd:timerPara:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMTimerCmdCreatorCompanionAddOrModifyTimerV2ParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSArray<KPMLong *> *)component5 __attribute__((swift_name("component5()")));
- (KPMTimerCmdCreatorCompanionAddOrModifyTimerV2Para *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd timerPara:(NSArray<KPMLong *> *)timerPara __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:timerPara:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@property (readonly) NSArray<KPMLong *> *timerPara __attribute__((swift_name("timerPara")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.CompanionAddOrModifyTimerV2ParaCompanion")))
@interface KPMTimerCmdCreatorCompanionAddOrModifyTimerV2ParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMTimerCmdCreatorCompanionAddOrModifyTimerV2ParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.CompanionDelTimerV1Para")))
@interface KPMTimerCmdCreatorCompanionDelTimerV1Para : KPMBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd timer:(NSArray<KPMInt *> *)timer __attribute__((swift_name("init(sn:seq:factoryID:cmd:timer:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMTimerCmdCreatorCompanionDelTimerV1ParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSArray<KPMInt *> *)component5 __attribute__((swift_name("component5()")));
- (KPMTimerCmdCreatorCompanionDelTimerV1Para *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd timer:(NSArray<KPMInt *> *)timer __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:timer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@property (readonly) NSArray<KPMInt *> *timer __attribute__((swift_name("timer")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.CompanionDelTimerV1ParaCompanion")))
@interface KPMTimerCmdCreatorCompanionDelTimerV1ParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMTimerCmdCreatorCompanionDelTimerV1ParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.CompanionDelTimerV2Para")))
@interface KPMTimerCmdCreatorCompanionDelTimerV2Para : KPMBase
- (instancetype)initWithSn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd timerPara:(NSArray<KPMInt *> *)timerPara __attribute__((swift_name("init(sn:seq:factoryID:cmd:timerPara:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMTimerCmdCreatorCompanionDelTimerV2ParaCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSArray<KPMInt *> *)component5 __attribute__((swift_name("component5()")));
- (KPMTimerCmdCreatorCompanionDelTimerV2Para *)doCopySn:(NSString *)sn seq:(int32_t)seq factoryID:(int32_t)factoryID cmd:(NSString *)cmd timerPara:(NSArray<KPMInt *> *)timerPara __attribute__((swift_name("doCopy(sn:seq:factoryID:cmd:timerPara:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int32_t factoryID __attribute__((swift_name("factoryID")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@property (readonly) NSArray<KPMInt *> *timerPara __attribute__((swift_name("timerPara")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmdCreator.CompanionDelTimerV2ParaCompanion")))
@interface KPMTimerCmdCreatorCompanionDelTimerV2ParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMTimerCmdCreatorCompanionDelTimerV2ParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Util")))
@interface KPMUtil : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMUtilCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Util.Companion")))
@interface KPMUtilCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMUtilCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)encodeCmdRaw:(NSString *)cmdRaw protocolVersion:(KPMProtocolVersion *)protocolVersion __attribute__((swift_name("encode(cmdRaw:protocolVersion:)")));
- (int32_t)getApplianceAmountDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet __attribute__((swift_name("getApplianceAmount(deviceTypeSet:)")));
- (int32_t)getDeviceIndexDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex __attribute__((swift_name("getDeviceIndex(deviceTypeSet:applianceIndex:)")));
- (int32_t)randomSeq __attribute__((swift_name("randomSeq()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command")))
@interface KPMCommand : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.AddAndDelDeviceCmd")))
@interface KPMCommandAddAndDelDeviceCmd : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMCommandAddAndDelDeviceCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.AddAndDelDeviceCmdCompanion")))
@interface KPMCommandAddAndDelDeviceCmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMCommandAddAndDelDeviceCmdCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)addRF433DeviceSn:(NSString *)sn devTypeSet:(KPMDeviceTypeSet *)devTypeSet __attribute__((swift_name("addRF433Device(sn:devTypeSet:)")));
- (NSString *)deleteDeviceSn:(NSString *)sn devTypeSet:(KPMDeviceTypeSet *)devTypeSet applianceIndex:(int32_t)applianceIndex __attribute__((swift_name("deleteDevice(sn:devTypeSet:applianceIndex:)")));
- (NSString *)startScanSn:(NSString *)sn __attribute__((swift_name("startScan(sn:)")));
- (NSString *)stopScanSn:(NSString *)sn __attribute__((swift_name("stopScan(sn:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.ConfigureCmd")))
@interface KPMCommandConfigureCmd : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMCommandConfigureCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.ConfigureCmdCompanion")))
@interface KPMCommandConfigureCmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMCommandConfigureCmdCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)modifyApplianceOnOffStatusControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo onOffStatus:(KPMOnOffStatus *)onOffStatus __attribute__((swift_name("modifyApplianceOnOffStatus(controllableApplianceInfo:onOffStatus:)")));
- (NSString * _Nullable)modifyMinimumBrightPercentControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo minBrightPercent:(int32_t)minBrightPercent __attribute__((swift_name("modifyMinimumBrightPercent(controllableApplianceInfo:minBrightPercent:)")));
- (NSString * _Nullable)modifyOnOffBrightAdjustSpeedControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo adjustSpeed:(int32_t)adjustSpeed __attribute__((swift_name("modifyOnOffBrightAdjustSpeed(controllableApplianceInfo:adjustSpeed:)")));
- (NSString * _Nullable)modifyRGBDeviceTurnOnParaControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo para:(KPMParaStructure *)para __attribute__((swift_name("modifyRGBDeviceTurnOnPara(controllableApplianceInfo:para:)")));
- (NSString * _Nullable)modifyTurnOnBrightPercentControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo turnOnBrightPercent:(int32_t)turnOnBrightPercent __attribute__((swift_name("modifyTurnOnBrightPercent(controllableApplianceInfo:turnOnBrightPercent:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.ControlCmd")))
@interface KPMCommandControlCmd : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMCommandControlCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.ControlCmdCompanion")))
@interface KPMCommandControlCmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMCommandControlCmdCompanion *shared __attribute__((swift_name("shared")));
- (NSString * _Nullable)activateDetectableApplianceCmdDetectableApplianceInfo:(KPMDetectableApplianceInfo *)detectableApplianceInfo __attribute__((swift_name("activateDetectableApplianceCmd(detectableApplianceInfo:)")));
- (NSString * _Nullable)adjustableLightControlCmdControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo para:(KPMParaStructure *)para __attribute__((swift_name("adjustableLightControlCmd(controllableApplianceInfo:para:)")));
- (NSString * _Nullable)controlApplianceCmdControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo controlAction:(KPMCommandControlCmdControlAction *)controlAction __attribute__((swift_name("controlApplianceCmd(controllableApplianceInfo:controlAction:)")));
- (NSArray<NSString *> *)controlApplianceGroupCmdControllableApplianceInfoList:(NSArray<KPMControllableApplianceInfo *> *)controllableApplianceInfoList controlAction:(KPMCommandControlCmdControlAction *)controlAction __attribute__((swift_name("controlApplianceGroupCmd(controllableApplianceInfoList:controlAction:)")));
- (NSString * _Nullable)curtainControlCmdControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo curtainAction:(KPMParaStructureCurtainAction *)curtainAction __attribute__((swift_name("curtainControlCmd(controllableApplianceInfo:curtainAction:)")));
- (NSString * _Nullable)curtainWithLocationControlCmdControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo curtainLocationPercentage:(int32_t)curtainLocationPercentage __attribute__((swift_name("curtainWithLocationControlCmd(controllableApplianceInfo:curtainLocationPercentage:)")));
- (NSString * _Nullable)irControlCmdControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo irCmd:(KPMParaStructureIrCmd *)irCmd irIndex:(int32_t)irIndex __attribute__((swift_name("irControlCmd(controllableApplianceInfo:irCmd:irIndex:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.ControlCmdControlAction")))
@interface KPMCommandControlCmdControlAction : KPMKotlinEnum<KPMCommandControlCmdControlAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KPMCommandControlCmdControlAction *on __attribute__((swift_name("on")));
@property (class, readonly) KPMCommandControlCmdControlAction *off __attribute__((swift_name("off")));
+ (KPMKotlinArray<KPMCommandControlCmdControlAction *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.GatewayCmd")))
@interface KPMCommandGatewayCmd : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMCommandGatewayCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.GatewayCmdCompanion")))
@interface KPMCommandGatewayCmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMCommandGatewayCmdCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)getGatewayFirmwareVersionCmdSn:(NSString *)sn __attribute__((swift_name("getGatewayFirmwareVersionCmd(sn:)")));
- (NSString *)startGatewayFirmwareUpgrade __attribute__((swift_name("startGatewayFirmwareUpgrade()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.GetInfoCmd")))
@interface KPMCommandGetInfoCmd : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMCommandGetInfoCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.GetInfoCmdCompanion")))
@interface KPMCommandGetInfoCmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMCommandGetInfoCmdCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)getAllInfoCmdSn:(NSString *)sn __attribute__((swift_name("getAllInfoCmd(sn:)")));
- (NSString *)getApplianceStatusCmdSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex __attribute__((swift_name("getApplianceStatusCmd(sn:deviceTypeSet:applianceIndex:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.LinkageCmd")))
@interface KPMCommandLinkageCmd : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMCommandLinkageCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.LinkageCmdAddUserActionListCmdReturnType")))
@interface KPMCommandLinkageCmdAddUserActionListCmdReturnType : KPMBase
- (instancetype)initWithSeq:(int64_t)seq cmd:(NSString *)cmd __attribute__((swift_name("init(seq:cmd:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (KPMCommandLinkageCmdAddUserActionListCmdReturnType *)doCopySeq:(int64_t)seq cmd:(NSString *)cmd __attribute__((swift_name("doCopy(seq:cmd:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmd __attribute__((swift_name("cmd")));
@property (readonly) int64_t seq __attribute__((swift_name("seq")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.LinkageCmdCompanion")))
@interface KPMCommandLinkageCmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMCommandLinkageCmdCompanion *shared __attribute__((swift_name("shared")));
- (NSArray<KPMCommandLinkageCmdAddUserActionListCmdReturnType *> *)addUserActionListCmdDetectableApplianceInfo:(KPMDetectableApplianceInfo *)detectableApplianceInfo bindApplianceInfoList:(NSArray<KPMCommandLinkageCmdUserActionInfoNew *> *)bindApplianceInfoList __attribute__((swift_name("addUserActionListCmd(detectableApplianceInfo:bindApplianceInfoList:)")));
- (NSString * _Nullable)bindUserActionListAndDetectableApplianceStatusListCmdDetectableApplianceInfo:(KPMDetectableApplianceInfo *)detectableApplianceInfo userActionIndexList:(NSArray<KPMInt *> *)userActionIndexList detectableApplianceStatusList:(NSArray<KPMDetectableApplianceStatus *> *)detectableApplianceStatusList __attribute__((swift_name("bindUserActionListAndDetectableApplianceStatusListCmd(detectableApplianceInfo:userActionIndexList:detectableApplianceStatusList:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.LinkageCmdUserActionInfoNew")))
@interface KPMCommandLinkageCmdUserActionInfoNew : KPMBase
- (instancetype)initWithDevTypeSet:(KPMDeviceTypeSet *)devTypeSet applianceIndex:(int32_t)applianceIndex action:(BOOL)action para:(KPMParaStructure *)para __attribute__((swift_name("init(devTypeSet:applianceIndex:action:para:)"))) __attribute__((objc_designated_initializer));
- (KPMDeviceTypeSet *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (KPMParaStructure *)component4 __attribute__((swift_name("component4()")));
- (KPMCommandLinkageCmdUserActionInfoNew *)doCopyDevTypeSet:(KPMDeviceTypeSet *)devTypeSet applianceIndex:(int32_t)applianceIndex action:(BOOL)action para:(KPMParaStructure *)para __attribute__((swift_name("doCopy(devTypeSet:applianceIndex:action:para:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL action __attribute__((swift_name("action")));
@property (readonly) int32_t applianceIndex __attribute__((swift_name("applianceIndex")));
@property (readonly) KPMDeviceTypeSet *devTypeSet __attribute__((swift_name("devTypeSet")));
@property (readonly) KPMParaStructure *para __attribute__((swift_name("para")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.TimerCmd")))
@interface KPMCommandTimerCmd : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMCommandTimerCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Command.TimerCmdCompanion")))
@interface KPMCommandTimerCmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMCommandTimerCmdCompanion *shared __attribute__((swift_name("shared")));
- (NSString *)addTimerV1CmdControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo timestamp:(int64_t)timestamp enable:(BOOL)enable action:(BOOL)action weekMaskFromUserTimezone:(KPMWeekMask *)weekMaskFromUserTimezone __attribute__((swift_name("addTimerV1Cmd(controllableApplianceInfo:timestamp:enable:action:weekMaskFromUserTimezone:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (NSString *)addTimerV2CmdSn:(NSString *)sn userActionIndexList:(NSArray<KPMInt *> *)userActionIndexList detectableApplianceStatusList:(NSArray<KPMDetectableApplianceStatus *> *)detectableApplianceStatusList timestamp:(int64_t)timestamp enable:(BOOL)enable weekMaskFromUserTimezone:(KPMWeekMask *)weekMaskFromUserTimezone __attribute__((swift_name("addTimerV2Cmd(sn:userActionIndexList:detectableApplianceStatusList:timestamp:enable:weekMaskFromUserTimezone:)")));
- (NSString *)deleteTimerV1CmdSn:(NSString *)sn timerIndex:(int32_t)timerIndex __attribute__((swift_name("deleteTimerV1Cmd(sn:timerIndex:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (NSString *)deleteTimerV2CmdSn:(NSString *)sn timerIndex:(int32_t)timerIndex __attribute__((swift_name("deleteTimerV2Cmd(sn:timerIndex:)")));
- (NSString *)getTimerV1CmdSn:(NSString *)sn __attribute__((swift_name("getTimerV1Cmd(sn:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (NSString *)modifyTimerV1CmdTimerIndex:(int32_t)timerIndex controllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo timestamp:(int64_t)timestamp enable:(BOOL)enable action:(BOOL)action weekMaskFromUserTimezone:(KPMWeekMask *)weekMaskFromUserTimezone __attribute__((swift_name("modifyTimerV1Cmd(timerIndex:controllableApplianceInfo:timestamp:enable:action:weekMaskFromUserTimezone:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (NSString *)modifyTimerV2CmdSn:(NSString *)sn timerIndex:(int32_t)timerIndex userActionIndexList:(NSArray<KPMInt *> *)userActionIndexList detectableApplianceStatusList:(NSArray<KPMDetectableApplianceStatus *> *)detectableApplianceStatusList timestamp:(int64_t)timestamp enable:(BOOL)enable weekMaskFromUserTimezone:(KPMWeekMask *)weekMaskFromUserTimezone __attribute__((swift_name("modifyTimerV2Cmd(sn:timerIndex:userActionIndexList:detectableApplianceStatusList:timestamp:enable:weekMaskFromUserTimezone:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Parser")))
@interface KPMParser : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)parser __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMParser *shared __attribute__((swift_name("shared")));
- (KPMParserResult * _Nullable)parseMessage:(NSString *)message __attribute__((swift_name("parse(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseInfo")))
@interface KPMBaseInfo : KPMBase
- (instancetype)initWithBaseContent:(KPMProtocolContentBaseContent *)baseContent __attribute__((swift_name("init(baseContent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMBaseInfoCompanion *companion __attribute__((swift_name("companion")));
@property KPMCmd * _Nullable cmd __attribute__((swift_name("cmd")));
@property KPMErrorCode *errorCode __attribute__((swift_name("errorCode")));
@property KPMFirmwareVersion * _Nullable fwVersion __attribute__((swift_name("fwVersion")));
@property KPMLong * _Nullable seq __attribute__((swift_name("seq")));
@property NSString * _Nullable sn __attribute__((swift_name("sn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseInfo.Companion")))
@interface KPMBaseInfoCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMBaseInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo")))
@interface KPMControllableApplianceInfo : KPMBase
- (instancetype)initWithSn:(NSString *)sn devType:(KPMDeviceTypeSet *)devType applianceIndex:(int32_t)applianceIndex __attribute__((swift_name("init(sn:devType:applianceIndex:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMControllableApplianceInfoCompanion *companion __attribute__((swift_name("companion")));
@property KPMControllableApplianceInfoAirQualityInfo * _Nullable airQualityInfo __attribute__((swift_name("airQualityInfo")));
@property KPMControllableApplianceInfoAirQualityPlusInfo * _Nullable airQualityPlusInfo __attribute__((swift_name("airQualityPlusInfo")));
@property int32_t applianceIndex __attribute__((swift_name("applianceIndex")));
@property KPMControllableApplianceInfoConfInfo * _Nullable confInfo __attribute__((swift_name("confInfo")));
@property KPMDeviceTypeSet *devType __attribute__((swift_name("devType")));
@property KPMInt * _Nullable deviceIndex __attribute__((swift_name("deviceIndex")));
@property KPMFirmwareVersion * _Nullable fwVersion __attribute__((swift_name("fwVersion")));
@property NSArray<KPMControllableApplianceInfoIrInfo *> * _Nullable irInfoList __attribute__((swift_name("irInfoList")));
@property KPMBoolean * _Nullable ledStatus __attribute__((swift_name("ledStatus")));
@property KPMBoolean * _Nullable onlineStatus __attribute__((swift_name("onlineStatus")));
@property KPMParaStructure * _Nullable para __attribute__((swift_name("para")));
@property KPMOnOffStatus * _Nullable powerOnStatus __attribute__((swift_name("powerOnStatus")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@property KPMBoolean * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.AirQualityInfo")))
@interface KPMControllableApplianceInfoAirQualityInfo : KPMBase
- (instancetype)initWithPm1_0Raw:(int32_t)pm1_0Raw pm2_5Raw:(int32_t)pm2_5Raw pm10Raw:(int32_t)pm10Raw hchoRaw:(int32_t)hchoRaw tvocRaw:(int32_t)tvocRaw temperatureRaw:(int32_t)temperatureRaw humidityRaw:(int32_t)humidityRaw aqiRaw:(int32_t)aqiRaw sn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex subDevType:(int32_t)subDevType __attribute__((swift_name("init(pm1_0Raw:pm2_5Raw:pm10Raw:hchoRaw:tvocRaw:temperatureRaw:humidityRaw:aqiRaw:sn:deviceTypeSet:applianceIndex:subDevType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMControllableApplianceInfoAirQualityInfoCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.AirQualityInfoCompanion")))
@interface KPMControllableApplianceInfoAirQualityInfoCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMControllableApplianceInfoAirQualityInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.AirQualityPlusInfo")))
@interface KPMControllableApplianceInfoAirQualityPlusInfo : KPMBase
- (instancetype)initWithSubDevType:(int32_t)subDevType pm1_0Raw:(int32_t)pm1_0Raw pm2_5Raw:(int32_t)pm2_5Raw pm10Raw:(int32_t)pm10Raw hchoRaw:(int32_t)hchoRaw tvocRaw:(int32_t)tvocRaw temperatureRaw:(int32_t)temperatureRaw humidityRaw:(int32_t)humidityRaw co2Raw:(int32_t)co2Raw luxRaw:(int32_t)luxRaw aqiRaw:(int32_t)aqiRaw battRaw:(int32_t)battRaw sn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex __attribute__((swift_name("init(subDevType:pm1_0Raw:pm2_5Raw:pm10Raw:hchoRaw:tvocRaw:temperatureRaw:humidityRaw:co2Raw:luxRaw:aqiRaw:battRaw:sn:deviceTypeSet:applianceIndex:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMControllableApplianceInfoAirQualityPlusInfoCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.AirQualityPlusInfoCompanion")))
@interface KPMControllableApplianceInfoAirQualityPlusInfoCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMControllableApplianceInfoAirQualityPlusInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.Companion")))
@interface KPMControllableApplianceInfoCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMControllableApplianceInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.ConfInfo")))
@interface KPMControllableApplianceInfoConfInfo : KPMBase
- (instancetype)initWithDeviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet turnOnModeRaw:(int32_t)turnOnModeRaw turnOnBrightPercentRaw:(int32_t)turnOnBrightPercentRaw minBrightPercentRaw:(int32_t)minBrightPercentRaw brightAdjSpeedRaw:(int32_t)brightAdjSpeedRaw onOffBrightAdjSpeedRaw:(int32_t)onOffBrightAdjSpeedRaw slowlyOnBrightAdjSpeedRaw:(int32_t)slowlyOnBrightAdjSpeedRaw slowlyOffBrightAdjSpeedRaw:(int32_t)slowlyOffBrightAdjSpeedRaw turnOnBrightPercentRawList:(NSArray<KPMInt *> *)turnOnBrightPercentRawList __attribute__((swift_name("init(deviceTypeSet:turnOnModeRaw:turnOnBrightPercentRaw:minBrightPercentRaw:brightAdjSpeedRaw:onOffBrightAdjSpeedRaw:slowlyOnBrightAdjSpeedRaw:slowlyOffBrightAdjSpeedRaw:turnOnBrightPercentRawList:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMControllableApplianceInfoConfInfoCompanion *companion __attribute__((swift_name("companion")));
@property int32_t brightAdjSpeed __attribute__((swift_name("brightAdjSpeed")));
@property KPMParaStructure *minBrightPercent __attribute__((swift_name("minBrightPercent")));
@property int32_t onOffBrightAdjSpeed __attribute__((swift_name("onOffBrightAdjSpeed")));
@property int32_t slowlyOffBrightAdjSpeed __attribute__((swift_name("slowlyOffBrightAdjSpeed")));
@property int32_t slowlyOnBrightAdjSpeed __attribute__((swift_name("slowlyOnBrightAdjSpeed")));
@property KPMParaStructure *turnOnBrightPercent __attribute__((swift_name("turnOnBrightPercent")));
@property KPMControllableApplianceInfoConfInfoTurnOnMode *turnOnMode __attribute__((swift_name("turnOnMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.ConfInfoCompanion")))
@interface KPMControllableApplianceInfoConfInfoCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMControllableApplianceInfoConfInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.ConfInfoTurnOnMode")))
@interface KPMControllableApplianceInfoConfInfoTurnOnMode : KPMKotlinEnum<KPMControllableApplianceInfoConfInfoTurnOnMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KPMControllableApplianceInfoConfInfoTurnOnModeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KPMControllableApplianceInfoConfInfoTurnOnMode *userdefault __attribute__((swift_name("userdefault")));
@property (class, readonly) KPMControllableApplianceInfoConfInfoTurnOnMode *turnoffvalue __attribute__((swift_name("turnoffvalue")));
+ (KPMKotlinArray<KPMControllableApplianceInfoConfInfoTurnOnMode *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.ConfInfoTurnOnModeCompanion")))
@interface KPMControllableApplianceInfoConfInfoTurnOnModeCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMControllableApplianceInfoConfInfoTurnOnModeCompanion *shared __attribute__((swift_name("shared")));
- (KPMControllableApplianceInfoConfInfoTurnOnMode * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.IrInfo")))
@interface KPMControllableApplianceInfoIrInfo : KPMBase
- (instancetype)initWithSn:(NSString *)sn deviceTypeSet:(KPMDeviceTypeSet *)deviceTypeSet applianceIndex:(int32_t)applianceIndex para:(KPMParaStructure *)para __attribute__((swift_name("init(sn:deviceTypeSet:applianceIndex:para:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMControllableApplianceInfoIrInfoCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t applianceIndex __attribute__((swift_name("applianceIndex")));
@property (readonly) KPMDeviceTypeSet *deviceTypeSet __attribute__((swift_name("deviceTypeSet")));
@property (readonly) KPMParaStructure *para __attribute__((swift_name("para")));
@property (readonly) NSString *sn __attribute__((swift_name("sn")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableApplianceInfo.IrInfoCompanion")))
@interface KPMControllableApplianceInfoIrInfoCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMControllableApplianceInfoIrInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableDeviceInfo")))
@interface KPMControllableDeviceInfo : KPMBase
- (instancetype)initWithSn:(NSString *)sn outputDevContent:(KPMProtocolContentOutputDevContent *)outputDevContent __attribute__((swift_name("init(sn:outputDevContent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMControllableDeviceInfoCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<KPMDeviceTypeSet *> * _Nullable installedControllableDeviceTypeList __attribute__((swift_name("installedControllableDeviceTypeList")));
@property NSArray<KPMControllableApplianceInfoAirQualityInfo *> * _Nullable updatedAirQualityInfoList __attribute__((swift_name("updatedAirQualityInfoList")));
@property NSArray<KPMControllableApplianceInfoAirQualityPlusInfo *> * _Nullable updatedAirQualityPlusInfoList __attribute__((swift_name("updatedAirQualityPlusInfoList")));
@property NSArray<KPMControllableApplianceInfo *> * _Nullable updatedControllableApplianceInfoList __attribute__((swift_name("updatedControllableApplianceInfoList")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControllableDeviceInfo.Companion")))
@interface KPMControllableDeviceInfoCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMControllableDeviceInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultAction")))
@interface KPMDefaultAction : KPMKotlinEnum<KPMDefaultAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KPMDefaultActionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KPMDefaultAction *alarm __attribute__((swift_name("alarm")));
@property (class, readonly) KPMDefaultAction *apppushnotification __attribute__((swift_name("apppushnotification")));
@property (class, readonly) KPMDefaultAction *phonemessage __attribute__((swift_name("phonemessage")));
@property (class, readonly) KPMDefaultAction *phonecall __attribute__((swift_name("phonecall")));
+ (KPMKotlinArray<KPMDefaultAction *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultAction.Companion")))
@interface KPMDefaultActionCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMDefaultActionCompanion *shared __attribute__((swift_name("shared")));
- (KPMDefaultAction * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectableApplianceInfo")))
@interface KPMDetectableApplianceInfo : KPMBase
- (instancetype)initWithSn:(NSString *)sn triggerPara:(KPMTriggerPara *)triggerPara triggerStatus:(NSArray<KPMBoolean *> * _Nullable)triggerStatus noDisableTrigger:(NSArray<KPMBoolean *> * _Nullable)noDisableTrigger fwVersion:(KPMFirmwareVersion * _Nullable)fwVersion __attribute__((swift_name("init(sn:triggerPara:triggerStatus:noDisableTrigger:fwVersion:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMDetectableApplianceInfoCompanion *companion __attribute__((swift_name("companion")));
@property int32_t activateDelay __attribute__((swift_name("activateDelay")));
@property KPMInt * _Nullable applianceIndex __attribute__((swift_name("applianceIndex")));
@property NSArray<KPMDetectableApplianceStatus *> * _Nullable bindDetectableApplianceStatusList __attribute__((swift_name("bindDetectableApplianceStatusList")));
@property NSArray<KPMInt *> * _Nullable bindUserActionIndexList __attribute__((swift_name("bindUserActionIndexList")));
@property NSArray<KPMDefaultAction *> * _Nullable defaultActionList __attribute__((swift_name("defaultActionList"))) __attribute__((deprecated("defaultActionList 已弃用")));
@property KPMDeviceTypeSet * _Nullable devType __attribute__((swift_name("devType")));
@property KPMInt * _Nullable deviceIndex __attribute__((swift_name("deviceIndex")));
@property KPMFirmwareVersion * _Nullable fwVersion __attribute__((swift_name("fwVersion")));
@property BOOL isEmergency __attribute__((swift_name("isEmergency")));
@property NSString *sn __attribute__((swift_name("sn")));
@property BOOL status __attribute__((swift_name("status")));
@property KPMInt * _Nullable subIndex __attribute__((swift_name("subIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectableApplianceInfo.Companion")))
@interface KPMDetectableApplianceInfoCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMDetectableApplianceInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectableApplianceStatus")))
@interface KPMDetectableApplianceStatus : KPMBase
- (instancetype)initWithApplianceIndex:(int32_t)applianceIndex status:(BOOL)status __attribute__((swift_name("init(applianceIndex:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMDetectableApplianceStatusCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (KPMDetectableApplianceStatus *)doCopyApplianceIndex:(int32_t)applianceIndex status:(BOOL)status __attribute__((swift_name("doCopy(applianceIndex:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t applianceIndex __attribute__((swift_name("applianceIndex")));
@property (readonly) BOOL status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectableApplianceStatus.Companion")))
@interface KPMDetectableApplianceStatusCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMDetectableApplianceStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectableDeviceInfo")))
@interface KPMDetectableDeviceInfo : KPMBase
- (instancetype)initWithSn:(NSString *)sn inputDevContent:(KPMProtocolContentInputDevContent *)inputDevContent __attribute__((swift_name("init(sn:inputDevContent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMDetectableDeviceInfoCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<KPMInt *> * _Nullable installedDetectableApplianceIndexList __attribute__((swift_name("installedDetectableApplianceIndexList")));
@property NSArray<KPMInt *> * _Nullable installedUserActionIndexList __attribute__((swift_name("installedUserActionIndexList")));
@property NSArray<KPMDetectableApplianceInfo *> * _Nullable updatedDetectableApplianceInfoList __attribute__((swift_name("updatedDetectableApplianceInfoList")));
@property NSArray<KPMUserAction *> * _Nullable updatedUserActionList __attribute__((swift_name("updatedUserActionList")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectableDeviceInfo.Companion")))
@interface KPMDetectableDeviceInfoCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMDetectableDeviceInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode")))
@interface KPMErrorCode : KPMKotlinEnum<KPMErrorCode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KPMErrorCodeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KPMErrorCode *noerror __attribute__((swift_name("noerror")));
@property (class, readonly) KPMErrorCode *timerreachmax __attribute__((swift_name("timerreachmax")));
@property (class, readonly) KPMErrorCode *timernotexist __attribute__((swift_name("timernotexist")));
@property (class, readonly) KPMErrorCode *deviceamountreachmax __attribute__((swift_name("deviceamountreachmax")));
+ (KPMKotlinArray<KPMErrorCode *> *)values __attribute__((swift_name("values()")));
@property (readonly) int32_t raw __attribute__((swift_name("raw")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCode.Companion")))
@interface KPMErrorCodeCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMErrorCodeCompanion *shared __attribute__((swift_name("shared")));
- (KPMErrorCode * _Nullable)fromRawRaw:(int32_t)raw __attribute__((swift_name("fromRaw(raw:)")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParserResult")))
@interface KPMParserResult : KPMBase
- (instancetype)initWithParaContent:(KPMProtocolContent *)paraContent __attribute__((swift_name("init(paraContent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMParserResultCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)stringify __attribute__((swift_name("stringify()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KPMBaseInfo * _Nullable baseInfo __attribute__((swift_name("baseInfo")));
@property KPMControllableDeviceInfo * _Nullable controllableDeviceInfo __attribute__((swift_name("controllableDeviceInfo")));
@property KPMDetectableDeviceInfo * _Nullable detectableDeviceInfo __attribute__((swift_name("detectableDeviceInfo")));
@property KPMTimerInfo * _Nullable timerInfo __attribute__((swift_name("timerInfo")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParserResult.Companion")))
@interface KPMParserResultCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMParserResultCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerInfo")))
@interface KPMTimerInfo : KPMBase
- (instancetype)initWithTimerContent:(KPMProtocolContentTimerContent *)timerContent __attribute__((swift_name("init(timerContent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMTimerInfoCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<KPMInt *> * _Nullable installedTimerIndexList __attribute__((swift_name("installedTimerIndexList")));
@property NSArray<KPMTimerV1Para *> * _Nullable timerV1ParaList __attribute__((swift_name("timerV1ParaList"))) __attribute__((deprecated("timerV1 已弃用")));
@property NSArray<KPMTimerV2Para *> * _Nullable timerV2ParaList __attribute__((swift_name("timerV2ParaList")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerInfo.Companion")))
@interface KPMTimerInfoCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMTimerInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerV1ApplianceAction")))
@interface KPMTimerV1ApplianceAction : KPMBase
- (instancetype)initWithApplianceIndex:(int32_t)applianceIndex action:(BOOL)action __attribute__((swift_name("init(applianceIndex:action:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMTimerV1ApplianceActionCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (KPMTimerV1ApplianceAction *)doCopyApplianceIndex:(int32_t)applianceIndex action:(BOOL)action __attribute__((swift_name("doCopy(applianceIndex:action:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL action __attribute__((swift_name("action")));
@property int32_t applianceIndex __attribute__((swift_name("applianceIndex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerV1ApplianceAction.Companion")))
@interface KPMTimerV1ApplianceActionCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMTimerV1ApplianceActionCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerV1Para")))
@interface KPMTimerV1Para : KPMBase
- (instancetype)initWithTimerParaV1:(KPMTimerParaV1 *)timerParaV1 __attribute__((swift_name("init(timerParaV1:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMTimerV1ParaCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<KPMTimerV1ApplianceAction *> *applianceActionList __attribute__((swift_name("applianceActionList")));
@property KPMDeviceTypeSet *devType __attribute__((swift_name("devType")));
@property BOOL enable __attribute__((swift_name("enable")));
@property int64_t posix __attribute__((swift_name("posix")));
@property int32_t timerIndex __attribute__((swift_name("timerIndex")));
@property KPMWeekMask *weekMaskForUserTimeZone __attribute__((swift_name("weekMaskForUserTimeZone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerV1Para.Companion")))
@interface KPMTimerV1ParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMTimerV1ParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerV2Para")))
@interface KPMTimerV2Para : KPMBase
- (instancetype)initWithTimerParaV2:(KPMTimerParaV2 *)timerParaV2 __attribute__((swift_name("init(timerParaV2:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMTimerV2ParaCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<KPMInt *> * _Nullable bindActionIndexList __attribute__((swift_name("bindActionIndexList")));
@property NSArray<KPMDetectableApplianceStatus *> * _Nullable bindDetectableApplianceStatusList __attribute__((swift_name("bindDetectableApplianceStatusList")));
@property BOOL enable __attribute__((swift_name("enable")));
@property int64_t posix __attribute__((swift_name("posix")));
@property int32_t timerIndex __attribute__((swift_name("timerIndex")));
@property KPMWeekMask *weekMaskForUserTimeZone __attribute__((swift_name("weekMaskForUserTimeZone")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerV2Para.Companion")))
@interface KPMTimerV2ParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMTimerV2ParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserAction")))
@interface KPMUserAction : KPMBase
- (instancetype)initWithUserActionPara:(KPMUserActionPara *)userActionPara __attribute__((swift_name("init(userActionPara:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMUserActionCompanion *companion __attribute__((swift_name("companion")));
@property int32_t actionIndex __attribute__((swift_name("actionIndex")));
@property NSArray<KPMUserActionAppliancePara *> * _Nullable applianceParaList __attribute__((swift_name("applianceParaList")));
@property KPMDeviceTypeSet *devType __attribute__((swift_name("devType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserAction.Companion")))
@interface KPMUserActionCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMUserActionCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserActionAppliancePara")))
@interface KPMUserActionAppliancePara : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMUserActionApplianceParaCompanion *companion __attribute__((swift_name("companion")));
@property BOOL action __attribute__((swift_name("action")));
@property int32_t applianceIndex __attribute__((swift_name("applianceIndex")));
@property KPMParaStructure *para __attribute__((swift_name("para")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserActionAppliancePara.Companion")))
@interface KPMUserActionApplianceParaCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMUserActionApplianceParaCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KPMKotlinArray<T> : KPMBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KPMInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KPMKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

@interface KPMKotlinArray (Extensions)
- (KPMKotlinArray<KPMKotlinArray<id> *> *)chunkedSliceSize:(int32_t)sliceSize __attribute__((swift_name("chunked(sliceSize:)")));
- (uint32_t)fromBigEndianArrayToUInt __attribute__((swift_name("fromBigEndianArrayToUInt()")));
- (uint64_t)fromBigEndianArrayToULong __attribute__((swift_name("fromBigEndianArrayToULong()")));
- (uint32_t)fromLittleEndianArrayToUInt __attribute__((swift_name("fromLittleEndianArrayToUInt()")));
- (uint64_t)fromLittleEndianArrayToULong __attribute__((swift_name("fromLittleEndianArrayToULong()")));
- (KPMKotlinArray<KPMUByte *> *)xorOther:(KPMKotlinArray<KPMUByte *> *)other __attribute__((swift_name("xor(other:)")));
@end;

@interface KPMProtocolContent (Extensions)
- (void)parseBaseInfoJsonObject:(NSDictionary<NSString *, KPMKotlinx_serialization_jsonJsonElement *> *)jsonObject __attribute__((swift_name("parseBaseInfo(jsonObject:)")));
- (void)parseInputDeviceContentJsonObject:(NSDictionary<NSString *, KPMKotlinx_serialization_jsonJsonElement *> *)jsonObject __attribute__((swift_name("parseInputDeviceContent(jsonObject:)")));
- (void)parseOutputDeviceContentJsonObject:(NSDictionary<NSString *, KPMKotlinx_serialization_jsonJsonElement *> *)jsonObject __attribute__((swift_name("parseOutputDeviceContent(jsonObject:)")));
- (void)parseTimerContentJsonObject:(NSDictionary<NSString *, KPMKotlinx_serialization_jsonJsonElement *> *)jsonObject __attribute__((swift_name("parseTimerContent(jsonObject:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataTypeExtensionKt")))
@interface KPMDataTypeExtensionKt : KPMBase
+ (int32_t)toInt:(BOOL)receiver __attribute__((swift_name("toInt(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HashFunctionKt")))
@interface KPMHashFunctionKt : KPMBase
+ (NSString *)decodeToString:(id)receiver __attribute__((swift_name("decodeToString(_:)")));
+ (id)encodeToUByteArray:(NSString *)receiver __attribute__((swift_name("encodeToUByteArray(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UtilKt")))
@interface KPMUtilKt : KPMBase
+ (NSArray<id> *)arrayChunked:(id)receiver sliceSize:(int32_t)sliceSize __attribute__((swift_name("arrayChunked(_:sliceSize:)")));
+ (id)flattenToUByteArray:(id)receiver __attribute__((swift_name("flattenToUByteArray(_:)")));
+ (uint32_t)fromLittleEndianArrayToUInt:(id)receiver __attribute__((swift_name("fromLittleEndianArrayToUInt(_:)")));
+ (uint64_t)fromLittleEndianArrayToULong:(id)receiver __attribute__((swift_name("fromLittleEndianArrayToULong(_:)")));
+ (id)plus:(uint32_t)receiver other:(id)other __attribute__((swift_name("plus(_:other:)")));
+ (uint32_t)rotateRight:(uint32_t)receiver places:(int32_t)places __attribute__((swift_name("rotateRight(_:places:)")));
+ (uint64_t)rotateRight:(uint64_t)receiver places_:(int32_t)places __attribute__((swift_name("rotateRight(_:places_:)")));
+ (KPMKotlinArray<KPMUByte *> *)toBigEndianUByteArray:(uint32_t)receiver __attribute__((swift_name("toBigEndianUByteArray(_:)")));
+ (KPMKotlinArray<KPMUByte *> *)toBigEndianUByteArray_:(uint64_t)receiver __attribute__((swift_name("toBigEndianUByteArray(__:)")));
+ (KPMKotlinArray<KPMUByte *> *)toLittleEndianTypedUByteArray:(uint32_t)receiver __attribute__((swift_name("toLittleEndianTypedUByteArray(_:)")));
+ (KPMKotlinArray<KPMUByte *> *)toLittleEndianTypedUByteArray_:(uint64_t)receiver __attribute__((swift_name("toLittleEndianTypedUByteArray(__:)")));
+ (id)toLittleEndianUByteArray:(uint32_t)receiver __attribute__((swift_name("toLittleEndianUByteArray(_:)")));
+ (id)toLittleEndianUByteArray_:(uint64_t)receiver __attribute__((swift_name("toLittleEndianUByteArray(__:)")));
+ (id)xor:(id)receiver other:(id)other __attribute__((swift_name("xor(_:other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParserUtilKt")))
@interface KPMParserUtilKt : KPMBase
+ (id _Nullable)value:(NSDictionary<NSString *, KPMKotlinx_serialization_jsonJsonElement *> *)receiver key:(NSString *)key __attribute__((swift_name("value(_:key:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KPMKotlinByteArray : KPMBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KPMByte *(^)(KPMInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KPMKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface KPMKotlinCharArray : KPMBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(KPMInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KPMKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface KPMKotlinx_serialization_jsonJsonElement : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KPMKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KPMKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KPMKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KPMKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KPMKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KPMKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KPMKotlinx_serialization_coreKSerializer <KPMKotlinx_serialization_coreSerializationStrategy, KPMKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KPMKotlinEnumCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol KPMKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface KPMKotlinByteIterator : KPMBase <KPMKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KPMByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("KotlinCharIterator")))
@interface KPMKotlinCharIterator : KPMBase <KPMKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface KPMKotlinx_serialization_jsonJsonElementCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KPMKotlinx_serialization_coreEncoder
@required
- (id<KPMKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KPMKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KPMKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<KPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KPMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KPMKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<KPMKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<KPMKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<KPMKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) KPMKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KPMKotlinx_serialization_coreDecoder
@required
- (id<KPMKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KPMKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (KPMKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KPMKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KPMKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KPMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KPMKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KPMKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KPMKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KPMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KPMKotlinx_serialization_coreSerializersModule : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)dumpToCollector:(id<KPMKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<KPMKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KPMKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KPMKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<KPMKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KPMKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<KPMKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KPMKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol KPMKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KPMKotlinx_serialization_coreSerialKind : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KPMKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KPMKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KPMKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KPMKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KPMKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KPMKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KPMKotlinNothing : KPMBase
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KPMKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KPMKotlinKClass>)kClass provider:(id<KPMKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KPMKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KPMKotlinKClass>)kClass serializer:(id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KPMKotlinKClass>)baseClass actualClass:(id<KPMKotlinKClass>)actualClass actualSerializer:(id<KPMKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KPMKotlinKClass>)baseClass defaultDeserializerProvider:(id<KPMKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<KPMKotlinKClass>)baseClass defaultDeserializerProvider:(id<KPMKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<KPMKotlinKClass>)baseClass defaultSerializerProvider:(id<KPMKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KPMKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KPMKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol KPMKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol KPMKotlinKClass <KPMKotlinKDeclarationContainer, KPMKotlinKAnnotatedElement, KPMKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
