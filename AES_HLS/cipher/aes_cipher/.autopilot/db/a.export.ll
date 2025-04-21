; ModuleID = 'D:/OneDrive/UVA/crypto/AES_code/VivadoHLS/cipher/aes_cipher/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@cipher = internal constant [768 x i8] c"c|w{\F2ko\C50\01g+\FE\D7\ABv\CA\82\C9}\FAYG\F0\AD\D4\A2\AF\9C\A4r\C0\B7\FD\93&6?\F7\CC4\A5\E5\F1q\D81\15\04\C7#\C3\18\96\05\9A\07\12\80\E2\EB'\B2u\09\83,\1A\1BnZ\A0R;\D6\B3)\E3/\84S\D1\00\ED \FC\B1[j\CB\BE9JLX\CF\D0\EF\AA\FBCM3\85E\F9\02\7FP<\9F\A8Q\A3@\8F\92\9D8\F5\BC\B6\DA!\10\FF\F3\D2\CD\0C\13\EC_\97D\17\C4\A7~=d]\19s`\81O\DC\22*\90\88F\EE\B8\14\DE^\0B\DB\E02:\0AI\06$\5C\C2\D3\ACb\91\95\E4y\E7\C87m\8D\D5N\A9lV\F4\EAez\AE\08\BAx%.\1C\A6\B4\C6\E8\DDt\1FK\BD\8B\8Ap>\B5fH\03\F6\0Ea5W\B9\86\C1\1D\9E\E1\F8\98\11i\D9\8E\94\9B\1E\87\E9\CEU(\DF\8C\A1\89\0D\BF\E6BhA\99-\0F\B0T\BB\16\00\02\04\06\08\0A\0C\0E\10\12\14\16\18\1A\1C\1E \22$&(*,.02468:<>@BDFHJLNPRTVXZ\5C^`bdfhjlnprtvxz|~\80\82\84\86\88\8A\8C\8E\90\92\94\96\98\9A\9C\9E\A0\A2\A4\A6\A8\AA\AC\AE\B0\B2\B4\B6\B8\BA\BC\BE\C0\C2\C4\C6\C8\CA\CC\CE\D0\D2\D4\D6\D8\DA\DC\DE\E0\E2\E4\E6\E8\EA\EC\EE\F0\F2\F4\F6\F8\FA\FC\FE\1B\19\1F\1D\13\11\17\15\0B\09\0F\0D\03\01\07\05;9?=3175+)/-#!'%[Y_]SQWUKIOMCAGE{y\7F}sqwukiomcage\9B\99\9F\9D\93\91\97\95\8B\89\8F\8D\83\81\87\85\BB\B9\BF\BD\B3\B1\B7\B5\AB\A9\AF\AD\A3\A1\A7\A5\DB\D9\DF\DD\D3\D1\D7\D5\CB\C9\CF\CD\C3\C1\C7\C5\FB\F9\FF\FD\F3\F1\F7\F5\EB\E9\EF\ED\E3\E1\E7\E5\00\03\06\05\0C\0F\0A\09\18\1B\1E\1D\14\17\12\110365<?:9(+.-$'\22!`cfelojix{~}twrqPSVU\5C_ZYHKNMDGBA\C0\C3\C6\C5\CC\CF\CA\C9\D8\DB\DE\DD\D4\D7\D2\D1\F0\F3\F6\F5\FC\FF\FA\F9\E8\EB\EE\ED\E4\E7\E2\E1\A0\A3\A6\A5\AC\AF\AA\A9\B8\BB\BE\BD\B4\B7\B2\B1\90\93\96\95\9C\9F\9A\99\88\8B\8E\8D\84\87\82\81\9B\98\9D\9E\97\94\91\92\83\80\85\86\8F\8C\89\8A\AB\A8\AD\AE\A7\A4\A1\A2\B3\B0\B5\B6\BF\BC\B9\BA\FB\F8\FD\FE\F7\F4\F1\F2\E3\E0\E5\E6\EF\EC\E9\EA\CB\C8\CD\CE\C7\C4\C1\C2\D3\D0\D5\D6\DF\DC\D9\DA[X]^WTQRC@EFOLIJkhmngdabspuv\7F|yz;8=>7412# %&/,)*\0B\08\0D\0E\07\04\01\02\13\10\15\16\1F\1C\19\1A"
@AES_Encrypt_str = internal unnamed_addr constant [12 x i8] c"AES_Encrypt\00"
@p_str9 = private unnamed_addr constant [7 x i8] c"L_copy\00", align 1
@p_str6 = private unnamed_addr constant [12 x i8] c"AddRoundKey\00", align 1
@p_str5 = private unnamed_addr constant [5 x i8] c"both\00", align 1
@p_str4 = private unnamed_addr constant [5 x i8] c"axis\00", align 1
@p_str10 = private unnamed_addr constant [9 x i8] c"L_rounds\00", align 1
@p_str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

