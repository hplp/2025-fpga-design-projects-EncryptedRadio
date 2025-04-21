; ModuleID = 'D:/OneDrive/UVA/crypto/AES_code/VivadoHLS/cipher/aes_cipher/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-w64-mingw32"

@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a] ; [#uses=0 type=[1 x void ()*]*]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535] ; [#uses=0 type=[1 x i32]*]
@cipher = internal constant [768 x i8] c"c|w{\F2ko\C50\01g+\FE\D7\ABv\CA\82\C9}\FAYG\F0\AD\D4\A2\AF\9C\A4r\C0\B7\FD\93&6?\F7\CC4\A5\E5\F1q\D81\15\04\C7#\C3\18\96\05\9A\07\12\80\E2\EB'\B2u\09\83,\1A\1BnZ\A0R;\D6\B3)\E3/\84S\D1\00\ED \FC\B1[j\CB\BE9JLX\CF\D0\EF\AA\FBCM3\85E\F9\02\7FP<\9F\A8Q\A3@\8F\92\9D8\F5\BC\B6\DA!\10\FF\F3\D2\CD\0C\13\EC_\97D\17\C4\A7~=d]\19s`\81O\DC\22*\90\88F\EE\B8\14\DE^\0B\DB\E02:\0AI\06$\5C\C2\D3\ACb\91\95\E4y\E7\C87m\8D\D5N\A9lV\F4\EAez\AE\08\BAx%.\1C\A6\B4\C6\E8\DDt\1FK\BD\8B\8Ap>\B5fH\03\F6\0Ea5W\B9\86\C1\1D\9E\E1\F8\98\11i\D9\8E\94\9B\1E\87\E9\CEU(\DF\8C\A1\89\0D\BF\E6BhA\99-\0F\B0T\BB\16\00\02\04\06\08\0A\0C\0E\10\12\14\16\18\1A\1C\1E \22$&(*,.02468:<>@BDFHJLNPRTVXZ\5C^`bdfhjlnprtvxz|~\80\82\84\86\88\8A\8C\8E\90\92\94\96\98\9A\9C\9E\A0\A2\A4\A6\A8\AA\AC\AE\B0\B2\B4\B6\B8\BA\BC\BE\C0\C2\C4\C6\C8\CA\CC\CE\D0\D2\D4\D6\D8\DA\DC\DE\E0\E2\E4\E6\E8\EA\EC\EE\F0\F2\F4\F6\F8\FA\FC\FE\1B\19\1F\1D\13\11\17\15\0B\09\0F\0D\03\01\07\05;9?=3175+)/-#!'%[Y_]SQWUKIOMCAGE{y\7F}sqwukiomcage\9B\99\9F\9D\93\91\97\95\8B\89\8F\8D\83\81\87\85\BB\B9\BF\BD\B3\B1\B7\B5\AB\A9\AF\AD\A3\A1\A7\A5\DB\D9\DF\DD\D3\D1\D7\D5\CB\C9\CF\CD\C3\C1\C7\C5\FB\F9\FF\FD\F3\F1\F7\F5\EB\E9\EF\ED\E3\E1\E7\E5\00\03\06\05\0C\0F\0A\09\18\1B\1E\1D\14\17\12\110365<?:9(+.-$'\22!`cfelojix{~}twrqPSVU\5C_ZYHKNMDGBA\C0\C3\C6\C5\CC\CF\CA\C9\D8\DB\DE\DD\D4\D7\D2\D1\F0\F3\F6\F5\FC\FF\FA\F9\E8\EB\EE\ED\E4\E7\E2\E1\A0\A3\A6\A5\AC\AF\AA\A9\B8\BB\BE\BD\B4\B7\B2\B1\90\93\96\95\9C\9F\9A\99\88\8B\8E\8D\84\87\82\81\9B\98\9D\9E\97\94\91\92\83\80\85\86\8F\8C\89\8A\AB\A8\AD\AE\A7\A4\A1\A2\B3\B0\B5\B6\BF\BC\B9\BA\FB\F8\FD\FE\F7\F4\F1\F2\E3\E0\E5\E6\EF\EC\E9\EA\CB\C8\CD\CE\C7\C4\C1\C2\D3\D0\D5\D6\DF\DC\D9\DA[X]^WTQRC@EFOLIJkhmngdabspuv\7F|yz;8=>7412# %&/,)*\0B\08\0D\0E\07\04\01\02\13\10\15\16\1F\1C\19\1A" ; [#uses=48 type=[768 x i8]*]
@AES_Encrypt_str = internal unnamed_addr constant [12 x i8] c"AES_Encrypt\00" ; [#uses=1 type=[12 x i8]*]
@p_str9 = private unnamed_addr constant [7 x i8] c"L_copy\00", align 1 ; [#uses=3 type=[7 x i8]*]
@p_str6 = private unnamed_addr constant [12 x i8] c"AddRoundKey\00", align 1 ; [#uses=1 type=[12 x i8]*]
@p_str5 = private unnamed_addr constant [5 x i8] c"both\00", align 1 ; [#uses=4 type=[5 x i8]*]
@p_str4 = private unnamed_addr constant [5 x i8] c"axis\00", align 1 ; [#uses=4 type=[5 x i8]*]
@p_str10 = private unnamed_addr constant [9 x i8] c"L_rounds\00", align 1 ; [#uses=1 type=[9 x i8]*]
@p_str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=24 type=[1 x i8]*]

; [#uses=14]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=3]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=16]
define weak void @_ssdm_op_Write.axis.volatile.i8P(i8*, i8) {
entry:
  store i8 %1, i8* %0
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=1]
define weak void @_ssdm_op_SpecResourceLimit(...) nounwind {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

; [#uses=1]
define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

; [#uses=3]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=2]
define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

; [#uses=4]
define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

; [#uses=4]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=17]
define weak i8 @_ssdm_op_Read.axis.volatile.i8P(i8*) {
entry:
  %empty = load i8* %0                            ; [#uses=1 type=i8]
  ret i8 %empty
}

; [#uses=1]
define weak i16 @_ssdm_op_Read.ap_auto.i16(i16) {
entry:
  ret i16 %0
}

; [#uses=32]
define weak i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56, i8) nounwind readnone {
entry:
  %empty = zext i56 %0 to i64                     ; [#uses=1 type=i64]
  %empty_3 = zext i8 %1 to i64                    ; [#uses=1 type=i64]
  %empty_4 = shl i64 %empty, 8                    ; [#uses=1 type=i64]
  %empty_5 = or i64 %empty_4, %empty_3            ; [#uses=1 type=i64]
  ret i64 %empty_5
}

; [#uses=1]
declare void @_GLOBAL__I_a() nounwind

; [#uses=1]
define internal fastcc void @SubBytes([16 x i8]* nocapture %state) noinline {
  call void @llvm.dbg.value(metadata !{[16 x i8]* %state}, i64 0, metadata !34), !dbg !46 ; [debug line = 4:30] [debug variable = state]
  %state_addr = getelementptr [16 x i8]* %state, i64 0, i64 0, !dbg !47 ; [#uses=2 type=i8*] [debug line = 8:2]
  %state_load = load i8* %state_addr, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  %tmp_2 = zext i8 %state_load to i64, !dbg !47   ; [#uses=1 type=i64] [debug line = 8:2]
  %cipher_addr = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2 ; [#uses=1 type=i8*]
  %cipher_load = load i8* %cipher_addr, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  store i8 %cipher_load, i8* %state_addr, align 1, !dbg !47 ; [debug line = 8:2]
  %state_addr_1 = getelementptr [16 x i8]* %state, i64 0, i64 1, !dbg !47 ; [#uses=2 type=i8*] [debug line = 8:2]
  %state_load_1 = load i8* %state_addr_1, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  %tmp_2_1 = zext i8 %state_load_1 to i64, !dbg !47 ; [#uses=1 type=i64] [debug line = 8:2]
  %cipher_addr_1 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_1 ; [#uses=1 type=i8*]
  %cipher_load_1 = load i8* %cipher_addr_1, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  store i8 %cipher_load_1, i8* %state_addr_1, align 1, !dbg !47 ; [debug line = 8:2]
  %state_addr_2 = getelementptr [16 x i8]* %state, i64 0, i64 2, !dbg !47 ; [#uses=2 type=i8*] [debug line = 8:2]
  %state_load_2 = load i8* %state_addr_2, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  %tmp_2_2 = zext i8 %state_load_2 to i64, !dbg !47 ; [#uses=1 type=i64] [debug line = 8:2]
  %cipher_addr_2 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_2 ; [#uses=1 type=i8*]
  %cipher_load_2 = load i8* %cipher_addr_2, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  store i8 %cipher_load_2, i8* %state_addr_2, align 1, !dbg !47 ; [debug line = 8:2]
  %state_addr_3 = getelementptr [16 x i8]* %state, i64 0, i64 3, !dbg !47 ; [#uses=2 type=i8*] [debug line = 8:2]
  %state_load_3 = load i8* %state_addr_3, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  %tmp_2_3 = zext i8 %state_load_3 to i64, !dbg !47 ; [#uses=1 type=i64] [debug line = 8:2]
  %cipher_addr_3 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_3 ; [#uses=1 type=i8*]
  %cipher_load_3 = load i8* %cipher_addr_3, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  store i8 %cipher_load_3, i8* %state_addr_3, align 1, !dbg !47 ; [debug line = 8:2]
  %state_addr_4 = getelementptr [16 x i8]* %state, i64 0, i64 4, !dbg !47 ; [#uses=2 type=i8*] [debug line = 8:2]
  %state_load_4 = load i8* %state_addr_4, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  %tmp_2_4 = zext i8 %state_load_4 to i64, !dbg !47 ; [#uses=1 type=i64] [debug line = 8:2]
  %cipher_addr_4 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_4 ; [#uses=1 type=i8*]
  %cipher_load_4 = load i8* %cipher_addr_4, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  store i8 %cipher_load_4, i8* %state_addr_4, align 1, !dbg !47 ; [debug line = 8:2]
  %state_addr_5 = getelementptr [16 x i8]* %state, i64 0, i64 5, !dbg !47 ; [#uses=2 type=i8*] [debug line = 8:2]
  %state_load_5 = load i8* %state_addr_5, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  %tmp_2_5 = zext i8 %state_load_5 to i64, !dbg !47 ; [#uses=1 type=i64] [debug line = 8:2]
  %cipher_addr_5 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_5 ; [#uses=1 type=i8*]
  %cipher_load_5 = load i8* %cipher_addr_5, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  store i8 %cipher_load_5, i8* %state_addr_5, align 1, !dbg !47 ; [debug line = 8:2]
  %state_addr_6 = getelementptr [16 x i8]* %state, i64 0, i64 6, !dbg !47 ; [#uses=2 type=i8*] [debug line = 8:2]
  %state_load_6 = load i8* %state_addr_6, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  %tmp_2_6 = zext i8 %state_load_6 to i64, !dbg !47 ; [#uses=1 type=i64] [debug line = 8:2]
  %cipher_addr_6 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_6 ; [#uses=1 type=i8*]
  %cipher_load_6 = load i8* %cipher_addr_6, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  store i8 %cipher_load_6, i8* %state_addr_6, align 1, !dbg !47 ; [debug line = 8:2]
  %state_addr_7 = getelementptr [16 x i8]* %state, i64 0, i64 7, !dbg !47 ; [#uses=2 type=i8*] [debug line = 8:2]
  %state_load_7 = load i8* %state_addr_7, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  %tmp_2_7 = zext i8 %state_load_7 to i64, !dbg !47 ; [#uses=1 type=i64] [debug line = 8:2]
  %cipher_addr_7 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_7 ; [#uses=1 type=i8*]
  %cipher_load_7 = load i8* %cipher_addr_7, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  store i8 %cipher_load_7, i8* %state_addr_7, align 1, !dbg !47 ; [debug line = 8:2]
  %state_addr_8 = getelementptr [16 x i8]* %state, i64 0, i64 8, !dbg !47 ; [#uses=2 type=i8*] [debug line = 8:2]
  %state_load_8 = load i8* %state_addr_8, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  %tmp_2_8 = zext i8 %state_load_8 to i64, !dbg !47 ; [#uses=1 type=i64] [debug line = 8:2]
  %cipher_addr_8 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_8 ; [#uses=1 type=i8*]
  %cipher_load_8 = load i8* %cipher_addr_8, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  store i8 %cipher_load_8, i8* %state_addr_8, align 1, !dbg !47 ; [debug line = 8:2]
  %state_addr_9 = getelementptr [16 x i8]* %state, i64 0, i64 9, !dbg !47 ; [#uses=2 type=i8*] [debug line = 8:2]
  %state_load_9 = load i8* %state_addr_9, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  %tmp_2_9 = zext i8 %state_load_9 to i64, !dbg !47 ; [#uses=1 type=i64] [debug line = 8:2]
  %cipher_addr_9 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_9 ; [#uses=1 type=i8*]
  %cipher_load_9 = load i8* %cipher_addr_9, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  store i8 %cipher_load_9, i8* %state_addr_9, align 1, !dbg !47 ; [debug line = 8:2]
  %state_addr_10 = getelementptr [16 x i8]* %state, i64 0, i64 10, !dbg !47 ; [#uses=2 type=i8*] [debug line = 8:2]
  %state_load_10 = load i8* %state_addr_10, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  %tmp_2_s = zext i8 %state_load_10 to i64, !dbg !47 ; [#uses=1 type=i64] [debug line = 8:2]
  %cipher_addr_10 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_s ; [#uses=1 type=i8*]
  %cipher_load_10 = load i8* %cipher_addr_10, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  store i8 %cipher_load_10, i8* %state_addr_10, align 1, !dbg !47 ; [debug line = 8:2]
  %state_addr_11 = getelementptr [16 x i8]* %state, i64 0, i64 11, !dbg !47 ; [#uses=2 type=i8*] [debug line = 8:2]
  %state_load_11 = load i8* %state_addr_11, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  %tmp_2_10 = zext i8 %state_load_11 to i64, !dbg !47 ; [#uses=1 type=i64] [debug line = 8:2]
  %cipher_addr_11 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_10 ; [#uses=1 type=i8*]
  %cipher_load_11 = load i8* %cipher_addr_11, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  store i8 %cipher_load_11, i8* %state_addr_11, align 1, !dbg !47 ; [debug line = 8:2]
  %state_addr_12 = getelementptr [16 x i8]* %state, i64 0, i64 12, !dbg !47 ; [#uses=2 type=i8*] [debug line = 8:2]
  %state_load_12 = load i8* %state_addr_12, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  %tmp_2_11 = zext i8 %state_load_12 to i64, !dbg !47 ; [#uses=1 type=i64] [debug line = 8:2]
  %cipher_addr_12 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_11 ; [#uses=1 type=i8*]
  %cipher_load_12 = load i8* %cipher_addr_12, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  store i8 %cipher_load_12, i8* %state_addr_12, align 1, !dbg !47 ; [debug line = 8:2]
  %state_addr_13 = getelementptr [16 x i8]* %state, i64 0, i64 13, !dbg !47 ; [#uses=2 type=i8*] [debug line = 8:2]
  %state_load_13 = load i8* %state_addr_13, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  %tmp_2_12 = zext i8 %state_load_13 to i64, !dbg !47 ; [#uses=1 type=i64] [debug line = 8:2]
  %cipher_addr_13 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_12 ; [#uses=1 type=i8*]
  %cipher_load_13 = load i8* %cipher_addr_13, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  store i8 %cipher_load_13, i8* %state_addr_13, align 1, !dbg !47 ; [debug line = 8:2]
  %state_addr_14 = getelementptr [16 x i8]* %state, i64 0, i64 14, !dbg !47 ; [#uses=2 type=i8*] [debug line = 8:2]
  %state_load_14 = load i8* %state_addr_14, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  %tmp_2_13 = zext i8 %state_load_14 to i64, !dbg !47 ; [#uses=1 type=i64] [debug line = 8:2]
  %cipher_addr_14 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_13 ; [#uses=1 type=i8*]
  %cipher_load_14 = load i8* %cipher_addr_14, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  store i8 %cipher_load_14, i8* %state_addr_14, align 1, !dbg !47 ; [debug line = 8:2]
  %state_addr_15 = getelementptr [16 x i8]* %state, i64 0, i64 15, !dbg !47 ; [#uses=2 type=i8*] [debug line = 8:2]
  %state_load_15 = load i8* %state_addr_15, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  %tmp_2_14 = zext i8 %state_load_15 to i64, !dbg !47 ; [#uses=1 type=i64] [debug line = 8:2]
  %cipher_addr_15 = getelementptr [768 x i8]* @cipher, i64 0, i64 %tmp_2_14 ; [#uses=1 type=i8*]
  %cipher_load_15 = load i8* %cipher_addr_15, align 1, !dbg !47 ; [#uses=1 type=i8] [debug line = 8:2]
  store i8 %cipher_load_15, i8* %state_addr_15, align 1, !dbg !47 ; [debug line = 8:2]
  ret void, !dbg !51                              ; [debug line = 10:1]
}

; [#uses=1]
define internal fastcc void @ShiftRows([16 x i8]* nocapture %state) noinline {
  %state_addr = getelementptr [16 x i8]* %state, i64 0, i64 0 ; [#uses=1 type=i8*]
  %tmp_state = alloca [16 x i8], align 16         ; [#uses=17 type=[16 x i8]*]
  call void @llvm.dbg.value(metadata !{[16 x i8]* %state}, i64 0, metadata !52), !dbg !54 ; [debug line = 20:31] [debug variable = state]
  call void @llvm.dbg.declare(metadata !{[16 x i8]* %tmp_state}, metadata !55), !dbg !57 ; [debug line = 22:16] [debug variable = tmp_state]
  %state_load = load i8* %state_addr, align 1, !dbg !58 ; [#uses=1 type=i8] [debug line = 23:2]
  %tmp_state_addr = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 0, !dbg !58 ; [#uses=1 type=i8*] [debug line = 23:2]
  store i8 %state_load, i8* %tmp_state_addr, align 16, !dbg !58 ; [debug line = 23:2]
  %state_addr_17 = getelementptr [16 x i8]* %state, i64 0, i64 5, !dbg !59 ; [#uses=1 type=i8*] [debug line = 24:2]
  %state_load_1 = load i8* %state_addr_17, align 1, !dbg !59 ; [#uses=1 type=i8] [debug line = 24:2]
  %tmp_state_addr_1 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 1, !dbg !59 ; [#uses=1 type=i8*] [debug line = 24:2]
  store i8 %state_load_1, i8* %tmp_state_addr_1, align 1, !dbg !59 ; [debug line = 24:2]
  %state_addr_16 = getelementptr [16 x i8]* %state, i64 0, i64 10, !dbg !60 ; [#uses=1 type=i8*] [debug line = 25:2]
  %state_load_2 = load i8* %state_addr_16, align 1, !dbg !60 ; [#uses=1 type=i8] [debug line = 25:2]
  %tmp_state_addr_2 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 2, !dbg !60 ; [#uses=1 type=i8*] [debug line = 25:2]
  store i8 %state_load_2, i8* %tmp_state_addr_2, align 2, !dbg !60 ; [debug line = 25:2]
  %state_addr_18 = getelementptr [16 x i8]* %state, i64 0, i64 15, !dbg !61 ; [#uses=1 type=i8*] [debug line = 26:2]
  %state_load_3 = load i8* %state_addr_18, align 1, !dbg !61 ; [#uses=1 type=i8] [debug line = 26:2]
  %tmp_state_addr_3 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 3, !dbg !61 ; [#uses=1 type=i8*] [debug line = 26:2]
  store i8 %state_load_3, i8* %tmp_state_addr_3, align 1, !dbg !61 ; [debug line = 26:2]
  %state_addr_19 = getelementptr [16 x i8]* %state, i64 0, i64 4, !dbg !62 ; [#uses=1 type=i8*] [debug line = 28:2]
  %state_load_4 = load i8* %state_addr_19, align 1, !dbg !62 ; [#uses=1 type=i8] [debug line = 28:2]
  %tmp_state_addr_4 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 4, !dbg !62 ; [#uses=1 type=i8*] [debug line = 28:2]
  store i8 %state_load_4, i8* %tmp_state_addr_4, align 4, !dbg !62 ; [debug line = 28:2]
  %state_addr_20 = getelementptr [16 x i8]* %state, i64 0, i64 9, !dbg !63 ; [#uses=1 type=i8*] [debug line = 29:2]
  %state_load_5 = load i8* %state_addr_20, align 1, !dbg !63 ; [#uses=1 type=i8] [debug line = 29:2]
  %tmp_state_addr_5 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 5, !dbg !63 ; [#uses=1 type=i8*] [debug line = 29:2]
  store i8 %state_load_5, i8* %tmp_state_addr_5, align 1, !dbg !63 ; [debug line = 29:2]
  %state_addr_21 = getelementptr [16 x i8]* %state, i64 0, i64 14, !dbg !64 ; [#uses=1 type=i8*] [debug line = 30:2]
  %state_load_6 = load i8* %state_addr_21, align 1, !dbg !64 ; [#uses=1 type=i8] [debug line = 30:2]
  %tmp_state_addr_6 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 6, !dbg !64 ; [#uses=1 type=i8*] [debug line = 30:2]
  store i8 %state_load_6, i8* %tmp_state_addr_6, align 2, !dbg !64 ; [debug line = 30:2]
  %state_addr_22 = getelementptr [16 x i8]* %state, i64 0, i64 3, !dbg !65 ; [#uses=1 type=i8*] [debug line = 31:2]
  %state_load_7 = load i8* %state_addr_22, align 1, !dbg !65 ; [#uses=1 type=i8] [debug line = 31:2]
  %tmp_state_addr_7 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 7, !dbg !65 ; [#uses=1 type=i8*] [debug line = 31:2]
  store i8 %state_load_7, i8* %tmp_state_addr_7, align 1, !dbg !65 ; [debug line = 31:2]
  %state_addr_23 = getelementptr [16 x i8]* %state, i64 0, i64 8, !dbg !66 ; [#uses=1 type=i8*] [debug line = 33:2]
  %state_load_8 = load i8* %state_addr_23, align 1, !dbg !66 ; [#uses=1 type=i8] [debug line = 33:2]
  %tmp_state_addr_8 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 8, !dbg !66 ; [#uses=1 type=i8*] [debug line = 33:2]
  store i8 %state_load_8, i8* %tmp_state_addr_8, align 8, !dbg !66 ; [debug line = 33:2]
  %state_addr_24 = getelementptr [16 x i8]* %state, i64 0, i64 13, !dbg !67 ; [#uses=1 type=i8*] [debug line = 34:2]
  %state_load_9 = load i8* %state_addr_24, align 1, !dbg !67 ; [#uses=1 type=i8] [debug line = 34:2]
  %tmp_state_addr_9 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 9, !dbg !67 ; [#uses=1 type=i8*] [debug line = 34:2]
  store i8 %state_load_9, i8* %tmp_state_addr_9, align 1, !dbg !67 ; [debug line = 34:2]
  %state_addr_25 = getelementptr [16 x i8]* %state, i64 0, i64 2, !dbg !68 ; [#uses=1 type=i8*] [debug line = 35:2]
  %state_load_10 = load i8* %state_addr_25, align 1, !dbg !68 ; [#uses=1 type=i8] [debug line = 35:2]
  %tmp_state_addr_10 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 10, !dbg !68 ; [#uses=1 type=i8*] [debug line = 35:2]
  store i8 %state_load_10, i8* %tmp_state_addr_10, align 2, !dbg !68 ; [debug line = 35:2]
  %state_addr_26 = getelementptr [16 x i8]* %state, i64 0, i64 7, !dbg !69 ; [#uses=1 type=i8*] [debug line = 36:2]
  %state_load_11 = load i8* %state_addr_26, align 1, !dbg !69 ; [#uses=1 type=i8] [debug line = 36:2]
  %tmp_state_addr_11 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 11, !dbg !69 ; [#uses=1 type=i8*] [debug line = 36:2]
  store i8 %state_load_11, i8* %tmp_state_addr_11, align 1, !dbg !69 ; [debug line = 36:2]
  %state_addr_27 = getelementptr [16 x i8]* %state, i64 0, i64 12, !dbg !70 ; [#uses=1 type=i8*] [debug line = 38:2]
  %state_load_12 = load i8* %state_addr_27, align 1, !dbg !70 ; [#uses=1 type=i8] [debug line = 38:2]
  %tmp_state_addr_12 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 12, !dbg !70 ; [#uses=1 type=i8*] [debug line = 38:2]
  store i8 %state_load_12, i8* %tmp_state_addr_12, align 4, !dbg !70 ; [debug line = 38:2]
  %state_addr_28 = getelementptr [16 x i8]* %state, i64 0, i64 1, !dbg !71 ; [#uses=1 type=i8*] [debug line = 39:2]
  %state_load_13 = load i8* %state_addr_28, align 1, !dbg !71 ; [#uses=1 type=i8] [debug line = 39:2]
  %tmp_state_addr_13 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 13, !dbg !71 ; [#uses=1 type=i8*] [debug line = 39:2]
  store i8 %state_load_13, i8* %tmp_state_addr_13, align 1, !dbg !71 ; [debug line = 39:2]
  %state_addr_29 = getelementptr [16 x i8]* %state, i64 0, i64 6, !dbg !72 ; [#uses=1 type=i8*] [debug line = 40:2]
  %state_load_14 = load i8* %state_addr_29, align 1, !dbg !72 ; [#uses=1 type=i8] [debug line = 40:2]
  %tmp_state_addr_14 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 14, !dbg !72 ; [#uses=1 type=i8*] [debug line = 40:2]
  store i8 %state_load_14, i8* %tmp_state_addr_14, align 2, !dbg !72 ; [debug line = 40:2]
  %state_addr_30 = getelementptr [16 x i8]* %state, i64 0, i64 11, !dbg !73 ; [#uses=1 type=i8*] [debug line = 41:2]
  %state_load_15 = load i8* %state_addr_30, align 1, !dbg !73 ; [#uses=1 type=i8] [debug line = 41:2]
  %tmp_state_addr_15 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 15, !dbg !73 ; [#uses=1 type=i8*] [debug line = 41:2]
  store i8 %state_load_15, i8* %tmp_state_addr_15, align 1, !dbg !73 ; [debug line = 41:2]
  br label %1, !dbg !74                           ; [debug line = 42:27]

; <label>:1                                       ; preds = %2, %0
  %i = phi i5 [ 0, %0 ], [ %i_1, %2 ]             ; [#uses=3 type=i5]
  %tmp = icmp eq i5 %i, -16, !dbg !74             ; [#uses=1 type=i1] [debug line = 42:27]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  %i_1 = add i5 %i, 1, !dbg !76                   ; [#uses=1 type=i5] [debug line = 42:42]
  br i1 %tmp, label %3, label %2, !dbg !74        ; [debug line = 42:27]

; <label>:2                                       ; preds = %1
  %tmp_4 = zext i5 %i to i64, !dbg !77            ; [#uses=2 type=i64] [debug line = 43:3]
  %tmp_state_addr_16 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 %tmp_4, !dbg !77 ; [#uses=1 type=i8*] [debug line = 43:3]
  %tmp_state_load = load i8* %tmp_state_addr_16, align 1, !dbg !77 ; [#uses=1 type=i8] [debug line = 43:3]
  %state_addr_31 = getelementptr [16 x i8]* %state, i64 0, i64 %tmp_4, !dbg !77 ; [#uses=1 type=i8*] [debug line = 43:3]
  store i8 %tmp_state_load, i8* %state_addr_31, align 1, !dbg !77 ; [debug line = 43:3]
  call void @llvm.dbg.value(metadata !{i5 %i_1}, i64 0, metadata !79), !dbg !76 ; [debug line = 42:42] [debug variable = i]
  br label %1, !dbg !76                           ; [debug line = 42:42]

; <label>:3                                       ; preds = %1
  ret void, !dbg !81                              ; [debug line = 45:1]
}

; [#uses=1]
define internal fastcc void @MixColumns([16 x i8]* nocapture %state) noinline {
  %state_addr = getelementptr [16 x i8]* %state, i64 0, i64 0 ; [#uses=1 type=i8*]
  %tmp_state = alloca [16 x i8], align 16         ; [#uses=17 type=[16 x i8]*]
  call void @llvm.dbg.value(metadata !{[16 x i8]* %state}, i64 0, metadata !82), !dbg !84 ; [debug line = 74:32] [debug variable = state]
  call void @llvm.dbg.declare(metadata !{[16 x i8]* %tmp_state}, metadata !85), !dbg !87 ; [debug line = 76:16] [debug variable = tmp_state]
  %state_load = load i8* %state_addr, align 1, !dbg !88 ; [#uses=4 type=i8] [debug line = 77:2]
  %addr = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load) ; [#uses=1 type=i64]
  %cipher_addr = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr ; [#uses=1 type=i8*]
  %cipher_load = load i8* %cipher_addr, align 1, !dbg !88 ; [#uses=1 type=i8] [debug line = 77:2]
  %state_addr_32 = getelementptr [16 x i8]* %state, i64 0, i64 1, !dbg !88 ; [#uses=1 type=i8*] [debug line = 77:2]
  %state_load_16 = load i8* %state_addr_32, align 1, !dbg !88 ; [#uses=4 type=i8] [debug line = 77:2]
  %addr1 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_16) ; [#uses=1 type=i64]
  %cipher_addr_16 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr1 ; [#uses=1 type=i8*]
  %cipher_load_16 = load i8* %cipher_addr_16, align 1, !dbg !88 ; [#uses=1 type=i8] [debug line = 77:2]
  %state_addr_33 = getelementptr [16 x i8]* %state, i64 0, i64 2, !dbg !88 ; [#uses=1 type=i8*] [debug line = 77:2]
  %state_load_17 = load i8* %state_addr_33, align 1, !dbg !88 ; [#uses=4 type=i8] [debug line = 77:2]
  %state_addr_34 = getelementptr [16 x i8]* %state, i64 0, i64 3, !dbg !88 ; [#uses=1 type=i8*] [debug line = 77:2]
  %state_load_18 = load i8* %state_addr_34, align 1, !dbg !88 ; [#uses=4 type=i8] [debug line = 77:2]
  %tmp1 = xor i8 %cipher_load_16, %cipher_load, !dbg !88 ; [#uses=1 type=i8] [debug line = 77:2]
  %tmp2 = xor i8 %state_load_17, %state_load_18, !dbg !88 ; [#uses=1 type=i8] [debug line = 77:2]
  %tmp_9 = xor i8 %tmp2, %tmp1, !dbg !88          ; [#uses=1 type=i8] [debug line = 77:2]
  %tmp_state_addr = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 0, !dbg !88 ; [#uses=1 type=i8*] [debug line = 77:2]
  store i8 %tmp_9, i8* %tmp_state_addr, align 16, !dbg !88 ; [debug line = 77:2]
  %addr2 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_16) ; [#uses=1 type=i64]
  %cipher_addr_17 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr2 ; [#uses=1 type=i8*]
  %cipher_load_17 = load i8* %cipher_addr_17, align 1, !dbg !89 ; [#uses=1 type=i8] [debug line = 78:2]
  %addr3 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_17) ; [#uses=1 type=i64]
  %cipher_addr_18 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr3 ; [#uses=1 type=i8*]
  %cipher_load_18 = load i8* %cipher_addr_18, align 1, !dbg !89 ; [#uses=1 type=i8] [debug line = 78:2]
  %tmp3 = xor i8 %state_load_18, %state_load, !dbg !89 ; [#uses=1 type=i8] [debug line = 78:2]
  %tmp4 = xor i8 %cipher_load_17, %cipher_load_18, !dbg !89 ; [#uses=1 type=i8] [debug line = 78:2]
  %tmp_3 = xor i8 %tmp4, %tmp3, !dbg !89          ; [#uses=1 type=i8] [debug line = 78:2]
  %tmp_state_addr_17 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 1, !dbg !89 ; [#uses=1 type=i8*] [debug line = 78:2]
  store i8 %tmp_3, i8* %tmp_state_addr_17, align 1, !dbg !89 ; [debug line = 78:2]
  %addr4 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_17) ; [#uses=1 type=i64]
  %cipher_addr_19 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr4 ; [#uses=1 type=i8*]
  %cipher_load_19 = load i8* %cipher_addr_19, align 1, !dbg !90 ; [#uses=1 type=i8] [debug line = 79:2]
  %addr5 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_18) ; [#uses=1 type=i64]
  %cipher_addr_20 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr5 ; [#uses=1 type=i8*]
  %cipher_load_20 = load i8* %cipher_addr_20, align 1, !dbg !90 ; [#uses=1 type=i8] [debug line = 79:2]
  %tmp5 = xor i8 %state_load_16, %state_load, !dbg !90 ; [#uses=1 type=i8] [debug line = 79:2]
  %tmp6 = xor i8 %cipher_load_19, %cipher_load_20, !dbg !90 ; [#uses=1 type=i8] [debug line = 79:2]
  %tmp_1 = xor i8 %tmp6, %tmp5, !dbg !90          ; [#uses=1 type=i8] [debug line = 79:2]
  %tmp_state_addr_18 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 2, !dbg !90 ; [#uses=1 type=i8*] [debug line = 79:2]
  store i8 %tmp_1, i8* %tmp_state_addr_18, align 2, !dbg !90 ; [debug line = 79:2]
  %addr6 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load) ; [#uses=1 type=i64]
  %cipher_addr_21 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr6 ; [#uses=1 type=i8*]
  %cipher_load_21 = load i8* %cipher_addr_21, align 1, !dbg !91 ; [#uses=1 type=i8] [debug line = 80:2]
  %addr7 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_18) ; [#uses=1 type=i64]
  %cipher_addr_22 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr7 ; [#uses=1 type=i8*]
  %cipher_load_22 = load i8* %cipher_addr_22, align 1, !dbg !91 ; [#uses=1 type=i8] [debug line = 80:2]
  %tmp7 = xor i8 %state_load_17, %state_load_16, !dbg !91 ; [#uses=1 type=i8] [debug line = 80:2]
  %tmp8 = xor i8 %cipher_load_21, %cipher_load_22, !dbg !91 ; [#uses=1 type=i8] [debug line = 80:2]
  %tmp_2 = xor i8 %tmp8, %tmp7, !dbg !91          ; [#uses=1 type=i8] [debug line = 80:2]
  %tmp_state_addr_19 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 3, !dbg !91 ; [#uses=1 type=i8*] [debug line = 80:2]
  store i8 %tmp_2, i8* %tmp_state_addr_19, align 1, !dbg !91 ; [debug line = 80:2]
  %state_addr_35 = getelementptr [16 x i8]* %state, i64 0, i64 4, !dbg !92 ; [#uses=1 type=i8*] [debug line = 82:2]
  %state_load_19 = load i8* %state_addr_35, align 1, !dbg !92 ; [#uses=4 type=i8] [debug line = 82:2]
  %addr8 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_19) ; [#uses=1 type=i64]
  %cipher_addr_23 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr8 ; [#uses=1 type=i8*]
  %cipher_load_23 = load i8* %cipher_addr_23, align 1, !dbg !92 ; [#uses=1 type=i8] [debug line = 82:2]
  %state_addr_36 = getelementptr [16 x i8]* %state, i64 0, i64 5, !dbg !92 ; [#uses=1 type=i8*] [debug line = 82:2]
  %state_load_20 = load i8* %state_addr_36, align 1, !dbg !92 ; [#uses=4 type=i8] [debug line = 82:2]
  %addr9 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_20) ; [#uses=1 type=i64]
  %cipher_addr_24 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr9 ; [#uses=1 type=i8*]
  %cipher_load_24 = load i8* %cipher_addr_24, align 1, !dbg !92 ; [#uses=1 type=i8] [debug line = 82:2]
  %state_addr_37 = getelementptr [16 x i8]* %state, i64 0, i64 6, !dbg !92 ; [#uses=1 type=i8*] [debug line = 82:2]
  %state_load_21 = load i8* %state_addr_37, align 1, !dbg !92 ; [#uses=4 type=i8] [debug line = 82:2]
  %state_addr_38 = getelementptr [16 x i8]* %state, i64 0, i64 7, !dbg !92 ; [#uses=1 type=i8*] [debug line = 82:2]
  %state_load_22 = load i8* %state_addr_38, align 1, !dbg !92 ; [#uses=4 type=i8] [debug line = 82:2]
  %tmp9 = xor i8 %cipher_load_24, %cipher_load_23, !dbg !92 ; [#uses=1 type=i8] [debug line = 82:2]
  %tmp = xor i8 %state_load_21, %state_load_22, !dbg !92 ; [#uses=1 type=i8] [debug line = 82:2]
  %tmp_8 = xor i8 %tmp, %tmp9, !dbg !92           ; [#uses=1 type=i8] [debug line = 82:2]
  %tmp_state_addr_20 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 4, !dbg !92 ; [#uses=1 type=i8*] [debug line = 82:2]
  store i8 %tmp_8, i8* %tmp_state_addr_20, align 4, !dbg !92 ; [debug line = 82:2]
  %addr10 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_20) ; [#uses=1 type=i64]
  %cipher_addr_25 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr10 ; [#uses=1 type=i8*]
  %cipher_load_25 = load i8* %cipher_addr_25, align 1, !dbg !93 ; [#uses=1 type=i8] [debug line = 83:2]
  %addr11 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_21) ; [#uses=1 type=i64]
  %cipher_addr_26 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr11 ; [#uses=1 type=i8*]
  %cipher_load_26 = load i8* %cipher_addr_26, align 1, !dbg !93 ; [#uses=1 type=i8] [debug line = 83:2]
  %tmp10 = xor i8 %state_load_22, %state_load_19, !dbg !93 ; [#uses=1 type=i8] [debug line = 83:2]
  %tmp11 = xor i8 %cipher_load_25, %cipher_load_26, !dbg !93 ; [#uses=1 type=i8] [debug line = 83:2]
  %tmp_s = xor i8 %tmp11, %tmp10, !dbg !93        ; [#uses=1 type=i8] [debug line = 83:2]
  %tmp_state_addr_21 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 5, !dbg !93 ; [#uses=1 type=i8*] [debug line = 83:2]
  store i8 %tmp_s, i8* %tmp_state_addr_21, align 1, !dbg !93 ; [debug line = 83:2]
  %addr12 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_21) ; [#uses=1 type=i64]
  %cipher_addr_27 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr12 ; [#uses=1 type=i8*]
  %cipher_load_27 = load i8* %cipher_addr_27, align 1, !dbg !94 ; [#uses=1 type=i8] [debug line = 84:2]
  %addr13 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_22) ; [#uses=1 type=i64]
  %cipher_addr_28 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr13 ; [#uses=1 type=i8*]
  %cipher_load_28 = load i8* %cipher_addr_28, align 1, !dbg !94 ; [#uses=1 type=i8] [debug line = 84:2]
  %tmp12 = xor i8 %state_load_20, %state_load_19, !dbg !94 ; [#uses=1 type=i8] [debug line = 84:2]
  %tmp13 = xor i8 %cipher_load_27, %cipher_load_28, !dbg !94 ; [#uses=1 type=i8] [debug line = 84:2]
  %tmp_4 = xor i8 %tmp13, %tmp12, !dbg !94        ; [#uses=1 type=i8] [debug line = 84:2]
  %tmp_state_addr_22 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 6, !dbg !94 ; [#uses=1 type=i8*] [debug line = 84:2]
  store i8 %tmp_4, i8* %tmp_state_addr_22, align 2, !dbg !94 ; [debug line = 84:2]
  %addr14 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_19) ; [#uses=1 type=i64]
  %cipher_addr_29 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr14 ; [#uses=1 type=i8*]
  %cipher_load_29 = load i8* %cipher_addr_29, align 1, !dbg !95 ; [#uses=1 type=i8] [debug line = 85:2]
  %addr15 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_22) ; [#uses=1 type=i64]
  %cipher_addr_30 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr15 ; [#uses=1 type=i8*]
  %cipher_load_30 = load i8* %cipher_addr_30, align 1, !dbg !95 ; [#uses=1 type=i8] [debug line = 85:2]
  %tmp14 = xor i8 %state_load_21, %state_load_20, !dbg !95 ; [#uses=1 type=i8] [debug line = 85:2]
  %tmp15 = xor i8 %cipher_load_29, %cipher_load_30, !dbg !95 ; [#uses=1 type=i8] [debug line = 85:2]
  %tmp_5 = xor i8 %tmp15, %tmp14, !dbg !95        ; [#uses=1 type=i8] [debug line = 85:2]
  %tmp_state_addr_23 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 7, !dbg !95 ; [#uses=1 type=i8*] [debug line = 85:2]
  store i8 %tmp_5, i8* %tmp_state_addr_23, align 1, !dbg !95 ; [debug line = 85:2]
  %state_addr_39 = getelementptr [16 x i8]* %state, i64 0, i64 8, !dbg !96 ; [#uses=1 type=i8*] [debug line = 87:2]
  %state_load_23 = load i8* %state_addr_39, align 1, !dbg !96 ; [#uses=4 type=i8] [debug line = 87:2]
  %addr16 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_23) ; [#uses=1 type=i64]
  %cipher_addr_31 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr16 ; [#uses=1 type=i8*]
  %cipher_load_31 = load i8* %cipher_addr_31, align 1, !dbg !96 ; [#uses=1 type=i8] [debug line = 87:2]
  %state_addr_40 = getelementptr [16 x i8]* %state, i64 0, i64 9, !dbg !96 ; [#uses=1 type=i8*] [debug line = 87:2]
  %state_load_24 = load i8* %state_addr_40, align 1, !dbg !96 ; [#uses=4 type=i8] [debug line = 87:2]
  %addr17 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_24) ; [#uses=1 type=i64]
  %cipher_addr_32 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr17 ; [#uses=1 type=i8*]
  %cipher_load_32 = load i8* %cipher_addr_32, align 1, !dbg !96 ; [#uses=1 type=i8] [debug line = 87:2]
  %state_addr_41 = getelementptr [16 x i8]* %state, i64 0, i64 10, !dbg !96 ; [#uses=1 type=i8*] [debug line = 87:2]
  %state_load_25 = load i8* %state_addr_41, align 1, !dbg !96 ; [#uses=4 type=i8] [debug line = 87:2]
  %state_addr_42 = getelementptr [16 x i8]* %state, i64 0, i64 11, !dbg !96 ; [#uses=1 type=i8*] [debug line = 87:2]
  %state_load_26 = load i8* %state_addr_42, align 1, !dbg !96 ; [#uses=4 type=i8] [debug line = 87:2]
  %tmp16 = xor i8 %cipher_load_32, %cipher_load_31, !dbg !96 ; [#uses=1 type=i8] [debug line = 87:2]
  %tmp17 = xor i8 %state_load_25, %state_load_26, !dbg !96 ; [#uses=1 type=i8] [debug line = 87:2]
  %tmp_6 = xor i8 %tmp17, %tmp16, !dbg !96        ; [#uses=1 type=i8] [debug line = 87:2]
  %tmp_state_addr_24 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 8, !dbg !96 ; [#uses=1 type=i8*] [debug line = 87:2]
  store i8 %tmp_6, i8* %tmp_state_addr_24, align 8, !dbg !96 ; [debug line = 87:2]
  %addr18 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_24) ; [#uses=1 type=i64]
  %cipher_addr_33 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr18 ; [#uses=1 type=i8*]
  %cipher_load_33 = load i8* %cipher_addr_33, align 1, !dbg !97 ; [#uses=1 type=i8] [debug line = 88:2]
  %addr19 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_25) ; [#uses=1 type=i64]
  %cipher_addr_34 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr19 ; [#uses=1 type=i8*]
  %cipher_load_34 = load i8* %cipher_addr_34, align 1, !dbg !97 ; [#uses=1 type=i8] [debug line = 88:2]
  %tmp18 = xor i8 %state_load_26, %state_load_23, !dbg !97 ; [#uses=1 type=i8] [debug line = 88:2]
  %tmp19 = xor i8 %cipher_load_33, %cipher_load_34, !dbg !97 ; [#uses=1 type=i8] [debug line = 88:2]
  %tmp_7 = xor i8 %tmp19, %tmp18, !dbg !97        ; [#uses=1 type=i8] [debug line = 88:2]
  %tmp_state_addr_25 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 9, !dbg !97 ; [#uses=1 type=i8*] [debug line = 88:2]
  store i8 %tmp_7, i8* %tmp_state_addr_25, align 1, !dbg !97 ; [debug line = 88:2]
  %addr20 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_25) ; [#uses=1 type=i64]
  %cipher_addr_35 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr20 ; [#uses=1 type=i8*]
  %cipher_load_35 = load i8* %cipher_addr_35, align 1, !dbg !98 ; [#uses=1 type=i8] [debug line = 89:2]
  %addr21 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_26) ; [#uses=1 type=i64]
  %cipher_addr_36 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr21 ; [#uses=1 type=i8*]
  %cipher_load_36 = load i8* %cipher_addr_36, align 1, !dbg !98 ; [#uses=1 type=i8] [debug line = 89:2]
  %tmp20 = xor i8 %state_load_24, %state_load_23, !dbg !98 ; [#uses=1 type=i8] [debug line = 89:2]
  %tmp21 = xor i8 %cipher_load_35, %cipher_load_36, !dbg !98 ; [#uses=1 type=i8] [debug line = 89:2]
  %tmp_10 = xor i8 %tmp21, %tmp20, !dbg !98       ; [#uses=1 type=i8] [debug line = 89:2]
  %tmp_state_addr_26 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 10, !dbg !98 ; [#uses=1 type=i8*] [debug line = 89:2]
  store i8 %tmp_10, i8* %tmp_state_addr_26, align 2, !dbg !98 ; [debug line = 89:2]
  %addr22 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_23) ; [#uses=1 type=i64]
  %cipher_addr_37 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr22 ; [#uses=1 type=i8*]
  %cipher_load_37 = load i8* %cipher_addr_37, align 1, !dbg !99 ; [#uses=1 type=i8] [debug line = 90:2]
  %addr23 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_26) ; [#uses=1 type=i64]
  %cipher_addr_38 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr23 ; [#uses=1 type=i8*]
  %cipher_load_38 = load i8* %cipher_addr_38, align 1, !dbg !99 ; [#uses=1 type=i8] [debug line = 90:2]
  %tmp22 = xor i8 %state_load_25, %state_load_24, !dbg !99 ; [#uses=1 type=i8] [debug line = 90:2]
  %tmp23 = xor i8 %cipher_load_37, %cipher_load_38, !dbg !99 ; [#uses=1 type=i8] [debug line = 90:2]
  %tmp_11 = xor i8 %tmp23, %tmp22, !dbg !99       ; [#uses=1 type=i8] [debug line = 90:2]
  %tmp_state_addr_27 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 11, !dbg !99 ; [#uses=1 type=i8*] [debug line = 90:2]
  store i8 %tmp_11, i8* %tmp_state_addr_27, align 1, !dbg !99 ; [debug line = 90:2]
  %state_addr_43 = getelementptr [16 x i8]* %state, i64 0, i64 12, !dbg !100 ; [#uses=1 type=i8*] [debug line = 92:2]
  %state_load_27 = load i8* %state_addr_43, align 1, !dbg !100 ; [#uses=4 type=i8] [debug line = 92:2]
  %addr24 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_27) ; [#uses=1 type=i64]
  %cipher_addr_39 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr24 ; [#uses=1 type=i8*]
  %cipher_load_39 = load i8* %cipher_addr_39, align 1, !dbg !100 ; [#uses=1 type=i8] [debug line = 92:2]
  %state_addr_44 = getelementptr [16 x i8]* %state, i64 0, i64 13, !dbg !100 ; [#uses=1 type=i8*] [debug line = 92:2]
  %state_load_28 = load i8* %state_addr_44, align 1, !dbg !100 ; [#uses=4 type=i8] [debug line = 92:2]
  %addr25 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_28) ; [#uses=1 type=i64]
  %cipher_addr_40 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr25 ; [#uses=1 type=i8*]
  %cipher_load_40 = load i8* %cipher_addr_40, align 1, !dbg !100 ; [#uses=1 type=i8] [debug line = 92:2]
  %state_addr_45 = getelementptr [16 x i8]* %state, i64 0, i64 14, !dbg !100 ; [#uses=1 type=i8*] [debug line = 92:2]
  %state_load_29 = load i8* %state_addr_45, align 1, !dbg !100 ; [#uses=4 type=i8] [debug line = 92:2]
  %state_addr_46 = getelementptr [16 x i8]* %state, i64 0, i64 15, !dbg !100 ; [#uses=1 type=i8*] [debug line = 92:2]
  %state_load_30 = load i8* %state_addr_46, align 1, !dbg !100 ; [#uses=4 type=i8] [debug line = 92:2]
  %tmp24 = xor i8 %cipher_load_40, %cipher_load_39, !dbg !100 ; [#uses=1 type=i8] [debug line = 92:2]
  %tmp25 = xor i8 %state_load_29, %state_load_30, !dbg !100 ; [#uses=1 type=i8] [debug line = 92:2]
  %tmp_12 = xor i8 %tmp25, %tmp24, !dbg !100      ; [#uses=1 type=i8] [debug line = 92:2]
  %tmp_state_addr_28 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 12, !dbg !100 ; [#uses=1 type=i8*] [debug line = 92:2]
  store i8 %tmp_12, i8* %tmp_state_addr_28, align 4, !dbg !100 ; [debug line = 92:2]
  %addr26 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_28) ; [#uses=1 type=i64]
  %cipher_addr_41 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr26 ; [#uses=1 type=i8*]
  %cipher_load_41 = load i8* %cipher_addr_41, align 1, !dbg !101 ; [#uses=1 type=i8] [debug line = 93:2]
  %addr27 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_29) ; [#uses=1 type=i64]
  %cipher_addr_42 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr27 ; [#uses=1 type=i8*]
  %cipher_load_42 = load i8* %cipher_addr_42, align 1, !dbg !101 ; [#uses=1 type=i8] [debug line = 93:2]
  %tmp26 = xor i8 %state_load_30, %state_load_27, !dbg !101 ; [#uses=1 type=i8] [debug line = 93:2]
  %tmp27 = xor i8 %cipher_load_41, %cipher_load_42, !dbg !101 ; [#uses=1 type=i8] [debug line = 93:2]
  %tmp_13 = xor i8 %tmp27, %tmp26, !dbg !101      ; [#uses=1 type=i8] [debug line = 93:2]
  %tmp_state_addr_29 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 13, !dbg !101 ; [#uses=1 type=i8*] [debug line = 93:2]
  store i8 %tmp_13, i8* %tmp_state_addr_29, align 1, !dbg !101 ; [debug line = 93:2]
  %addr28 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_29) ; [#uses=1 type=i64]
  %cipher_addr_43 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr28 ; [#uses=1 type=i8*]
  %cipher_load_43 = load i8* %cipher_addr_43, align 1, !dbg !102 ; [#uses=1 type=i8] [debug line = 94:2]
  %addr29 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_30) ; [#uses=1 type=i64]
  %cipher_addr_44 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr29 ; [#uses=1 type=i8*]
  %cipher_load_44 = load i8* %cipher_addr_44, align 1, !dbg !102 ; [#uses=1 type=i8] [debug line = 94:2]
  %tmp28 = xor i8 %state_load_28, %state_load_27, !dbg !102 ; [#uses=1 type=i8] [debug line = 94:2]
  %tmp29 = xor i8 %cipher_load_43, %cipher_load_44, !dbg !102 ; [#uses=1 type=i8] [debug line = 94:2]
  %tmp_14 = xor i8 %tmp29, %tmp28, !dbg !102      ; [#uses=1 type=i8] [debug line = 94:2]
  %tmp_state_addr_30 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 14, !dbg !102 ; [#uses=1 type=i8*] [debug line = 94:2]
  store i8 %tmp_14, i8* %tmp_state_addr_30, align 2, !dbg !102 ; [debug line = 94:2]
  %addr30 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 2, i8 %state_load_27) ; [#uses=1 type=i64]
  %cipher_addr_45 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr30 ; [#uses=1 type=i8*]
  %cipher_load_45 = load i8* %cipher_addr_45, align 1, !dbg !103 ; [#uses=1 type=i8] [debug line = 95:2]
  %addr31 = call i64 @_ssdm_op_BitConcatenate.i64.i56.i8(i56 1, i8 %state_load_30) ; [#uses=1 type=i64]
  %cipher_addr_46 = getelementptr [768 x i8]* @cipher, i64 0, i64 %addr31 ; [#uses=1 type=i8*]
  %cipher_load_46 = load i8* %cipher_addr_46, align 1, !dbg !103 ; [#uses=1 type=i8] [debug line = 95:2]
  %tmp30 = xor i8 %state_load_29, %state_load_28, !dbg !103 ; [#uses=1 type=i8] [debug line = 95:2]
  %tmp31 = xor i8 %cipher_load_45, %cipher_load_46, !dbg !103 ; [#uses=1 type=i8] [debug line = 95:2]
  %tmp_15 = xor i8 %tmp31, %tmp30, !dbg !103      ; [#uses=1 type=i8] [debug line = 95:2]
  %tmp_state_addr_31 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 15, !dbg !103 ; [#uses=1 type=i8*] [debug line = 95:2]
  store i8 %tmp_15, i8* %tmp_state_addr_31, align 1, !dbg !103 ; [debug line = 95:2]
  br label %1, !dbg !104                          ; [debug line = 96:27]

; <label>:1                                       ; preds = %2, %0
  %i = phi i5 [ 0, %0 ], [ %i_2, %2 ]             ; [#uses=3 type=i5]
  %tmp_16 = icmp eq i5 %i, -16, !dbg !104         ; [#uses=1 type=i1] [debug line = 96:27]
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) ; [#uses=0 type=i32]
  %i_2 = add i5 %i, 1, !dbg !106                  ; [#uses=1 type=i5] [debug line = 96:42]
  br i1 %tmp_16, label %3, label %2, !dbg !104    ; [debug line = 96:27]

; <label>:2                                       ; preds = %1
  %tmp_17 = zext i5 %i to i64, !dbg !107          ; [#uses=2 type=i64] [debug line = 97:3]
  %tmp_state_addr_32 = getelementptr inbounds [16 x i8]* %tmp_state, i64 0, i64 %tmp_17, !dbg !107 ; [#uses=1 type=i8*] [debug line = 97:3]
  %tmp_state_load = load i8* %tmp_state_addr_32, align 1, !dbg !107 ; [#uses=1 type=i8] [debug line = 97:3]
  %state_addr_47 = getelementptr [16 x i8]* %state, i64 0, i64 %tmp_17, !dbg !107 ; [#uses=1 type=i8*] [debug line = 97:3]
  store i8 %tmp_state_load, i8* %state_addr_47, align 1, !dbg !107 ; [debug line = 97:3]
  call void @llvm.dbg.value(metadata !{i5 %i_2}, i64 0, metadata !109), !dbg !106 ; [debug line = 96:42] [debug variable = i]
  br label %1, !dbg !106                          ; [debug line = 96:42]

; <label>:3                                       ; preds = %1
  ret void, !dbg !110                             ; [debug line = 99:1]
}

; [#uses=2]
define internal fastcc void @AddRoundKey([16 x i8]* nocapture %state, i8* %roundKey) noinline {
  call void (...)* @_ssdm_op_SpecInterface(i8* %roundKey, [5 x i8]* @p_str4, i32 0, i32 0, [5 x i8]* @p_str5, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void @llvm.dbg.value(metadata !{[16 x i8]* %state}, i64 0, metadata !111), !dbg !115 ; [debug line = 144:33] [debug variable = state]
  call void @llvm.dbg.value(metadata !{i8* %roundKey}, i64 0, metadata !116), !dbg !120 ; [debug line = 144:55] [debug variable = roundKey]
  %roundKey_read = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey), !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %state_addr = getelementptr [16 x i8]* %state, i64 0, i64 0, !dbg !121 ; [#uses=2 type=i8*] [debug line = 148:2]
  %state_load = load i8* %state_addr, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %tmp_s = xor i8 %state_load, %roundKey_read, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  store i8 %tmp_s, i8* %state_addr, align 1, !dbg !121 ; [debug line = 148:2]
  %roundKey_read_1 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey), !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %state_addr_48 = getelementptr [16 x i8]* %state, i64 0, i64 1, !dbg !121 ; [#uses=2 type=i8*] [debug line = 148:2]
  %state_load_1 = load i8* %state_addr_48, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %tmp_65_1 = xor i8 %state_load_1, %roundKey_read_1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  store i8 %tmp_65_1, i8* %state_addr_48, align 1, !dbg !121 ; [debug line = 148:2]
  %roundKey_read_2 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey), !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %state_addr_49 = getelementptr [16 x i8]* %state, i64 0, i64 2, !dbg !121 ; [#uses=2 type=i8*] [debug line = 148:2]
  %state_load_2 = load i8* %state_addr_49, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %tmp_65_2 = xor i8 %state_load_2, %roundKey_read_2, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  store i8 %tmp_65_2, i8* %state_addr_49, align 1, !dbg !121 ; [debug line = 148:2]
  %roundKey_read_3 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey), !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %state_addr_50 = getelementptr [16 x i8]* %state, i64 0, i64 3, !dbg !121 ; [#uses=2 type=i8*] [debug line = 148:2]
  %state_load_3 = load i8* %state_addr_50, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %tmp_65_3 = xor i8 %state_load_3, %roundKey_read_3, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  store i8 %tmp_65_3, i8* %state_addr_50, align 1, !dbg !121 ; [debug line = 148:2]
  %roundKey_read_4 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey), !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %state_addr_51 = getelementptr [16 x i8]* %state, i64 0, i64 4, !dbg !121 ; [#uses=2 type=i8*] [debug line = 148:2]
  %state_load_4 = load i8* %state_addr_51, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %tmp_65_4 = xor i8 %state_load_4, %roundKey_read_4, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  store i8 %tmp_65_4, i8* %state_addr_51, align 1, !dbg !121 ; [debug line = 148:2]
  %roundKey_read_5 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey), !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %state_addr_52 = getelementptr [16 x i8]* %state, i64 0, i64 5, !dbg !121 ; [#uses=2 type=i8*] [debug line = 148:2]
  %state_load_5 = load i8* %state_addr_52, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %tmp_65_5 = xor i8 %state_load_5, %roundKey_read_5, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  store i8 %tmp_65_5, i8* %state_addr_52, align 1, !dbg !121 ; [debug line = 148:2]
  %roundKey_read_6 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey), !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %state_addr_53 = getelementptr [16 x i8]* %state, i64 0, i64 6, !dbg !121 ; [#uses=2 type=i8*] [debug line = 148:2]
  %state_load_6 = load i8* %state_addr_53, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %tmp_65_6 = xor i8 %state_load_6, %roundKey_read_6, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  store i8 %tmp_65_6, i8* %state_addr_53, align 1, !dbg !121 ; [debug line = 148:2]
  %roundKey_read_7 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey), !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %state_addr_54 = getelementptr [16 x i8]* %state, i64 0, i64 7, !dbg !121 ; [#uses=2 type=i8*] [debug line = 148:2]
  %state_load_7 = load i8* %state_addr_54, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %tmp_65_7 = xor i8 %state_load_7, %roundKey_read_7, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  store i8 %tmp_65_7, i8* %state_addr_54, align 1, !dbg !121 ; [debug line = 148:2]
  %roundKey_read_8 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey), !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %state_addr_55 = getelementptr [16 x i8]* %state, i64 0, i64 8, !dbg !121 ; [#uses=2 type=i8*] [debug line = 148:2]
  %state_load_8 = load i8* %state_addr_55, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %tmp_65_8 = xor i8 %state_load_8, %roundKey_read_8, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  store i8 %tmp_65_8, i8* %state_addr_55, align 1, !dbg !121 ; [debug line = 148:2]
  %roundKey_read_9 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey), !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %state_addr_56 = getelementptr [16 x i8]* %state, i64 0, i64 9, !dbg !121 ; [#uses=2 type=i8*] [debug line = 148:2]
  %state_load_9 = load i8* %state_addr_56, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %tmp_65_9 = xor i8 %state_load_9, %roundKey_read_9, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  store i8 %tmp_65_9, i8* %state_addr_56, align 1, !dbg !121 ; [debug line = 148:2]
  %roundKey_read_10 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey), !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %state_addr_57 = getelementptr [16 x i8]* %state, i64 0, i64 10, !dbg !121 ; [#uses=2 type=i8*] [debug line = 148:2]
  %state_load_10 = load i8* %state_addr_57, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %tmp_65_s = xor i8 %state_load_10, %roundKey_read_10, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  store i8 %tmp_65_s, i8* %state_addr_57, align 1, !dbg !121 ; [debug line = 148:2]
  %roundKey_read_11 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey), !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %state_addr_58 = getelementptr [16 x i8]* %state, i64 0, i64 11, !dbg !121 ; [#uses=2 type=i8*] [debug line = 148:2]
  %state_load_11 = load i8* %state_addr_58, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %tmp_65_10 = xor i8 %state_load_11, %roundKey_read_11, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  store i8 %tmp_65_10, i8* %state_addr_58, align 1, !dbg !121 ; [debug line = 148:2]
  %roundKey_read_12 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey), !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %state_addr_59 = getelementptr [16 x i8]* %state, i64 0, i64 12, !dbg !121 ; [#uses=2 type=i8*] [debug line = 148:2]
  %state_load_12 = load i8* %state_addr_59, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %tmp_65_11 = xor i8 %state_load_12, %roundKey_read_12, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  store i8 %tmp_65_11, i8* %state_addr_59, align 1, !dbg !121 ; [debug line = 148:2]
  %roundKey_read_13 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey), !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %state_addr_60 = getelementptr [16 x i8]* %state, i64 0, i64 13, !dbg !121 ; [#uses=2 type=i8*] [debug line = 148:2]
  %state_load_13 = load i8* %state_addr_60, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %tmp_65_12 = xor i8 %state_load_13, %roundKey_read_13, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  store i8 %tmp_65_12, i8* %state_addr_60, align 1, !dbg !121 ; [debug line = 148:2]
  %roundKey_read_14 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey), !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %state_addr_61 = getelementptr [16 x i8]* %state, i64 0, i64 14, !dbg !121 ; [#uses=2 type=i8*] [debug line = 148:2]
  %state_load_14 = load i8* %state_addr_61, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %tmp_65_13 = xor i8 %state_load_14, %roundKey_read_14, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  store i8 %tmp_65_13, i8* %state_addr_61, align 1, !dbg !121 ; [debug line = 148:2]
  %roundKey_read_15 = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %roundKey), !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %state_addr_62 = getelementptr [16 x i8]* %state, i64 0, i64 15, !dbg !121 ; [#uses=2 type=i8*] [debug line = 148:2]
  %state_load_15 = load i8* %state_addr_62, align 1, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  %tmp_65_14 = xor i8 %state_load_15, %roundKey_read_15, !dbg !121 ; [#uses=1 type=i8] [debug line = 148:2]
  store i8 %tmp_65_14, i8* %state_addr_62, align 1, !dbg !121 ; [debug line = 148:2]
  ret void, !dbg !125                             ; [debug line = 150:1]
}

; [#uses=0]
define void @AES_Encrypt(i8* %plaintext, i8* %expandedKey, i16 zeroext %Nr, i8* %ciphertext) nounwind uwtable {
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %plaintext) nounwind, !map !126
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %expandedKey) nounwind, !map !132
  call void (...)* @_ssdm_op_SpecBitsMap(i16 %Nr) nounwind, !map !138
  call void (...)* @_ssdm_op_SpecBitsMap(i8* %ciphertext) nounwind, !map !144
  call void (...)* @_ssdm_op_SpecTopModule([12 x i8]* @AES_Encrypt_str) nounwind
  %Nr_read = call i16 @_ssdm_op_Read.ap_auto.i16(i16 %Nr) nounwind ; [#uses=2 type=i16]
  call void @llvm.dbg.value(metadata !{i16 %Nr_read}, i64 0, metadata !148), !dbg !152 ; [debug line = 154:71] [debug variable = Nr]
  %state = alloca [16 x i8], align 16             ; [#uses=22 type=[16 x i8]*]
  call void @llvm.dbg.value(metadata !{i8* %plaintext}, i64 0, metadata !153), !dbg !154 ; [debug line = 153:32] [debug variable = plaintext]
  call void @llvm.dbg.value(metadata !{i8* %expandedKey}, i64 0, metadata !155), !dbg !156 ; [debug line = 154:17] [debug variable = expandedKey]
  call void @llvm.dbg.value(metadata !{i16 %Nr}, i64 0, metadata !148), !dbg !152 ; [debug line = 154:71] [debug variable = Nr]
  call void @llvm.dbg.value(metadata !{i8* %ciphertext}, i64 0, metadata !157), !dbg !158 ; [debug line = 155:17] [debug variable = ciphertext]
  call void (...)* @_ssdm_op_SpecInterface(i8* %plaintext, [5 x i8]* @p_str4, i32 1, i32 1, [5 x i8]* @p_str5, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i8* %expandedKey, [5 x i8]* @p_str4, i32 1, i32 1, [5 x i8]* @p_str5, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i8* %ciphertext, [5 x i8]* @p_str4, i32 1, i32 1, [5 x i8]* @p_str5, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecResourceLimit(i32 1, [1 x i8]* @p_str, [1 x i8]* @p_str, [12 x i8]* @p_str6, [1 x i8]* @p_str) nounwind, !dbg !159 ; [debug line = 161:1]
  call void @llvm.dbg.declare(metadata !{[16 x i8]* %state}, metadata !161), !dbg !162 ; [debug line = 167:16] [debug variable = state]
  br label %1, !dbg !163                          ; [debug line = 168:35]

; <label>:1                                       ; preds = %2, %0
  %i = phi i5 [ 0, %0 ], [ %i_3, %2 ]             ; [#uses=3 type=i5]
  %tmp = icmp eq i5 %i, -16, !dbg !163            ; [#uses=1 type=i1] [debug line = 168:35]
  %i_3 = add i5 %i, 1, !dbg !165                  ; [#uses=1 type=i5] [debug line = 168:50]
  br i1 %tmp, label %3, label %2, !dbg !163       ; [debug line = 168:35]

; <label>:2                                       ; preds = %1
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind ; [#uses=0 type=i32]
  call void (...)* @_ssdm_op_SpecLoopName([7 x i8]* @p_str9) nounwind, !dbg !166 ; [debug line = 168:56]
  %tmp_1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([7 x i8]* @p_str9) nounwind, !dbg !166 ; [#uses=1 type=i32] [debug line = 168:56]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str) nounwind, !dbg !168 ; [debug line = 169:1]
  %tmp_18 = zext i5 %i to i64, !dbg !169          ; [#uses=1 type=i64] [debug line = 170:2]
  %plaintext_read = call i8 @_ssdm_op_Read.axis.volatile.i8P(i8* %plaintext) nounwind, !dbg !169 ; [#uses=1 type=i8] [debug line = 170:2]
  %state_addr_31 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 %tmp_18, !dbg !169 ; [#uses=1 type=i8*] [debug line = 170:2]
  store i8 %plaintext_read, i8* %state_addr_31, align 1, !dbg !169 ; [debug line = 170:2]
  %empty_6 = call i32 (...)* @_ssdm_op_SpecRegionEnd([7 x i8]* @p_str9, i32 %tmp_1) nounwind, !dbg !170 ; [#uses=0 type=i32] [debug line = 171:2]
  call void @llvm.dbg.value(metadata !{i5 %i_3}, i64 0, metadata !171), !dbg !165 ; [debug line = 168:50] [debug variable = i]
  br label %1, !dbg !165                          ; [debug line = 168:50]

; <label>:3                                       ; preds = %1
  call fastcc void @AddRoundKey([16 x i8]* %state, i8* %expandedKey) nounwind, !dbg !172 ; [debug line = 174:2]
  %tmp_cast = zext i16 %Nr_read to i17, !dbg !173 ; [#uses=1 type=i17] [debug line = 180:3]
  %tmp_s = add i17 %tmp_cast, -1, !dbg !173       ; [#uses=1 type=i17] [debug line = 180:3]
  br label %4, !dbg !176                          ; [debug line = 176:37]

; <label>:4                                       ; preds = %._crit_edge, %3
  %i1 = phi i16 [ 0, %3 ], [ %i_4, %._crit_edge ] ; [#uses=3 type=i16]
  %exitcond = icmp eq i16 %i1, %Nr_read, !dbg !176 ; [#uses=1 type=i1] [debug line = 176:37]
  %i_4 = add i16 %i1, 1, !dbg !177                ; [#uses=1 type=i16] [debug line = 176:47]
  br i1 %exitcond, label %.preheader.0, label %5, !dbg !176 ; [debug line = 176:37]

; <label>:5                                       ; preds = %4
  call void (...)* @_ssdm_op_SpecLoopName([9 x i8]* @p_str10) nounwind, !dbg !178 ; [debug line = 176:53]
  call fastcc void @SubBytes([16 x i8]* %state) nounwind, !dbg !179 ; [debug line = 178:3]
  call fastcc void @ShiftRows([16 x i8]* %state) nounwind, !dbg !180 ; [debug line = 179:3]
  %tmp_67_cast = zext i16 %i1 to i17, !dbg !173   ; [#uses=1 type=i17] [debug line = 180:3]
  %tmp_19 = icmp eq i17 %tmp_67_cast, %tmp_s, !dbg !173 ; [#uses=1 type=i1] [debug line = 180:3]
  br i1 %tmp_19, label %._crit_edge, label %6, !dbg !173 ; [debug line = 180:3]

; <label>:6                                       ; preds = %5
  call fastcc void @MixColumns([16 x i8]* %state) nounwind, !dbg !181 ; [debug line = 181:4]
  br label %._crit_edge, !dbg !183                ; [debug line = 182:3]

._crit_edge:                                      ; preds = %6, %5
  call fastcc void @AddRoundKey([16 x i8]* %state, i8* %expandedKey) nounwind, !dbg !184 ; [debug line = 183:3]
  call void @llvm.dbg.value(metadata !{i16 %i_4}, i64 0, metadata !185), !dbg !177 ; [debug line = 176:47] [debug variable = i]
  br label %4, !dbg !177                          ; [debug line = 176:47]

.preheader.0:                                     ; preds = %4
  %state_addr = getelementptr inbounds [16 x i8]* %state, i64 0, i64 0, !dbg !186 ; [#uses=1 type=i8*] [debug line = 189:2]
  %state_load = load i8* %state_addr, align 16, !dbg !186 ; [#uses=1 type=i8] [debug line = 189:2]
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load) nounwind, !dbg !186 ; [debug line = 189:2]
  %state_addr_63 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 1, !dbg !186 ; [#uses=1 type=i8*] [debug line = 189:2]
  %state_load_1 = load i8* %state_addr_63, align 1, !dbg !186 ; [#uses=1 type=i8] [debug line = 189:2]
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_1) nounwind, !dbg !186 ; [debug line = 189:2]
  %state_addr_64 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 2, !dbg !186 ; [#uses=1 type=i8*] [debug line = 189:2]
  %state_load_2 = load i8* %state_addr_64, align 2, !dbg !186 ; [#uses=1 type=i8] [debug line = 189:2]
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_2) nounwind, !dbg !186 ; [debug line = 189:2]
  %state_addr_65 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 3, !dbg !186 ; [#uses=1 type=i8*] [debug line = 189:2]
  %state_load_3 = load i8* %state_addr_65, align 1, !dbg !186 ; [#uses=1 type=i8] [debug line = 189:2]
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_3) nounwind, !dbg !186 ; [debug line = 189:2]
  %state_addr_66 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 4, !dbg !186 ; [#uses=1 type=i8*] [debug line = 189:2]
  %state_load_4 = load i8* %state_addr_66, align 4, !dbg !186 ; [#uses=1 type=i8] [debug line = 189:2]
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_4) nounwind, !dbg !186 ; [debug line = 189:2]
  %state_addr_67 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 5, !dbg !186 ; [#uses=1 type=i8*] [debug line = 189:2]
  %state_load_5 = load i8* %state_addr_67, align 1, !dbg !186 ; [#uses=1 type=i8] [debug line = 189:2]
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_5) nounwind, !dbg !186 ; [debug line = 189:2]
  %state_addr_68 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 6, !dbg !186 ; [#uses=1 type=i8*] [debug line = 189:2]
  %state_load_6 = load i8* %state_addr_68, align 2, !dbg !186 ; [#uses=1 type=i8] [debug line = 189:2]
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_6) nounwind, !dbg !186 ; [debug line = 189:2]
  %state_addr_69 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 7, !dbg !186 ; [#uses=1 type=i8*] [debug line = 189:2]
  %state_load_7 = load i8* %state_addr_69, align 1, !dbg !186 ; [#uses=1 type=i8] [debug line = 189:2]
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_7) nounwind, !dbg !186 ; [debug line = 189:2]
  %state_addr_70 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 8, !dbg !186 ; [#uses=1 type=i8*] [debug line = 189:2]
  %state_load_8 = load i8* %state_addr_70, align 8, !dbg !186 ; [#uses=1 type=i8] [debug line = 189:2]
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_8) nounwind, !dbg !186 ; [debug line = 189:2]
  %state_addr_71 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 9, !dbg !186 ; [#uses=1 type=i8*] [debug line = 189:2]
  %state_load_9 = load i8* %state_addr_71, align 1, !dbg !186 ; [#uses=1 type=i8] [debug line = 189:2]
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_9) nounwind, !dbg !186 ; [debug line = 189:2]
  %state_addr_72 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 10, !dbg !186 ; [#uses=1 type=i8*] [debug line = 189:2]
  %state_load_10 = load i8* %state_addr_72, align 2, !dbg !186 ; [#uses=1 type=i8] [debug line = 189:2]
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_10) nounwind, !dbg !186 ; [debug line = 189:2]
  %state_addr_73 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 11, !dbg !186 ; [#uses=1 type=i8*] [debug line = 189:2]
  %state_load_11 = load i8* %state_addr_73, align 1, !dbg !186 ; [#uses=1 type=i8] [debug line = 189:2]
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_11) nounwind, !dbg !186 ; [debug line = 189:2]
  %state_addr_74 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 12, !dbg !186 ; [#uses=1 type=i8*] [debug line = 189:2]
  %state_load_12 = load i8* %state_addr_74, align 4, !dbg !186 ; [#uses=1 type=i8] [debug line = 189:2]
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_12) nounwind, !dbg !186 ; [debug line = 189:2]
  %state_addr_75 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 13, !dbg !186 ; [#uses=1 type=i8*] [debug line = 189:2]
  %state_load_13 = load i8* %state_addr_75, align 1, !dbg !186 ; [#uses=1 type=i8] [debug line = 189:2]
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_13) nounwind, !dbg !186 ; [debug line = 189:2]
  %state_addr_76 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 14, !dbg !186 ; [#uses=1 type=i8*] [debug line = 189:2]
  %state_load_14 = load i8* %state_addr_76, align 2, !dbg !186 ; [#uses=1 type=i8] [debug line = 189:2]
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_14) nounwind, !dbg !186 ; [debug line = 189:2]
  %state_addr_77 = getelementptr inbounds [16 x i8]* %state, i64 0, i64 15, !dbg !186 ; [#uses=1 type=i8*] [debug line = 189:2]
  %state_load_15 = load i8* %state_addr_77, align 1, !dbg !186 ; [#uses=1 type=i8] [debug line = 189:2]
  call void @_ssdm_op_Write.axis.volatile.i8P(i8* %ciphertext, i8 %state_load_15) nounwind, !dbg !186 ; [debug line = 189:2]
  ret void, !dbg !189                             ; [debug line = 191:1]
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
!34 = metadata !{i32 786689, metadata !35, metadata !"state", null, i32 4, metadata !43, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!35 = metadata !{i32 786478, i32 0, metadata !36, metadata !"SubBytes", metadata !"SubBytes", metadata !"_Z8SubBytesPh", metadata !36, i32 4, metadata !37, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !41, i32 4} ; [ DW_TAG_subprogram ]
!36 = metadata !{i32 786473, metadata !"source/AESfunctions.cpp", metadata !"D:\5COneDrive\5CUVA\5Ccrypto\5CAES_code\5CVivadoHLS", null} ; [ DW_TAG_file_type ]
!37 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !38, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!38 = metadata !{null, metadata !39}
!39 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !40} ; [ DW_TAG_pointer_type ]
!40 = metadata !{i32 786468, null, metadata !"unsigned char", null, i32 0, i64 8, i64 8, i64 0, i32 0, i32 8} ; [ DW_TAG_base_type ]
!41 = metadata !{metadata !42}
!42 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!43 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 128, i64 8, i32 0, i32 0, metadata !40, metadata !44, i32 0, i32 0} ; [ DW_TAG_array_type ]
!44 = metadata !{metadata !45}
!45 = metadata !{i32 786465, i64 0, i64 15}       ; [ DW_TAG_subrange_type ]
!46 = metadata !{i32 4, i32 30, metadata !35, null}
!47 = metadata !{i32 8, i32 2, metadata !48, null}
!48 = metadata !{i32 786443, metadata !49, i32 6, i32 47, metadata !36, i32 2} ; [ DW_TAG_lexical_block ]
!49 = metadata !{i32 786443, metadata !50, i32 6, i32 2, metadata !36, i32 1} ; [ DW_TAG_lexical_block ]
!50 = metadata !{i32 786443, metadata !35, i32 4, i32 37, metadata !36, i32 0} ; [ DW_TAG_lexical_block ]
!51 = metadata !{i32 10, i32 1, metadata !50, null}
!52 = metadata !{i32 786689, metadata !53, metadata !"state", null, i32 20, metadata !43, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!53 = metadata !{i32 786478, i32 0, metadata !36, metadata !"ShiftRows", metadata !"ShiftRows", metadata !"_Z9ShiftRowsPh", metadata !36, i32 20, metadata !37, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !41, i32 20} ; [ DW_TAG_subprogram ]
!54 = metadata !{i32 20, i32 31, metadata !53, null}
!55 = metadata !{i32 786688, metadata !56, metadata !"tmp_state", metadata !36, i32 22, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!56 = metadata !{i32 786443, metadata !53, i32 20, i32 38, metadata !36, i32 6} ; [ DW_TAG_lexical_block ]
!57 = metadata !{i32 22, i32 16, metadata !56, null}
!58 = metadata !{i32 23, i32 2, metadata !56, null}
!59 = metadata !{i32 24, i32 2, metadata !56, null}
!60 = metadata !{i32 25, i32 2, metadata !56, null}
!61 = metadata !{i32 26, i32 2, metadata !56, null}
!62 = metadata !{i32 28, i32 2, metadata !56, null}
!63 = metadata !{i32 29, i32 2, metadata !56, null}
!64 = metadata !{i32 30, i32 2, metadata !56, null}
!65 = metadata !{i32 31, i32 2, metadata !56, null}
!66 = metadata !{i32 33, i32 2, metadata !56, null}
!67 = metadata !{i32 34, i32 2, metadata !56, null}
!68 = metadata !{i32 35, i32 2, metadata !56, null}
!69 = metadata !{i32 36, i32 2, metadata !56, null}
!70 = metadata !{i32 38, i32 2, metadata !56, null}
!71 = metadata !{i32 39, i32 2, metadata !56, null}
!72 = metadata !{i32 40, i32 2, metadata !56, null}
!73 = metadata !{i32 41, i32 2, metadata !56, null}
!74 = metadata !{i32 42, i32 27, metadata !75, null}
!75 = metadata !{i32 786443, metadata !56, i32 42, i32 2, metadata !36, i32 7} ; [ DW_TAG_lexical_block ]
!76 = metadata !{i32 42, i32 42, metadata !75, null}
!77 = metadata !{i32 43, i32 3, metadata !78, null}
!78 = metadata !{i32 786443, metadata !75, i32 42, i32 47, metadata !36, i32 8} ; [ DW_TAG_lexical_block ]
!79 = metadata !{i32 786688, metadata !75, metadata !"i", metadata !36, i32 42, metadata !80, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!80 = metadata !{i32 786468, null, metadata !"unsigned short", null, i32 0, i64 16, i64 16, i64 0, i32 0, i32 7} ; [ DW_TAG_base_type ]
!81 = metadata !{i32 45, i32 1, metadata !56, null}
!82 = metadata !{i32 786689, metadata !83, metadata !"state", null, i32 74, metadata !43, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!83 = metadata !{i32 786478, i32 0, metadata !36, metadata !"MixColumns", metadata !"MixColumns", metadata !"_Z10MixColumnsPh", metadata !36, i32 74, metadata !37, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !41, i32 74} ; [ DW_TAG_subprogram ]
!84 = metadata !{i32 74, i32 32, metadata !83, null}
!85 = metadata !{i32 786688, metadata !86, metadata !"tmp_state", metadata !36, i32 76, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!86 = metadata !{i32 786443, metadata !83, i32 74, i32 39, metadata !36, i32 12} ; [ DW_TAG_lexical_block ]
!87 = metadata !{i32 76, i32 16, metadata !86, null}
!88 = metadata !{i32 77, i32 2, metadata !86, null}
!89 = metadata !{i32 78, i32 2, metadata !86, null}
!90 = metadata !{i32 79, i32 2, metadata !86, null}
!91 = metadata !{i32 80, i32 2, metadata !86, null}
!92 = metadata !{i32 82, i32 2, metadata !86, null}
!93 = metadata !{i32 83, i32 2, metadata !86, null}
!94 = metadata !{i32 84, i32 2, metadata !86, null}
!95 = metadata !{i32 85, i32 2, metadata !86, null}
!96 = metadata !{i32 87, i32 2, metadata !86, null}
!97 = metadata !{i32 88, i32 2, metadata !86, null}
!98 = metadata !{i32 89, i32 2, metadata !86, null}
!99 = metadata !{i32 90, i32 2, metadata !86, null}
!100 = metadata !{i32 92, i32 2, metadata !86, null}
!101 = metadata !{i32 93, i32 2, metadata !86, null}
!102 = metadata !{i32 94, i32 2, metadata !86, null}
!103 = metadata !{i32 95, i32 2, metadata !86, null}
!104 = metadata !{i32 96, i32 27, metadata !105, null}
!105 = metadata !{i32 786443, metadata !86, i32 96, i32 2, metadata !36, i32 13} ; [ DW_TAG_lexical_block ]
!106 = metadata !{i32 96, i32 42, metadata !105, null}
!107 = metadata !{i32 97, i32 3, metadata !108, null}
!108 = metadata !{i32 786443, metadata !105, i32 96, i32 47, metadata !36, i32 14} ; [ DW_TAG_lexical_block ]
!109 = metadata !{i32 786688, metadata !105, metadata !"i", metadata !36, i32 96, metadata !80, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!110 = metadata !{i32 99, i32 1, metadata !86, null}
!111 = metadata !{i32 786689, metadata !112, metadata !"state", null, i32 144, metadata !43, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!112 = metadata !{i32 786478, i32 0, metadata !36, metadata !"AddRoundKey", metadata !"AddRoundKey", metadata !"_Z11AddRoundKeyPhS_", metadata !36, i32 144, metadata !113, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !41, i32 144} ; [ DW_TAG_subprogram ]
!113 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !114, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!114 = metadata !{null, metadata !39, metadata !39}
!115 = metadata !{i32 144, i32 33, metadata !112, null}
!116 = metadata !{i32 786689, metadata !112, metadata !"roundKey", null, i32 144, metadata !117, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!117 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 1920, i64 8, i32 0, i32 0, metadata !40, metadata !118, i32 0, i32 0} ; [ DW_TAG_array_type ]
!118 = metadata !{metadata !119}
!119 = metadata !{i32 786465, i64 0, i64 239}     ; [ DW_TAG_subrange_type ]
!120 = metadata !{i32 144, i32 55, metadata !112, null}
!121 = metadata !{i32 148, i32 2, metadata !122, null}
!122 = metadata !{i32 786443, metadata !123, i32 146, i32 47, metadata !36, i32 20} ; [ DW_TAG_lexical_block ]
!123 = metadata !{i32 786443, metadata !124, i32 146, i32 2, metadata !36, i32 19} ; [ DW_TAG_lexical_block ]
!124 = metadata !{i32 786443, metadata !112, i32 144, i32 65, metadata !36, i32 18} ; [ DW_TAG_lexical_block ]
!125 = metadata !{i32 150, i32 1, metadata !124, null}
!126 = metadata !{metadata !127}
!127 = metadata !{i32 0, i32 7, metadata !128}
!128 = metadata !{metadata !129}
!129 = metadata !{metadata !"plaintext", metadata !130, metadata !"unsigned char", i32 0, i32 7}
!130 = metadata !{metadata !131}
!131 = metadata !{i32 0, i32 15, i32 1}
!132 = metadata !{metadata !133}
!133 = metadata !{i32 0, i32 7, metadata !134}
!134 = metadata !{metadata !135}
!135 = metadata !{metadata !"expandedKey", metadata !136, metadata !"unsigned char", i32 0, i32 7}
!136 = metadata !{metadata !137}
!137 = metadata !{i32 0, i32 239, i32 1}
!138 = metadata !{metadata !139}
!139 = metadata !{i32 0, i32 15, metadata !140}
!140 = metadata !{metadata !141}
!141 = metadata !{metadata !"Nr", metadata !142, metadata !"unsigned short", i32 0, i32 15}
!142 = metadata !{metadata !143}
!143 = metadata !{i32 0, i32 0, i32 0}
!144 = metadata !{metadata !145}
!145 = metadata !{i32 0, i32 7, metadata !146}
!146 = metadata !{metadata !147}
!147 = metadata !{metadata !"ciphertext", metadata !130, metadata !"unsigned char", i32 0, i32 7}
!148 = metadata !{i32 786689, metadata !149, metadata !"Nr", metadata !36, i32 50331802, metadata !80, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!149 = metadata !{i32 786478, i32 0, metadata !36, metadata !"AES_Encrypt", metadata !"AES_Encrypt", metadata !"_Z11AES_EncryptPhS_tS_", metadata !36, i32 153, metadata !150, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !41, i32 155} ; [ DW_TAG_subprogram ]
!150 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !151, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!151 = metadata !{null, metadata !39, metadata !39, metadata !80, metadata !39}
!152 = metadata !{i32 154, i32 71, metadata !149, null}
!153 = metadata !{i32 786689, metadata !149, metadata !"plaintext", null, i32 153, metadata !43, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!154 = metadata !{i32 153, i32 32, metadata !149, null}
!155 = metadata !{i32 786689, metadata !149, metadata !"expandedKey", null, i32 154, metadata !117, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!156 = metadata !{i32 154, i32 17, metadata !149, null}
!157 = metadata !{i32 786689, metadata !149, metadata !"ciphertext", null, i32 155, metadata !43, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!158 = metadata !{i32 155, i32 17, metadata !149, null}
!159 = metadata !{i32 161, i32 1, metadata !160, null}
!160 = metadata !{i32 786443, metadata !149, i32 155, i32 38, metadata !36, i32 21} ; [ DW_TAG_lexical_block ]
!161 = metadata !{i32 786688, metadata !160, metadata !"state", metadata !36, i32 167, metadata !43, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!162 = metadata !{i32 167, i32 16, metadata !160, null}
!163 = metadata !{i32 168, i32 35, metadata !164, null}
!164 = metadata !{i32 786443, metadata !160, i32 168, i32 10, metadata !36, i32 22} ; [ DW_TAG_lexical_block ]
!165 = metadata !{i32 168, i32 50, metadata !164, null}
!166 = metadata !{i32 168, i32 56, metadata !167, null}
!167 = metadata !{i32 786443, metadata !164, i32 168, i32 55, metadata !36, i32 23} ; [ DW_TAG_lexical_block ]
!168 = metadata !{i32 169, i32 1, metadata !167, null}
!169 = metadata !{i32 170, i32 2, metadata !167, null}
!170 = metadata !{i32 171, i32 2, metadata !167, null}
!171 = metadata !{i32 786688, metadata !164, metadata !"i", metadata !36, i32 168, metadata !80, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!172 = metadata !{i32 174, i32 2, metadata !160, null}
!173 = metadata !{i32 180, i32 3, metadata !174, null}
!174 = metadata !{i32 786443, metadata !175, i32 176, i32 52, metadata !36, i32 25} ; [ DW_TAG_lexical_block ]
!175 = metadata !{i32 786443, metadata !160, i32 176, i32 12, metadata !36, i32 24} ; [ DW_TAG_lexical_block ]
!176 = metadata !{i32 176, i32 37, metadata !175, null}
!177 = metadata !{i32 176, i32 47, metadata !175, null}
!178 = metadata !{i32 176, i32 53, metadata !174, null}
!179 = metadata !{i32 178, i32 3, metadata !174, null}
!180 = metadata !{i32 179, i32 3, metadata !174, null}
!181 = metadata !{i32 181, i32 4, metadata !182, null}
!182 = metadata !{i32 786443, metadata !174, i32 180, i32 22, metadata !36, i32 26} ; [ DW_TAG_lexical_block ]
!183 = metadata !{i32 182, i32 3, metadata !182, null}
!184 = metadata !{i32 183, i32 3, metadata !174, null}
!185 = metadata !{i32 786688, metadata !175, metadata !"i", metadata !36, i32 176, metadata !80, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!186 = metadata !{i32 189, i32 2, metadata !187, null}
!187 = metadata !{i32 786443, metadata !188, i32 187, i32 47, metadata !36, i32 28} ; [ DW_TAG_lexical_block ]
!188 = metadata !{i32 786443, metadata !160, i32 187, i32 2, metadata !36, i32 27} ; [ DW_TAG_lexical_block ]
!189 = metadata !{i32 191, i32 1, metadata !160, null}
