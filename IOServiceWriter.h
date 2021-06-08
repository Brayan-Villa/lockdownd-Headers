/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, June 8, 2021 at 2:42:59 PM Central Daylight Time
                       * Operating System: Version 14.7 (Build 18G5023c)
                       * Image Source: /usr/libexec/lockdownd
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IOServiceWriter : NSObject {

	BOOL _isErase;
	BOOL _shouldCommit;
	unsigned _service;
	unsigned _serviceConnect;

}

@property (assign) unsigned service;                     //@synthesize service=_service - In the implementation block
@property (assign) unsigned serviceConnect;              //@synthesize serviceConnect=_serviceConnect - In the implementation block
@property (assign) BOOL isErase;                         //@synthesize isErase=_isErase - In the implementation block
@property (assign) BOOL shouldCommit;                    //@synthesize shouldCommit=_shouldCommit - In the implementation block
-(id)initWithService:(unsigned)arg1 ;
-(BOOL)isAvailable;
-(int)writeBytes:(char*)arg1 ofLength:(unsigned long long)arg2 withError:(id*)arg3 ;
-(int)writeData:(id)arg1 withError:(id*)arg2 ;
-(int)openService;
-(id)readDataAtOffset:(unsigned)arg1 ofLength:(unsigned)arg2 ;
-(int)readDataAtOffset:(unsigned)arg1 ofLength:(unsigned)arg2 intoBuffer:(void*)arg3 ;
-(int)eraseBytes:(unsigned)arg1 ofLength:(unsigned)arg2 withError:(id*)arg3 ;
-(BOOL)finished;
-(void)dealloc;
-(unsigned)service;
-(void)setService:(unsigned)arg1 ;
-(unsigned)serviceConnect;
-(void)setServiceConnect:(unsigned)arg1 ;
-(BOOL)isErase;
-(void)setIsErase:(BOOL)arg1 ;
-(BOOL)shouldCommit;
-(void)setShouldCommit:(BOOL)arg1 ;
@end