define weak void @_ssdm_op_Write.axis.volatile.i8P(i8*, i8) {
entry:
  store i8 %1, i8* %0
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak void @_ssdm_op_SpecResourceLimit(...) nounwind {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i8 @_ssdm_op_Read.axis.volatile.i8P(i8*) {
entry:
  %empty = load i8* %0
  ret i8 %empty
}

define weak i16 @_ssdm_op_Read.ap_auto.i16(i16) {
entry:
  ret i16 %0
}

define weak i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56, i8) nounwind readnone {
entry:
  %empty = zext i56 %0 to i64
  %empty_3 = zext i8 %1 to i64
  %empty_4 = shl i64 %empty, 8
  %empty_5 = or i64 %empty_4, %empty_3
  ret i64 %empty_5
}

declare void @_GLOBAL__I_a() nounwind

define internal fastcc void @SubBytes([16 x i8]* nocapture %state) noinline {
  %state_addr = getelementptr [16 x i8]* %state, i64 0, i64 0
  %state_load = load i8* %state_addr, align 1
  %tmp_2 = zext i8 %state_load to i64
  %cipher_addr = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2
  %cipher_load = load i8* %cipher_addr, align 1
  store i8 %cipher_load, i8* %state_addr, align 1
  %state_addr_1 = getelementptr [16 x i8]* %state, i64 0, i64 1
  %state_load_1 = load i8* %state_addr_1, align 1
  %tmp_2_1 = zext i8 %state_load_1 to i64
  %cipher_addr_1 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_1
  %cipher_load_1 = load i8* %cipher_addr_1, align 1
  store i8 %cipher_load_1, i8* %state_addr_1, align 1
  %state_addr_2 = getelementptr [16 x i8]* %state, i64 0, i64 2
  %state_load_2 = load i8* %state_addr_2, align 1
  %tmp_2_2 = zext i8 %state_load_2 to i64
  %cipher_addr_2 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_2
  %cipher_load_2 = load i8* %cipher_addr_2, align 1
  store i8 %cipher_load_2, i8* %state_addr_2, align 1
  %state_addr_3 = getelementptr [16 x i8]* %state, i64 0, i64 3
  %state_load_3 = load i8* %state_addr_3, align 1
  %tmp_2_3 = zext i8 %state_load_3 to i64
  %cipher_addr_3 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_3
  %cipher_load_3 = load i8* %cipher_addr_3, align 1
  store i8 %cipher_load_3, i8* %state_addr_3, align 1
  %state_addr_4 = getelementptr [16 x i8]* %state, i64 0, i64 4
  %state_load_4 = load i8* %state_addr_4, align 1
  %tmp_2_4 = zext i8 %state_load_4 to i64
  %cipher_addr_4 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_4
  %cipher_load_4 = load i8* %cipher_addr_4, align 1
  store i8 %cipher_load_4, i8* %state_addr_4, align 1
  %state_addr_5 = getelementptr [16 x i8]* %state, i64 0, i64 5
  %state_load_5 = load i8* %state_addr_5, align 1
  %tmp_2_5 = zext i8 %state_load_5 to i64
  %cipher_addr_5 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_5
  %cipher_load_5 = load i8* %cipher_addr_5, align 1
  store i8 %cipher_load_5, i8* %state_addr_5, align 1
  %state_addr_6 = getelementptr [16 x i8]* %state, i64 0, i64 6
  %state_load_6 = load i8* %state_addr_6, align 1
  %tmp_2_6 = zext i8 %state_load_6 to i64
  %cipher_addr_6 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_6
  %cipher_load_6 = load i8* %cipher_addr_6, align 1
  store i8 %cipher_load_6, i8* %state_addr_6, align 1
  %state_addr_7 = getelementptr [16 x i8]* %state, i64 0, i64 7
  %state_load_7 = load i8* %state_addr_7, align 1
  %tmp_2_7 = zext i8 %state_load_7 to i64
  %cipher_addr_7 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_7
  %cipher_load_7 = load i8* %cipher_addr_7, align 1
  store i8 %cipher_load_7, i8* %state_addr_7, align 1
  %state_addr_8 = getelementptr [16 x i8]* %state, i64 0, i64 8
  %state_load_8 = load i8* %state_addr_8, align 1
  %tmp_2_8 = zext i8 %state_load_8 to i64
  %cipher_addr_8 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_8
  %cipher_load_8 = load i8* %cipher_addr_8, align 1
  store i8 %cipher_load_8, i8* %state_addr_8, align 1
  %state_addr_9 = getelementptr [16 x i8]* %state, i64 0, i64 9
  %state_load_9 = load i8* %state_addr_9, align 1
  %tmp_2_9 = zext i8 %state_load_9 to i64
  %cipher_addr_9 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_9
  %cipher_load_9 = load i8* %cipher_addr_9, align 1
  store i8 %cipher_load_9, i8* %state_addr_9, align 1
  %state_addr_10 = getelementptr [16 x i8]* %state, i64 0, i64 10
  %state_load_10 = load i8* %state_addr_10, align 1
  %tmp_2_s = zext i8 %state_load_10 to i64
  %cipher_addr_10 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_s
  %cipher_load_10 = load i8* %cipher_addr_10, align 1
  store i8 %cipher_load_10, i8* %state_addr_10, align 1
  %state_addr_11 = getelementptr [16 x i8]* %state, i64 0, i64 11
  %state_load_11 = load i8* %state_addr_11, align 1
  %tmp_2_10 = zext i8 %state_load_11 to i64
  %cipher_addr_11 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_10
  %cipher_load_11 = load i8* %cipher_addr_11, align 1
  store i8 %cipher_load_11, i8* %state_addr_11, align 1
  %state_addr_12 = getelementptr [16 x i8]* %state, i64 0, i64 12
  %state_load_12 = load i8* %state_addr_12, align 1
  %tmp_2_11 = zext i8 %state_load_12 to i64
  %cipher_addr_12 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_11
  %cipher_load_12 = load i8* %cipher_addr_12, align 1
  store i8 %cipher_load_12, i8* %state_addr_12, align 1
  %state_addr_13 = getelementptr [16 x i8]* %state, i64 0, i64 13
  %state_load_13 = load i8* %state_addr_13, align 1
  %tmp_2_12 = zext i8 %state_load_13 to i64
  %cipher_addr_13 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_12
  %cipher_load_13 = load i8* %cipher_addr_13, align 1
  store i8 %cipher_load_13, i8* %state_addr_13, align 1
  %state_addr_14 = getelementptr [16 x i8]* %state, i64 0, i64 14
  %state_load_14 = load i8* %state_addr_14, align 1
  %tmp_2_13 = zext i8 %state_load_14 to i64
  %cipher_addr_14 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_13
  %cipher_load_14 = load i8* %cipher_addr_14, align 1
  store i8 %cipher_load_14, i8* %state_addr_14, align 1
  %state_addr_15 = getelementptr [16 x i8]* %state, i64 0, i64 15
  %state_load_15 = load i8* %state_addr_15, align 1
  %tmp_2_14 = zext i8 %state_load_15 to i64
  %cipher_addr_15 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_14
  %cipher_load_15 = load i8* %cipher_addr_15, align 1
  store i8 %cipher_load_15, i8* %state_addr_15, align 1
  ret void
}

define internal fastcc void @ShiftRows([16 x i8]* nocapture %state) noinline {
  %state_addr = getelementptr [16 x i8]* %state, i64 0, i64 0
  %tmp_state = alloca [16 x i8], align 16
  %state_load = load i8* %state_addr, align 1
  %tmp_state_addr = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 0
  store i8 %state_load, i8* %tmp_state_addr, align 16
  %state_addr_17 = getelementptr [16 x i8]* %state, i64 0, i64 5
  %state_load_1 = load i8* %state_addr_17, align 1
  %tmp_state_addr_1 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 1
  store i8 %state_load_1, i8* %tmp_state_addr_1, align 1
  %state_addr_16 = getelementptr [16 x i8]* %state, i64 0, i64 10
  %state_load_2 = load i8* %state_addr_16, align 1
  %tmp_state_addr_2 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 2
  store i8 %state_load_2, i8* %tmp_state_addr_2, align 2
  %state_addr_18 = getelementptr [16 x i8]* %state, i64 0, i64 15
  %state_load_3 = load i8* %state_addr_18, align 1
  %tmp_state_addr_3 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 3
  store i8 %state_load_3, i8* %tmp_state_addr_3, align 1
  %state_addr_19 = getelementptr [16 x i8]* %state, i64 0, i64 4
  %state_load_4 = load i8* %state_addr_19, align 1
  %tmp_state_addr_4 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 4
  store i8 %state_load_4, i8* %tmp_state_addr_4, align 4
  %state_addr_20 = getelementptr [16 x i8]* %state, i64 0, i64 9
  %state_load_5 = load i8* %state_addr_20, align 1
  %tmp_state_addr_5 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 5
  store i8 %state_load_5, i8* %tmp_state_addr_5, align 1
  %state_addr_21 = getelementptr [16 x i8]* %state, i64 0, i64 14
  %state_load_6 = load i8* %state_addr_21, align 1
  %tmp_state_addr_6 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 6
  store i8 %state_load_6, i8* %tmp_state_addr_6, align 2
  %state_addr_22 = getelementptr [16 x i8]* %state, i64 0, i64 3
  %state_load_7 = load i8* %state_addr_22, align 1
  %tmp_state_addr_7 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 7
  store i8 %state_load_7, i8* %tmp_state_addr_7, align 1
  %state_addr_23 = getelementptr [16 x i8]* %state, i64 0, i64 8
  %state_load_8 = load i8* %state_addr_23, align 1
  %tmp_state_addr_8 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 8
  store i8 %state_load_8, i8* %tmp_state_addr_8, align 8
  %state_addr_24 = getelementptr [16 x i8]* %state, i64 0, i64 13
  %state_load_9 = load i8* %state_addr_24, align 1
  %tmp_state_addr_9 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 9
  store i8 %state_load_9, i8* %tmp_state_addr_9, align 1
  %state_addr_25 = getelementptr [16 x i8]* %state, i64 0, i64 2
  %state_load_10 = load i8* %state_addr_25, align 1
  %tmp_state_addr_10 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 10
  store i8 %state_load_10, i8* %tmp_state_addr_10, align 2
  %state_addr_26 = getelementptr [16 x i8]* %state, i64 0, i64 7
  %state_load_11 = load i8* %state_addr_26, align 1
  %tmp_state_addr_11 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 11
  store i8 %state_load_11, i8* %tmp_state_addr_11, align 1
  %state_addr_27 = getelementptr [16 x i8]* %state, i64 0, i64 12
  %state_load_12 = load i8* %state_addr_27, align 1
  %tmp_state_addr_12 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 12
  store i8 %state_load_12, i8* %tmp_state_addr_12, align 4
  %state_addr_28 = getelementptr [16 x i8]* %state, i64 0, i64 1
  %state_load_13 = load i8* %state_addr_28, align 1
  %tmp_state_addr_13 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 13
  store i8 %state_load_13, i8* %tmp_state_addr_13, align 1
  %state_addr_29 = getelementptr [16 x i8]* %state, i64 0, i64 6
  %state_load_14 = load i8* %state_addr_29, align 1
  %tmp_state_addr_14 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 14
  store i8 %state_load_14, i8* %tmp_state_addr_14, align 2
  %state_addr_30 = getelementptr [16 x i8]* %state, i64 0, i64 11
  %state_load_15 = load i8* %state_addr_30, align 1
  %tmp_state_addr_15 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 15
  store i8 %state_load_15, i8* %tmp_state_addr_15, align 1
  br label %1

; <label>:1                                       ; preds = %2, %0
  %i = phi i5 [ 0, %0 ], [ %i_1, %2 ]
  %tmp = icmp eq i5 %i, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %i_1 = add i5 %i, 1
  br i1 %tmp, label %3, label %2

; <label>:2                                       ; preds = %1
  %tmp_4 = zext i5 %i to i64
  %tmp_state_addr_16 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 %tmp_4
  %tmp_state_load = load i8* %tmp_state_addr_16, align 1
  %state_addr_31 = getelementptr [16 x i8]* %state, i64 0, i64 %tmp_4
  store i8 %tmp_state_load, i8* %state_addr_31, align 1
  br label %1

; <label>:3                                       ; preds = %1
  ret void
}

define internal fastcc void @MixColumns([16 x i8]* nocapture %state) noinline {
  %state_addr = getelementptr [16 x i8]* %state, i64 0, i64 0
  %tmp_state = alloca [16 x i8], align 16
  %state_load = load i8* %state_addr, align 1
  %addr = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load)
  %cipher_addr = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr
  %cipher_load = load i8* %cipher_addr, align 1
  %state_addr_32 = getelementptr [16 x i8]* %state, i64 0, i64 1
  %state_load_16 = load i8* %state_addr_32, align 1
  %addr1 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_16)
  %cipher_addr_16 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr1
  %cipher_load_16 = load i8* %cipher_addr_16, align 1
  %state_addr_33 = getelementptr [16 x i8]* %state, i64 0, i64 2
  %state_load_17 = load i8* %state_addr_33, align 1
  %state_addr_34 = getelementptr [16 x i8]* %state, i64 0, i64 3
  %state_load_18 = load i8* %state_addr_34, align 1
  %tmp1 = xor i8 %cipher_load_16, %cipher_load
  %tmp2 = xor i8 %state_load_17, %state_load_18
  %tmp_9 = xor i8 %tmp2, %tmp1
  %tmp_state_addr = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 0
  store i8 %tmp_9, i8* %tmp_state_addr, align 16
  %addr2 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_16)
  %cipher_addr_17 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr2
  %cipher_load_17 = load i8* %cipher_addr_17, align 1
  %addr3 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_17)
  %cipher_addr_18 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr3
  %cipher_load_18 = load i8* %cipher_addr_18, align 1
  %tmp3 = xor i8 %state_load_18, %state_load
  %tmp4 = xor i8 %cipher_load_17, %cipher_load_18
  %tmp_3 = xor i8 %tmp4, %tmp3
  %tmp_state_addr_17 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 1
  store i8 %tmp_3, i8* %tmp_state_addr_17, align 1
  %addr4 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_17)
  %cipher_addr_19 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr4
  %cipher_load_19 = load i8* %cipher_addr_19, align 1
  %addr5 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_18)
  %cipher_addr_20 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr5
  %cipher_load_20 = load i8* %cipher_addr_20, align 1
  %tmp5 = xor i8 %state_load_16, %state_load
  %tmp6 = xor i8 %cipher_load_19, %cipher_load_20
  %tmp_1 = xor i8 %tmp6, %tmp5
  %tmp_state_addr_18 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 2
  store i8 %tmp_1, i8* %tmp_state_addr_18, align 2
  %addr6 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load)
  %cipher_addr_21 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr6
  %cipher_load_21 = load i8* %cipher_addr_21, align 1
  %addr7 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_18)
  %cipher_addr_22 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr7
  %cipher_load_22 = load i8* %cipher_addr_22, align 1
  %tmp7 = xor i8 %state_load_17, %state_load_16
  %tmp8 = xor i8 %cipher_load_21, %cipher_load_22
  %tmp_2 = xor i8 %tmp8, %tmp7
  %tmp_state_addr_19 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 3
  store i8 %tmp_2, i8* %tmp_state_addr_19, align 1
  %state_addr_35 = getelementptr [16 x i8]* %state, i64 0, i64 4
  %state_load_19 = load i8* %state_addr_35, align 1
  %addr8 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_19)
  %cipher_addr_23 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr8
  %cipher_load_23 = load i8* %cipher_addr_23, align 1
  %state_addr_36 = getelementptr [16 x i8]* %state, i64 0, i64 5
  %state_load_20 = load i8* %state_addr_36, align 1
  %addr9 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_20)
  %cipher_addr_24 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr9
  %cipher_load_24 = load i8* %cipher_addr_24, align 1
  %state_addr_37 = getelementptr [16 x i8]* %state, i64 0, i64 6
  %state_load_21 = load i8* %state_addr_37, align 1
  %state_addr_38 = getelementptr [16 x i8]* %state, i64 0, i64 7
  %state_load_22 = load i8* %state_addr_38, align 1
  %tmp9 = xor i8 %cipher_load_24, %cipher_load_23
  %tmp = xor i8 %state_load_21, %state_load_22
  %tmp_8 = xor i8 %tmp, %tmp9
  %tmp_state_addr_20 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 4
  store i8 %tmp_8, i8* %tmp_state_addr_20, align 4
  %addr10 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_20)
  %cipher_addr_25 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr10
  %cipher_load_25 = load i8* %cipher_addr_25, align 1
  %addr11 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_21)
  %cipher_addr_26 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr11
  %cipher_load_26 = load i8* %cipher_addr_26, align 1
  %tmp10 = xor i8 %state_load_22, %state_load_19
  %tmp11 = xor i8 %cipher_load_25, %cipher_load_26
  %tmp_s = xor i8 %tmp11, %tmp10
  %tmp_state_addr_21 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 5
  store i8 %tmp_s, i8* %tmp_state_addr_21, align 1
  %addr12 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_21)
  %cipher_addr_27 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr12
  %cipher_load_27 = load i8* %cipher_addr_27, align 1
  %addr13 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_22)
  %cipher_addr_28 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr13
  %cipher_load_28 = load i8* %cipher_addr_28, align 1
  %tmp12 = xor i8 %state_load_20, %state_load_19
  %tmp13 = xor i8 %cipher_load_27, %cipher_load_28
  %tmp_4 = xor i8 %tmp13, %tmp12
  %tmp_state_addr_22 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 6
  store i8 %tmp_4, i8* %tmp_state_addr_22, align 2
  %addr14 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_19)
  %cipher_addr_29 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr14
  %cipher_load_29 = load i8* %cipher_addr_29, align 1
  %addr15 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_22)
  %cipher_addr_30 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr15
  %cipher_load_30 = load i8* %cipher_addr_30, align 1
  %tmp14 = xor i8 %state_load_21, %state_load_20
  %tmp15 = xor i8 %cipher_load_29, %cipher_load_30
  %tmp_5 = xor i8 %tmp15, %tmp14
  %tmp_state_addr_23 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 7
  store i8 %tmp_5, i8* %tmp_state_addr_23, align 1
  %state_addr_39 = getelementptr [16 x i8]* %state, i64 0, i64 8
  %state_load_23 = load i8* %state_addr_39, align 1
  %addr16 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_23)
  %cipher_addr_31 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr16
  %cipher_load_31 = load i8* %cipher_addr_31, align 1
  %state_addr_40 = getelementptr [16 x i8]* %state, i64 0, i64 9
  %state_load_24 = load i8* %state_addr_40, align 1
  %addr17 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_24)
  %cipher_addr_32 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr17
  %cipher_load_32 = load i8* %cipher_addr_32, align 1
  %state_addr_41 = getelementptr [16 x i8]* %state, i64 0, i64 10
  %state_load_25 = load i8* %state_addr_41, align 1
  %state_addr_42 = getelementptr [16 x i8]* %state, i64 0, i64 11
  %state_load_26 = load i8* %state_addr_42, align 1
  %tmp16 = xor i8 %cipher_load_32, %cipher_load_31
  %tmp17 = xor i8 %state_load_25, %state_load_26
  %tmp_6 = xor i8 %tmp17, %tmp16
  %tmp_state_addr_24 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 8
  store i8 %tmp_6, i8* %tmp_state_addr_24, align 8
  %addr18 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_24)
  %cipher_addr_33 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr18
  %cipher_load_33 = load i8* %cipher_addr_33, align 1
  %addr19 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_25)
  %cipher_addr_34 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr19
  %cipher_load_34 = load i8* %cipher_addr_34, align 1
  %tmp18 = xor i8 %state_load_26, %state_load_23
  %tmp19 = xor i8 %cipher_load_33, %cipher_load_34
  %tmp_7 = xor i8 %tmp19, %tmp18
  %tmp_state_addr_25 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 9
  store i8 %tmp_7, i8* %tmp_state_addr_25, align 1
  %addr20 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_25)
  %cipher_addr_35 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr20
  %cipher_load_35 = load i8* %cipher_addr_35, align 1
  %addr21 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_26)
  %cipher_addr_36 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr21
  %cipher_load_36 = load i8* %cipher_addr_36, align 1
  %tmp20 = xor i8 %state_load_24, %state_load_23
  %tmp21 = xor i8 %cipher_load_35, %cipher_load_36
  %tmp_10 = xor i8 %tmp21, %tmp20
  %tmp_state_addr_26 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 10
  store i8 %tmp_10, i8* %tmp_state_addr_26, align 2
  %addr22 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_23)
  %cipher_addr_37 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr22
  %cipher_load_37 = load i8* %cipher_addr_37, align 1
  %addr23 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_26)
  %cipher_addr_38 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr23
  %cipher_load_38 = load i8* %cipher_addr_38, align 1
  %tmp22 = xor i8 %state_load_25, %state_load_24
  %tmp23 = xor i8 %cipher_load_37, %cipher_load_38
  %tmp_11 = xor i8 %tmp23, %tmp22
  %tmp_state_addr_27 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 11
  store i8 %tmp_11, i8* %tmp_state_addr_27, align 1
  %state_addr_43 = getelementptr [16 x i8]* %state, i64 0, i64 12
  %state_load_27 = load i8* %state_addr_43, align 1
  %addr24 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_27)
  %cipher_addr_39 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr24
  %cipher_load_39 = load i8* %cipher_addr_39, align 1
  %state_addr_44 = getelementptr [16 x i8]* %state, i64 0, i64 13
  %state_load_28 = load i8* %state_addr_44, align 1
  %addr25 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_28)
  %cipher_addr_40 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr25
  %cipher_load_40 = load i8* %cipher_addr_40, align 1
  %state_addr_45 = getelementptr [16 x i8]* %state, i64 0, i64 14
  %state_load_29 = load i8* %state_addr_45, align 1
  %state_addr_46 = getelementptr [16 x i8]* %state, i64 0, i64 15
  %state_load_30 = load i8* %state_addr_46, align 1
  %tmp24 = xor i8 %cipher_load_40, %cipher_load_39
  %tmp25 = xor i8 %state_load_29, %state_load_30
  %tmp_12 = xor i8 %tmp25, %tmp24
  %tmp_state_addr_28 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 12
  store i8 %tmp_12, i8* %tmp_state_addr_28, align 4
  %addr26 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_28)
  %cipher_addr_41 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr26
  %cipher_load_41 = load i8* %cipher_addr_41, align 1
  %addr27 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_29)
  %cipher_addr_42 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr27
  %cipher_load_42 = load i8* %cipher_addr_42, align 1
  %tmp26 = xor i8 %state_load_30, %state_load_27
  %tmp27 = xor i8 %cipher_load_41, %cipher_load_42
  %tmp_13 = xor i8 %tmp27, %tmp26
  %tmp_state_addr_29 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 13
  store i8 %tmp_13, i8* %tmp_state_addr_29, align 1
  %addr28 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_29)
  %cipher_addr_43 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr28
  %cipher_load_43 = load i8* %cipher_addr_43, align 1
  %addr29 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_30)
  %cipher_addr_44 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr29
  %cipher_load_44 = load i8* %cipher_addr_44, align 1
  %tmp28 = xor i8 %state_load_28, %state_load_27
  %tmp29 = xor i8 %cipher_load_43, %cipher_load_44
  %tmp_14 = xor i8 %tmp29, %tmp28
  %tmp_state_addr_30 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 14
  store i8 %tmp_14, i8* %tmp_state_addr_30, align 2
  %addr30 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_27)
  %cipher_addr_45 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr30
  %cipher_load_45 = load i8* %cipher_addr_45, align 1
  %addr31 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_30)
  %cipher_addr_46 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr31
  %cipher_load_46 = load i8* %cipher_addr_46, align 1
  %tmp30 = xor i8 %state_load_29, %state_load_28
  %tmp31 = xor i8 %cipher_load_45, %cipher_load_46
  %tmp_15 = xor i8 %tmp31, %tmp30
  %tmp_state_addr_31 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 15
  store i8 %tmp_15, i8* %tmp_state_addr_31, align 1
  br label %1

