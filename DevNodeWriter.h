/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, June 8, 2021 at 2:42:59 PM Central Daylight Time
                       * Operating System: Version 14.7 (Build 18G5023c)
                       * Image Source: /usr/libexec/lockdownd
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface DevNodeWriter : NSObject {

	unsigned _service;
	int _nodeDescriptor;
	unsigned long long _preferredBlockSize;

}

@property (assign) int nodeDescriptor;                                 //@synthesize nodeDescriptor=_nodeDescriptor - In the implementation block
@property (assign) unsigned long long preferredBlockSize;              //@synthesize preferredBlockSize=_preferredBlockSize - In the implementation block
@property (assign) unsigned service;                                   //@synthesize service=_service - In the implementation block
@property (readonly) NSString * devicePath; 
@property (readonly) BOOL finished; 
-(id)initWithServiceType:(id)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(BOOL)isAvailable;
-(unsigned)_getServiceType:(id)arg1 ;
-(void)_waitForDeviceNode:(id)arg1 withTimeout:(unsigned)arg2 ;
-(NSString *)devicePath;
-(void)dealloc;
-(BOOL)finished;
-(void)_setupFileDescriptor;
-(int)writeBytes:(char*)arg1 ofLength:(unsigned long long)arg2 withError:(id*)arg3 ;
-(int)writeData:(id)arg1 withError:(id*)arg2 ;
-(unsigned long long)numberOfBytesRemainingInBlock;
-(int)eraseBytes:(unsigned)arg1 ofLength:(unsigned)arg2 ;
-(unsigned)service;
-(void)setService:(unsigned)arg1 ;
-(int)nodeDescriptor;
-(void)setNodeDescriptor:(int)arg1 ;
-(unsigned long long)preferredBlockSize;
-(void)setPreferredBlockSize:(unsigned long long)arg1 ;
@end

