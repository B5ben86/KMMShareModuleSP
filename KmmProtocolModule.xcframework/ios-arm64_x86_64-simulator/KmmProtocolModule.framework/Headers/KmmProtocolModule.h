#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KPMMeasureTimeKitCompanion, KPMKMMLoggerCompanion, KPMFirmwareVersionCompanion, KPMFirmwareVersion, KPMParaStructureCompanion, KPMParaStructureRgbwType, KPMParaStructureIrValueType, KPMParaStructureRgbwAction, KPMKotlinEnumCompanion, KPMKotlinEnum<E>, KPMParaStructureCurtainAction, KPMKotlinArray<T>, KPMParaStructureCurtainWithLocAction, KPMParaStructureIrCmd, KPMParaStructureParaAction, KPMParaStructureRgbwActionCompanion, KPMWeekMask, KPMWeekMaskCompanion, KPMWeekMaskIndex, KPMWeekMaskIndexCompanion, KPMCmdCompanion, KPMCmd, KPMNetworkType, KPMOnOffStatusCompanion, KPMOnOffStatus, KPMProtocolVersionCompanion, KPMProtocolVersion, KPMDeviceTypeClassifyCompanion, KPMDeviceTypeSet, KPMDeviceTypeSetCompanion, KPMCommandData, KPMAddAndDelDeviceCmdCompanion, KPMConfigureCmdCompanion, KPMControllableApplianceInfo, KPMParaStructure, KPMControlCmdCompanion, KPMDetectableApplianceInfo, KPMControlCmdControlAction, KPMGatewayCmdCompanion, KPMGetInfoCmdCompanion, KPMLinkageCmdCompanion, KPMLinkageCmdUserActionInfoNew, KPMDetectableApplianceStatus, KPMDefaultAction, KPMTimerCmdCompanion, KPMParserCompanion, KPMParserResult, KPMBaseInfoCompanion, KPMErrorCode, KPMControllableApplianceInfoCompanion, KPMControllableApplianceInfoAirQualityInfo, KPMControllableApplianceInfoAirQualityPlusInfo, KPMControllableApplianceInfoConfInfo, KPMControllableApplianceInfoIrInfo, KPMControllableApplianceInfoAirQualityInfoCompanion, KPMControllableApplianceInfoAirQualityPlusInfoCompanion, KPMControllableApplianceInfoConfInfoCompanion, KPMControllableApplianceInfoConfInfoTurnOnMode, KPMControllableApplianceInfoConfInfoTurnOnModeCompanion, KPMControllableApplianceInfoIrInfoCompanion, KPMControllableDeviceInfoCompanion, KPMDefaultActionCompanion, KPMDetectableApplianceEmergencyStatusCompanion, KPMDetectableApplianceEmergencyStatus, KPMDetectableApplianceInfoCompanion, KPMDetectableApplianceStatusCompanion, KPMDetectableDeviceInfoCompanion, KPMUserAction, KPMErrorCodeCompanion, KPMParserResultCompanion, KPMBaseInfo, KPMControllableDeviceInfo, KPMDetectableDeviceInfo, KPMTimerInfo, KPMTimerInfoCompanion, KPMTimerV1Para, KPMTimerV2Para, KPMTimerV1ApplianceActionCompanion, KPMTimerV1ApplianceAction, KPMTimerV1ParaCompanion, KPMTimerV2ParaCompanion, KPMUserActionCompanion, KPMUserActionAppliancePara, KPMUserActionApplianceParaCompanion, KPMKotlinx_serialization_coreSerializersModule, KPMKotlinx_serialization_coreSerialKind, KPMKotlinNothing;