; <label>:1                                       ; preds = %2, %0
  %i = phi i5 [ 0, %0 ], [ %i_2, %2 ]
  %tmp_16 = icmp eq i5 %i, -16
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16)
  %i_2 = add i5 %i, 1
  br i1 %tmp_16, label %3, label %2

; <label>:2                                       ; preds = %1
  %tmp_17 = zext i5 %i to i64
  %tmp_state_addr_32 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 %tmp_17
  %tmp_state_load = load i8* %tmp_state_addr_32, align 1
  %state_addr_47 = getelementptr [16 x i8]* %state, i64 0, i64 %tmp_17
  store i8 %tmp_state_load, i8* %state_addr_47, align 1
  br label %1

; <label>:3                                       ; preds = %1
  ret void
}

define internal fastcc void @AddRoundKey([16 x i8]* nocapture %state, i8* %roundKey) noinline {
  call void (...)* @_ssdm_op_SpecInterface(i8* %roundKey, [5 x i8]* @p_str4, i32 0, i32 0, [5 x i8]* @p_str5, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str)
  %roundKey_read = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey)
  %state_addr = getelementptr [16 x i8]* %state, i64 0, i64 0
  %state_load = load i8* %state_addr, align 1
  %tmp_s = xor i8 %state_load, %roundKey_read
  store i8 %tmp_s, i8* %state_addr, align 1
  %roundKey_read_1 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey)
  %state_addr_48 = getelementptr [16 x i8]* %state, i64 0, i64 1
  %state_load_1 = load i8* %state_addr_48, align 1
  %tmp_65_1 = xor i8 %state_load_1, %roundKey_read_1
  store i8 %tmp_65_1, i8* %state_addr_48, align 1
  %roundKey_read_2 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey)
  %state_addr_49 = getelementptr [16 x i8]* %state, i64 0, i64 2
  %state_load_2 = load i8* %state_addr_49, align 1
  %tmp_65_2 = xor i8 %state_load_2, %roundKey_read_2
  store i8 %tmp_65_2, i8* %state_addr_49, align 1
  %roundKey_read_3 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey)
  %state_addr_50 = getelementptr [16 x i8]* %state, i64 0, i64 3
  %state_load_3 = load i8* %state_addr_50, align 1
  %tmp_65_3 = xor i8 %state_load_3, %roundKey_read_3
  store i8 %tmp_65_3, i8* %state_addr_50, align 1
  %roundKey_read_4 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey)
  %state_addr_51 = getelementptr [16 x i8]* %state, i64 0, i64 4
  %state_load_4 = load i8* %state_addr_51, align 1
  %tmp_65_4 = xor i8 %state_load_4, %roundKey_read_4
  store i8 %tmp_65_4, i8* %state_addr_51, align 1
  %roundKey_read_5 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey)
  %state_addr_52 = getelementptr [16 x i8]* %state, i64 0, i64 5
  %state_load_5 = load i8* %state_addr_52, align 1
  %tmp_65_5 = xor i8 %state_load_5, %roundKey_read_5
  store i8 %tmp_65_5, i8* %state_addr_52, align 1
  %roundKey_read_6 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey)
  %state_addr_53 = getelementptr [16 x i8]* %state, i64 0, i64 6
  %state_load_6 = load i8* %state_addr_53, align 1
  %tmp_65_6 = xor i8 %state_load_6, %roundKey_read_6
  store i8 %tmp_65_6, i8* %state_addr_53, align 1
  %roundKey_read_7 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey)
  %state_addr_54 = getelementptr [16 x i8]* %state, i64 0, i64 7
  %state_load_7 = load i8* %state_addr_54, align 1
  %tmp_65_7 = xor i8 %state_load_7, %roundKey_read_7
  store i8 %tmp_65_7, i8* %state_addr_54, align 1
  %roundKey_read_8 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey)
  %state_addr_55 = getelementptr [16 x i8]* %state, i64 0, i64 8
  %state_load_8 = load i8* %state_addr_55, align 1
  %tmp_65_8 = xor i8 %state_load_8, %roundKey_read_8
  store i8 %tmp_65_8, i8* %state_addr_55, align 1
  %roundKey_read_9 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey)
  %state_addr_56 = getelementptr [16 x i8]* %state, i64 0, i64 9
  %state_load_9 = load i8* %state_addr_56, align 1
  %tmp_65_9 = xor i8 %state_load_9, %roundKey_read_9
  store i8 %tmp_65_9, i8* %state_addr_56, align 1
  %roundKey_read_10 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey)
  %state_addr_57 = getelementptr [16 x i8]* %state, i64 0, i64 10
  %state_load_10 = load i8* %state_addr_57, align 1
  %tmp_65_s = xor i8 %state_load_10, %roundKey_read_10
  store i8 %tmp_65_s, i8* %state_addr_57, align 1
  %roundKey_read_11 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey)
  %state_addr_58 = getelementptr [16 x i8]* %state, i64 0, i64 11
  %state_load_11 = load i8* %state_addr_58, align 1
  %tmp_65_10 = xor i8 %state_load_11, %roundKey_read_11
  store i8 %tmp_65_10, i8* %state_addr_58, align 1
  %roundKey_read_12 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey)
  %state_addr_59 = getelementptr [16 x i8]* %state, i64 0, i64 12
  %state_load_12 = load i8* %state_addr_59, align 1
  %tmp_65_11 = xor i8 %state_load_12, %roundKey_read_12
  store i8 %tmp_65_11, i8* %state_addr_59, align 1
  %roundKey_read_13 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey)
  %state_addr_60 = getelementptr [16 x i8]* %state, i64 0, i64 13
  %state_load_13 = load i8* %state_addr_60, align 1
  %tmp_65_12 = xor i8 %state_load_13, %roundKey_read_13
  store i8 %tmp_65_12, i8* %state_addr_60, align 1
  %roundKey_read_14 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey)
  %state_addr_61 = getelementptr [16 x i8]* %state, i64 0, i64 14
  %state_load_14 = load i8* %state_addr_61, align 1
  %tmp_65_13 = xor i8 %state_load_14, %roundKey_read_14
  store i8 %tmp_65_13, i8* %state_addr_61, align 1
  %roundKey_read_15 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey)
  %state_addr_62 = getelementptr [16 x i8]* %state, i64 0, i64 15
  %state_load_15 = load i8* %state_addr_62, align 1
  %tmp_65_14 = xor i8 %state_load_15, %roundKey_read_15
  store i8 %tmp_65_14, i8* %state_addr_62, align 1
  ret void
}

