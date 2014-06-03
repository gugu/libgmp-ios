//
//  intrinsics.h
//  libgmp
//
//  Created by Andrii Kostenko on 03.06.14.
//  Copyright (c) 2014 Andrii Kostenko. All rights reserved.
//

#ifndef libgmp_intrinsics_h
#define libgmp_intrinsics_h

enum Intrinsic {
    NoIntrinsic,
    AbsIntrinsic,
    MinIntrinsic,
    MaxIntrinsic,
    SqrtIntrinsic,
    SinIntrinsic,
    CosIntrinsic,
    ArrayPushIntrinsic,
    ArrayPopIntrinsic,
    CharCodeAtIntrinsic,
    CharAtIntrinsic,
    FromCharCodeIntrinsic,
    PowIntrinsic,
    FloorIntrinsic,
    CeilIntrinsic,
    RoundIntrinsic,
    ExpIntrinsic,
    LogIntrinsic,
    RegExpExecIntrinsic,
    RegExpTestIntrinsic,
    StringPrototypeValueOfIntrinsic,
    IMulIntrinsic,
    ArrayIteratorNextValueIntrinsic,
    ArrayIteratorNextKeyIntrinsic,
    ArrayIteratorNextGenericIntrinsic
};

#endif
