#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MpplibBasePresenter, MpplibNews, MpplibResponseData<T>, MpplibKotlinUnit, MpplibKotlinThrowable, MpplibOpenApiReturnData<T>, MpplibKotlinArray<T>, MpplibPicListResponsePicture, MpplibPicListResponse, MpplibDuanZiListResponseDuanZi, MpplibDuanZiDetail, MpplibDuanZiListResponse, MpplibKotlinException, MpplibKotlinRuntimeException, MpplibKotlinIllegalStateException, MpplibKotlinx_serialization_coreSerializersModule, MpplibKotlinx_serialization_coreSerialKind, MpplibKotlinNothing;

@protocol MpplibKotlinCoroutineContext, MpplibKotlinx_coroutines_coreCoroutineScope, MpplibBaseView, MpplibNewsListView, MpplibKotlinx_serialization_coreKSerializer, MpplibNewsListRepository, MpplibBaseUseCase, MpplibPicListView, MpplibDuanZiListView, MpplibDuanZiListRepository, MpplibKotlinCoroutineContextElement, MpplibKotlinCoroutineContextKey, MpplibKotlinx_serialization_coreEncoder, MpplibKotlinx_serialization_coreSerialDescriptor, MpplibKotlinx_serialization_coreSerializationStrategy, MpplibKotlinx_serialization_coreDecoder, MpplibKotlinx_serialization_coreDeserializationStrategy, MpplibKotlinIterator, MpplibKotlinx_serialization_coreCompositeEncoder, MpplibKotlinAnnotation, MpplibKotlinx_serialization_coreCompositeDecoder, MpplibKotlinx_serialization_coreSerializersModuleCollector, MpplibKotlinKClass, MpplibKotlinKDeclarationContainer, MpplibKotlinKAnnotatedElement, MpplibKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface MpplibBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface MpplibBase (MpplibBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface MpplibMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MpplibMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorMpplibKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface MpplibNumber : NSNumber
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
@interface MpplibByte : MpplibNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface MpplibUByte : MpplibNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface MpplibShort : MpplibNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface MpplibUShort : MpplibNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface MpplibInt : MpplibNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface MpplibUInt : MpplibNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface MpplibLong : MpplibNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface MpplibULong : MpplibNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface MpplibFloat : MpplibNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface MpplibDouble : MpplibNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface MpplibBoolean : MpplibNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MPPLibModule")))
@interface MpplibMPPLibModule : MpplibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mPPLibModule __attribute__((swift_name("init()")));
- (void)doInitModule __attribute__((swift_name("doInitModule()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwiftPodUtil")))
@interface MpplibSwiftPodUtil : MpplibBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)doAction __attribute__((swift_name("doAction()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol MpplibKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<MpplibKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("BasePresenter")))
@interface MpplibBasePresenter : MpplibBase <MpplibKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithBaseView:(id<MpplibBaseView>)baseView __attribute__((swift_name("init(baseView:)"))) __attribute__((objc_designated_initializer));
- (void)onDestroy __attribute__((swift_name("onDestroy()")));
@property (readonly) id<MpplibKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewsListPresenter")))
@interface MpplibNewsListPresenter : MpplibBasePresenter
- (instancetype)initWithNewsListView:(id<MpplibNewsListView>)newsListView __attribute__((swift_name("init(newsListView:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseView:(id<MpplibBaseView>)baseView __attribute__((swift_name("init(baseView:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)executeLoadMoreNewsListUserCase __attribute__((swift_name("executeLoadMoreNewsListUserCase()")));
- (void)executeNewsListUseCase __attribute__((swift_name("executeNewsListUseCase()")));
- (void)executeRefreshNewsListUserCase __attribute__((swift_name("executeRefreshNewsListUserCase()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("News")))
@interface MpplibNews : MpplibBase
- (instancetype)initWithImage:(NSString *)image passtime:(NSString *)passtime path:(NSString *)path title:(NSString *)title __attribute__((swift_name("init(image:passtime:path:title:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (MpplibNews *)doCopyImage:(NSString *)image passtime:(NSString *)passtime path:(NSString *)path title:(NSString *)title __attribute__((swift_name("doCopy(image:passtime:path:title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString *)getStringTwo __attribute__((swift_name("getStringTwo()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *image __attribute__((swift_name("image")));
@property (readonly) NSString *passtime __attribute__((swift_name("passtime")));
@property (readonly) NSString *path __attribute__((swift_name("path")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("News.Companion")))
@interface MpplibNewsCompanion : MpplibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MpplibKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("NewsListRepository")))
@protocol MpplibNewsListRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadDataWithCompletionHandler:(void (^)(MpplibResponseData<NSArray<MpplibNews *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadData(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadDataPage:(int32_t)page count:(int32_t)count completionHandler:(void (^)(MpplibResponseData<NSArray<MpplibNews *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadData(page:count:completionHandler:)")));
@property (readonly) int32_t defaultPageCount __attribute__((swift_name("defaultPageCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewsListRepositoryImp")))
@interface MpplibNewsListRepositoryImp : MpplibBase <MpplibNewsListRepository>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadDataWithCompletionHandler:(void (^)(MpplibResponseData<NSArray<MpplibNews *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadData(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadDataPage:(int32_t)page count:(int32_t)count completionHandler:(void (^)(MpplibResponseData<NSArray<MpplibNews *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loadData(page:count:completionHandler:)")));
@property (readonly) int32_t defaultPageCount __attribute__((swift_name("defaultPageCount")));
@end;

__attribute__((swift_name("BaseUseCase")))
@protocol MpplibBaseUseCase
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeWithCompletionHandler:(void (^)(MpplibKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoadMoreNewsListUserCase")))
@interface MpplibLoadMoreNewsListUserCase : MpplibBase <MpplibBaseUseCase>
- (instancetype)initWithRepository:(id<MpplibNewsListRepository>)repository view:(id<MpplibNewsListView>)view __attribute__((swift_name("init(repository:view:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeWithCompletionHandler:(void (^)(MpplibKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewsListUseCase")))
@interface MpplibNewsListUseCase : MpplibBase <MpplibBaseUseCase>
- (instancetype)initWithRepository:(id<MpplibNewsListRepository>)repository view:(id<MpplibNewsListView>)view __attribute__((swift_name("init(repository:view:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeWithCompletionHandler:(void (^)(MpplibKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(completionHandler:)")));
@end;

__attribute__((swift_name("BaseView")))
@protocol MpplibBaseView
@required
- (void)showErrorThrowable:(MpplibKotlinThrowable *)throwable __attribute__((swift_name("showError(throwable:)")));
@end;

__attribute__((swift_name("NewsListView")))
@protocol MpplibNewsListView <MpplibBaseView>
@required
- (void)appendItemsAppendData:(NSArray<MpplibNews *> *)appendData __attribute__((swift_name("appendItems(appendData:)")));
- (void)disableLoadMore __attribute__((swift_name("disableLoadMore()")));
- (void)doInitWithDataNewsList:(NSArray<MpplibNews *> *)newsList __attribute__((swift_name("doInitWithData(newsList:)")));
- (void)showNoAnyMore __attribute__((swift_name("showNoAnyMore()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AtomicInt")))
@interface MpplibAtomicInt : MpplibBase
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (void)increment __attribute__((swift_name("increment()")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogUtil")))
@interface MpplibLogUtil : MpplibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logUtil __attribute__((swift_name("init()")));
- (void)dTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("d(tag:message:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("e(tag:message:)")));
- (void)eTag:(NSString *)tag message:(NSString *)message exception:(MpplibKotlinThrowable *)exception __attribute__((swift_name("e(tag:message:exception:)")));
- (void)iTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("i(tag:message:)")));
- (void)wTag:(NSString *)tag message:(NSString *)message __attribute__((swift_name("w(tag:message:)")));
- (void)wTag:(NSString *)tag message:(NSString *)message exception:(MpplibKotlinThrowable *)exception __attribute__((swift_name("w(tag:message:exception:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenApiReturnData")))
@interface MpplibOpenApiReturnData<T> : MpplibBase
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message result:(T _Nullable)result __attribute__((swift_name("init(code:message:result:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (T _Nullable)component3 __attribute__((swift_name("component3()")));
- (MpplibOpenApiReturnData<T> *)doCopyCode:(int32_t)code message:(NSString *)message result:(T _Nullable)result __attribute__((swift_name("doCopy(code:message:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenApiReturnDataCompanion")))
@interface MpplibOpenApiReturnDataCompanion : MpplibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MpplibKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(MpplibKotlinArray<id<MpplibKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<MpplibKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<MpplibKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResponseData")))
@interface MpplibResponseData<T> : MpplibBase
- (instancetype)initWithResponseData:(T _Nullable)responseData error:(MpplibKotlinThrowable *)error __attribute__((swift_name("init(responseData:error:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)component1 __attribute__((swift_name("component1()")));
- (MpplibKotlinThrowable *)component2 __attribute__((swift_name("component2()")));
- (MpplibResponseData<T> *)doCopyResponseData:(T _Nullable)responseData error:(MpplibKotlinThrowable *)error __attribute__((swift_name("doCopy(responseData:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MpplibKotlinThrowable *error __attribute__((swift_name("error")));
@property (readonly) T _Nullable responseData __attribute__((swift_name("responseData")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface MpplibKotlinThrowable : MpplibBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MpplibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MpplibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MpplibKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MpplibKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpRequestError")))
@interface MpplibHttpRequestError : MpplibKotlinThrowable
- (instancetype)initWithError:(NSString *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MpplibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MpplibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoneError")))
@interface MpplibNoneError : MpplibKotlinThrowable
- (instancetype)initWithTip:(NSString *)tip __attribute__((swift_name("init(tip:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MpplibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MpplibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PicListPresenter")))
@interface MpplibPicListPresenter : MpplibBasePresenter
- (instancetype)initWithPicListView:(id<MpplibPicListView>)picListView __attribute__((swift_name("init(picListView:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseView:(id<MpplibBaseView>)baseView __attribute__((swift_name("init(baseView:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)doInitFirstPage __attribute__((swift_name("doInitFirstPage()")));
- (void)loadMorePage __attribute__((swift_name("loadMorePage()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PicListResponse")))
@interface MpplibPicListResponse : MpplibBase
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message pictures:(NSArray<MpplibPicListResponsePicture *> *)pictures __attribute__((swift_name("init(code:message:pictures:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSArray<MpplibPicListResponsePicture *> *)component3 __attribute__((swift_name("component3()")));
- (MpplibPicListResponse *)doCopyCode:(int32_t)code message:(NSString *)message pictures:(NSArray<MpplibPicListResponsePicture *> *)pictures __attribute__((swift_name("doCopy(code:message:pictures:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSArray<MpplibPicListResponsePicture *> *pictures __attribute__((swift_name("pictures")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PicListResponse.Companion")))
@interface MpplibPicListResponseCompanion : MpplibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MpplibKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PicListResponse.Picture")))
@interface MpplibPicListResponsePicture : MpplibBase
- (instancetype)initWithId:(int32_t)id img:(NSString *)img time:(NSString *)time __attribute__((swift_name("init(id:img:time:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (MpplibPicListResponsePicture *)doCopyId:(int32_t)id img:(NSString *)img time:(NSString *)time __attribute__((swift_name("doCopy(id:img:time:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) NSString *img __attribute__((swift_name("img")));
@property (readonly) NSString *time __attribute__((swift_name("time")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PicListResponse.PictureCompanion")))
@interface MpplibPicListResponsePictureCompanion : MpplibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MpplibKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("PicListView")))
@protocol MpplibPicListView <MpplibBaseView>
@required
- (void)disableLoadMore __attribute__((swift_name("disableLoadMore()")));
- (void)doInitPagePictures:(NSArray<MpplibPicListResponsePicture *> *)pictures __attribute__((swift_name("doInitPage(pictures:)")));
- (void)showMoreDataPictures:(NSArray<MpplibPicListResponsePicture *> *)pictures __attribute__((swift_name("showMoreData(pictures:)")));
- (void)showNoMoreDataTip __attribute__((swift_name("showNoMoreDataTip()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DuanZiPresenter")))
@interface MpplibDuanZiPresenter : MpplibBasePresenter
- (instancetype)initWithDuanZiListView:(id<MpplibDuanZiListView>)duanZiListView __attribute__((swift_name("init(duanZiListView:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBaseView:(id<MpplibBaseView>)baseView __attribute__((swift_name("init(baseView:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)doInitFirstPage __attribute__((swift_name("doInitFirstPage()")));
- (void)loadMore __attribute__((swift_name("loadMore()")));
@end;

__attribute__((swift_name("DuanZiListView")))
@protocol MpplibDuanZiListView <MpplibBaseView>
@required
- (void)disableLoadMore __attribute__((swift_name("disableLoadMore()")));
- (void)doInitPageDuanziList:(NSArray<MpplibDuanZiListResponseDuanZi *> *)duanziList __attribute__((swift_name("doInitPage(duanziList:)")));
- (void)showMoreDataDuanziList:(NSArray<MpplibDuanZiListResponseDuanZi *> *)duanziList __attribute__((swift_name("showMoreData(duanziList:)")));
- (void)showNoMoreDataTip __attribute__((swift_name("showNoMoreDataTip()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoadMoreDuanZiListUserCase")))
@interface MpplibLoadMoreDuanZiListUserCase : MpplibBase <MpplibBaseUseCase>
- (instancetype)initWithView:(id<MpplibDuanZiListView>)view repository:(id<MpplibDuanZiListRepository>)repository __attribute__((swift_name("init(view:repository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeWithCompletionHandler:(void (^)(MpplibKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShowDuanZiListUserCase")))
@interface MpplibShowDuanZiListUserCase : MpplibBase <MpplibBaseUseCase>
- (instancetype)initWithDuanZiListView:(id<MpplibDuanZiListView>)duanZiListView duanZiListRepository:(id<MpplibDuanZiListRepository>)duanZiListRepository __attribute__((swift_name("init(duanZiListView:duanZiListRepository:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeWithCompletionHandler:(void (^)(MpplibKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DuanZiDetail")))
@interface MpplibDuanZiDetail : MpplibBase
- (instancetype)initWithComment:(NSString *)comment down:(NSString *)down forward:(NSString *)forward header:(NSString *)header images:(id _Nullable)images name:(NSString *)name passtime:(NSString *)passtime sid:(NSString *)sid text:(NSString *)text thumbnail:(NSString *)thumbnail topCommentsContent:(NSString * _Nullable)topCommentsContent topCommentsHeader:(NSString * _Nullable)topCommentsHeader topCommentsName:(NSString * _Nullable)topCommentsName topCommentsUid:(NSString * _Nullable)topCommentsUid topCommentsVoiceuri:(NSString * _Nullable)topCommentsVoiceuri type:(NSString *)type uid:(NSString *)uid up:(NSString *)up video:(NSString *)video __attribute__((swift_name("init(comment:down:forward:header:images:name:passtime:sid:text:thumbnail:topCommentsContent:topCommentsHeader:topCommentsName:topCommentsUid:topCommentsVoiceuri:type:uid:up:video:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString *)component16 __attribute__((swift_name("component16()")));
- (NSString *)component17 __attribute__((swift_name("component17()")));
- (NSString *)component18 __attribute__((swift_name("component18()")));
- (NSString *)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString *)component9 __attribute__((swift_name("component9()")));
- (MpplibDuanZiDetail *)doCopyComment:(NSString *)comment down:(NSString *)down forward:(NSString *)forward header:(NSString *)header images:(id _Nullable)images name:(NSString *)name passtime:(NSString *)passtime sid:(NSString *)sid text:(NSString *)text thumbnail:(NSString *)thumbnail topCommentsContent:(NSString * _Nullable)topCommentsContent topCommentsHeader:(NSString * _Nullable)topCommentsHeader topCommentsName:(NSString * _Nullable)topCommentsName topCommentsUid:(NSString * _Nullable)topCommentsUid topCommentsVoiceuri:(NSString * _Nullable)topCommentsVoiceuri type:(NSString *)type uid:(NSString *)uid up:(NSString *)up video:(NSString *)video __attribute__((swift_name("doCopy(comment:down:forward:header:images:name:passtime:sid:text:thumbnail:topCommentsContent:topCommentsHeader:topCommentsName:topCommentsUid:topCommentsVoiceuri:type:uid:up:video:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *comment __attribute__((swift_name("comment")));
@property (readonly) NSString *down __attribute__((swift_name("down")));
@property (readonly) NSString *forward __attribute__((swift_name("forward")));
@property (readonly) NSString *header __attribute__((swift_name("header")));
@property (readonly) id _Nullable images __attribute__((swift_name("images")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *passtime __attribute__((swift_name("passtime")));
@property (readonly) NSString *sid __attribute__((swift_name("sid")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) NSString *thumbnail __attribute__((swift_name("thumbnail")));
@property (readonly) NSString * _Nullable topCommentsContent __attribute__((swift_name("topCommentsContent")));
@property (readonly) NSString * _Nullable topCommentsHeader __attribute__((swift_name("topCommentsHeader")));
@property (readonly) NSString * _Nullable topCommentsName __attribute__((swift_name("topCommentsName")));
@property (readonly) NSString * _Nullable topCommentsUid __attribute__((swift_name("topCommentsUid")));
@property (readonly) NSString * _Nullable topCommentsVoiceuri __attribute__((swift_name("topCommentsVoiceuri")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString *uid __attribute__((swift_name("uid")));
@property (readonly) NSString *up __attribute__((swift_name("up")));
@property (readonly) NSString *video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DuanZiDetail.Companion")))
@interface MpplibDuanZiDetailCompanion : MpplibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MpplibKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("DuanZiListRepository")))
@protocol MpplibDuanZiListRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)obtainDataPageIndex:(int32_t)pageIndex pageCount:(int32_t)pageCount completionHandler:(void (^)(MpplibResponseData<MpplibDuanZiListResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("obtainData(pageIndex:pageCount:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)obtainFirstPageDataFirstPageSize:(int32_t)firstPageSize completionHandler:(void (^)(MpplibResponseData<MpplibDuanZiListResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("obtainFirstPageData(firstPageSize:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DuanZiListRepositoryImp")))
@interface MpplibDuanZiListRepositoryImp : MpplibBase <MpplibDuanZiListRepository>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)obtainDataPageIndex:(int32_t)pageIndex pageCount:(int32_t)pageCount completionHandler:(void (^)(MpplibResponseData<MpplibDuanZiListResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("obtainData(pageIndex:pageCount:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)obtainFirstPageDataFirstPageSize:(int32_t)firstPageSize completionHandler:(void (^)(MpplibResponseData<MpplibDuanZiListResponse *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("obtainFirstPageData(firstPageSize:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DuanZiListResponse")))
@interface MpplibDuanZiListResponse : MpplibBase
- (instancetype)initWithCode:(int32_t)code message:(NSString *)message duanziList:(NSArray<MpplibDuanZiListResponseDuanZi *> *)duanziList __attribute__((swift_name("init(code:message:duanziList:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSArray<MpplibDuanZiListResponseDuanZi *> *)component3 __attribute__((swift_name("component3()")));
- (MpplibDuanZiListResponse *)doCopyCode:(int32_t)code message:(NSString *)message duanziList:(NSArray<MpplibDuanZiListResponseDuanZi *> *)duanziList __attribute__((swift_name("doCopy(code:message:duanziList:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSArray<MpplibDuanZiListResponseDuanZi *> *duanziList __attribute__((swift_name("duanziList")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DuanZiListResponse.Companion")))
@interface MpplibDuanZiListResponseCompanion : MpplibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MpplibKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DuanZiListResponse.DuanZi")))
@interface MpplibDuanZiListResponseDuanZi : MpplibBase
- (instancetype)initWithComment:(NSString *)comment down:(NSString *)down forward:(NSString *)forward header:(NSString * _Nullable)header images:(NSString * _Nullable)images name:(NSString *)name passtime:(NSString *)passtime sid:(NSString *)sid text:(NSString * _Nullable)text thumbnail:(NSString * _Nullable)thumbnail topCommentsContent:(NSString * _Nullable)topCommentsContent topCommentsHeader:(NSString * _Nullable)topCommentsHeader topCommentsName:(NSString * _Nullable)topCommentsName topCommentsUid:(NSString * _Nullable)topCommentsUid topCommentsVoiceuri:(NSString * _Nullable)topCommentsVoiceuri type:(NSString *)type uid:(NSString * _Nullable)uid up:(NSString * _Nullable)up video:(NSString * _Nullable)video __attribute__((swift_name("init(comment:down:forward:header:images:name:passtime:sid:text:thumbnail:topCommentsContent:topCommentsHeader:topCommentsName:topCommentsUid:topCommentsVoiceuri:type:uid:up:video:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (NSString * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString *)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (MpplibDuanZiListResponseDuanZi *)doCopyComment:(NSString *)comment down:(NSString *)down forward:(NSString *)forward header:(NSString * _Nullable)header images:(NSString * _Nullable)images name:(NSString *)name passtime:(NSString *)passtime sid:(NSString *)sid text:(NSString * _Nullable)text thumbnail:(NSString * _Nullable)thumbnail topCommentsContent:(NSString * _Nullable)topCommentsContent topCommentsHeader:(NSString * _Nullable)topCommentsHeader topCommentsName:(NSString * _Nullable)topCommentsName topCommentsUid:(NSString * _Nullable)topCommentsUid topCommentsVoiceuri:(NSString * _Nullable)topCommentsVoiceuri type:(NSString *)type uid:(NSString * _Nullable)uid up:(NSString * _Nullable)up video:(NSString * _Nullable)video __attribute__((swift_name("doCopy(comment:down:forward:header:images:name:passtime:sid:text:thumbnail:topCommentsContent:topCommentsHeader:topCommentsName:topCommentsUid:topCommentsVoiceuri:type:uid:up:video:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *comment __attribute__((swift_name("comment")));
@property (readonly) NSString *down __attribute__((swift_name("down")));
@property (readonly) NSString *forward __attribute__((swift_name("forward")));
@property (readonly) NSString * _Nullable header __attribute__((swift_name("header")));
@property (readonly) NSString * _Nullable images __attribute__((swift_name("images")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *passtime __attribute__((swift_name("passtime")));
@property (readonly) NSString *sid __attribute__((swift_name("sid")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@property (readonly) NSString * _Nullable thumbnail __attribute__((swift_name("thumbnail")));
@property (readonly) NSString * _Nullable topCommentsContent __attribute__((swift_name("topCommentsContent")));
@property (readonly) NSString * _Nullable topCommentsHeader __attribute__((swift_name("topCommentsHeader")));
@property (readonly) NSString * _Nullable topCommentsName __attribute__((swift_name("topCommentsName")));
@property (readonly) NSString * _Nullable topCommentsUid __attribute__((swift_name("topCommentsUid")));
@property (readonly) NSString * _Nullable topCommentsVoiceuri __attribute__((swift_name("topCommentsVoiceuri")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable uid __attribute__((swift_name("uid")));
@property (readonly) NSString * _Nullable up __attribute__((swift_name("up")));
@property (readonly) NSString * _Nullable video __attribute__((swift_name("video")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DuanZiListResponse.DuanZiCompanion")))
@interface MpplibDuanZiListResponseDuanZiCompanion : MpplibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<MpplibKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtensionForHttpRequestKt")))
@interface MpplibExtensionForHttpRequestKt : MpplibBase
+ (NSString *)toPostRequestFormBody:(NSDictionary<id, id> *)receiver __attribute__((swift_name("toPostRequestFormBody(_:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MpplibKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MpplibKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MpplibKotlinCoroutineContextElement> _Nullable)getKey:(id<MpplibKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MpplibKotlinCoroutineContext>)minusKeyKey:(id<MpplibKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MpplibKotlinCoroutineContext>)plusContext:(id<MpplibKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MpplibKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MpplibKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MpplibKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MpplibKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MpplibKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MpplibKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MpplibKotlinx_serialization_coreKSerializer <MpplibKotlinx_serialization_coreSerializationStrategy, MpplibKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("KotlinException")))
@interface MpplibKotlinException : MpplibKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MpplibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MpplibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface MpplibKotlinRuntimeException : MpplibKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MpplibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MpplibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MpplibKotlinIllegalStateException : MpplibKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MpplibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MpplibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface MpplibKotlinCancellationException : MpplibKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MpplibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MpplibKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MpplibKotlinUnit : MpplibBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MpplibKotlinArray<T> : MpplibBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MpplibInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MpplibKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MpplibKotlinCoroutineContextElement <MpplibKotlinCoroutineContext>
@required
@property (readonly) id<MpplibKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MpplibKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MpplibKotlinx_serialization_coreEncoder
@required
- (id<MpplibKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MpplibKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<MpplibKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MpplibKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MpplibKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MpplibKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<MpplibKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<MpplibKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<MpplibKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) MpplibKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MpplibKotlinx_serialization_coreDecoder
@required
- (id<MpplibKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MpplibKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MpplibKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MpplibKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MpplibKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MpplibKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MpplibKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MpplibKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MpplibKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MpplibKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MpplibKotlinx_serialization_coreSerializersModule : MpplibBase
- (void)dumpToCollector:(id<MpplibKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<MpplibKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<MpplibKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<MpplibKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MpplibKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<MpplibKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MpplibKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol MpplibKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MpplibKotlinx_serialization_coreSerialKind : MpplibBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MpplibKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MpplibKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MpplibKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MpplibKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MpplibKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MpplibKotlinNothing : MpplibBase
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MpplibKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MpplibKotlinKClass>)kClass serializer:(id<MpplibKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MpplibKotlinKClass>)baseClass actualClass:(id<MpplibKotlinKClass>)actualClass actualSerializer:(id<MpplibKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MpplibKotlinKClass>)baseClass defaultSerializerProvider:(id<MpplibKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MpplibKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MpplibKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol MpplibKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol MpplibKotlinKClass <MpplibKotlinKDeclarationContainer, MpplibKotlinKAnnotatedElement, MpplibKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