define void @AES_Encrypt(i8* %plaintext, i8* %expandedKey, i16 zeroext %Nr, i8* %ciphertext) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %plaintext) nounwind, !map !34
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %expandedKey) nounwind, !map !40
  call void (...)* @_ssdm_op_SpecBitsMap(i16 %Nr) nounwind, !map !46
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %ciphertext) nounwind, !map !52
  call void (...)* @_ssdm_op_SpecTopModule([12 x i8]* @AES_Encrypt_str) nounwind
  %Nr_read = call i16 @_ssdm_op_Read.ap_auto.i16(i16 %Nr) nounwind
  %state = alloca [16 x i8], align 16
  call void (...)* @_ssdm_op_SpecInterface(i8* %plaintext, [5 x i8]* @p_str4, i32 1, i32 1, [5 x i8]* @p_str5, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i8* %expandedKey, [5 x i8]* @p_str4, i32 1, i32 1, [5 x i8]* @p_str5, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i8* %ciphertext, [5 x i8]* @p_str4, i32 1, i32 1, [5 x i8]* @p_str5, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecResourceLimit(i32 1, [1 x i8]* @p_str, [1 x i8]* @p_str, [12 x i8]* @p_str6, [1 x i8]* @p_str) nounwind
  br label %1

; <label>:1                                       ; preds = %2, %0
  %i = phi i5 [ 0, %0 ], [ %i_3, %2 ]
  %tmp = icmp eq i5 %i, -16
  %i_3 = add i5 %i, 1
  br i1 %tmp, label %3, label %2

; <label>:2                                       ; preds = %1
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind
  call void (...)* @_ssdm_op_SpecLoopName([7 x i8]* @p_str9) nounwind
  %tmp_1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([7 x i8]* @p_str9) nounwind
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind
  %tmp_18 = zext i5 %i to i64
  %plaintext_read = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %plaintext) nounwind
  %state_addr_31 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 %tmp_18
  store i8 %plaintext_read, i8* %state_addr_31, align 1
  %empty_6 = call i32 (...)* @_ssdm_op_SpecRegionEnd([7 x i8]* @p_str9, i32 %tmp_1) nounwind
  br label %1