@protocol KPMKotlinx_serialization_coreKSerializer, KPMKotlinComparable, KPMKotlinIterator, KPMKotlinx_serialization_coreEncoder, KPMKotlinx_serialization_coreSerialDescriptor, KPMKotlinx_serialization_coreSerializationStrategy, KPMKotlinx_serialization_coreDecoder, KPMKotlinx_serialization_coreDeserializationStrategy, KPMKotlinx_serialization_coreCompositeEncoder, KPMKotlinAnnotation, KPMKotlinx_serialization_coreCompositeDecoder, KPMKotlinx_serialization_coreSerializersModuleCollector, KPMKotlinKClass, KPMKotlinKDeclarationContainer, KPMKotlinKAnnotatedElement, KPMKotlinKClassifier;

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
- (void)dMessage:(NSString * _Nullable)message __attribute__((swift_name("d(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FirmwareVersion")))
@interface KPMFirmwareVersion : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMFirmwareVersionCompanion *companion __attribute__((swift_name("companion")));
- (void)freezeSelf __attribute__((swift_name("freezeSelf()")));
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
- (void)freezeSelf __attribute__((swift_name("freezeSelf()")));
- (int32_t)getColorRgbw:(KPMParaStructureRgbwType *)rgbw __attribute__((swift_name("getColor(rgbw:)")));
- (uint64_t)getIRParaIr:(KPMParaStructureIrValueType *)ir __attribute__((swift_name("getIRPara(ir:)")));
- (KPMParaStructureRgbwAction * _Nullable)getRGBWAction __attribute__((swift_name("getRGBWAction()")));
- (uint64_t)getRawValue __attribute__((swift_name("getRawValue()")));
- (int64_t)getTemperatureLampBright __attribute__((swift_name("getTemperatureLampBright()")));
- (int64_t)getTemperatureLampTemp __attribute__((swift_name("getTemperatureLampTemp()")));
- (void)setColorRgbw:(KPMParaStructureRgbwType *)rgbw value:(int32_t)value __attribute__((swift_name("setColor(rgbw:value:)")));
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
@property (class, readonly) KPMParaStructureCurtainWithLocAction *changedirection __attribute__((swift_name("changedirection")));
@property (class, readonly) KPMParaStructureCurtainWithLocAction *stop __attribute__((swift_name("stop")));
@property (class, readonly) KPMParaStructureCurtainWithLocAction *initial __attribute__((swift_name("initial")));
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
__attribute__((swift_name("WeekMask")))
@interface KPMWeekMask : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithWeekMask:(KPMWeekMask *)weekMask __attribute__((swift_name("init(weekMask:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBoolList:(NSArray<KPMBoolean *> *)boolList __attribute__((swift_name("init(boolList:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMWeekMaskCompanion *companion __attribute__((swift_name("companion")));
- (void)freezeSelf __attribute__((swift_name("freezeSelf()")));
- (BOOL)getWeekMaskBitWeekMaskIndex:(KPMWeekMaskIndex *)weekMaskIndex __attribute__((swift_name("getWeekMaskBit(weekMaskIndex:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (void)setFromBoolListBoolList:(NSArray<KPMBoolean *> *)boolList __attribute__((swift_name("setFromBoolList(boolList:)")));
- (void)setFromWeekMaskWeekMask:(KPMWeekMask *)weekMask __attribute__((swift_name("setFromWeekMask(weekMask:)")));
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
__attribute__((swift_name("NetworkType")))
@interface KPMNetworkType : KPMKotlinEnum<KPMNetworkType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KPMNetworkType *lan __attribute__((swift_name("lan")));
@property (class, readonly) KPMNetworkType *cloud __attribute__((swift_name("cloud")));
+ (KPMKotlinArray<KPMNetworkType *> *)values __attribute__((swift_name("values()")));
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
__attribute__((swift_name("CommandData")))
@interface KPMCommandData : KPMBase
- (instancetype)initWithSeq:(int32_t)seq cmdString:(NSString *)cmdString __attribute__((swift_name("init(seq:cmdString:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (KPMCommandData *)doCopySeq:(int32_t)seq cmdString:(NSString *)cmdString __attribute__((swift_name("doCopy(seq:cmdString:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cmdString __attribute__((swift_name("cmdString")));
@property (readonly) int32_t seq __attribute__((swift_name("seq")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddAndDelDeviceCmd")))
@interface KPMAddAndDelDeviceCmd : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMAddAndDelDeviceCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddAndDelDeviceCmd.Companion")))
@interface KPMAddAndDelDeviceCmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMAddAndDelDeviceCmdCompanion *shared __attribute__((swift_name("shared")));
- (KPMCommandData *)addRF433DeviceSn:(NSString *)sn devTypeSet:(KPMDeviceTypeSet *)devTypeSet protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("addRF433Device(sn:devTypeSet:protocolVersion:networkType:)")));
- (KPMCommandData *)deleteControllableDeviceSn:(NSString *)sn devTypeSet:(KPMDeviceTypeSet *)devTypeSet applianceIndex:(int32_t)applianceIndex protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("deleteControllableDevice(sn:devTypeSet:applianceIndex:protocolVersion:networkType:)")));
- (KPMCommandData *)deleteControllableDeviceViaDeviceIndexSn:(NSString *)sn devTypeSet:(KPMDeviceTypeSet *)devTypeSet deviceIndex:(int32_t)deviceIndex protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("deleteControllableDeviceViaDeviceIndex(sn:devTypeSet:deviceIndex:protocolVersion:networkType:)")));
- (KPMCommandData *)deleteDetectableDeviceSn:(NSString *)sn devTypeSet:(KPMDeviceTypeSet *)devTypeSet deviceIndex:(int32_t)deviceIndex protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("deleteDetectableDevice(sn:devTypeSet:deviceIndex:protocolVersion:networkType:)")));
- (KPMCommandData *)startScanSn:(NSString *)sn protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("startScan(sn:protocolVersion:networkType:)")));
- (KPMCommandData *)stopScanSn:(NSString *)sn protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("stopScan(sn:protocolVersion:networkType:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigureCmd")))
@interface KPMConfigureCmd : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMConfigureCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfigureCmd.Companion")))
@interface KPMConfigureCmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMConfigureCmdCompanion *shared __attribute__((swift_name("shared")));
- (KPMCommandData *)modifyApplianceOnOffStatusControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo onOffStatus:(KPMOnOffStatus *)onOffStatus protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("modifyApplianceOnOffStatus(controllableApplianceInfo:onOffStatus:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)modifyMinimumBrightPercentControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo minBrightPercent:(int32_t)minBrightPercent protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("modifyMinimumBrightPercent(controllableApplianceInfo:minBrightPercent:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)modifyOnOffBrightAdjustSpeedControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo adjustSpeed:(int32_t)adjustSpeed protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("modifyOnOffBrightAdjustSpeed(controllableApplianceInfo:adjustSpeed:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)modifyRGBDeviceTurnOnParaControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo para:(KPMParaStructure *)para protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("modifyRGBDeviceTurnOnPara(controllableApplianceInfo:para:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)modifyTemperatureLedTurnOnParaControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo turnOnBrightPercent:(int32_t)turnOnBrightPercent turnOnTemperaturePercent:(int32_t)turnOnTemperaturePercent protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("modifyTemperatureLedTurnOnPara(controllableApplianceInfo:turnOnBrightPercent:turnOnTemperaturePercent:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)modifyTurnOnBrightPercentControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo turnOnBrightPercent:(int32_t)turnOnBrightPercent protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("modifyTurnOnBrightPercent(controllableApplianceInfo:turnOnBrightPercent:protocolVersion:networkType:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControlCmd")))
@interface KPMControlCmd : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMControlCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControlCmd.Companion")))
@interface KPMControlCmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMControlCmdCompanion *shared __attribute__((swift_name("shared")));
- (KPMCommandData * _Nullable)activateDetectableApplianceCmdDetectableApplianceInfo:(KPMDetectableApplianceInfo *)detectableApplianceInfo protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("activateDetectableApplianceCmd(detectableApplianceInfo:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)adjustableLightControlCmdControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo para:(KPMParaStructure *)para protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("adjustableLightControlCmd(controllableApplianceInfo:para:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)controlApplianceCmdControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo controlAction:(KPMControlCmdControlAction *)controlAction protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("controlApplianceCmd(controllableApplianceInfo:controlAction:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)controlApplianceCmdSn:(NSString *)sn deviceType:(NSString *)deviceType jackIndex:(int32_t)jackIndex controlAction:(KPMControlCmdControlAction *)controlAction protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("controlApplianceCmd(sn:deviceType:jackIndex:controlAction:protocolVersion:networkType:)")));
- (NSArray<KPMCommandData *> *)controlApplianceGroupCmdControllableApplianceInfoList:(NSArray<KPMControllableApplianceInfo *> *)controllableApplianceInfoList controlAction:(KPMControlCmdControlAction *)controlAction protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("controlApplianceGroupCmd(controllableApplianceInfoList:controlAction:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)curtainControlCmdControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo curtainAction:(KPMParaStructureCurtainAction *)curtainAction protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("curtainControlCmd(controllableApplianceInfo:curtainAction:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)curtainWithLocationActionControlCmdControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo curtainWithLocAction:(KPMParaStructureCurtainWithLocAction *)curtainWithLocAction protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("curtainWithLocationActionControlCmd(controllableApplianceInfo:curtainWithLocAction:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)curtainWithLocationPercentageControlCmdControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo curtainLocationPercentage:(int32_t)curtainLocationPercentage protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("curtainWithLocationPercentageControlCmd(controllableApplianceInfo:curtainLocationPercentage:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)irControlCmdControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo irCmd:(KPMParaStructureIrCmd *)irCmd irIndex:(int32_t)irIndex protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("irControlCmd(controllableApplianceInfo:irCmd:irIndex:protocolVersion:networkType:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ControlCmd.ControlAction")))
@interface KPMControlCmdControlAction : KPMKotlinEnum<KPMControlCmdControlAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KPMControlCmdControlAction *on __attribute__((swift_name("on")));
@property (class, readonly) KPMControlCmdControlAction *off __attribute__((swift_name("off")));
+ (KPMKotlinArray<KPMControlCmdControlAction *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GatewayCmd")))
@interface KPMGatewayCmd : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMGatewayCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GatewayCmd.Companion")))
@interface KPMGatewayCmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMGatewayCmdCompanion *shared __attribute__((swift_name("shared")));
- (KPMCommandData *)getGatewayFirmwareVersionCmdSn:(NSString *)sn protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("getGatewayFirmwareVersionCmd(sn:protocolVersion:networkType:)")));
- (KPMCommandData *)startGatewayFirmwareUpgrade __attribute__((swift_name("startGatewayFirmwareUpgrade()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetInfoCmd")))
@interface KPMGetInfoCmd : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMGetInfoCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetInfoCmd.Companion")))
@interface KPMGetInfoCmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMGetInfoCmdCompanion *shared __attribute__((swift_name("shared")));
- (KPMCommandData *)getAllInfoCmdSn:(NSString *)sn protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("getAllInfoCmd(sn:protocolVersion:networkType:)")));
- (KPMCommandData *)getApplianceStatusCmdControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("getApplianceStatusCmd(controllableApplianceInfo:protocolVersion:networkType:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmd")))
@interface KPMLinkageCmd : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMLinkageCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmd.Companion")))
@interface KPMLinkageCmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMLinkageCmdCompanion *shared __attribute__((swift_name("shared")));
- (NSArray<KPMCommandData *> *)addUserActionListCmdSn:(NSString *)sn bindApplianceInfoList:(NSArray<KPMLinkageCmdUserActionInfoNew *> *)bindApplianceInfoList protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("addUserActionListCmd(sn:bindApplianceInfoList:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)bindUserActionListAndDetectableApplianceStatusListCmdDetectableApplianceInfo:(KPMDetectableApplianceInfo *)detectableApplianceInfo userActionIndexList:(NSArray<KPMInt *> *)userActionIndexList detectableApplianceStatusList:(NSArray<KPMDetectableApplianceStatus *> *)detectableApplianceStatusList protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("bindUserActionListAndDetectableApplianceStatusListCmd(detectableApplianceInfo:userActionIndexList:detectableApplianceStatusList:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)modifyDetectableDeviceEmergencyStatusDetectableApplianceInfo:(KPMDetectableApplianceInfo *)detectableApplianceInfo emergencyStatus:(BOOL)emergencyStatus protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("modifyDetectableDeviceEmergencyStatus(detectableApplianceInfo:emergencyStatus:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)modifyDetectableDeviceStatusDetectableApplianceInfo:(KPMDetectableApplianceInfo *)detectableApplianceInfo status:(BOOL)status protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("modifyDetectableDeviceStatus(detectableApplianceInfo:status:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)modifyDetectableDeviceTriggeredDefaultActionDetectableApplianceInfo:(KPMDetectableApplianceInfo *)detectableApplianceInfo defaultActionList:(NSArray<KPMDefaultAction *> *)defaultActionList protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("modifyDetectableDeviceTriggeredDefaultAction(detectableApplianceInfo:defaultActionList:protocolVersion:networkType:)")));
- (KPMCommandData * _Nullable)modifyDetectableDeviceTriggeredDelayDetectableApplianceInfo:(KPMDetectableApplianceInfo *)detectableApplianceInfo delaySeconds:(int32_t)delaySeconds protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("modifyDetectableDeviceTriggeredDelay(detectableApplianceInfo:delaySeconds:protocolVersion:networkType:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkageCmd.UserActionInfoNew")))
@interface KPMLinkageCmdUserActionInfoNew : KPMBase
- (instancetype)initWithDevTypeSet:(KPMDeviceTypeSet *)devTypeSet applianceIndex:(int32_t)applianceIndex action:(BOOL)action para:(KPMParaStructure *)para __attribute__((swift_name("init(devTypeSet:applianceIndex:action:para:)"))) __attribute__((objc_designated_initializer));
- (KPMDeviceTypeSet *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (KPMParaStructure *)component4 __attribute__((swift_name("component4()")));
- (KPMLinkageCmdUserActionInfoNew *)doCopyDevTypeSet:(KPMDeviceTypeSet *)devTypeSet applianceIndex:(int32_t)applianceIndex action:(BOOL)action para:(KPMParaStructure *)para __attribute__((swift_name("doCopy(devTypeSet:applianceIndex:action:para:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL action __attribute__((swift_name("action")));
@property (readonly) int32_t applianceIndex __attribute__((swift_name("applianceIndex")));
@property (readonly) KPMDeviceTypeSet *devTypeSet __attribute__((swift_name("devTypeSet")));
@property (readonly) KPMParaStructure *para __attribute__((swift_name("para")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmd")))
@interface KPMTimerCmd : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMTimerCmdCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimerCmd.Companion")))
@interface KPMTimerCmdCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMTimerCmdCompanion *shared __attribute__((swift_name("shared")));
- (KPMCommandData *)addTimerV1CmdControllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo timestamp:(int64_t)timestamp enable:(BOOL)enable action:(BOOL)action weekMaskFromUserTimezone:(KPMWeekMask *)weekMaskFromUserTimezone protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("addTimerV1Cmd(controllableApplianceInfo:timestamp:enable:action:weekMaskFromUserTimezone:protocolVersion:networkType:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (KPMCommandData *)addTimerV2CmdSn:(NSString *)sn userActionIndexList:(NSArray<KPMInt *> *)userActionIndexList detectableApplianceStatusList:(NSArray<KPMDetectableApplianceStatus *> *)detectableApplianceStatusList timestamp:(int64_t)timestamp enable:(BOOL)enable weekMaskFromUserTimezone:(KPMWeekMask *)weekMaskFromUserTimezone protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("addTimerV2Cmd(sn:userActionIndexList:detectableApplianceStatusList:timestamp:enable:weekMaskFromUserTimezone:protocolVersion:networkType:)")));
- (KPMCommandData *)deleteTimerV1CmdSn:(NSString *)sn timerIndex:(int32_t)timerIndex protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("deleteTimerV1Cmd(sn:timerIndex:protocolVersion:networkType:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (KPMCommandData *)deleteTimerV2CmdSn:(NSString *)sn timerIndex:(int32_t)timerIndex protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("deleteTimerV2Cmd(sn:timerIndex:protocolVersion:networkType:)")));
- (KPMCommandData *)getAllTimerCmdSn:(NSString *)sn protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("getAllTimerCmd(sn:protocolVersion:networkType:)")));
- (KPMCommandData *)modifyTimerV1CmdTimerIndex:(int32_t)timerIndex controllableApplianceInfo:(KPMControllableApplianceInfo *)controllableApplianceInfo timestamp:(int64_t)timestamp enable:(BOOL)enable action:(BOOL)action weekMaskFromUserTimezone:(KPMWeekMask *)weekMaskFromUserTimezone protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("modifyTimerV1Cmd(timerIndex:controllableApplianceInfo:timestamp:enable:action:weekMaskFromUserTimezone:protocolVersion:networkType:)"))) __attribute__((deprecated("TimerV1 已弃用")));
- (KPMCommandData *)modifyTimerV2CmdSn:(NSString *)sn timerIndex:(int32_t)timerIndex userActionIndexList:(NSArray<KPMInt *> *)userActionIndexList detectableApplianceStatusList:(NSArray<KPMDetectableApplianceStatus *> *)detectableApplianceStatusList timestamp:(int64_t)timestamp enable:(BOOL)enable weekMaskFromUserTimezone:(KPMWeekMask *)weekMaskFromUserTimezone protocolVersion:(KPMProtocolVersion *)protocolVersion networkType:(KPMNetworkType *)networkType __attribute__((swift_name("modifyTimerV2Cmd(sn:timerIndex:userActionIndexList:detectableApplianceStatusList:timestamp:enable:weekMaskFromUserTimezone:protocolVersion:networkType:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Parser")))
@interface KPMParser : KPMBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KPMParserCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Parser.Companion")))
@interface KPMParserCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMParserCompanion *shared __attribute__((swift_name("shared")));
- (KPMParserResult * _Nullable)parseMessage:(NSString *)message __attribute__((swift_name("parse(message:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseInfo")))
@interface KPMBaseInfo : KPMBase
@property (class, readonly, getter=companion) KPMBaseInfoCompanion *companion __attribute__((swift_name("companion")));
- (void)freezeSelf __attribute__((swift_name("freezeSelf()")));
@property KPMCmd * _Nullable cmd __attribute__((swift_name("cmd")));
@property KPMErrorCode *errorCode __attribute__((swift_name("errorCode")));
@property KPMFirmwareVersion * _Nullable fwVersion __attribute__((swift_name("fwVersion")));
@property KPMProtocolVersion *protocolVersion __attribute__((swift_name("protocolVersion")));
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
@property KPMControllableApplianceInfoConfInfoTurnOnMode *turnOnMode __attribute__((swift_name("turnOnMode")));
@property KPMParaStructure *turnOnPara __attribute__((swift_name("turnOnPara")));
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
@property (class, readonly, getter=companion) KPMControllableDeviceInfoCompanion *companion __attribute__((swift_name("companion")));
- (void)freezeSelf __attribute__((swift_name("freezeSelf()")));
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
@property (class, readonly) KPMDefaultAction *phonemessage __attribute__((swift_name("phonemessage")));
@property (class, readonly) KPMDefaultAction *phonecall __attribute__((swift_name("phonecall")));
@property (class, readonly) KPMDefaultAction *apppushnotification __attribute__((swift_name("apppushnotification")));
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
__attribute__((swift_name("DetectableApplianceEmergencyStatus")))
@interface KPMDetectableApplianceEmergencyStatus : KPMBase
- (instancetype)initWithApplianceIndex:(int32_t)applianceIndex emergencyStatus:(BOOL)emergencyStatus __attribute__((swift_name("init(applianceIndex:emergencyStatus:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMDetectableApplianceEmergencyStatusCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (KPMDetectableApplianceEmergencyStatus *)doCopyApplianceIndex:(int32_t)applianceIndex emergencyStatus:(BOOL)emergencyStatus __attribute__((swift_name("doCopy(applianceIndex:emergencyStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t applianceIndex __attribute__((swift_name("applianceIndex")));
@property (readonly) BOOL emergencyStatus __attribute__((swift_name("emergencyStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectableApplianceEmergencyStatus.Companion")))
@interface KPMDetectableApplianceEmergencyStatusCompanion : KPMBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KPMDetectableApplianceEmergencyStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<KPMKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectableApplianceInfo")))
@interface KPMDetectableApplianceInfo : KPMBase
- (instancetype)initWithSn:(NSString *)sn devType:(KPMDeviceTypeSet *)devType applianceIndex:(int32_t)applianceIndex __attribute__((swift_name("init(sn:devType:applianceIndex:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KPMDetectableApplianceInfoCompanion *companion __attribute__((swift_name("companion")));
@property KPMInt * _Nullable activateDelay __attribute__((swift_name("activateDelay")));
@property KPMInt * _Nullable applianceIndex __attribute__((swift_name("applianceIndex")));
@property NSArray<KPMDetectableApplianceStatus *> * _Nullable bindDetectableApplianceStatusList __attribute__((swift_name("bindDetectableApplianceStatusList")));
@property NSArray<KPMInt *> * _Nullable bindUserActionIndexList __attribute__((swift_name("bindUserActionIndexList")));
@property NSArray<KPMDefaultAction *> * _Nullable defaultActionList __attribute__((swift_name("defaultActionList"))) __attribute__((deprecated("defaultActionList 已弃用")));
@property KPMDeviceTypeSet * _Nullable devType __attribute__((swift_name("devType")));
@property KPMInt * _Nullable deviceIndex __attribute__((swift_name("deviceIndex")));
@property KPMFirmwareVersion * _Nullable fwVersion __attribute__((swift_name("fwVersion")));
@property KPMBoolean * _Nullable isEmergency __attribute__((swift_name("isEmergency")));
@property NSString *sn __attribute__((swift_name("sn")));
@property KPMBoolean * _Nullable status __attribute__((swift_name("status")));
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
@property (class, readonly, getter=companion) KPMDetectableDeviceInfoCompanion *companion __attribute__((swift_name("companion")));
- (void)freezeSelf __attribute__((swift_name("freezeSelf()")));
@property NSArray<KPMInt *> * _Nullable installedDetectableApplianceIndexList __attribute__((swift_name("installedDetectableApplianceIndexList")));
@property NSArray<KPMInt *> * _Nullable installedUserActionIndexList __attribute__((swift_name("installedUserActionIndexList")));
@property NSArray<KPMDetectableApplianceEmergencyStatus *> * _Nullable updatedDetectableApplianceEmergencyStatusList __attribute__((swift_name("updatedDetectableApplianceEmergencyStatusList")));
@property NSArray<KPMDetectableApplianceInfo *> * _Nullable updatedDetectableApplianceInfoList __attribute__((swift_name("updatedDetectableApplianceInfoList")));
@property NSArray<KPMDetectableApplianceStatus *> * _Nullable updatedDetectableApplianceStatusList __attribute__((swift_name("updatedDetectableApplianceStatusList")));
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
@property (class, readonly, getter=companion) KPMParserResultCompanion *companion __attribute__((swift_name("companion")));
- (void)freezeSelf __attribute__((swift_name("freezeSelf()")));
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
@property (class, readonly, getter=companion) KPMTimerInfoCompanion *companion __attribute__((swift_name("companion")));
- (void)freezeSelf __attribute__((swift_name("freezeSelf()")));
@property NSArray<KPMInt *> * _Nullable deletedTimerIndexList __attribute__((swift_name("deletedTimerIndexList")));
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
@property (class, readonly, getter=companion) KPMTimerV2ParaCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<KPMDetectableApplianceStatus *> * _Nullable bindDetectableApplianceStatusList __attribute__((swift_name("bindDetectableApplianceStatusList")));
@property NSArray<KPMInt *> * _Nullable bindUserActionIndexList __attribute__((swift_name("bindUserActionIndexList")));
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
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface KPMPlatformKt : KPMBase
+ (id _Nullable)freezeT:(id _Nullable)t __attribute__((swift_name("freeze(t:)")));
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