; <label>:3                                       ; preds = %1
  call fastcc void @AddRoundKey([16 x i8]* %state, i8* %expandedKey) nounwind
  %tmp_cast = zext i16 %Nr_read to i17
  %tmp_s = add i17 %tmp_cast, -1
  br label %4

; <label>:4                                       ; preds = %._crit_edge, %3
  %i1 = phi i16 [ 0, %3 ], [ %i_4, %._crit_edge ]
  %exitcond = icmp eq i16 %i1, %Nr_read
  %i_4 = add i16 %i1, 1
  br i1 %exitcond, label %.preheader.0, label %5

; <label>:5                                       ; preds = %4
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str10) nounwind
  call fastcc void @SubBytes([16 x i8]* %state) nounwind
  call fastcc void @ShiftRows([16 x i8]* %state) nounwind
  %tmp_67_cast = zext i16 %i1 to i17
  %tmp_19 = icmp eq i17 %tmp_67_cast, %tmp_s
  br i1 %tmp_19, label %._crit_edge, label %6

; <label>:6                                       ; preds = %5
  call fastcc void @MixColumns([16 x i8]* %state) nounwind
  br label %._crit_edge

._crit_edge:                                      ; preds = %6, %5
  call fastcc void @AddRoundKey([16 x i8]* %state, i8* %expandedKey) nounwind
  br label %4

.preheader.0:                                     ; preds = %4
  %state_addr = getelementptr inbounds [16 x i8]* %state, i64 0, i64 0
  %state_load = load i8* %state_addr, align 16
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load) nounwind
  %state_addr_63 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 1
  %state_load_1 = load i8* %state_addr_63, align 1
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_1) nounwind
  %state_addr_64 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 2
  %state_load_2 = load i8* %state_addr_64, align 2
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_2) nounwind
  %state_addr_65 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 3
  %state_load_3 = load i8* %state_addr_65, align 1
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_3) nounwind
  %state_addr_66 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 4
  %state_load_4 = load i8* %state_addr_66, align 4
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_4) nounwind
  %state_addr_67 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 5
  %state_load_5 = load i8* %state_addr_67, align 1
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_5) nounwind
  %state_addr_68 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 6
  %state_load_6 = load i8* %state_addr_68, align 2
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_6) nounwind
  %state_addr_69 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 7
  %state_load_7 = load i8* %state_addr_69, align 1
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_7) nounwind
  %state_addr_70 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 8
  %state_load_8 = load i8* %state_addr_70, align 8
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_8) nounwind
  %state_addr_71 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 9
  %state_load_9 = load i8* %state_addr_71, align 1
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_9) nounwind
  %state_addr_72 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 10
  %state_load_10 = load i8* %state_addr_72, align 2
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_10) nounwind
  %state_addr_73 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 11
  %state_load_11 = load i8* %state_addr_73, align 1
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_11) nounwind
  %state_addr_74 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 12
  %state_load_12 = load i8* %state_addr_74, align 4
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_12) nounwind
  %state_addr_75 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 13
  %state_load_13 = load i8* %state_addr_75, align 1
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_13) nounwind
  %state_addr_76 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 14
  %state_load_14 = load i8* %state_addr_76, align 2
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_14) nounwind
  %state_addr_77 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 15
  %state_load_15 = load i8* %state_addr_77, align 1
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_15) nounwind
  ret void
}

!opencl.kernels = !{!0, !0, !0, !0, !0, !0, !7, !13, !19, !21, !21}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!27}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"uchar*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"state"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1}
!9 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!10 = metadata !{metadata !"kernel_arg_type", metadata !"uchar*", metadata !"uchar*"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"state", metadata !"roundKey"}
!13 = metadata !{null, metadata !14, metadata !15, metadata !16, metadata !17, metadata !18, metadata !6}
!14 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 0, i32 1}
!15 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none", metadata !"none"}
!16 = metadata !{metadata !"kernel_arg_type", metadata !"uchar*", metadata !"uchar*", metadata !"ushort", metadata !"uchar*"}
!17 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !"", metadata !""}
!18 = metadata !{metadata !"kernel_arg_name", metadata !"plaintext", metadata !"expandedKey", metadata !"Nr", metadata !"ciphertext"}
!19 = metadata !{null, metadata !14, metadata !15, metadata !16, metadata !17, metadata !20, metadata !6}
!20 = metadata !{metadata !"kernel_arg_name", metadata !"ciphertext", metadata !"expandedKey", metadata !"Nr", metadata !"plaintext"}
!21 = metadata !{null, metadata !22, metadata !23, metadata !24, metadata !25, metadata !26, metadata !6}
!22 = metadata !{metadata !"kernel_arg_addr_space"}
!23 = metadata !{metadata !"kernel_arg_access_qual"}
!24 = metadata !{metadata !"kernel_arg_type"}
!25 = metadata !{metadata !"kernel_arg_type_qual"}
!26 = metadata !{metadata !"kernel_arg_name"}
!27 = metadata !{metadata !28, [1 x i32]* @llvm_global_ctors_0}
!28 = metadata !{metadata !29}
!29 = metadata !{i32 0, i32 31, metadata !30}
!30 = metadata !{metadata !31}
!31 = metadata !{metadata !"llvm.global_ctors.0", metadata !32, metadata !"", i32 0, i32 31}
!32 = metadata !{metadata !33}
!33 = metadata !{i32 0, i32 0, i32 1}
!34 = metadata !{metadata !35}
!35 = metadata !{i32 0, i32 7, metadata !36}
!36 = metadata !{metadata !37}
!37 = metadata !{metadata !"plaintext", metadata !38, metadata !"unsigned char", i32 0, i32 7}
!38 = metadata !{metadata !39}
!39 = metadata !{i32 0, i32 15, i32 1}
!40 = metadata !{metadata !41}
!41 = metadata !{i32 0, i32 7, metadata !42}
!42 = metadata !{metadata !43}
!43 = metadata !{metadata !"expandedKey", metadata !44, metadata !"unsigned char", i32 0, i32 7}
!44 = metadata !{metadata !45}
!45 = metadata !{i32 0, i32 239, i32 1}
!46 = metadata !{metadata !47}
!47 = metadata !{i32 0, i32 15, metadata !48}
!48 = metadata !{metadata !49}
!49 = metadata !{metadata !"Nr", metadata !50, metadata !"unsigned short", i32 0, i32 15}
!50 = metadata !{metadata !51}
!51 = metadata !{i32 0, i32 0, i32 0}
!52 = metadata !{metadata !53}
!53 = metadata !{i32 0, i32 7, metadata !54}
!54 = metadata !{metadata !55}
!55 = metadata !{metadata !"ciphertext", metadata !38, metadata !"unsigned char", i32 0, i32 7}
